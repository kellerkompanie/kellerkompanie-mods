class CfgPatches
{
	class keko_audio_fun
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
	class keko_audio_fun
	{
		displayName = "Fun";
	};
};

class CfgMusic
{
	class keko_audio_fun_drunken
	{
		name = "Druken Sailor";
		sound[] = {"\keko_audio_fun\Drunken_Sailer_-_Irish_Rovers.ogg",1,1};
		theme = "Score";
		duration = "159";
		musicClass = "keko_audio_fun";
	};
	class keko_audio_fun_hardbass
	{
		name = "Hard Bass School";
		sound[] = {"\keko_audio_fun\Hard_Bass_School_-_narkotik_kal.ogg",1,1};
		theme = "Score";
		duration = "235";
		musicClass = "keko_audio_fun";
	};
	class keko_audio_fun_initiald
	{
		name = "Initial D - Deja Vu";
		sound[] = {"\keko_audio_fun\Initial_D_-_Deja_vu.ogg",1,1};
		theme = "Score";
		duration = "264";
		musicClass = "keko_audio_fun";
	};
	class keko_audio_fun_oktoberklub
	{
		name = "Was wollen wir trinken";
		sound[] = {"\keko_audio_fun\Oktoberklub_-_Was_wollen_wir_trinken.ogg",1,1};
		theme = "Score";
		duration = "253";
		musicClass = "keko_audio_fun";
	};
	class keko_audio_fun_saleel
	{
		name = "Saleel Sawarim (ISIS Propaganda)";
		sound[] = {"\keko_audio_fun\Saleel_Sawarim.ogg",1,1};
		theme = "Score";
		duration = "176";
		musicClass = "keko_audio_fun";
	};
};