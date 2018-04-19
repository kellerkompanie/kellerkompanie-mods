#define RAND_SLEEP sleep (2 + (floor random 3));

//params [["_distance", keko_police_var_shoutDistance, ["15"]],["_playSounds", true, [true]]];

// TODO fix parameters with default values
_distance = keko_police_var_shoutDistance;

_playerSide = side player;

police_shouts = [
		"keko_police_02_gangster_gesichtet",
		"keko_police_02_ganz_ruhig",
		"keko_police_02_halt_oder_ich_schiesse",
		"keko_police_02_keine_bewegung",
		"keko_police_02_polizei01",
		"keko_police_02_polizei02",
		"keko_police_02_polizei03",
		"keko_police_02_polizei04",
		"keko_police_02_polizei05",
		"keko_police_02_sofort_stehenbleiben",
		"keko_police_02_waffe_weg"
	];

civilian_shouts = [
		"keko_police_15_nicht_schiessen",
		"keko_police_15_erschiesst_mich_nicht",
		"keko_police_14_ich_ergebe_mich",
		"keko_police_13_keine_waffe_nicht_schiessen",
		"keko_police_10_nicht_schiessen",
		"keko_police_10_lasst_mich_in_ruhe",
		"keko_police_10_ich_mach_keine_bewegung",
		"keko_police_10_himmel_nicht_schiessen",
		"keko_police_10_erschiesst_mich_nicht",
		"keko_police_09_was_soll_das_geballer",
		"keko_police_09_nicht_schiessen",
		"keko_police_09_nichts_wie_weg",
		"keko_police_09_meine_haende_sind_oben",
		"keko_police_09_herr_je_nicht_schiessen",
		"keko_police_08_ich_mach_keine_bewegung",
		"keko_police_08_haende_sind_oben_nicht_schiessen",
		"keko_police_07_nicht_schiessen",
		"keko_police_07_lasst_mich_in_ruhe",
		"keko_police_05_was_immer_sie_sagen"
	];

civilian_fleeing_shouts = [
		"keko_police_10_lasst_mich_in_ruhe",
		"keko_police_10_nichts_wie_weg",
		"keko_police_09_was_soll_das_geballer",
		"keko_police_08_oh_mann_ich_hau_ab",
		"keko_police_07_lasst_mich_in_ruhe",
		"keko_police_03_verdammt_lauft"
	];

civilian_handcuffed = [
		"keko_police_15_ich_will_meinen_anwalt",
		"keko_police_12_loslassen_oder_es_knallt",
		"keko_police_10_lasst_mich_in_ruhe",
		"keko_police_10_ich_mach_keine_bewegung",
		"keko_police_09_verdammte_polizei_schiessen_auf_alles",
		"keko_police_09_mehr_aufregung_als_ich_wollte",
		"keko_police_09_jetzt_zufrieden",
		"keko_police_08_ich_mach_keine_bewegung",
		"keko_police_03_ich_will_meinen_anwalt",
		"keko_police_07_lasst_mich_in_ruhe",
		"keko_police_05_was_immer_sie_sagen",
		"keko_police_04_werd_bloss_nicht_frech",
		"keko_police_04_mistkerl",
		"keko_police_03_verdammte_cops"
	];


