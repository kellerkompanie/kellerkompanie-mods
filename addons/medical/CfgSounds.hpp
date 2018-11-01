class CfgSounds {
	sounds[] = {QGVAR(PainkillerSound)};

	class GVAR(PainkillerSound) {
		name = QGVAR(PainkillerSound);
		sound[] = {QPATHTOF(sounds\take_painkiller.ogg), 3, 1};
		titles[] = {};
	};
};
