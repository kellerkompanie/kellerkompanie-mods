params ["_playerUnit", "_loadoutKey", "_playerUID"];

_ret = "extDB3" callExtension format [ "0:keko_persistency:getPlayerLoadout:%1:%2", 
	_loadoutKey,
	_playerUID];

if(_ret select 0 == 1) then {
	// assume loading was sucess
	(_ret select 1) params [
		"_loadout", 
		"_medicClass", 
		"_engineerClass", 
		"_rank", 
		"_position"];

	_playerUnit setUnitLoadout _loadout;
	_playerUnit setVariable ["ace_medical_medicClass", _medicClass, true];
	_playerUnit setVariable ["ACE_isEngineer", _engineerClass, true];
	_playerUnit setRank _rank;

};