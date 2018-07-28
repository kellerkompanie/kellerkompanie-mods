// by ALIAS
// Tutorial: https://www.youtube.com/user/aliascartoons

private ["_footmobile","_alias_breath","_vapors","_stamina_pl","_stamina_pl_fresh","_obo"];

if (!hasInterface) exitWith {};

sleep 2+random 10;

//_name_terr = worldName;
_footmobile = _this select 0;

_alias_breath = "Land_HelipadEmpty_F" createVehicle (getpos _footmobile);
_alias_breath attachto [_footmobile,[0,0.17,0], "neck"];

_stamina_pl_fresh = getStamina player;

if (terrain_type_vanilla) then {
	
	while {alive _footmobile} do {
		_stamina_pl = getStamina player;
		//if (_stamina_pl<_stamina_pl_fresh) then {} else {};
		//_direction_p = direction player;	hint str _direction_p;
		_obo = 3*(_stamina_pl/_stamina_pl_fresh)+0.25;
		sleep _obo;
		//hint str _obo;
		_vapors = "#particlesource" createVehicleLocal getpos _alias_breath;
		_vapors setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal", 16, 12, 13,0],"","Billboard",0.5,0.5,[0,0,0],[0, 0.5, -0.2],1, 1.275,1, 0,[0, 0.2,0],[[1,1,1, random 0.02], [1,1,1, 0.01], [1,1,1, 0]],[1000],1,0.04,"","",_alias_breath];
		_vapors setParticleRandom [2, [0, 0, 0], [0.25, 0.25, 0.25], 0, 0.5, [0, 0, 0, 0.1], 0, 0, 10];
		//_vapors setParticleCircle [0, [0, 0, 0]];
		_vapors setDropInterval 0.001;
		sleep 0.2+random 0.5;
		deleteVehicle _vapors;
	};
	deletevehicle _alias_breath;

} else {
	while {alive _footmobile} do {
		//_direction_p = direction player;	hint str _direction_p;
		_stamina_pl = getStamina player;
		_obo = 3*(_stamina_pl/_stamina_pl_fresh)+0.25;
		sleep _obo;		
		_vapors = "#particlesource" createVehicleLocal getpos _alias_breath;
		_vapors setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal", 16, 12, 13,0],"","Billboard",0.5,0.5,[0,0,0],[0, 0.5, -0.2],1, 1.275,1, 0,[0, 0.2,0],[[1,1,1, random 0.05], [1,1,1, 0.01], [1,1,1, 0]],[1000],1,0.04,"","",_alias_breath];
		_vapors setParticleRandom [2, [0, 0, 0], [0.25, 0.25, 0.25], 0, 0.5, [0, 0, 0, 0.1], 0, 0, 10];
		//_vapors setParticleCircle [0, [0, 0, 0]];
		_vapors setDropInterval 0.001;
		sleep 0.2+random 0.5;
		deleteVehicle _vapors;
	};
	deletevehicle _alias_breath;
};