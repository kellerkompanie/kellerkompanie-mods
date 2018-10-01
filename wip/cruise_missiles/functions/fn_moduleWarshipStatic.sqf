params ["_launchObject", "_noCruiseMissiles", "_side"];

_noCruiseMissiles = _logic getVariable "NumberOfCruiseMissles"; 
_side = switch (_logic getVariable "Faction") do {
    case 0: { WEST };
    case 1: { EAST };
    case 2: { Independent };
	case 3: { Civilian };
};

_nameAmmoType = "BGM-109 Tomahawk";
_spawnPos = getPos _launchObject; 


_misLArray = [];
for "_i" from 1 to _noCruiseMissiles do {
	_misLArray pushBack [(format ["Launch Tube %1: ", _i]),_nameAmmoType];
};

_launchObject setVariable ["ordinance", _misLArray, true];

if (isNil "BWCSM_ArtilleryBtyArray") then {BWCSM_ArtilleryBtyArray = []; publicVariable "BWCSM_ArtilleryBtyArray";};
BWCSM_ArtilleryBtyArray pushBack [nil, _side, nil, _spawnPos, "", [], _launchObject, nil, []];  
publicVariable "BWCSM_ArtilleryBtyArray";