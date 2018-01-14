// by LuzifR

[] spawn {
	private ["_musicarray","_music","_length","_random_time"];

	_musicarray = ["1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","32","33","34","35"];

	15 fadeMusic 0;
	sleep 15;

	while {true} do {

		_music = _musicarray select floor random count _musicarray;
		_length = getNumber(configFile >> "cfgMusic" >> _music >> "duration");
		_random_time = (random 8) + 1;

		sleep _random_time;
		0 fadeMusic 1;

		playMusic _music;
		sleep _length;
	};
};

if (true) exitWith {};


