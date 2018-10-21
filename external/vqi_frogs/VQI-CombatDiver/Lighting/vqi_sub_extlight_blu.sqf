// Turn ON SDV/Submarine Ext Lighting - BLU - HIGH Visibility
//



if (!isNil "SUBLIGHT_BLU_LF") then { deleteVehicle SUBLIGHT_BLU_LF; }; //SDV - LEft Front
if (!isNil "SUBLIGHT_GLU_RF") then { deleteVehicle SUBLIGHT_BLU_RF; }; //SDV - Right Front
if (!isNil "SUBLIGHT_GLU_LR") then { deleteVehicle SUBLIGHT_BLU_LR; }; //SDV - Left Rear
if (!isNil "SUBLIGHT_GLU_RR") then { deleteVehicle SUBLIGHT_BLU_RR; }; //SDV - Right Rear
sleep 1;
if (!isNil "SUBLIGHT_BLU_BS") then { deleteVehicle SUBLIGHT_BLU_BS; }; //SUB Bottom Stern
if (!isNil "SUBLIGHT_BLU_BA") then { deleteVehicle SUBLIGHT_BLU_BA; }; //SUB Bottom Aft
if (!isNil "SUBLIGHT_BLU_BC") then { deleteVehicle SUBLIGHT_BLU_BC; }; //SUB Bottom Centre
if (!isNil "SUBLIGHT_BLU_BF") then { deleteVehicle SUBLIGHT_BLU_BF; }; //SUB Bottom Front
if (!isNil "SUBLIGHT_BLU_BB") then { deleteVehicle SUBLIGHT_BLU_BB; }; //SUB Bottom Bow
sleep 1;

//SDV: Front Lighting------------------------------------------------
SUBLIGHT_BLU_LF = "chemlight_blue" createVehicle (position HMSProteus);
SUBLIGHT_BLU_LF attachTo [HMSProteus,[ 1.89, -7, 2.82]];

SUBLIGHT_BLU_RF = "chemlight_blue" createVehicle (position HMSProteus);
SUBLIGHT_BLU_RF attachTo [HMSProteus,[-1.85, -7, 2.82]];



//SDV: Rear Lighting-------------------------------------------------
SUBLIGHT_BLU_LR = "chemlight_blue" createVehicle (position HMSProteus);
SUBLIGHT_BLU_LR attachTo [HMSProteus,[ 1.26, 7, 3.61]];

SUBLIGHT_BLU_RR = "chemlight_blue" createVehicle (position HMSProteus);
SUBLIGHT_BLU_RR attachTo [HMSProteus,[-1.22, 7, 3.61]];





/////////////////////////////////////////////////////////////////////
//SUB: Bottom Lighting ----------------------------------------------
SUBLIGHT_BLU_BS = "chemlight_blue" createVehicle (position HMSProteus);
SUBLIGHT_BLU_BS attachTo [HMSProteus,[0, 25, -7.83]];

SUBLIGHT_BLU_BA = "chemlight_blue" createVehicle (position HMSProteus);
SUBLIGHT_BLU_BA attachTo [HMSProteus,[0, 15, -7.83]];

SUBLIGHT_BLU_BC = "chemlight_blue" createVehicle (position HMSProteus);
SUBLIGHT_BLU_BC attachTo [HMSProteus,[0,  0, -7.83]];

SUBLIGHT_BLU_BF = "chemlight_blue" createVehicle (position HMSProteus);
SUBLIGHT_BLU_BF attachTo [HMSProteus,[0, -15, -7.83]];

SUBLIGHT_BLU_BB = "chemlight_blue" createVehicle (position HMSProteus);
SUBLIGHT_BLU_BB attachTo [HMSProteus,[0, -25, -7.83]];






///////////////
/* NOTES:


*/