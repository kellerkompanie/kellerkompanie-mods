#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

/*
 * Argument:
 * 0: Action name <STRING>
 * 1: Name of the action shown in the menu <STRING>
 * 2: Icon <STRING>
 * 3: Statement <CODE>
 * 4: Condition <CODE>
 */
 private _action = [QGVAR(refill), "Refill Canteen", QPATHTOF(ui\icon_canteen_action), {_player call FUNC(fillCanteen)}, {_player call FUNC(hasCanteen)}] call ace_interact_menu_fnc_createAction;

{
	/*
	 * Argument:
	 * 0: TypeOf of the class <STRING>
	 * 1: Type of action, 0 for actions, 1 for self-actions <NUMBER>
	 * 2: Parent path of the new action <ARRAY>
	 * 3: Action <ARRAY>
	 * 4: Use Inheritance (Default: False) <BOOL><OPTIONAL>
	 */
	[_x, 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
} forEach [
	"Land_Water_source_F",
	"StorageBladder_02_water_forest_F",
	"StorageBladder_02_water_sand_F",
	"Land_WaterTank_01_F",
	"Land_WaterTank_02_F",
	"Land_WaterTank_03_F",
	"Land_WaterTank_04_F",
	"Land_WaterTower_01_F",
	"Land_WaterCooler_01_new_F",
	"Land_WaterCooler_01_old_F",
	"Land_BottlePlastic_V2_F",
	"Land_WaterBottle_01_full_F",
	"Land_WaterBottle_01_pack_F",
	"Land_WaterBottle_01_stack_F",
	"WaterPump_01_forest_F",
	"WaterPump_01_sand_F",
	"Land_BarrelWater_F",
	"Land_WaterBarrel_F",
	"Land_WaterTank_F",
	"Land_Barrel_water",
	"Land_pumpa",
	"Land_Misc_Well_C_EP1",
	"CUP_sink",
	"Land_Sink_F"];

ADDON = true;
