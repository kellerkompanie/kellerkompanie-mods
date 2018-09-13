#include "script_component.hpp"
#include "\x\keko\addons\shacktac\defines.hpp"

STHud_UIMode = STHud_ShowBoth;

STHud_Close   = 3;
STHud_MinDist = 15;
STHud_MidDist = 30;
STHud_MaxDist = 50;
STHud_EdgeStep = 10;
STHud_FadeEdge = STHud_MaxDist + STHud_EdgeStep;
GVAR(LastTick) = time;

STHud_TextShadow = 1;
STHud_Font = "PuristaSemiBold";

if (isNil "STHud_ShowBearingInVehicle") then {STHud_ShowBearingInVehicle = true};
if (isNil "STHud_NoSquadBarMode") then {STHud_NoSquadBarMode = false};
if (isNil QGVAR(STUI_DeltaT)) then {GVAR(DeltaT) = 0.0};

// Orange warning colour
STHud_CloseColour = [0.85, 0.4, 0, 1];

STHud_Colours =
[
     [0.70, 0.70, 0.70, 1.00] // Light Grey
    ,[0.90, 0.00, 0.00, 1.00] // Red
    ,[0.00, 0.80, 0.00, 1.00] // Green
    ,[0.20, 0.20, 1.00, 1.00] // Blue
    ,[0.85, 0.85, 0.00, 1.00] // Yellow
];

// Same as normal colours but replaces light grey with bright white
STHud_PlayerColours = +STHud_Colours;
STHud_PlayerColours set [0, [1, 1, 1, 1]];

STHud_TextColours =
[
     [1.00, 1.00, 1.00, 1.00]
    ,[1.00, 0.67, 0.67, 1.00]
    ,[0.67, 1.00, 0.67, 1.00]
    ,[0.67, 0.67, 1.00, 1.00]
    ,[1.00, 1.00, 0.67, 1.00]
];


STHud_CompassData = [
    [0,   12,        "N"],
    [90,  12 * 0.85, "E"],
    [180, 12 * 0.85, "S"],
    [270, 12 * 0.85, "W"]
];
{
    _x set [2, format ["\x\keko\addons\shacktac\ui\sthud_%1.paa", _x select 2]];
} forEach STHud_CompassData;



STHud_BGIcon = "\A3\ui_f\data\map\vehicleicons\iconMan_ca.paa";

// Only have to calculate these once instead of every frame
STHud_Draw_Init =
{
    params ["_canvas"];

    private _width = 0.1;
    private _height = 0.1;
    private _posX = 0.5;
    // Add a little extra
    private _posY = SafeZoneY + SafeZoneH - _height - 0.01;

    STHud_Mid = _canvas ctrlMapScreenToWorld [_posX, _posY];
    STHud_Mid pushBack 0;
    private _edge = _canvas ctrlMapScreenToWorld [_posX, _posY+_height];
    private _radius = abs((_edge select 1) - (STHud_Mid select 1));
    STHud_Scale = _radius/STHud_MaxDist;
    STHud_CompassScale = (STHud_MaxDist - 3) * STHud_Scale;
    STHud_Bearing = _canvas ctrlMapScreenToWorld [_posX, _posY - (_height / .8)];  // vOv

    private _spacer = 0.018;
    private _textsize = _height / 3;
    STHud_Namepos = [];
    STHud_Selectpos = [];
    for "_i" from 0 to 5 do
    {
        STHud_Namepos pushBack(
            _canvas ctrlMapScreenToWorld [
                _posX + _width + _spacer,
                _posY - _height + (_i * _textsize)
            ]
        );
        STHud_Selectpos pushBack(
            _canvas ctrlMapScreenToWorld [
                _posX + _width,
                _posY - _height + (_i * _textsize)
            ]
        );
    };
    // Second column, further to the right
    for "_i" from 0 to 5 do
    {
        STHud_Namepos pushBack(
            _canvas ctrlMapScreenToWorld [
                _posX + 3.5 * _width + _spacer,
                _posY - _height + (_i * _textsize)
            ]
        );
        STHud_Selectpos pushBack(
            _canvas ctrlMapScreenToWorld [
                _posX + 3.5 * _width,
                _posY - _height + (_i * _textsize)
            ]
        );
    };

    STHud_GroupNamePos = _canvas ctrlMapScreenToWorld [_posX + _width + _spacer, _posY - _height - _textsize];

    // Swap over draw function for next frame
    "STHud_Draw_Init" call STUI_Canvas_Remove;
    "STHud_Draw" call STUI_Canvas_Add;
    // Draw something this frame
    _this call STHud_Draw;
};

