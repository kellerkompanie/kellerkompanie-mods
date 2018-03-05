class CfgPatches
{
	class keko_police
	{
		units[] = {
            
        };
		requiredVersion = 1.80;
        requiredAddons[] = {
            "ace_main"};
        author = "Schwaggot";
        authorUrl = "http://kellerkompanie.com";
		version = 1.0; 
	};
};

class CfgSounds
{
	sounds[] = {};
	class keko_police_shout1
	{
		// how the sound is referred to in the editor (e.g. trigger effects)
		name = "keko_police_shout1";

		// filename, volume, pitch, distance
		sound[] = {"@keko_police\sounds\halt_polizei.ogg", 1, 1, 100};

		// subtitle delay in seconds, subtitle text
		titles[] = { 1, "*Hände hoch Polizei!*" };
	};
	class keko_police_surrender1
	{
		name = "keko_police_surrender1";
		sound[] = {"@keko_police\sounds\geben_auf.ogg", 1, 1, 100};
		titles[] = { 1, "*Michse geben auf!*" };
	};
	class keko_police_fuckyou1
	{
		name = "keko_police_fuckyou1";
		sound[] = {"@keko_police\sounds\fuck_you.ogg", 1, 1, 100};
		titles[] = { 1, "*Fuck you m8!*" };
	};
};