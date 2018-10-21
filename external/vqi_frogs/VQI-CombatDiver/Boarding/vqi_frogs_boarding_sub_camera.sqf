// Various Effects, ScreenShots, Audio, Camera Work, etc
// W-I-P


private ["_cam"]; 

//_unit = _this select 0;
 
 
 
 
// HMS Proteus -- L/R - F/B - Z 
_cam = "camera" camCreate [(position HMSProteusS select 0) -10, (position HMSProteusS select 1) -100, (position HMSProteusS select 2) +1];  
_cam camSetTarget HMSProteusS;  
_cam cameraEffect ["internal","BACK"];  
_cam camCommit 0;  
  
_cam camSetPos [(position HMSProteusS select 0) -30, (position HMSProteusS select 1) +75, (position HMSProteusS select 2) +5];  
_cam camCommit 20;  
  
  
  
  
waitUntil { camCommitted _cam; };

// Black
cutText ["", "BLACK", 3];







// Terminate Camera
_cam cameraEffect ["terminate","BACK"];
cutText ["", "BLACK IN", 10];






//////////////////
/* NOTES:



*/