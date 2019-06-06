#include "script_component.hpp"

private ["_targetLocation", "_mineClassNames", "_spreadRadial", "_numberToSend"];

_targetLocation = _this select 0;
_targetLocation set [2, 0]; //mines belong on the ground
_mineClassNames = (_this select 1) select 0;
_numberToSend = (_this select 1) select 1;
_spreadRadial = (_this select 1) select 2;

for "_i" from 0 to _numberToSend - 1 do{
    private _mine = createMine [(selectRandom _mineClassNames), _targetLocation, [], _spreadRadial];
    private _direction = random 360;
    [_mine, _direction] remoteExec [QFUNC(rotatePlacedMine), 0, true];
    _mine setPos getPos _mine;
    //Add a little effect to the new mines so it is obvious they have landed.
    "CMflareAmmo" createVehicle getpos _mine;

    sleep (.1 + random .5);
};
