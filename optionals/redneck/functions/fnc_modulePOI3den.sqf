#include "script_component.hpp"

params["_logic"];

GVAR(POIs) pushBack _logic;

if !(isServer) exitWith {};

INFO("modulePOI3den");

private _poi_id   = format ['%1',_logic];
private _poi_name = _logic getVariable ["poi_name", ""];
private _poi_type = _logic getVariable ["poi_type", 0];
private _poi_shop = _logic getVariable ["poi_shop", ""];

private _entityClass = "";
private _entityPosition = getPos _logic;
private _markerType = objNull;
private _markerColor = "colorCivilian";
private _markerScale = 1.0;

switch (_poi_type) do {
		case 0: {
			/* ATM */
			_entityClass = QGVAR(civilian_atm);
			_markerType = QGVAR(icon_atm);
			_markerColor = "ColorGUER";
			_markerScale = 0.8;
		};
		case 1: {
			/* Item Shop */
			_entityClass = QGVAR(civilian_item_shop);
			_markerType = QGVAR(icon_itemshop);
		};
		case 2: {
			/* Gear Shop */
			_entityClass = QGVAR(civilian_gear_shop);
			_markerType = QGVAR(icon_gearshop);
		};
		case 3: {
			/* Vehicle Shop */
			_entityClass = QGVAR(civilian_vehicle_shop);
			_markerType = QGVAR(icon_vehicleshop);
			_markerColor = "ColorBlue";
			_markerScale = 0.9;
		};
		case 4: {
			/* Garage */
			_entityClass = QGVAR(civilian_garage);
			_markerType = QGVAR(icon_garage);
			_markerColor = "ColorBlue";
		};
		case 5: {
			/* Parking */
			_entityClass = QGVAR(civilian_parking);
			_markerType = QGVAR(icon_parking);
			_markerColor = "ColorBlue";
			_markerScale = 0.6;
		};
		case 6: {
			/* Car Dealer */
			_entityClass = QGVAR(civilian_cardealer);
			_markerType = QGVAR(icon_cardealer);
			_markerColor = "ColorBlue";
			_markerScale = 0.6;
		};
		case 7: {
			/* Trader */
			_entityClass = QGVAR(civilian_trader);
			_markerType = QGVAR(icon_trader);
			_markerColor = "ColorGUER";
			_markerScale = 0.7;
		};
		case 8: {
			/* Pharmacy */
			_entityClass = QGVAR(civilian_pharmacist);
			_markerType = QGVAR(icon_pharmacy);
			_markerColor = "ColorRed";
			_markerScale = 0.7;
		};
		case 9: {
			/* Hangar */
			_entityClass = QGVAR(civilian_hangar);
			_markerType = QGVAR(icon_hangar);
			_markerColor = "ColorOrange";
		};
		case 10: {
			/* Weapon Shop */
			_entityClass = QGVAR(civilian_weapon_shop);
			_markerType = QGVAR(icon_weaponshop);
		};
		case 11: {
			/* Mechanic */
			_entityClass = QGVAR(civilian_mechanic);
			_markerType = QGVAR(icon_mechanic);
			_markerScale = 0.7;
			_markerColor = "ColorUNKNOWN";
		};
		case 12: {
			/* Doctor */
			_entityClass = QGVAR(civilian_doctor);
			_markerType = QGVAR(icon_doctor);
			_markerColor = "ColorRed";
		};
		case 13: {
			/* Fuel Shop */
			_entityClass = QGVAR(civilian_fuel_shop);
			_markerType = QGVAR(icon_fuelshop);
			_markerScale = 0.6;
			_markerColor = "ColorUNKNOWN";
		};
		case 14: {
			/* Heli Shop */
			_entityClass = QGVAR(civilian_helipilot);
			_markerType = QGVAR(icon_helicopter);
			_markerColor = "ColorOrange";
		};
		case 15: {
			/* Plane Shop */
			_entityClass = QGVAR(civilian_pilot);
			_markerType = QGVAR(icon_plane);
			_markerColor = "ColorOrange";
		};
		case 16: {
			/* Helipad */
			_entityClass = QGVAR(civilian_hangar);
			_markerType = QGVAR(icon_helipad);
			_markerColor = "ColorOrange";
		};
		case 17: {
			/* Aircraft Dealer */
			_entityClass = QGVAR(civilian_cardealer);
			_markerType = QGVAR(icon_aircraftdealer);
			_markerColor = "ColorOrange";
		};
		case 18: {
			/* Base Builder */
			_entityClass = QGVAR(civilian_builder);
			_markerType = QGVAR(icon_pickaxe);
			_markerScale = 0;
		};
};

