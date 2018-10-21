//
//
private ["_distSDV"];

_distSDV = VQISDV1 distance SDVLOCK;



if (_distSDV < 4) then {
[VQISDV1,"VQI_Sound_SDV_EngageLock"] call CBA_fnc_globalSay3d;
 VQISDV1 attachTo [HMSProteus,[1.21,-2,5]];
 VQISDV1 setDir 180;
 VQISDV1 setVectorUp [0,-0.06,1];

} else {
	hint "Lock FAIL - Too Far Away";
};