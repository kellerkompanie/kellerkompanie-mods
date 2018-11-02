#include "script_component.hpp"

// leader
// JTAC
// Sergeant
// Zeus

private _crates = [];
if(GVAR(customLogistics) == 2) then {
	_crates = [["Kisten", GVAR(customCrates)]];
}
else {
	_crates = getArray (configFile >> "kekoFaction" >> EGVAR(loadout,loadoutFaction) >> "crates");
};

private _action = [QGVAR(supplyDropUAV), "Call UAV Supply", QPATHTOF(ui\icon_uav), {}, {true}] call ace_interact_menu_fnc_createAction;;
{
	[_x, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToClass;
} forEach [
  QEGVAR(faction_generic,blufor_zeus),
  QEGVAR(faction_generic,blufor_lead),
  QEGVAR(faction_generic,blufor_sergeant),
  QEGVAR(faction_generic,blufor_jtac),
  QEGVAR(faction_generic,blufor_sql),
  QEGVAR(faction_generic,indfor_zeus),
  QEGVAR(faction_generic,indfor_lead),
  QEGVAR(faction_generic,indfor_sergeant),
  QEGVAR(faction_generic,indfor_jtac),
  QEGVAR(faction_generic,indfor_sql),
  QEGVAR(faction_generic,opfor_zeus),
  QEGVAR(faction_generic,opfor_lead),
  QEGVAR(faction_generic,opfor_sergeant),
  QEGVAR(faction_generic,opfor_jtac),
  QEGVAR(faction_generic,opfor_sql)];

private _i = 0;
{
	private _section_crates = _x select 1;
	{
		private _crateName = "";
		private _action = [];
		if(GVAR(customLogistics) == 2) then {
			_crateName = _x select 0;

			private _actionName = format ["keko_logistics_supplyDropUAV_%1", _i];
			private _actionTitle = format ["%1", _crateName];
			private _actionStatement = compile (format ["[%3, getPos _player, '%1'] call keko_logistics_fnc_supplyDrone;", _crateName, GVAR(uavSupplyBase)]);
			_action = [_actionName, _actionTitle, QPATHTOF(ui\icon_uav), _actionStatement, {true}] call ace_interact_menu_fnc_createAction;
		}
		else {
			_crateName = getText (configFile >> "kekoFaction" >> EGVAR(loadout,loadoutFaction) >> _x >> "name");
			private _crateCfg = EGVAR(loadout,loadoutFaction);

			private _actionName = format ["keko_logistics_supplyDropUAV_%1", _i];
			private _actionTitle = format ["%1", _crateName];
			private _actionStatement = compile (format ["[%3, getPos _player, '%1', '%2'] call keko_logistics_fnc_supplyDrone;", _crateCfg, _x, GVAR(uavSupplyBase)]);
			_action = [_actionName, _actionTitle, QPATHTOF(ui\icon_uav), _actionStatement, {true}] call ace_interact_menu_fnc_createAction;
		};

		{
		   /*
			* Argument:
			* 0: TypeOf of the class <STRING>
			* 1: Type of action, 0 for actions, 1 for self-actions <NUMBER>
			* 2: Parent path of the new action <ARRAY>
			* 3: Action <ARRAY>
			* 4: Use Inheritance (Default: False) <BOOL><OPTIONAL>
			*/
		   [_x, 1, ["ACE_SelfActions", QGVAR(supplyDropUAV)], _action] call ace_interact_menu_fnc_addActionToClass;
		} forEach [
		   QEGVAR(faction_generic,blufor_zeus),
		   QEGVAR(faction_generic,blufor_lead),
		   QEGVAR(faction_generic,blufor_sergeant),
		   QEGVAR(faction_generic,blufor_jtac),
		   QEGVAR(faction_generic,blufor_sql),
		   QEGVAR(faction_generic,indfor_zeus),
		   QEGVAR(faction_generic,indfor_lead),
		   QEGVAR(faction_generic,indfor_sergeant),
		   QEGVAR(faction_generic,indfor_jtac),
		   QEGVAR(faction_generic,indfor_sql),
		   QEGVAR(faction_generic,opfor_zeus),
		   QEGVAR(faction_generic,opfor_lead),
		   QEGVAR(faction_generic,opfor_sergeant),
		   QEGVAR(faction_generic,opfor_jtac),
		   QEGVAR(faction_generic,opfor_sql)];

		_i = _i + 1;
	} forEach _section_crates;
} forEach _crates;
