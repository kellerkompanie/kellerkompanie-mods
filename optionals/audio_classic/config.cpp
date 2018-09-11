class CfgPatches
{
	class keko_audio_classic
	{
		name = "Kellerkompanie Audio";
		author = "Schwaggot";
		url = "http://kellerkompanie.com";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgMusicClasses
{
	class keko_audio_classic
	{
		displayName = "Klassik";
	};
};

class CfgMusic
{
	class keko_audio_classic_elise
	{
		name = "Beethove - Für Elise";
		sound[] = {"\keko_audio_classic\Fuer_Elise.ogg",1,1};
		theme = "Score";
		duration = "156";
		musicClass = "keko_audio_classic";
	};
	class keko_audio_classic_nuvolebianche
	{
		name = "Ludovico Einaudi - Nuvole Bianche";
		sound[] = {"\keko_audio_classic\Ludovico_Einaudi_-_Nuvole_Bianche.ogg",1,1};
		theme = "Score";
		duration = "362";
		musicClass = "keko_audio_classic";
	};
	class keko_audio_classic_lacrimosa
	{
		name = "Mozart - Lacrimosa";
		sound[] = {"\keko_audio_classic\Mozart_-_Lacrimosa.ogg",1,1};
		theme = "Score";
		duration = "189";
		musicClass = "keko_audio_classic";
	};
};