STHud_Background =
{
    params ["_canvas"];

    {
        _canvas drawEllipse [
            STHud_Mid,
            STHud_Scale * _x, STHud_Scale * _x, 0,
            [0, 0, 0, 1],
            ""
        ];

        _canvas drawEllipse [
            STHud_Mid,
            STHud_Scale * _x, STHud_Scale * _x, 0,
            [0, 0, 0, 0.4],
            "#(rgb,1,1,1)color(0,0,0,1)"
        ];
    } forEach [STHud_MaxDist, STHud_MidDist, STHud_MinDist];
};

STHud_Draw =
{
    if (keko_settings_shacktac isEqualTo 0) exitWith {};
    if (STHud_UIMode isEqualTo 0) exitWith {};
    if (!(call STUI_Canvas_ShownHUD)) exitWith {};

    if (STHud_UIMode in [STHud_ShowHUD, STHud_ShowBoth]) then
    {
        _this call STHud_DrawHUD;
    };

    if (STHud_UIMode > 1) then
    {
        _this call STHud_Namelist;
    };
};

STHud_DrawHUD =
{
    params ["_canvas"];
    private _units = units(player) - [player];

    // Don't show HUD if in group by self and not in vehicle
    if ((vehicle(player) == player) && {count(_units) isEqualTo 0}) exitWith {};

    _canvas call STHud_Background;

    // Can't use eyeDirection as it jitters when in some vehicles
    (positionCameraToWorld [0,0,1] vectorDiff positionCameraToWorld [0,0,0]) params ["_lx", "_ly"];
    private _lookDir = _lx atan2 _ly;
    private _lookPos = getPosATLVisual(vehicle(player));

    private ["_isUsingTeams", "_colourFunc", "_playerColour"];
    _isUsingTeams = call STUI_UsingTeams;
    if (_isUsingTeams) then
    {
        _colourFunc = STHud_Colour_Teams;
        _playerColour = call STHud_Colour_Teams_Player;
    }
    else
    {
        _colourFunc = STHud_Colour;
        _playerColour = call STHud_Colour_Player;
    };


    GVAR(DeltaT) = time - GVAR(LastTick);

    {
        private _unit = _x;
        private _vehicle = vehicle(_unit);
        private _pos = getPosATLVisual(_vehicle);
        private _distance = _pos distance2d _lookPos;
        (_pos vectorDiff _lookPos) params ["_bx", "_by"];
        private _bearing = (_bx atan2 _by) - _lookDir;
        private _mapPos = STHud_Mid vectorAdd [sin(_bearing) * _distance * STHud_Scale, cos(_bearing) * _distance * STHud_Scale, 0];
        private _dir = getDirVisual(_vehicle) - _lookDir;

        private _icon = _unit call STHud_Icon;
        private _colour = [_unit, _distance] call _colourFunc;
        private _size = 19.2;
        if (_vehicle != _unit) then
        {
            if (driver(_vehicle) == _unit) then
            {
                _size = _size * 0.55;
            }
            else
            {
                _size = _size * 0.5;
            };
        };

        if (GVAR(Occlusion) && (player distance _x < STHud_FadeEdge)) then
        {
            private _vis = [(vehicle _x), "VIEW"] checkVisibility [eyePos player,  AGLToASL (_x modelToWorldVisual (_x selectionPosition "Spine3"))];
            private _alphaPre = _colour select 3;

            private _fadetime = 2.5;
            private _fadeDegree = _x getVariable [QGVAR(Occlude_Fade_HUD),0];

            _alphaDiff = STUI_DeltaT / _fadetime;
            _fadeState = _x getVariable [QGVAR(Occlude_Fade_HUD),0];

            if (_fadeState > 1) then {_fadeState = 1};
            if (_fadeState < 0) then {_fadeState = 0};

            if (_vis == 0 && _alphaPre > 0) then
            {
                _curAlpha = _fadeState;
                _newAlpha = (_curAlpha - _alphaDiff )min _alphaPre;
                _x setVariable [QGVAR(Occlude_Fade_HUD),_newAlpha];
                _colour set [3,_newAlpha];
            }
            else
            {
                _curAlpha = _fadeState;
                _newAlpha = (_curAlpha + _alphaDiff) min _alphaPre;
                _x setVariable [QGVAR(Occlude_Fade_HUD),_newAlpha];
                _colour set [3,_newAlpha];
            };
        };

        _canvas drawIcon [
            _icon, _colour, _mapPos,
            _size, _size, _dir
        ];
    } forEach(_units);

    if (STHud_NoSquadBarMode) then {
        private _showHud = shownHUD;
    	_showHud set [6, false];
    	showHud (_showHud select [0, 8]);
    }
    else
    {
        private _showHud = shownHUD;
    	_showHud set [6, true];
    	showHud (_showHud select [0, 8]);
    };

    GVAR(LastTick) = time;

    _playerDir = getDirVisual(vehicle(player));
    _playerIcon = player call STHud_Icon;
    _playerSize = 19.2;
    _canvas drawIcon [
        _playerIcon, _playerColour, STHud_Mid,
        _playerSize, _playerSize, _playerDir-_lookDir
    ];

    if ("ItemCompass" in assignedItems(player)) then
    {
        [_canvas, _lookDir] call STHud_Compass;
    };
};

