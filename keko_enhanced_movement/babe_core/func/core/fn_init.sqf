if (IsDedicated) exitWith {};


/////////////////////////////////////////////////////////////////////

babe_core_keysdown = [];
babe_core_keysbusy = [];

babe_core_busy = false;

babe_core_EHs = [];


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


_exile = !isNull (configfile >> "CfgPatches" >> "exile_client");

if (!_exile) then 
{		
	["BABE_MAINLOOP", "onEachFrame", babe_core_fnc_handleEHs] call BIS_fnc_addStackedEventHandler;	
} else
{
	BABE_MAINLOOP = addMissionEventHandler ["EachFrame", {call babe_core_fnc_handleEHs}];
};


["EH_keyH", {true}, [], "babe_core_fnc_keys", [], false, {}, [], 0] call babe_core_fnc_addEH;


["EH_ModMenu", 
{
	!isNull (findDisplay 157) &&
	{!isNull ((findDisplay 157) displayCtrl 101)}
}, [], 
"babe_core_fnc_modmenu_init", [], true, {}, [], 0] call babe_core_fnc_addEH;


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



babe_core_init = true;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


call babe_core_fnc_cachemoddata;


