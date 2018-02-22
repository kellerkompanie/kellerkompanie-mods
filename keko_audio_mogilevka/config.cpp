#define _ARMA_


//Class config.cpp{
class CfgPatches
{
	class keko_audio_mogilevka
	{
		name = "Kellerkompanie Audio - Mogilevka";
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
	class keko_audio_mogilevka
	{
		displayName = "Mogilevka";
	};
};

class CfgMusic
{
	class keko_audio_mogilevka_arbeiter
	{
		name = "Ernst Busch - Arbeiter, Bauern";
		sound[] = {"\keko_audio_mogilevka\mogilevka\arbeiter_bauern.ogg",1,1};
		musicClass = "keko_audio_mogilevka";
		duration = "135";
	};
};