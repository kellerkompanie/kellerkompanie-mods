#include "script_component.hpp"

params ["_group","_logic","_vehicle"];
	
private _bool = True;

while { ( (alive _vehicle) && (canMove _vehicle) ) } do {
	if (getPosATL _vehicle select 2 < 3) exitWith {};
	
	sleep 1;
};

{ 
	[_x] orderGetIn False; 
	[_x] allowGetIn False;
} forEach units _group;