STHud_IsMG =
{
    params ["_type"];
    (getText(configFile >> "CfgWeapons" >> _type >> "UIPicture") == "\a3\weapons_f\data\ui\icon_mg_ca.paa");
};

STHud_IsAT =
{
    params ["_type"];
    getText(configFile >> "CfgWeapons" >> _type >> "UIPicture") == "\a3\weapons_f\data\ui\icon_at_ca.paa";
};

STHud_IsAttendant =
{
    params ["_type"];
    (getNumber(configFile >> "CfgVehicles" >> _type >> "attendant") == 1);
};

// Different mission frameworks will have different criteria for this,
// so make it easier to override
STHud_IsMedic =
{
    params ["_unit"];

    private _type = typeof(_unit);
    private _isatd = player getVariable ("isatd_"+_type);
    if (isNil {_isatd}) then
    {
        _isatd = _type call STHud_IsAttendant;
        player setVariable ["isatd_" + _type, _isatd];
    };

    _isatd;
};

STHud_Icon =
{
    params [
        "_unit",
        ["_disableVehicleIcons", true]
    ];
    //checking if the player is in a vehicle and if vehicle role icons are disabled
    //we only want to change the role icon next to their name on the HUD
    if (vehicle _unit != _unit && !_disableVehicleIcons) exitWith
    {
        //selecting this specific _unit from vehicle crew array and determining role
        //TODO: optimize the way the player's role is determined
        private _crewInfo = ((fullCrew (vehicle _unit)) select {_x select 0 isEqualTo _unit}) select 0;
        _crewInfo params ["", "_role", "_index", "_turretPath", "_isTurret"];
		if (_role == "cargo") exitWith
		{
			"a3\ui_f\data\igui\cfg\commandbar\imagecargo_ca.paa"
		};
        if (_role == "driver") exitWith
        {
            if (vehicle _unit isKindOf "Air") then
            {
                //no suitable icons for this so we are using a resized one
                QPATHTOF(ui\imagepilot_ca.paa)
            } else
            {
                "a3\ui_f\data\igui\cfg\commandbar\imagedriver_ca.paa"
            };
        };
        //FFV
        if (_role == "turret" && _isTurret) exitWith
        {
            "a3\ui_f\data\igui\cfg\simpletasks\types\rifle_ca.paa"
        };
        //gunners and sometimes copilots
        if (_role == "gunner" || (_role == "turret" && !_isTurret)) exitWith
        {
            "a3\ui_f\data\igui\cfg\commandbar\imagegunner_ca.paa"
        };
	    if (_role == "commander") exitWith
        {
            "a3\ui_f\data\igui\cfg\commandbar\imagecommander_ca.paa"
        };
    };

    if (leader(_unit) == _unit) exitWith
    {
        "\A3\ui_f\data\map\vehicleicons\iconManLeader_ca.paa";
    };

    if (_unit call STHud_IsMedic) exitWith
    {
        "\A3\ui_f\data\map\vehicleicons\iconManMedic_ca.paa";
    };

    private _prim = primaryWeapon(_unit);
    private _ismg = player getVariable ("ismg_" + _prim);
    if (isNil {_ismg}) then
    {
        _ismg = _prim call STHud_IsMG;
        player setVariable ["ismg_" + _prim, _ismg];
    };
    if (_ismg) exitWith
    {
        "\A3\ui_f\data\map\vehicleicons\iconManMG_ca.paa";
    };

    private _sec = secondaryWeapon(_unit);
    private _isat = player getVariable ("isat_"+_sec);
    if (isNil {_isat}) then
    {
        _isat = _sec call STHud_IsAT;
        player setVariable ["isat_"+_sec, _isat];
    };
    if (_isat) exitWith
    {
        "\A3\ui_f\data\map\vehicleicons\iconManAT_ca.paa";
    };

    STHud_BGIcon;
};


