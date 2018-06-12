if (IsDedicated) exitWith {};




//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


0 = [] spawn
{
	waituntil {!isNull player};
	
	player setVariable ["babe_em_vars", [false, false, true]];
};

EM_heightsOn = [0.25,1,2,2.25,3];

EM_heightsOver = [0.25,1.1,1.7,2.25,3];

EM_weightlimits = [999, 999, 999, 999]; 

EM_enable = [true, true];

EM_blacklist_obj = 
[
	"Land_Mil_WiredFence_F",
	"Land_New_WireFence_5m_F",
	"Land_New_WireFence_10m_F"
];

EM_debug = false;


EM_fd_mu = 1;
EM_fd_min_dam_h = 2.5;
EM_fd_debug = false;

EM_default_animspeedcoef = getAnimSpeedCoef player;

babe_em_help = "babe_helper" createVehicleLocal [0,0,0];

if (!isMultiplayer) then
{
	babe_em_debug_a = "Sign_Arrow_Green_F" createVehicleLocal [0,0,0];
	babe_em_debug_b = "Sign_Arrow_F" createVehicleLocal [0,0,0];
	babe_em_debug_c = "Sign_Arrow_Yellow_F" createVehicleLocal [0,0,0];
};

["EH_em_walkonstuff", {true}, [], babe_em_fnc_walkonstuff, 
[], false, {}, [], -1] call babe_core_fnc_addEH;


babe_em_init = true;

