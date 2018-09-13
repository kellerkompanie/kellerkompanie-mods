class CfgSounds {
	sounds[] = {QGVAR(KillSound)};

	class GVAR(KillSound) {
		name = QGVAR(KillSound);
		sound[] = {QPATHTOF(sounds\neckSound.ogg), 3, 1};
		titles[] = {};
	};
};
