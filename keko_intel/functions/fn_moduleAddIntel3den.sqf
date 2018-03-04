_logic = _this select 0;

diag_log "[KEKO] (common) running moduleInitMission3den";

if(isServer) then {
	_action = _logic getVariable ["Action",""];
	_title = _logic getVariable ["Title",""];
	_content = _logic getVariable ["Content",""];
	_remove = _logic getVariable ["Remove",false];

	_objects = synchronizedObjects _logic;
	{
		[_x, _action, _title, _content, _remove] call keko_intel_fnc_addIntel;
	} forEach _objects;	
};