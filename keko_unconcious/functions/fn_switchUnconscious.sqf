params ["_unit", "_state"];

// only apply to player units
if!(isPlayer _unit) exitWith{};

if(_state) then {
	// switch unit to civilian
	_isGroupLeader = (leader (group player)) == player;
	player setVariable["keko_unconscious_side", playerSide];
	player setVariable["keko_unconscious_group", group player];
	player setVariable["keko_unconscious_color", assignedTeam player];
	player setVariable["keko_unconscious_leader", _isGroupLeader];
	_civGroup = createGroup civilian;
	[player] joinSilent _civGroup;

} else {
	// switch unit back from civilian
	_isGroupLeader = player getVariable ["keko_unconscious_leader", false];
	
	_side_before_unconscious = player getVariable ["keko_unconscious_side", west];
	[player] joinSilent createGroup _side_before_unconscious;
	_group_before_unconscious = player getVariable ["keko_unconscious_group", createGroup _side_before_unconscious];
	[player] joinSilent _group_before_unconscious;

	_assignedTeam = player getVariable ["keko_unconscious_color", "MAIN"];
	player assignTeam _assignedTeam;

	if(_isGroupLeader) then {
		[group _unit, _unit] remoteExec ["selectLeader", groupOwner group _unit];
	};	
};