STHud_Colour =
{
    params ["_unit", "_distance"];
    if (_distance < STHud_Close) exitWith
    {
        //STHud_CloseColour;
        [0.85, 0.4, 0, 1];
    };

    private "_colour";
    if (leader(player) == _unit) then
    {
        _colour = STHud_PlayerColours select 0;
    }
    else
    {
        _colour = STHud_PlayerColours select 2;
    };
    private _alpha = linearConversion [
        STHud_MaxDist, STHud_FadeEdge,
        _distance,
        0.8, 0,
        true
    ];
    [_colour select 0, _colour select 1, _colour select 2, _alpha];
};

STHud_Colour_Player =
{
    if (leader(player) == player) then
    {
        STHud_PlayerColours select 0;
    }
    else
    {
        STHud_PlayerColours select 4;
    };
};

STHud_Colour_Teams_Player =
{
    private _index = player call FUNC(assignedTeamIndex);

    STHud_PlayerColours select _index;
};

STHud_Colour_Teams =
{
    params ["_unit", "_distance"];

    if (_distance < STHud_Close) exitWith
    {
        //STHud_CloseColour;
        [0.85, 0.4, 0, 1];
    };

    private _index = _unit call FUNC(assignedTeamIndex);
    private _colour = STHud_Colours select _index;
    private _alpha = linearConversion [STHud_MaxDist, STHud_FadeEdge, _distance, 0.8, 0, true];
    [_colour select 0, _colour select 1, _colour select 2, _alpha];
};

STHud_Colour_Text =
{
    params ["_unit"];
    private _index = _unit call STUI_assignedTeamIndex;

    STHud_TextColours select _index;
};

STHud_Colour_Blind_Matrix =
{
    params [
        ["_rgba", [], [[]]],
        ["_matrix", [], [[]]]
    ];

    if (_rgba isEqualTo [] || _matrix isEqualTo []) exitWith {};

    _rgba params ["_r", "_g", "_b", "_a"];

    private _fu = {([([255, _this] select (_this < 255)), 0] select (_this < 0))};

    private _newR = ((_r * (_matrix select 0)) + (_g * (_matrix select 1)) + (_b * (_matrix select 2)) + (_a * (_matrix select 3)) + (_matrix select 4));
    private _newG = ((_r * (_matrix select 5)) + (_g * (_matrix select 6)) + (_b * (_matrix select 7)) + (_a * (_matrix select 8)) + (_matrix select 9));
    private _newB = ((_r * (_matrix select 10)) + (_g * (_matrix select 11)) + (_b * (_matrix select 12)) + (_a * (_matrix select 13)) + (_matrix select 14));
    private _newA = ((_r * (_matrix select 15)) + (_g * (_matrix select 16)) + (_b * (_matrix select 17)) + (_a * (_matrix select 18)) + (_matrix select 19));

    ([
        _newR call _fu,
        _newG call _fu,
        _newB call _fu,
        _newA call _fu
    ])
};

