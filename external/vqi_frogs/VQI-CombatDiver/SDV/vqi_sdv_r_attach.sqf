//
//
private ["_distSDV"];

_distSDV = VQISDV2 distance SDVLOCK;



if (_distSDV < 4) then {
[VQISDV2,"VQI_Sound_SDV_EngageLock"] call CBA_fnc_globalSay3d;
 VQISDV2 attachTo [HMSProteus,[-1.22,-2,5]];
 VQISDV2 setDir 180;
 VQISDV2 setVectorUp [0,-0.06,1];

} else {
	hint "Lock FAIL - Too Far Away";
};