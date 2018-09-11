class CfgSounds {
	sounds[] = {"keko_PunchSound", "keko_InhaleSound", "keko_ShovelSound"};

	class keko_PunchSound {
		name = "keko_PunchSound";
		sound[] = {QPATHTOF(sounds\punchSound.ogg), 3, 1};
		titles[] = {};
	};

	class keko_InhaleSound {
		name = "keko_InhaleSound";
		sound[] = {QPATHTOF(sounds\inhaleSound.ogg), 3, 1};
		titles[] = {};
	};

	class keko_ShovelSound {
		name = "keko_ShovelSound";
		sound[] = {QPATHTOF(sounds\shovelSound.ogg), 3, 1};
		titles[] = {};
	};
};