//INFO_2("creating agent _entityClass=%1 _poi_type=%2",_entityClass,_poi_type);

private _entity = objNull;
private _spawnPointMarker = objNull;
private _storePointMarker = objNull;
private _location = objNull;
private _syncedObjects = synchronizedObjects _logic;

if(count _syncedObjects > 0) then {
	{
		//systemChat format ["synced object %1 _typeOf=%2", _x, typeOf _x];

		if(_x isKindOf QGVAR(moduleLocation3den)) then {
			INFO("_x isKindOf moduleLocation3den");
			_location = _x;
		} else {
			if(_x isKindOf QGVAR(moduleSpawnPoint3den)) then {
				INFO("_x isKindOf moduleSpawnPoint3den");
				_spawnPointMarker = _poi_id + "_Spawn";
			} else {
				if(_x isKindOf QGVAR(moduleStorePoint3den)) then {
					INFO("_x isKindOf moduleStorePoint3den");
					_storePointMarker = _poi_id + "_Store";
				} else {
					_entity = _x;
				};
			};
		};
	} forEach _syncedObjects;
};

if (isNull _entity) then {
	_entity = createAgent [_entityClass, _entityPosition, [], 0, "FORM"];
};

if (isNull _location) then {
	systemChat format ["WARNING: POI %1 has no location attached!", _poi_id];
};

_entity allowDamage false;
_entity setVariable [QGVAR(POI_ID), _poi_id, true];
_entity setVariable [QGVAR(POI_NAME), _poi_name, true];
_entity setVariable [QGVAR(POI_TYPE), _poi_type, true];
_entity setVariable [QGVAR(POI_SHOP), _poi_shop, true];

