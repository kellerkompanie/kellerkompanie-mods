#include "script_component.hpp"

params["_entity"];

private _description = (_entity get3DENAttribute "description") select 0;

if(_description == "") then {
	private _type = typeOf _entity;
	_description = getText(configFile >> "CfgVehicles" >> _type >> "displayName");
	_entity set3DENAttribute ["description", _description];
};
