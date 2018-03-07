params ["_unit", "_state"];

diag_log text format ["[KEKO] (unconcious) switchUnconcious %1 %2", _unit, _state];

// only apply to player units
if!(isPlayer _unit) exitWith{ diag_log text "[KEKO] (unconcious) !(isPlayer _unit)"; };
if(isNull _unit) exitWith{diag_log text "[KEKO] (unconcious) (isNull _unit)";};

if(_state) then {
	// switch unit to civilian
	diag_log text format ["[KEKO] (unconcious) switching %1 to civilian", name _unit];

	_isGroupLeader = (leader (group player)) == player;
	_unit setVariable["keko_unconscious_side", playerSide, true];
	_unit setVariable["keko_unconscious_group", group player, true];
	_unit setVariable["keko_unconscious_color", assignedTeam player, true];
	_unit setVariable["keko_unconscious_leader", _isGroupLeader, true];
	_civGroup = createGroup civilian;
	[_unit] joinSilent _civGroup;

} else {
	// switch unit back from civilian
	diag_log text format ["[KEKO] (unconcious) switching %1 back from civilian", name _unit];

	_isGroupLeader = _unit getVariable ["keko_unconscious_leader", false];
	
	_side_before_unconscious = _unit getVariable ["keko_unconscious_side", west];
	[_unit] joinSilent createGroup _side_before_unconscious;
	_group_before_unconscious = _unit getVariable ["keko_unconscious_group", createGroup _side_before_unconscious];
	[_unit] joinSilent _group_before_unconscious;

	_assignedTeam = _unit getVariable ["keko_unconscious_color", "MAIN"];
	_unit assignTeam _assignedTeam;

	if(_isGroupLeader) then {
		[group _unit, _unit] remoteExec ["selectLeader", groupOwner group _unit];
	};	
};