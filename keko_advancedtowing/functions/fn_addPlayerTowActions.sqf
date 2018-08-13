player addAction ["Deploy Tow Ropes", {
  [] call keko_advancedtowing_fnc_takeTowRopesAction;
}, nil, 0, false, true, "", "[cursorTarget] call keko_advancedtowing_fnc_canTakeTowRopes"];

player addAction ["Put Away Tow Ropes", {
  [] call keko_advancedtowing_fnc_putAwayTowRopesAction;
}, nil, 0, false, true, "", "[cursorTarget] call keko_advancedtowing_fnc_canPutAwayTowRopes"];

player addAction ["Attach To Tow Ropes", {
  [] call keko_advancedtowing_fnc_attachTowRopesAction;
}, nil, 0, false, true, "", "private ['_vehicle','_cargo']; _vehicle = player getVariable ['keko_advancedtowing_towRopesVehicle', objNull]; _cargo = cursorTarget; [_vehicle,_cargo] call keko_advancedtowing_fnc_canAttachTowRopes;"];

player addAction ["Drop Tow Ropes", {
  [] call keko_advancedtowing_fnc_dropTowRopesAction;
}, nil, 0, false, true, "", "[] call keko_advancedtowing_fnc_canDropTowRopes"];

player addAction ["Pickup Tow Ropes", {
  [] call keko_advancedtowing_fnc_pickupTowRopesAction;
}, nil, 0, false, true, "", "[] call keko_advancedtowing_fnc_canPickupTowRopes"];

player addEventHandler ["Respawn", {
  player setVariable ["keko_advancedtowing_towActionsLoaded", false];
}];
