#include "script_component.hpp"

params ["_logic"];
if (!local _logic) exitWith {};

call FUNC(cleanCorpses);
call FUNC(cleanWrecks);

deletevehicle _logic;