STHud_Colour_Blind_Type =
{
	params [
		["_type", "Normal", [""]]
	];
	switch _type do {
		case "Normal": {
			[1,0,0,0,0, 0,1,0,0,0, 0,0,1,0,0, 0,0,0,1,0, 0,0,0,0,1]
		};
		case "Protanopia": {
			[0.567,0.433,0,0,0, 0.558,0.442,0,0,0, 0,0.242,0.758,0,0, 0,0,0,1,0, 0,0,0,0,1]
		};
		case "Protanomaly": {
			[0.817,0.183,0,0,0, 0.333,0.667,0,0,0, 0,0.125,0.875,0,0, 0,0,0,1,0, 0,0,0,0,1]
		};
		case "Deuteranopia": {
			[0.625,0.375,0,0,0, 0.7,0.3,0,0,0, 0,0.3,0.7,0,0, 0,0,0,1,0, 0,0,0,0,1]
		};
		case "Deuteranomaly": {
			[0.8,0.2,0,0,0, 0.258,0.742,0,0,0, 0,0.142,0.858,0,0, 0,0,0,1,0, 0,0,0,0,1]
		};
		case "Tritanopia": {
			[0.95,0.05,0,0,0, 0,0.433,0.567,0,0, 0,0.475,0.525,0,0, 0,0,0,1,0, 0,0,0,0,1]
		};
		case "Tritanomaly": {
			[0.967,0.033,0,0,0, 0,0.733,0.267,0,0, 0,0.183,0.817,0,0, 0,0,0,1,0, 0,0,0,0,1]
		};
		case "Achromatopsia": {
			[0.299,0.587,0.114,0,0, 0.299,0.587,0.114,0,0, 0.299,0.587,0.114,0,0, 0,0,0,1,0, 0,0,0,0,1]
		};
		case "Achromatomaly": {
			[0.618,0.320,0.062,0,0, 0.163,0.775,0.062,0,0, 0.163,0.320,0.516,0,0,0,0,0,1,0,0,0,0,0]
		};
	};
};

STHud_Colour_Blind_Cache =
{
	params ["_mode"];

	private _lightGrey = [[0.7, 0.7, 0.7, 1], [_mode] call STHud_Colour_Blind_Type] call STHud_Colour_Blind_Matrix;
	private _red = [[0.9, 0, 0, 1], [_mode] call STHud_Colour_Blind_Type] call STHud_Colour_Blind_Matrix;
	private _green = [[0, 0.8, 0, 1], [_mode] call STHud_Colour_Blind_Type] call STHud_Colour_Blind_Matrix;
	private _blue = [[0.2, 0.2, 1, 1], [_mode] call STHud_Colour_Blind_Type] call STHud_Colour_Blind_Matrix;
	private _yellow = [[0.85, 0.85, 0, 1], [_mode] call STHud_Colour_Blind_Type] call STHud_Colour_Blind_Matrix;

	STHud_Colours =
	[
		_lightGrey
		,_red
		,_green
		,_blue
		,_yellow
	];

	_lightGrey = [[1, 1, 1, 1], [_mode] call STHud_Colour_Blind_Type] call STHud_Colour_Blind_Matrix;
	_red = [[1, 0.67, 0.67, 1], [_mode] call STHud_Colour_Blind_Type] call STHud_Colour_Blind_Matrix;
	_green = [[0.67, 1, 0.67, 1], [_mode] call STHud_Colour_Blind_Type] call STHud_Colour_Blind_Matrix;
	_blue = [[0.67, 0.67, 1, 1], [_mode] call STHud_Colour_Blind_Type] call STHud_Colour_Blind_Matrix;
	_yellow = [[1, 1, 0.67, 1], [_mode] call STHud_Colour_Blind_Type] call STHud_Colour_Blind_Matrix;

	STHud_TextColours =
	[
		 _lightGrey
		,_red
		,_green
		,_blue
		,_yellow
	];
};

STHud_Compass =
{
    params ["_canvas", "_lookDir"];

    {
        _x params ["_bearing", "_size", "_image"];
        private _mapPos = STHud_Mid vectorAdd [
            STHud_CompassScale * sin(_bearing - _lookDir),
            STHud_CompassScale * cos(_bearing - _lookDir),
            0
        ];

        _canvas drawIcon [
            _image,
            [1,1,1,0.65],
            _mapPos,
            _size,
            _size,
            _bearing - _lookDir,
            "",
            false
        ];
    } forEach STHud_CompassData;
};