switch (_poi_type) do {
		case 0: {
			/* ATM */
			_entity addAction["<img image='HG\UI\Icons\atm.paa' size='1.5'/><t color='#FF0000'>"+ _poi_name +"</t>",{_this call HG_fnc_atmAction},_poi_shop,0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
		};
		case 1: {
			/* Item Shop */
			_entity addAction["<img image='HG\UI\Icons\money.paa' size='1.5'/><t color='#FF0000'>"+ _poi_name +"</t>",{_this call HG_fnc_dialogOnLoadItems},_poi_shop,0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
		};
		case 2: {
			/* Gear Shop */
			_entity addAction["<img image='HG\UI\Icons\money.paa' size='1.5'/><t color='#FF0000'>"+ _poi_name +"</t>",{_this call HG_fnc_dialogOnLoadGear},_poi_shop,0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
		};
		case 3: {
			/* Vehicle Shop */
			_entity addAction["<img image='HG\UI\Icons\money.paa' size='1.5'/><t color='#FF0000'>"+ _poi_name +"</t>",{_this call HG_fnc_dialogOnLoadVehicles},[_poi_shop,_spawnPointMarker],0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
		};
		case 4: {
			/* Garage */
			_entity addAction["<img image='HG\UI\Icons\garage.paa' size='1.5'/><t color='#FF0000'>"+ _poi_name +"</t>",{_this call HG_fnc_dialogOnLoadGarage},[_poi_shop,_spawnPointMarker],0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
			_entity addAction["<img image='HG\UI\Icons\garage.paa' size='1.5'/><t color='#FF0000'>Parking</t>",{_this call HG_fnc_storeVehicleClient},[_poi_shop,_storePointMarker],0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
		};
		case 5: {
			/* Parking */
			_entity addAction["<img image='HG\UI\Icons\garage.paa' size='1.5'/><t color='#FF0000'>"+ _poi_name +"</t>",{_this call HG_fnc_storeVehicleClient},[_poi_shop,_storePointMarker],0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
			_entity addAction["<img image='HG\UI\Icons\garage.paa' size='1.5'/><t color='#FF0000'>Garage</t>",{_this call HG_fnc_dialogOnLoadGarage},[_poi_shop,_spawnPointMarker],0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
		};
		case 6: {
			/* Car Dealer */
			_entity addAction["<img image='HG\UI\Icons\car.paa' size='1.5'/><t color='#FF0000'>"+ _poi_name +"</t>",{_this call HG_fnc_dialogOnLoadDealer},_poi_shop,0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
		};
		case 7: {
			/* Trader */
			_entity addAction["<img image='HG\UI\Icons\money.paa' size='1.5'/><t color='#FF0000'>"+ _poi_name +"</t>",{_this call HG_fnc_dialogOnLoadTrader},_poi_shop,0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
		};
		case 8: {
			/* Pharmacy */
			_entity addAction["<img image='HG\UI\Icons\painkiller.paa' size='1.5'/><t color='#FF0000'>"+ _poi_name +"</t>",{_this call HG_fnc_dialogOnLoadItems},_poi_shop,0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
		};
		case 9: {
			/* Hangar */
			_entity addAction["<img image='HG\UI\Icons\hangar.paa' size='1.5'/><t color='#FF0000'>"+ _poi_name +"</t>",{_this call HG_fnc_dialogOnLoadGarage},[_poi_shop,_spawnPointMarker],0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
			_entity addAction["<img image='HG\UI\Icons\hangar.paa' size='1.5'/><t color='#FF0000'>Park Plane</t>",{_this call HG_fnc_storeVehicleClient},[_poi_shop,_storePointMarker],0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
		};
		case 10: {
			/* Weapon Shop */
			_entity addAction["<img image='HG\UI\Icons\gun.paa' size='1.5'/><t color='#FF0000'>"+ _poi_name +"</t>",{_this call HG_fnc_dialogOnLoadGear},_poi_shop,0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
			_entity addAction["<img image='HG\UI\Icons\money.paa' size='1.5'/><t color='#FF0000'>Ammo Shop</t>",{_this call HG_fnc_dialogOnLoadItems},"HG_MagazinesShop",0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
		};
		case 11: {
			/* Mechanic */
			_entity addAction["<img image='HG\UI\Icons\wrench.paa' size='1.5'/><t color='#FF0000'>"+ _poi_name +"</t>",{_this call HG_fnc_dialogOnLoadItems},_poi_shop,0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
		};
		case 12: {
			/* Doctor */
			_entity addAction["<img image='HG\UI\Icons\medic.paa' size='1.5'/><t color='#FF0000'>"+ _poi_name +"</t>",{_this call HG_fnc_dialogOnLoadItems},_poi_shop,0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
		};
		case 13: {
			/* Fuel Shop */
			_entity addAction["<img image='HG\UI\Icons\fuel.paa' size='1.5'/><t color='#FF0000'>"+ _poi_name +"</t>",{_this call HG_fnc_dialogOnLoadVehicles},[_poi_shop,_spawnPointMarker],0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
		};
		case 14: {
			/* Heli Shop */
			_entity addAction["<img image='HG\UI\Icons\helicopter.paa' size='1.5'/><t color='#FF0000'>"+ _poi_name +"</t>",{_this call HG_fnc_dialogOnLoadVehicles},[_poi_shop,_spawnPointMarker],0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
		};
		case 15: {
			/* Plane Shop */
			_entity addAction["<img image='HG\UI\Icons\plane.paa' size='1.5'/><t color='#FF0000'>"+ _poi_name +"</t>",{_this call HG_fnc_dialogOnLoadVehicles},[_poi_shop,_spawnPointMarker],0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
		};
		case 16: {
			/* Helipad */
			_entity addAction["<img image='HG\UI\Icons\helipad.paa' size='1.5'/><t color='#FF0000'>"+ _poi_name +"</t>",{_this call HG_fnc_dialogOnLoadGarage},[_poi_shop,_spawnPointMarker],0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
			_entity addAction["<img image='HG\UI\Icons\helipad.paa' size='1.5'/><t color='#FF0000'>Park Helo</t>",{_this call HG_fnc_storeVehicleClient},[_poi_shop,_storePointMarker],0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
		};
		case 17: {
			/* Aircraft Dealer */
			_entity addAction["<img image='HG\UI\Icons\money.paa' size='1.5'/><t color='#FF0000'>"+ _poi_name +"</t>",{_this call HG_fnc_dialogOnLoadDealer},_poi_shop,0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
		};
		case 18: {
			/* Base Builder */
			_entity addAction["<img image='HG\UI\Icons\money.paa' size='1.5'/><t color='#FF0000'>"+ _poi_name +"</t>",{_this call HG_fnc_dialogOnLoadItems},_poi_shop,0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
		};
};


private _markerName = _poi_id;
createMarker [_markerName, _entityPosition];
_markerName setMarkerType _markerType;
_markerName setMarkerSize [_markerScale, _markerScale];
_markerName setMarkerColor _markerColor;
