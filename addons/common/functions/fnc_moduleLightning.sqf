#include "script_component.hpp"

private _logic = _this select 0;
private _activated = _this select 2;
if (_activated) then {
    private _pos = position _logic;
    if !(isnull (attachedto _logic)) then {_pos = getposatl (attachedto _logic);};
    private _dir = _logic getvariable ["dir",random 360];

    //--- Play sound (tied to the explosion effect)
    if (local _logic || {local _x} count (objectcurators _logic) > 0) then {
        private _bolt = createvehicle ["LightningBolt",_pos,[],0,"CAN_COLLIDE"];
        _bolt setposatl _pos;
        //_bolt setdamage 1;
    };

    private _thunder = ["thunder_1", "thunder_2"] call BIS_fnc_selectRandom;
    //_thunder remoteExec ["playSound", [0,-2] select isDedicated];
    playSound _thunder;

    private _light = "#lightpoint" createvehiclelocal _pos;
    _light setposatl [_pos select 0,_pos select 1,(_pos select 2) + 10];
    _light setLightDayLight true;
    _light setLightBrightness 300;
    _light setLightAmbient [0.05, 0.05, 0.1];
    _light setlightcolor [1, 1, 2];

    sleep 0.1;
    _light setLightBrightness 0;
    sleep (random 0.1);

    private _class = ["lightning1_F","lightning2_F"] call bis_Fnc_selectrandom;
    private _lightning = _class createvehiclelocal [100,100,100];
    _lightning setdir _dir;
    _lightning setpos _pos;

    private _cursorTarget = _logic getvariable ["bis_fnc_curatorAttachObject_object",objnull];
    private _duration = if (isnull _cursorTarget) then {(3 + random 1)} else {1};

    if ( !(isnull _cursorTarget) && (isPlayer _cursorTarget) ) then {
        [_cursorTarget, true, 60, true] call ace_medical_fnc_setUnconscious;
    };

    for "_i" from 0 to _duration do {
        private _time = time + 0.1;
        _light setLightBrightness (100 + random 100);
        waituntil {
            //--- Attach to target under cursor
            if (local _logic && !isnull _cursorTarget) then {_lightning setpos position _cursorTarget;};
            time > _time
        };
    };

    deletevehicle _lightning;
    deletevehicle _light;

    //--- Disable engine lightnings
    0 setlightnings 0;

    //--- Delete curator placed module
    if (count objectcurators _logic > 0) then {
        deletevehicle _logic;
    };

    //--- Save variable for outside use
    if (_logic call bis_fnc_isCuratorEditable) then {
        uinamespace setvariable ["bis_fnc_moduleLightning_created",true];
    };
};
