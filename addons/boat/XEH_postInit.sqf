#include "script_component.hpp"

_action = ["InflateBoat", "Inflate Boat", "", {_target call FUNC(inflateBoat)}, {true}] call ace_interact_menu_fnc_createAction;
[QGVAR(boatCrate), 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToClass;
