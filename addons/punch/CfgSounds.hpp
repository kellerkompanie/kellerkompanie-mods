class CfgSounds {
	sounds[] += {QGVAR(PunchSound), QGVAR(InhaleSound), QGVAR(ShovelSound), QGVAR(KillSound)};

	class GVAR(PunchSound) {
		name = QGVAR(PunchSound);
		sound[] = {QPATHTOF(sounds\punchSound.ogg), 3, 1};
		titles[] = {};
	};

	class GVAR(InhaleSound) {
		name = QGVAR(InhaleSound);
		sound[] = {QPATHTOF(sounds\inhaleSound.ogg), 3, 1};
		titles[] = {};
	};

	class GVAR(ShovelSound) {
		name = QGVAR(ShovelSound);
		sound[] = {QPATHTOF(sounds\shovelSound.ogg), 3, 1};
		titles[] = {};
	};

	class GVAR(KillSound) {
		name = QGVAR(KillSound);
		sound[] = {QPATHTOF(sounds\neckSound.ogg), 3, 1};
		titles[] = {};
	};
};
