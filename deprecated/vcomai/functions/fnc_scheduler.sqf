#include "script_component.hpp"

private _t1 = diag_ticktime + 1;
private _t2 = diag_ticktime + 10;

waituntil {
	//Every 10 seconds
	if (diag_ticktime > _t2) then {
		if (GVAR(ActivateAI)) then {
			{
				if (local _x && {simulationEnabled (leader _x)} && {!(isplayer (leader _x))} && {(leader _x) isKindOf "Man"}) then {
					private _Grp = _x;
					if !(_Grp in GVAR(ActiveList)) then {
						if !(((units _Grp) findIf {alive _x}) isEqualTo -1) then {
							_x call FUNC(SquadExc);
						};
					};
				};
			} foreach allGroups;
		};
		_t2 = diag_ticktime + 10;
	};	
	sleep 1;
	false;
};