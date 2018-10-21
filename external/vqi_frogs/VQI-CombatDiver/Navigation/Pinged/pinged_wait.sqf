//
//
if (VQI_FROGS_HINTS == 1) then { hint "pinged_wait.sqf"; };
sleep 1;



private ["_subs","_pinged","_trg1","_trg2","_trg3","_trg4"];





if (subWait1hr) then {

	33 cutText ["", "BLACK"]; sleep 1;
	systemChat "Aye, Aye, Sir! Lets wait 'em out...."; sleep 3;
	33 cutText ["...1 Hour Later...", "BLACK IN", 20];
	


	skipTime 1; // 1 hr
	subWait1hr = false;

	// Near Player Sub (HMS Proteus) - max distance: ave, total, torp max, etc?
	//_subs = player nearEntities [["Land_Battery_F","Land_CarBattery_01_F","Land_CarBattery_02_F"], 3000];	// testing
	_subs = nearestObjects [HMSProteus,["VQI_SUB_Class1","VQI_SUB_Class2","VQI_SUB_Class3","VQI_SUB_Class4","VQI_SUB_Class5","VQI_SUB_Class6"], 3000];
	

	if (count _subs > 0) then { 

		// 33%
		if (random 100 < 33) then {
			
			_pinged = _subs select 0;
			//hint format ["%1",_pinged];
			
			
			_trg1 = _pinged nearObjects ["EmptyDetector",300]; sleep 0.1; deleteVehicle (_trg1 select 0); sleep 0.1;	// Sonar
			_trg2 = _pinged nearObjects ["EmptyDetector",300]; sleep 0.1; deleteVehicle (_trg2 select 0); sleep 0.1;	// Torps
			_trg3 = _pinged nearObjects ["EmptyDetector",300]; sleep 0.1; deleteVehicle (_trg3 select 0); sleep 0.1;	// Missiles
			_trg4 = _pinged nearObjects ["EmptyDetector",300]; sleep 0.1; deleteVehicle (_trg4 select 0); sleep 0.1;	// SAMs
			
			deleteVehicle _pinged; 
			systemChat "SONAR ROOM is reporting a fading signal...";
			
		} else {
			//hint "Enemy Sub still there?";
			systemChat "SONAR ROOM is still indicating possible Enemy Sub nearby.";
		};
		
	} else { 
		//hint "No Subs?";
		systemChat "SONAR ROOM is picking up nothing...";
	};
	
	sleep 120;
	subWait1hr = true;
	
} else {
	hint "Cool Down Time: 2min \n Try again later";
	subWait1hr = false;
};








sleep 1;
//hint "pinged_wait.sqf -END-";