gangster_surrender_shouts = [
		"keko_police_15_erschiesst_mich_nicht",
		"keko_police_15_ganz_ruhig",
		"keko_police_15_ich_geb_auf",
		"keko_police_15_meine_haende_sind_oben",
		"keko_police_15_nicht_schiessen",
		"keko_police_14_verdammt_nicht_schiessen",
		"keko_police_14_ich_ergebe_mich",
		"keko_police_14_hey_hey_ich_mach_keinen_aerger_mehr",
		"keko_police_14_ah_verdammt",
		"keko_police_13_mist_ich_will_keinen_aerger",
		"keko_police_13_keine_waffe_nicht_schiessen",
		"keko_police_13_das_wars_nicht_schiessen",
		"keko_police_12_verdammt_nicht_schiessen",
		"keko_police_12_ich_sterb_nicht_fuer_diese_scheisse",
		"keko_police_12_ich_geb_auf_nicht_schiessen",
		"keko_police_12_ach_zum_teufel",
		"keko_police_11_ich_geb_auf_sehen_sie",
		"keko_police_10_schon_gut_ich_ergebe_mich",
		"keko_police_10_nicht_schiessen",
		"keko_police_10_ich_mach_keine_bewegung",
		"keko_police_10_himmel_nicht_schiessen",
		"keko_police_10_erschiesst_mich_nicht",
		"keko_police_09_nicht_schiessen",
		"keko_police_09_meine_haende_sind_oben",
		"keko_police_09_herr_je_nicht_schiessen_langsam",
		"keko_police_09_herr_je_nicht_schiessen",
		"keko_police_08_ok_ok_nicht_schiessen",
		"keko_police_08_ok_ich_geb_auf",
		"keko_police_08_ich_mach_keine_bewegung",
		"keko_police_03_ergeben_guuut_guuut",
		"keko_police_07_nicht_schiessen",
		"keko_police_06_genug_gut_gut",
		"keko_police_05_ich_geb_auf",
		"keko_police_04_nicht_schiessen"
	];

gangster_uncooperative_shouts = [
		"keko_police_15_ach_zum_teufel",
		"keko_police_15_halt_oder_ich_schiesse",
		"keko_police_14_keinekapitulation",
		"keko_police_14_ich_geb_nicht_auf",
		"keko_police_13_nicht_dieses_mal",
		"keko_police_13_maul_halten_wenn_du_leben_willst",
		"keko_police_13_keine_kapitulation",
		"keko_police_12_nicht_diesesmal",
		"keko_police_10_lasst_mich_in_ruhe",
		"keko_police_09_das_ist_ne_razzia",
		"keko_police_06_zuruecktreten",
		"keko_police_06_runter_verdammt",
		"keko_police_06_niet_halt",
		"keko_police_06_nicht_naeher_kommen",
		"keko_police_06_nasdaroscha",
		"keko_police_05_auf_keinen_fall",
		"keko_police_04_oh_mist_polizei",
		"keko_police_03_zurueck_oder_ich_schiesse",
		"keko_police_03_was_zum"
	];

gangster_fleeing_shouts = [
		"keko_police_15_ich_hau_ab",
		"keko_police_13_wir_sind_aufgeflogen",
		"keko_police_13_verdammt_cops",
		"keko_police_13_verdammt",
		"keko_police_13_nicht_dieses_mal",
		"keko_police_12_oh_mist_polizei",
		"keko_police_12_nicht_schon_wieder_verdammt",
		"keko_police_12_nicht_diesesmal",
		"keko_police_12_lieber_flien_als_untergehn",
		"keko_police_12_ihr_kriegt_uns_nicht_alle",
		"keko_police_12_ich_sterb_nicht_fuer_diese_scheisse",
		"keko_police_12_ach_zum_teufel",
		"keko_police_11_nichts_wie_weg_polizei",
		"keko_police_11_nein_ich_hau_ab",
		"keko_police_10_oh_scheisse",
		"keko_police_10_nichts_wie_weg",
		"keko_police_10_das_ist_ne_razzia",
		"keko_police_09_nichts_wie_weg",
		"keko_police_09_lauft",
		"keko_police_09_das_ist_ne_razzia",
		"keko_police_08_oh_mann_ich_hau_ab",
		"keko_police_08_haende_sind_oben_nicht_schiessen",
		"keko_police_04_oh_mist_polizei",
		"keko_police_03_verdammt_lauft",
		"keko_police_03_verdammt_die_bullen"
	];

gangster_handcuffed = [
		"keko_police_15_ich_will_meinen_anwalt",
		"keko_police_14_ah_verdammt",
		"keko_police_12_loslassen_oder_es_knallt",
		"keko_police_12_gottverdammte_cops",
		"keko_police_12_fluchen",
		"keko_police_10_oh_scheisse",
		"keko_police_10_lasst_mich_in_ruhe",
		"keko_police_09_verdammte_polizei_schiessen_auf_alles",
		"keko_police_09_mehr_aufregung_als_ich_wollte",
		"keko_police_09_jetzt_zufrieden",
		"keko_police_03_ich_will_meinen_anwalt",
		"keko_police_06_wir_koennen_uns_wohl_nicht_einigen",
		"keko_police_06_erwischt_verdammt",
		"keko_police_04_mistkerl",
		"keko_police_04_ham_sie_n_haftbefehl",
		"keko_police_04_habt_ihr_jungs_nichts_besseres_zu_tun",
		"keko_police_03_schweine",
		"keko_police_03_verdammte_cops"
	];


