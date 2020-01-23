#include "script_component.hpp"

if (isServer and isMultiplayer) exitWith {};

[missionNamespace, "arsenalOpened", FUNC(arsenalOpened)] call BIS_fnc_addScriptedEventHandler;
