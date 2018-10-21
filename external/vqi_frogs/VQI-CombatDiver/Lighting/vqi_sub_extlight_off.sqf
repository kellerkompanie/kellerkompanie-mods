// Turn OFF SDV/Submarine Ext Lighting - NONE - BLACKOUT
//

if (!isNil "SDVLIGHT1") then { deleteVehicle SDVLIGHT1; };
if (!isNil "DDSLIGHT1") then { deleteVehicle DDSLIGHT1; };
sleep 0.2;
if (!isNil "SUBLIGHT_BLU_LF") then { deleteVehicle SUBLIGHT_BLU_LF; }; //SDV - Left Front
if (!isNil "SUBLIGHT_BLU_RF") then { deleteVehicle SUBLIGHT_BLU_RF; }; //SDV - Right Front
if (!isNil "SUBLIGHT_BLU_LR") then { deleteVehicle SUBLIGHT_BLU_LR; }; //SDV - Left Rear
if (!isNil "SUBLIGHT_BLU_RR") then { deleteVehicle SUBLIGHT_BLU_RR; }; //SDV - Right Rear
sleep 0.2;
if (!isNil "SUBLIGHT_BLU_BS") then { deleteVehicle SUBLIGHT_BLU_BS; }; //SUB Bottom Stern
if (!isNil "SUBLIGHT_BLU_BA") then { deleteVehicle SUBLIGHT_BLU_BA; }; //SUB Bottom Aft
if (!isNil "SUBLIGHT_BLU_BC") then { deleteVehicle SUBLIGHT_BLU_BC; }; //SUB Bottom Centre
if (!isNil "SUBLIGHT_BLU_BF") then { deleteVehicle SUBLIGHT_BLU_BF; }; //SUB Bottom Front
if (!isNil "SUBLIGHT_BLU_BB") then { deleteVehicle SUBLIGHT_BLU_BB; }; //SUB Bottom Bow
sleep 0.2;
if (!isNil "SUBLIGHT_GRN_LF") then { deleteVehicle SUBLIGHT_GRN_LF; };
if (!isNil "SUBLIGHT_GRN_RF") then { deleteVehicle SUBLIGHT_GRN_RF; };
if (!isNil "SUBLIGHT_GRN_LR") then { deleteVehicle SUBLIGHT_GRN_LR; };
if (!isNil "SUBLIGHT_GRN_RR") then { deleteVehicle SUBLIGHT_GRN_RR; };
sleep 0.2;
if (!isNil "SUBLIGHT_RED_LF") then { deleteVehicle SUBLIGHT_RED_LF; };
if (!isNil "SUBLIGHT_RED_RF") then { deleteVehicle SUBLIGHT_RED_RF; };
if (!isNil "SUBLIGHT_RED_LR") then { deleteVehicle SUBLIGHT_RED_LR; };
if (!isNil "SUBLIGHT_RED_RR") then { deleteVehicle SUBLIGHT_RED_RR; };

/////////////////////////
/* NOTES:


*/