keko_police_fnc_flee = {
	params ["_fleeing_unit"];
	_dir = 180 + (_fleeing_unit getDir player); //direction opposite to enemy
	_fleeing_location = _fleeing_unit getrelPos [300,_dir];
	[_fleeing_unit] join grpNull;
	_fleeing_unit setBehaviour "CARELESS";
	_fleeing_unit setSpeedMode "FULL";
	_fleeing_unit doMove _fleeing_location;
};


// unused sounds:
// 		keko_police_13_rugig_und_nicht_bewegen
// 		keko_police_12_nicht_bewegen
// 		keko_police_09_jetzt_wirds_uebel
// 		keko_police_03_maul_halten

player say3D (selectRandom police_shouts);

[_distance, _playerSide] spawn {
	params ["_distance", "_playerSide"];
	
	_list = player nearEntities ["Man", _distance];
	{
		if!(isPlayer _x) then {
			_unit = _x;
			_sideEntity = side _unit;
			_isFriendly = [_sideEntity, _playerSide] call BIS_fnc_sideIsFriendly;

			_surrenderAlreadyDecided = _unit getVariable ["keko_police_surrenderAlreadyDecided", false];
			_isWounded = damage _unit > 0;
			_surrenderChance = _unit getVariable ["keko_police_surrenderChance", keko_police_var_defaultSurrenderChance];
			_fleeingChance = _unit getVariable ["keko_police_fleeingChance", keko_police_var_defaultFleeingChance];

			if(keko_police_var_higherSurrenderWounded && _isWounded) then {
				_surrenderChance = _surrenderChance + 0.2;
			};
		
			if!(_isFriendly) then {
				/* Gangsters */
				// TODO replace true/false with value giving feedback if and why surrendered
				
				if !(_surrenderAlreadyDecided) then {
					_unit setVariable ["keko_police_surrenderAlreadyDecided", true, true];

					_random = (random 1.0) * 100;
					if(_random <= _surrenderChance) then {
						// do surrender
						[_unit] spawn {
							params ["_unit"];
							RAND_SLEEP
							["ACE_captives_setSurrendered", [_unit, true], _unit] call CBA_fnc_targetEvent;
							_unit say3D (selectRandom gangster_surrender_shouts);					
						};
					} else {
						_random = (random 1.0) * 100;
						if(_random <= _fleeingChance) then {
							[_unit] spawn {
								params ["_unit"];
								RAND_SLEEP
								_unit say3D (selectRandom gangster_uncooperative_shouts);
							};
						} else {
							[_unit] spawn {
								params ["_unit"];
								RAND_SLEEP
								_unit say3D (selectRandom gangster_fleeing_shouts);
								[_unit] call keko_police_fnc_flee;
							};
						};					
					};
				} else {
					// shout based on state
				};	
			} else {
				/* Civilians and Friendlies */
				if !(_surrenderAlreadyDecided) then {
					_unit setVariable ["keko_police_surrenderAlreadyDecided", true, true];						

					_random = (random 1.0) * 100;
					if(_random <= _surrenderChance) then {
						// do surrender					
						[_unit] spawn {
							params ["_unit"];
							RAND_SLEEP
							["ACE_captives_setSurrendered", [_unit, true], _unit] call CBA_fnc_targetEvent;
							_unit say3D (selectRandom civilian_shouts);
						};
					} else {
						_random = (random 1.0) * 100;
						if(_random <= _fleeingChance) then {
							// unit does not flee and does not surrender -> do nothing?
							// TODO implement behaviour
						} else {
							[_unit] spawn {
								params ["_unit"];
								RAND_SLEEP
								_unit say3D (selectRandom civilian_fleeing_shouts);
								[_unit] call keko_police_fnc_flee;
							};
						};
						
					};
				} else {
					// shout based on state
				};
			};
		};
	} forEach _list;
};
