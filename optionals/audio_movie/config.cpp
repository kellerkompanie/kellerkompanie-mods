class CfgPatches
{
	class keko_audio_movie
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
	class keko_audio_movie
	{
		displayName = "Filmmusik";
	};
};

class CfgMusic
{
	class keko_audio_movie_bandofbrothers
	{
		name = "Band of Brothers Theme";
		sound[] = {"\keko_audio_movie\Band_of_Brothers_Theme.ogg",1,1};
		theme = "Score";
		duration = "145";
		musicClass = "keko_audio_movie";
	};
	class keko_audio_movie_pirates
	{
		name = "Pirates of the Caribbean Theme";
		sound[] = {"\keko_audio_movie\Pirates_Of_The_Caribbean.ogg",1,1};
		theme = "Score";
		duration = "167";
		musicClass = "keko_audio_movie";
	};
};