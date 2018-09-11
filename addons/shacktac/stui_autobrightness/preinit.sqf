if (isNil "STUI_AutoBrightness_Enabled") then {STUI_AutoBrightness_Enabled = true;};

STUI_AutoBrightness_MaxDark = 0.7;

// Compat for ACE3's map features
_aceMap = isClass (configfile >> 'CfgPatches' >> 'ACE_Map'); 

STUI_AutoBrightness_OnDraw =
{
    if (!STUI_AutoBrightness_enabled) exitWith {};
    if (_aceMap) exitWith {};

    params ["_control"];

    // Find the edges of the screen in world space
    private _topleft = _control ctrlMapScreenToWorld [safeZoneX, safeZoneY];
    private _bottomright = _control ctrlMapScreenToWorld [safeZoneX + safeZoneW, safeZoneY + safeZoneH];

    // Now figure out how to make the marker cover everything
    private _pos = _control ctrlMapScreenToWorld [0.5, 0.5];
    private _width  = 0.5 * ((_bottomright select 0) - (_topleft select 0));
    private _height = 0.5 * ((_topleft select 1)     - (_bottomright select 1));

    private _alpha = STUI_AutoBrightness_MaxDark min abs(sunOrMoon - 1);

    _control drawRectangle [
        _pos,
        _width,
        _height,
        0,
        [0, 0, 0, _alpha],
        "#(rgb,1,1,1)color(0,0,0,1)" // solid black
    ];
};

// Register for postinit
STUI_PostInits pushBack
{
    [] spawn
    {
        disableSerialization;
        waitUntil {uiSleep 1; !isNull(findDisplay 12)};
        ((findDisplay 12) displayCtrl 51) ctrlAddEventHandler ["Draw", "_this call STUI_AutoBrightness_OnDraw"];
    };
};
