// Turn ON SDV/Submarine Ext Lighting - RED - Low Visibility
//



if (!isNil "SUBLIGHT_RED_LF") then { deleteVehicle SUBLIGHT_RED_LF; };
if (!isNil "SUBLIGHT_RED_RF") then { deleteVehicle SUBLIGHT_RED_RF; };
if (!isNil "SUBLIGHT_RED_LR") then { deleteVehicle SUBLIGHT_RED_LR; };
if (!isNil "SUBLIGHT_RED_RR") then { deleteVehicle SUBLIGHT_RED_RR; };
if (!isNil "SDVLIGHT1") then { deleteVehicle SDVLIGHT1; };
if (!isNil "DDSLIGHT1") then { deleteVehicle DDSLIGHT1; };
sleep 1;

//SDV: Front Lighting-----------------------------------------------
SUBLIGHT_RED_LF = "chemlight_red" createVehicle (position HMSProteus);
SUBLIGHT_RED_LF attachTo [HMSProteus,[ 1.89,-4,3.03]];

SUBLIGHT_RED_RF = "chemlight_red" createVehicle (position HMSProteus);
SUBLIGHT_RED_RF attachTo [HMSProteus,[-1.85,-4,3.03]];

//SDV: Rear Lighting-----------------------------------------------
SUBLIGHT_RED_LR = "chemlight_red" createVehicle (position HMSProteus);
SUBLIGHT_RED_LR attachTo [HMSProteus,[ 1.26,4,3.49]];

SUBLIGHT_RED_RR = "chemlight_red" createVehicle (position HMSProteus);
SUBLIGHT_RED_RR attachTo [HMSProteus,[-1.22,4,3.49]];

//Start/SDV and DDS Lighting----------------------------------------
SDVLIGHT1 = "chemlight_red" createVehicle (position HMSProteus);
SDVLIGHT1 attachTo [HMSProteus,[0.05,-4.35,3.14]];

DDSLIGHT1 = "chemlight_red" createVehicle (position HMSProteus);  
DDSLIGHT1 attachTo [HMSProteus,[0.05,17,3.83]];


////////////
/* NOTES:


*/