STHud_Namelist =
{
    params ["_canvas", "_colourFunc", "_playerColour"];

    private _units = [];
    {
        if (count(_units) >= count(STHud_Namepos)) exitWith {};

        if (alive(_x) || {!isNil {_x getVariable "sth_name"}}) then
        {
            _units pushBack [_x, _x call STHud_Colour_Text];
        };
    } forEach (units(player));

    // Could expand this to check if the player is a driver, gunner, or commander, but I don't recall what exactly is needed to check to catch multiple turrets etc while excluding FFV.
    if (vehicle player != player && STHud_ShowBearingInVehicle) then
    {
        private _viewVec = positionCameratoWorld [0,0,0] vectorFromTo (positionCameraToWorld [0,0,50]);
        private _bearing = ((_viewVec select 0) atan2 (_viewVec select 1) + 360) % 360;

        _bearingBase = (str round _bearing);
        _bearingPretty = "";

        switch (count _bearingBase) do
        {
            case 1: {_bearingPretty = "00" + _bearingBase};
            case 2: {_bearingPretty = "0" + _bearingBase};
            case 3: {_bearingPretty = _bearingBase};
        };

        _canvas drawIcon
        [
            "#(argb,8,8,3)color(0,0,0,0)", [1,1,1,.9],
            STHud_Bearing,
            16, 16, 0,
            _bearingPretty, STHud_TextShadow, 0.035, STHud_Font, "Center"
        ];
    };

    if (count(_units) == 1) exitWith {};

    private _fullName = count(_units) < 7;

    {
        _x params ["_unit", "_colour"];
        private _isUnitSelected = if (leader (group player)==player) then {_unit in (groupSelectedUnits player)} else {false}; // Check if they're leader, if not, ignore.
        private _selIndicator = "";
        if (_isUnitSelected) then {_selIndicator = "> "}; // Tried this on the left and right. Being on the left seems to make it 'pop' more.
        _icon = [_unit, false] call STHud_Icon;

        _finalName = ([_unit, _fullName] call STHud_GetName);

        if (STHud_NoSquadBarMode) then {_finalName = _selIndicator + _finalName;};

        if (count (groupSelectedUnits player) > 0 && STHud_NoSquadBarMode) then
        {
            private _tempName = vehicleVarName _unit;
            _unit setVehicleVarName "";
            private _strName = str(_x);
            _unit setVehicleVarName _tempName;
            private _pl = _strName find ":";
            private _numStr = _strName select [_pl +1,2];
            if (_numStr find "," > -1 || _numStr find " " > -1) then {_numStr = _numStr select [0,1]};
            _canvas drawIcon
            [
                "#(argb,1,1,1)color(0,0,0,0)", [1,1,1,1],
                STHud_Selectpos select _forEachIndex,
                1, 1, 0,
                _numStr, STHud_TextShadow, 0.035, STHud_Font, "Left"
            ];
        };

        _canvas drawIcon
        [
            _icon, _colour,
            STHud_Namepos select _forEachIndex,
            16, 16, 0,
            _finalName, STHud_TextShadow, 0.035, STHud_Font, "Right"
        ];
    } forEach(_units);

    if (count (groupSelectedUnits player) > 0 && STHud_NoSquadBarMode) then
    {
        _canvas drawIcon
        [
            "#(argb,1,1,1)color(0,0,0,0)", [1,1,1,1],
            STHud_GroupNamePos,
            16, 16, 0,
            group(player) getVariable ["STMF_GroupID", ""], STHud_TextShadow, 0.035, STHud_Font, "Right"
        ];
    };
};

STHud_GetName =
{
    params ["_unit", "_fullName"];
    private _value = _unit getVariable ["sth_name", []];
    if ((count(_value) isEqualTo 0) || {!(isPlayer(_unit) isEqualTo (_value select 0))}) then
    {
        _value = [isPlayer(_unit), name(_unit), _unit call STHud_GetName_Short];
        _unit setVariable ["sth_name", _value, false];
    };

    if (_fullName) then
    {
        _value select 1;
    }
    else
    {
        _value select 2;
    };
};

STHud_MaxNameLen = 16;
STHud_GetName_Short =
{
    params ["_unit"];
    _name = name(_this);
    [_name, STHud_MaxNameLen] call FUNC(truncateText);
};

STHud_Reset =
{
    "STHud_Draw" call FUNC(canvasRemove);
    "STHud_Draw_Init" call FUNC(canvasAdd);
};
["STUI_Reset", {call STHud_Reset}] call CBA_fnc_addEventHandler;

call STHud_Reset;
