disableSerialization;

_babe_core_FH_ctrl = (findDisplay 46) ctrlCreate ["RscMapControl", -1];
uiNameSpace setVariable ["babe_core_FH_ctrl", _babe_core_FH_ctrl];
_babe_core_FH_ctrl ctrlSetPosition [0,0,0,0];
_babe_core_FH_ctrl ctrlCommit 0;

_babe_core_FH_ctrl ctrlAddEventHandler ["draw", 
{
	call babe_core_fnc_handleEHs
}];
