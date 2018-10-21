// Turn ON SDV/Submarine Ext Lighting - GRN - Medium Visibility
//



if (!isNil "SUBLIGHT_GRN_LF") then { deleteVehicle SUBLIGHT_GRN_LF; };
if (!isNil "SUBLIGHT_GRN_RF") then { deleteVehicle SUBLIGHT_GRN_RF; };
if (!isNil "SUBLIGHT_GRN_LR") then { deleteVehicle SUBLIGHT_GRN_LR; };
if (!isNil "SUBLIGHT_GRN_RR") then { deleteVehicle SUBLIGHT_GRN_RR; };
sleep 1;

//Front Lighting
SUBLIGHT_GRN_LF = "chemlight_green" createVehicle (position HMSProteus);
SUBLIGHT_GRN_LF attachTo [HMSProteus,[ 1.89,-5,2.97]];

SUBLIGHT_GRN_RF = "chemlight_green" createVehicle (position HMSProteus);
SUBLIGHT_GRN_RF attachTo [HMSProteus,[-1.85,-5,2.97]];



//Rear Lighting
SUBLIGHT_GRN_LR = "chemlight_green" createVehicle (position HMSProteus);
SUBLIGHT_GRN_LR attachTo [HMSProteus,[ 1.26,5,3.53]];

SUBLIGHT_GRN_RR = "chemlight_green" createVehicle (position HMSProteus);
SUBLIGHT_GRN_RR attachTo [HMSProteus,[-1.22,5,3.53]];


////////////////
/* NOTES:


*/