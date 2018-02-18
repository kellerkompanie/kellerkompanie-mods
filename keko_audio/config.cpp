#define _ARMA_


//Class config.cpp{
class CfgPatches
{
	class keko_audio
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
	class keko_audio_rac
	{
		displayName = "Red Army Choir";
	};

	class keko_audio_horror_music_pack
	{
		displayName = "Horror";
	};

	class keko_audio_fallout3
	{
		displayName = "Fallout 3";
	};

	class keko_audio_fallout4
	{
		displayName = "Fallout 4";
	};

	class keko_audio_tucker_vietnam
	{
		displayName = "Vietnam";
	};

	class keko_audio_colonial_dagger
	{
		displayName = "Misc Music";
	};
};

class CfgMusic
{
	class keko_audio_rac_march
	{
		name = "March Of The Defenders Of Moscow";
		sound[] = {"\keko_audio\rac\march.ogg",1,1};
		theme = "Score";
		duration = "213";
		musicClass = "keko_audio_rac";
	};
	class keko_audio_rac_letsgo
	{
		name = "Let's Go";
		sound[] = {"\keko_audio\rac\lets_go.ogg",1,1};
		theme = "Score";
		duration = "192";
		musicClass = "keko_audio_rac";
	};
	class keko_audio_rac_kalinka
	{
		name = "Kalinka";
		sound[] = {"\keko_audio\rac\kalinka.ogg",1,1};
		theme = "Score";
		duration = "258";
		musicClass = "keko_audio_rac";
	};
	class keko_audio_rac_souliko
	{
		name = "Souliko";
		sound[] = {"\keko_audio\rac\souliko.ogg",1,1};
		theme = "Score";
		duration = "270";
		musicClass = "keko_audio_rac";
	};
	class keko_audio_rac_korobelniki
	{
		name = "Korobelniki";
		sound[] = {"\keko_audio\rac\korobelniki.ogg",1,1};
		theme = "Score";
		duration = "270";
		musicClass = "keko_audio_rac";
	};
	class keko_audio_rac_mycountry
	{
		name = "My Country";
		sound[] = {"\keko_audio\rac\my_country.ogg",1,1};
		theme = "Score";
		duration = "201";
		musicClass = "keko_audio_rac";
	};
	class keko_audio_rac_redarmy
	{
		name = "Red Army is the Strongest";
		sound[] = {"\keko_audio\rac\red_army.ogg",1,1};
		theme = "Score";
		duration = "147";
		musicClass = "keko_audio_rac";
	};
	class keko_audio_rac_anthem
	{
		name = "USSR National Anthem";
		sound[] = {"\keko_audio\rac\anthem.ogg",1,1};
		theme = "Score";
		duration = "207";
		musicClass = "keko_audio_rac";
	};
	class keko_audio_rac_katusha
	{
		name = "Katusha";
		sound[] = {"\keko_audio\rac\katusha.ogg",1,1};
		theme = "Score";
		duration = "138";
		musicClass = "keko_audio_rac";
	};




	class keko_audio_horror_music_pack_musiccalm1
	{
		name = "Music Calm 1";
		sound[] = {"\keko_audio\horror_music_pack\musiccalm1.ogg",1,1};
		theme = "calm";
		duration = "200";
		musicClass = "keko_audio_horror_music_pack";
	};
    class keko_audio_horror_music_pack_musiccalm2
	{
		name = "Music Calm 2";
		sound[] = {"\keko_audio\horror_music_pack\musiccalm2.ogg",1,1};
		theme = "calm";
		duration = "200";
		musicClass = "keko_audio_horror_music_pack";
	};
	class keko_audio_horror_music_pack_musiccalm3
	{
		name = "Music Calm 3";
		sound[] = {"\keko_audio\horror_music_pack\musiccalm3.ogg",1,1};
		theme = "calm";
		duration = "82";
		musicClass = "keko_audio_horror_music_pack";
	};
	class keko_audio_horror_music_pack_musiccalm4
	{
		name = "Music Calm 4";
		sound[] = {"\keko_audio\horror_music_pack\musiccalm4.ogg",1,1};
		theme = "calm";
		duration = "123";
		musicClass = "keko_audio_horror_music_pack";
	};
	class keko_audio_horror_music_pack_musiccalm5
	{
		name = "Music Calm 5";
		sound[] = {"\keko_audio\horror_music_pack\musiccalm5.ogg",1,1};
		theme = "calm";
		duration = "79";
		musicClass = "keko_audio_horror_music_pack";
	};
	class keko_audio_horror_music_pack_musiccalm6
	{
		name = "Music Calm 6";
		sound[] = {"\keko_audio\horror_music_pack\musiccalm6.ogg",1,1};
		theme = "calm";
		duration = "154";
		musicClass = "keko_audio_horror_music_pack";
	};
	class keko_audio_horror_music_pack_music1
	{
		name = "Music Lead 1";
		sound[] = {"\keko_audio\horror_music_pack\music1.ogg",1,1};
		theme = "lead";
		duration = "139";
		musicClass = "keko_audio_horror_music_pack";
	};
	class keko_audio_horror_music_pack_music2
	{
		name = "Music Lead 2";
		sound[] = {"\keko_audio\horror_music_pack\music2.ogg",1,1};
		theme = "lead";
		duration = "141";
		musicClass = "keko_audio_horror_music_pack";
	};
	class keko_audio_horror_music_pack_music3
	{
		name = "Music Lead 3";
		sound[] = {"\keko_audio\horror_music_pack\music3.ogg",1,1};
		theme = "lead";
		duration = "254";
		musicClass = "keko_audio_horror_music_pack";
	};
	class keko_audio_horror_music_pack_music4
	{
		name = "Music Lead 4";
		sound[] = {"\keko_audio\horror_music_pack\music4.ogg",1,1};
		theme = "lead";
		duration = "188";
		musicClass = "keko_audio_horror_music_pack";
	};
	class keko_audio_horror_music_pack_music5
	{
		name = "Music Lead 5";
		sound[] = {"\keko_audio\horror_music_pack\music5.ogg",1,1};
		theme = "lead";
		duration = "305";
		musicClass = "keko_audio_horror_music_pack";
	};
	class keko_audio_horror_music_pack_music6
	{
		name = "Music Lead 6";
		sound[] = {"\keko_audio\horror_music_pack\music6.ogg",1,1};
		theme = "lead";
		duration = "270";
		musicClass = "keko_audio_horror_music_pack";
	};
	class keko_audio_horror_music_pack_musichectic
	{
		name = "Music Hectic 1";
		sound[] = {"\keko_audio\horror_music_pack\musichectic.ogg",1,1};
		theme = "action";
		duration = "332";
		musicClass = "keko_audio_horror_music_pack";
	};
	class keko_audio_horror_music_pack_musichectic1
	{
		name = "Music Hectic 2";
		sound[] = {"\keko_audio\horror_music_pack\musichectic1.ogg",1,1};
		theme = "action";
		duration = "317";
		musicClass = "keko_audio_horror_music_pack";
	};
	class keko_audio_horror_music_pack_musichectic2
	{
		name = "Music Hectic 3";
		sound[] = {"\keko_audio\horror_music_pack\musichectic3.ogg",1,1};
		theme = "action";
		duration = "92";
		musicClass = "keko_audio_horror_music_pack";
	};




	class keko_audio_fallout3_wonderfulguy
	{
		name = "A Wonderful Guy";
		sound[] = {"\keko_audio\fallout3\a_wonderful_guy.ogg",1,1};
		theme = "Score";
		duration = "112";
		musicClass = "keko_audio_fallout3";
	};
	class keko_audio_fallout3_anythinggoes
	{
		name = "Anything Goes";
		sound[] = {"\keko_audio\fallout3\anything_goes.ogg",1,1};
		theme = "Score";
		duration = "187";
		musicClass = "keko_audio_fallout3";
	};
	class keko_audio_fallout3_bingobangobongo
	{
		name = "Bingo Bango Bongo";
		sound[] = {"\keko_audio\fallout3\bingo_bango_bongo.ogg",1,1};
		theme = "Score";
		duration = "181";
		musicClass = "keko_audio_fallout3";
	};
	class keko_audio_fallout3_boogieman
	{
		name = "Boogie Man";
		sound[] = {"\keko_audio\fallout3\boogie_man.ogg",1,1};
		theme = "Score";
		duration = "141";
		musicClass = "keko_audio_fallout3";
	};
	class keko_audio_fallout3_butcherpete
	{
		name = "Butcher Pete";
		sound[] = {"\keko_audio\fallout3\butcher_pete.ogg",1,1};
		theme = "Score";
		duration = "308";
		musicClass = "keko_audio_fallout3";
	};
	class keko_audio_fallout3_crazehecallsme
	{
		name = "Crazy He Calls Me";
		sound[] = {"\keko_audio\fallout3\crazy_he_calls_me.ogg",1,1};
		theme = "Score";
		duration = "195";
		musicClass = "keko_audio_fallout3";
	};
	class keko_audio_fallout3_dearheartsandgentlepeople
	{
		name = "Dear Hearts and Gentle People";
		sound[] = {"\keko_audio\fallout3\dear_hearts_and_gentle_people.ogg",1,1};
		theme = "Score";
		duration = "130";
		musicClass = "keko_audio_fallout3";
	};
	class keko_audio_fallout3_easyliving
	{
		name = "Easy Living";
		sound[] = {"\keko_audio\fallout3\easy_living.ogg",1,1};
		theme = "Score";
		duration = "182";
		musicClass = "keko_audio_fallout3";
	};
	class keko_audio_fallout3_foxboogie
	{
		name = "Fox Boggie";
		sound[] = {"\keko_audio\fallout3\fox_boggie.ogg",1,1};
		theme = "Score";
		duration = "200";
		musicClass = "keko_audio_fallout3";
	};
	class keko_audio_fallout3_happytimes
	{
		name = "Happy Times";
		sound[] = {"\keko_audio\fallout3\happy_times.ogg",1,1};
		theme = "Score";
		duration = "162";
		musicClass = "keko_audio_fallout3";
	};
	class keko_audio_fallout3_worldonfire
	{
		name = "I dont want to set the World on Fire";
		sound[] = {"\keko_audio\fallout3\i_dont_want_to_set_the_world_on_fire.ogg",1,1};
		theme = "Score";
		duration = "185";
		musicClass = "keko_audio_fallout3";
	};
	class keko_audio_fallout3_tickledpink
	{
		name = "Im Tickled Pink";
		sound[] = {"\keko_audio\fallout3\im_tickled_pink.ogg",1,1};
		theme = "Score";
		duration = "109";
		musicClass = "keko_audio_fallout3";
	};
	class keko_audio_fallout3_rainmustfall
	{
		name = "Into Each Life Some Rain Must Fall";
		sound[] = {"\keko_audio\fallout3\into_each_life_some_rain_must_fall.ogg",1,1};
		theme = "Score";
		duration = "117";
		musicClass = "keko_audio_fallout3";
	};
	class keko_audio_fallout3_jazzyinterlude
	{
		name = "Jazzy Interlude";
		sound[] = {"\keko_audio\fallout3\jazzy_interlude.ogg",1,1};
		theme = "Score";
		duration = "170";
		musicClass = "keko_audio_fallout3";
	};
	class keko_audio_fallout3_jollydays
	{
		name = "Jolly Days";
		sound[] = {"\keko_audio\fallout3\jolly_days.ogg",1,1};
		theme = "Score";
		duration = "98";
		musicClass = "keko_audio_fallout3";
	};
	class keko_audio_fallout3_letsgosunning
	{
		name = "Lets Go Sunning";
		sound[] = {"\keko_audio\fallout3\lets_go_sunning.ogg",1,1};
		theme = "Score";
		duration = "101";
		musicClass = "keko_audio_fallout3";
	};
	class keko_audio_fallout3_maybe
	{
		name = "Maybe";
		sound[] = {"\keko_audio\fallout3\maybe.ogg",1,1};
		theme = "Score";
		duration = "170";
		musicClass = "keko_audio_fallout3";
	};
	class keko_audio_fallout3_mightmightman
	{
		name = "Mighty Mighty Man";
		sound[] = {"\keko_audio\fallout3\mighty_mighty_man.ogg",1,1};
		theme = "Score";
		duration = "153";
		musicClass = "keko_audio_fallout3";
	};
	class keko_audio_fallout3_rhythmoryou
	{
		name = "Rhythm or You";
		sound[] = {"\keko_audio\fallout3\rhythm_or_you.ogg",1,1};
		theme = "Score";
		duration = "179";
		musicClass = "keko_audio_fallout3";
	};
	class keko_audio_fallout3_swingdoors
	{
		name = "Swing Doors";
		sound[] = {"\keko_audio\fallout3\swing_doors.ogg",1,1};
		theme = "Score";
		duration = "178";
		musicClass = "keko_audio_fallout3";
	};
	class keko_audio_fallout3_waybackhome
	{
		name = "Way Back Home";
		sound[] = {"\keko_audio\fallout3\way_back_home.ogg",1,1};
		theme = "Score";
		duration = "171";
		musicClass = "keko_audio_fallout3";
	};	








	class keko_audio_fallout4_thewanderer
	{
		name = "The Wanderer";
		sound[] = {"\keko_audio\fallout4\The_Wanderer.ogg",1,1};
		theme = "Score";
		duration = "165";
		musicClass = "keko_audio_fallout4";
	};
	class keko_audio_fallout4_atombombbaby
	{
		name = "Atom Bomb Baby";
		sound[] = {"\keko_audio\fallout4\Atom_Bomb_Baby.ogg",1,1};
		theme = "Score";
		duration = "137";
		musicClass = "keko_audio_fallout4";
	};
	class keko_audio_fallout4_undecided
	{
		name = "Undecided";
		sound[] = {"\keko_audio\fallout4\Undecided.ogg",1,1};
		theme = "Score";
		duration = "198";
		musicClass = "keko_audio_fallout4";
	};
	class keko_audio_fallout4_sheldonallman
	{
		name = "Sheldon Allman";
		sound[] = {"\keko_audio\fallout4\Sheldon_Allman.ogg",1,1};
		theme = "Score";
		duration = "140";
		musicClass = "keko_audio_fallout4";
	};
	class keko_audio_fallout4_texbeneke
	{
		name = "Tex Beneke";
		sound[] = {"\keko_audio\fallout4\Tex_Beneke.ogg",1,1};
		theme = "Score";
		duration = "114";
		musicClass = "keko_audio_fallout4";
	};
	class keko_audio_fallout4_uraniumfever
	{
		name = "Uranium Fever";
		sound[] = {"\keko_audio\fallout4\Uranium_Fever.ogg",1,1};
		theme = "Score";
		duration = "139";
		musicClass = "keko_audio_fallout4";
	};
	class keko_audio_fallout4_goodrockin
	{
		name = "Good Rockin";
		sound[] = {"\keko_audio\fallout4\Good_Rockin.ogg",1,1};
		theme = "Score";
		duration = "180";
		musicClass = "keko_audio_fallout4";
	};
	class keko_audio_fallout4_pistolpackinmama
	{
		name = "Pistol Packin Mama";
		sound[] = {"\keko_audio\fallout4\Pistol_Packin_Mama.ogg",1,1};
		theme = "Score";
		duration = "139";
		musicClass = "keko_audio_fallout4";
	};
	class keko_audio_fallout4_dearhearts
	{
		name = "Dear hearts and gentle people";
		sound[] = {"\keko_audio\fallout4\Dear_hearts_and_gentle_people.ogg",1,1};
		theme = "Score";
		duration = "180";
		musicClass = "keko_audio_fallout4";
	};
	class keko_audio_fallout4_theend
	{
		name = "The end of the world";
		sound[] = {"\keko_audio\fallout4\The_end_of_the_world.ogg",1,1};
		theme = "Score";
		duration = "161";
		musicClass = "keko_audio_fallout4";
	};
	class keko_audio_fallout4_orangecoloredsky
	{
		name = "Orange Colored Sky";
		sound[] = {"\keko_audio\fallout4\Orange_Colored_Sky.ogg",1,1};
		theme = "Score";
		duration = "153";
		musicClass = "keko_audio_fallout4";
	};
	class keko_audio_fallout4_frankiecarle
	{
		name = "Frankie Carle";
		sound[] = {"\keko_audio\fallout4\Frankie_Carle.ogg",1,1};
		theme = "Score";
		duration = "198";
		musicClass = "keko_audio_fallout4";
	};
	class keko_audio_fallout4_anythinggoes
	{
		name = "Anything Goes";
		sound[] = {"\keko_audio\fallout4\Anything_Goes.ogg",1,1};
		theme = "Score";
		duration = "194";
		musicClass = "keko_audio_fallout4";
	};
	class keko_audio_fallout4_rightbehind
	{
		name = "Right Behind You Baby";
		sound[] = {"\keko_audio\fallout4\Right_Behind_You_Baby.ogg",1,1};
		theme = "Score";
		duration = "147";
		musicClass = "keko_audio_fallout4";
	};
	class keko_audio_fallout4_wholelotta
	{
		name = "Whole Lotta Shakin Goin On";
		sound[] = {"\keko_audio\fallout4\Whole_Lotta_Shakin_Goin_On.ogg",1,1};
		theme = "Score";
		duration = "168";
		musicClass = "keko_audio_fallout4";
	};
	class keko_audio_fallout4_civilization
	{
		name = "Civilization";
		sound[] = {"\keko_audio\fallout4\Civilization.ogg",1,1};
		theme = "Score";
		duration = "185";
		musicClass = "keko_audio_fallout4";
	};
	class keko_audio_fallout4_keepaknockin
	{
		name = "Keep A-Knockin";
		sound[] = {"\keko_audio\fallout4\Keep_A-Knockin.ogg",1,1};
		theme = "Score";
		duration = "149";
		musicClass = "keko_audio_fallout4";
	};
	class keko_audio_fallout4_sixtyminuteman
	{
		name = "Sixty Minute Man";
		sound[] = {"\keko_audio\fallout4\Sixty_Minute_Man.ogg",1,1};
		theme = "Score";
		duration = "150";
		musicClass = "keko_audio_fallout4";
	};
	class keko_audio_fallout4_worryworryworry
	{
		name = "Worry Worry Worry";
		sound[] = {"\keko_audio\fallout4\Worry_Worry_Worry.ogg",1,1};
		theme = "Score";
		duration = "155";
		musicClass = "keko_audio_fallout4";
	};
	class keko_audio_fallout4_uraniumrock
	{
		name = "Uranium Rock";
		sound[] = {"\keko_audio\fallout4\Uranium_Rock.ogg",1,1};
		theme = "Score";
		duration = "126";
		musicClass = "keko_audio_fallout4";
	};
	class keko_audio_fallout4_johnnymercer
	{
		name = "Johnny Mercer The Pied Pipers";
		sound[] = {"\keko_audio\fallout4\Johnny_Mercer_&_The_Pied_Pipers.ogg",1,1};
		theme = "Score";
		duration = "169";
		musicClass = "keko_audio_fallout4";
	};	
	class keko_audio_fallout4_crazyhecallsme
	{
		name = "Crazy He Calls Me";
		sound[] = {"\keko_audio\fallout4\Crazy_He_Calls_Me.ogg",1,1};
		theme = "Score";
		duration = "187";
		musicClass = "keko_audio_fallout4";
	};
    class keko_audio_fallout4_rocket69
	{
		name = "Rocket 69";
		sound[] = {"\keko_audio\fallout4\Rocket_69.ogg",1,1};
		theme = "Score";
		duration = "162";
		musicClass = "keko_audio_fallout4";
	};
    class keko_audio_fallout4_onemoretomorrow
	{
		name = "One More Tomorrow";
		sound[] = {"\keko_audio\fallout4\One_More_Tomorrow.ogg",1,1};
		theme = "Score";
		duration = "191";
		musicClass = "keko_audio_fallout4";
	};






	/*class keko_audio_cz75_1 
	{
		name = "1";
		sound = {"\keko_audio\cz75_ambientmusic\1.ogg", 1.258925, 1};
		duration = 64;
	};
	class keko_audio_cz75_2 
	{
		name = "2";
		sound = {"\keko_audio\cz75_ambientmusic\2.ogg", 1.258925, 1};
		duration = 31;
	};
	class keko_audio_cz75_3 
	{
		name = "3";
		sound = {"\keko_audio\cz75_ambientmusic\3.ogg", 1.258925, 1};
		duration = 38;
	};
	class keko_audio_cz75_4 
	{
		name = "4";
		sound = {"\keko_audio\cz75_ambientmusic\4.ogg", 1.258925, 1};
		duration = 14;
	};
	class keko_audio_cz75_5 
	{
		name = "5";
		sound = {"\keko_audio\cz75_ambientmusic\5.ogg", 1.258925, 1};
		duration = 90;
	};
	class keko_audio_cz75_6 
	{
		name = "6";
		sound = {"\keko_audio\cz75_ambientmusic\6.ogg", 1.258925, 1};
		duration = 98;
	};
	class keko_audio_cz75_7 
	{
		name = "7";
		sound = {"\keko_audio\cz75_ambientmusic\7.ogg", 1.258925, 1};
		duration = 17;
	};
	class keko_audio_cz75_8 
	{
		name = "8";
		sound = {"\keko_audio\cz75_ambientmusic\8.ogg", 1.258925, 1};
		duration = 85;
	};
	class keko_audio_cz75_9 
	{
		name = "9";
		sound = {"\keko_audio\cz75_ambientmusic\9.ogg", 1.258925, 1};
		duration = 74;
	};
	class keko_audio_cz75_10 
	{
		name = "10";
		sound = {"\keko_audio\cz75_ambientmusic\10.ogg", 1.258925, 1};
		duration = 76;
	};
	class keko_audio_cz75_11 
	{
		name = "11";
		sound = {"\keko_audio\cz75_ambientmusic\11.ogg", 1.258925, 1};
		duration = 19;
	};
	class keko_audio_cz75_12 
	{
		name = "12";
		sound = {"\keko_audio\cz75_ambientmusic\12.ogg", 1.258925, 1};
		duration = 38;
	};
	class keko_audio_cz75_13 
	{
		name = "13";
		sound = {"\keko_audio\cz75_ambientmusic\13.ogg", 1.258925, 1};
		duration = 76;
	};
	class keko_audio_cz75_14 
	{
		name = "14";
		sound = {"\keko_audio\cz75_ambientmusic\14.ogg", 1.258925, 1};
		duration = 118;
	};
	class keko_audio_cz75_15 
	{
		name = "15";
		sound = {"\keko_audio\cz75_ambientmusic\15.ogg", 1.258925, 1};
		duration = 22;
	};
	class keko_audio_cz75_16 
	{
		name = "16";
		sound = {"\keko_audio\cz75_ambientmusic\16.ogg", 1.258925, 1};
		duration = 65;
	};
	class keko_audio_cz75_17 
	{
		name = "17";
		sound = {"\keko_audio\cz75_ambientmusic\17.ogg", 1.258925, 1};
		duration = 25;
	};
	class keko_audio_cz75_18 
	{
		name = "18";
		sound = {"\keko_audio\cz75_ambientmusic\18.ogg", 1.258925, 1};
		duration = 89;
	};
	class keko_audio_cz75_19 
	{
		name = "19";
		sound = {"\keko_audio\cz75_ambientmusic\19.ogg", 1.258925, 1};
		duration = 46;
	};
	class keko_audio_cz75_20 
	{
		name = "20";
		sound = {"\keko_audio\cz75_ambientmusic\20.ogg", 1.258925, 1};
		duration = 38;
	};
	class keko_audio_cz75_21 
	{
		name = "21";
		sound = {"\keko_audio\cz75_ambientmusic\21.ogg", 1.258925, 1};
		duration = 70;
	};
	class keko_audio_cz75_22 
	{
		name = "22";
		sound = {"\keko_audio\cz75_ambientmusic\22.ogg", 1.258925, 1};
		duration = 57;
	};
	class keko_audio_cz75_23 
	{
		name = "23";
		sound = {"\keko_audio\cz75_ambientmusic\23.ogg", 1.258925, 1};
		duration = 29;
	};
	class keko_audio_cz75_24 
	{
		name = "24";
		sound = {"\keko_audio\cz75_ambientmusic\24.ogg", 1.258925, 1};
		duration = 289;
	};
	class keko_audio_cz75_25 
	{
		name = "25";
		sound = {"\keko_audio\cz75_ambientmusic\25.ogg", 1.258925, 1};
		duration = 74;
	};
	class keko_audio_cz75_26 
	{
		name = "26";
		sound = {"\keko_audio\cz75_ambientmusic\26.ogg", 1.258925, 1};
		duration = 48;
	};
	class keko_audio_cz75_27 
	{
		name = "27";
		sound = {"\keko_audio\cz75_ambientmusic\27.ogg", 1.258925, 1};
		duration = 58;
	};
	class keko_audio_cz75_28 
	{
		name = "28";
		sound = {"\keko_audio\cz75_ambientmusic\28.ogg", 1.258925, 1};
		duration = 83;
	};
	class keko_audio_cz75_29 
	{
		name = "29";
		sound = {"\keko_audio\cz75_ambientmusic\29.ogg", 1.258925, 1};
		duration = 16;
	};
	class keko_audio_cz75_30 
	{
		name = "30";
		sound = {"\keko_audio\cz75_ambientmusic\30.ogg", 1.258925, 1};
		duration = 43;
	};
	class keko_audio_cz75_31 
	{
		name = "31";
		sound = {"\keko_audio\cz75_ambientmusic\31.ogg", 1.258925, 1};
		duration = 15;
	};
	class keko_audio_cz75_32 
	{
		name = "32";
		sound = {"\keko_audio\cz75_ambientmusic\32.ogg", 1.258925, 1};
		duration = 138;
	};
	class keko_audio_cz75_33 
	{
		name = "33";
		sound = {"\keko_audio\cz75_ambientmusic\33.ogg", 1.258925, 1};
		duration = 26;
	};
	class keko_audio_cz75_34 
	{
		name = "34";
		sound = {"\keko_audio\cz75_ambientmusic\34.ogg", 1.258925, 1};
		duration = 63;
	};
	class keko_audio_cz75_35 
	{
		name = "35";
		sound = {"\keko_audio\cz75_ambientmusic\35.ogg", 1.258925, 1};
		duration = 106;
	};*/







	class keko_audio_tucker_vietnam_greenriver
	{
		name = "CCR - Green River";
		sound[] = {"\keko_audio\tucker_vietnam_music\Creedence Clearwater Revival_ Green River.ogg",db+0, 1.0};
		duration=154;
		theme="safe";
		musicClass = "keko_audio_tucker_vietnam";
	};	
	class keko_audio_tucker_vietnam_RunThroughTheJungle
	{
		name = "CCR - Run Through The Jungle";
		sound[] = {"\keko_audio\tucker_vietnam_music\Creedence Clearwater Revival_ Run Through The Jungle.ogg",db+0, 1.0};
		duration=186;
		theme="safe";
		musicClass = "keko_audio_tucker_vietnam";
	};	
	class keko_audio_tucker_vietnam_Rideofthevalks
	{
		name = "Ride Of The Valkyries (Apocalypse Now Version)";
		sound[] = {"\keko_audio\tucker_vietnam_music\Ride_of_the_Valkyries_Apocalypse_Now_version_.ogg",db+0, 1.0};
		duration=379;
		theme="safe";
		musicClass = "keko_audio_tucker_vietnam";
	};	
	class keko_audio_tucker_vietnam_watchtower
	{
		name = "Jimi Hendrix - All Along The Watchtower";
		sound[] = {"\keko_audio\tucker_vietnam_music\All Along The Watchtower.ogg",db+0, 1.0};
		duration=242;
		theme="safe";
		musicClass = "keko_audio_tucker_vietnam";
	};	
	class keko_audio_tucker_vietnam_sympathy
	{
		name = "The Rolling Stones - Sympathy For The Devil";
		sound[] = {"\keko_audio\tucker_vietnam_music\The Rolling Stones - Sympathy For The Devil -HQ.ogg",db+0, 1.0};
		duration=382;
		theme="safe";
		musicClass = "keko_audio_tucker_vietnam";
	};	
	class keko_audio_tucker_vietnam_paintitblack
	{
		name = "The Rolling Stones - Paint It Black";
		sound[] = {"\keko_audio\tucker_vietnam_music\Paint It Black.ogg",db+0, 1.0};
		duration=202;
		theme="safe";
		musicClass = "keko_audio_tucker_vietnam";
	};	
	class keko_audio_tucker_vietnam_fortunateson
	{
		name = "CCR - Fortunate Son";
		sound[] = {"\keko_audio\tucker_vietnam_music\Fortunate_Son.ogg",db+0, 1.0};
		duration=140;
		theme="safe";
		musicClass = "keko_audio_tucker_vietnam";
	};	
	class keko_audio_tucker_vietnam_psychotic
	{
		name = "The Count Five - Psychotic Reaction";
		sound[] = {"\keko_audio\tucker_vietnam_music\The Count Five - Psychotic Reaction.ogg",db+0, 1.0};
		duration=186;
		theme="safe";
		musicClass = "keko_audio_tucker_vietnam";
	};	
	class keko_audio_tucker_vietnam_somebodytolove
	{
		name = "Jefferson Airplane - Somebody To Love";
		sound[] = {"\keko_audio\tucker_vietnam_music\Jefferson_Airplane_-_Somebody_to_Love_HQ_.ogg",db+0, 1.0};
		duration=181;
		theme="safe";
		musicClass = "keko_audio_tucker_vietnam";
	};	
	class keko_audio_tucker_vietnam_whiterabbit
	{
		name = "Jefferson Airplane - White Rabbit";
		sound[] = {"\keko_audio\tucker_vietnam_music\Jefferson_Airplane_-White_Rabbit-.ogg",db+0, 1.0};
		duration=148;
		theme="safe";
		musicClass = "keko_audio_tucker_vietnam";
	};	
	class keko_audio_tucker_vietnam_theend
	{
		name = "The Doors - The End";
		sound[] = {"\keko_audio\tucker_vietnam_music\The_Doors_-_The_End_original_.ogg",db+0, 1.0};
		duration=707;
		theme="safe";
		musicClass = "keko_audio_tucker_vietnam";
	};	
	class keko_audio_tucker_vietnam_boots
	{
		name = "Nancy Sinatra - These Boots Are Made For Walkin";
		sound[] = {"\keko_audio\tucker_vietnam_music\Nancy_Sinatra_-_These_Boots_Are_Made_for_Walkin_.ogg",db+0, 1.0};
		duration=149;
		theme="safe";
		musicClass = "keko_audio_tucker_vietnam";
	};	
	class keko_audio_tucker_vietnam_gimmeshelter
	{
		name = "The Rolling Stones - Gimme Shelter";
		sound[] = {"\keko_audio\tucker_vietnam_music\The_Rolling_Stones_-_Gimme_Shelter_Official_Lyric_.ogg",db+0, 1.0};
		duration=270;
		theme="safe";
		musicClass = "keko_audio_tucker_vietnam";
	};	
	class keko_audio_tucker_vietnam_warpigs
	{
		name = "Black Sabbath - War Pigs";
		sound[] = {"\keko_audio\tucker_vietnam_music\Black_sabbath-War_Pigs_lyrics_.ogg",db+0, 1.0};
		duration=472;
		theme="safe";
		musicClass = "keko_audio_tucker_vietnam";
	};	
	class keko_audio_tucker_vietnam_aroundthebend
	{
		name = "CCR - Up Around The Bend";
		sound[] = {"\keko_audio\tucker_vietnam_music\Creedence_Clearwater_Revival_Up_Around_The_Bend_1_.ogg",db+0, 1.0};
		duration=163;
		theme="safe";
		musicClass = "keko_audio_tucker_vietnam";
	};	
	class keko_audio_tucker_vietnam_2plus2
	{
		name = "The Bob Seger System - 2 + 2 = ?";
		sound[] = {"\keko_audio\tucker_vietnam_music\The_Bob_Seger_System_-_2_2.ogg",db+0, 1.0};
		duration=169;
		theme="safe";
		musicClass = "keko_audio_tucker_vietnam";
	};	
	class keko_audio_tucker_vietnam_forwhatitsworth
	{
		name = "Buffalo Springfield - For What It's Worth";
		sound[] = {"\keko_audio\tucker_vietnam_music\For_What_It_s_Worth_-_Buffalo_Springfield.ogg",db+0, 1.0};
		duration=160;
		theme="safe";
		musicClass = "keko_audio_tucker_vietnam";
	};	
	class keko_audio_tucker_vietnam_getoutofplace
	{
		name = "The Animals - We Gotta Get Out Of This Place";
		sound[] = {"\keko_audio\tucker_vietnam_music\We_Gotta_Get_Out_Of_This_Place_US_Version_.ogg",db+0, 1.0};
		duration=192;
		theme="safe";
		musicClass = "keko_audio_tucker_vietnam";
	};	
	class keko_audio_tucker_vietnam_satisfaction
	{
		name = "The Rolling Stones - (I Can't Get No) Satisfaction";
		sound[] = {"\keko_audio\tucker_vietnam_music\The_Rolling_Stones_-_I_Can_t_Get_No_Satisfaction_O.ogg",db+0, 1.0};
		duration=234;
		theme="safe";
		musicClass = "keko_audio_tucker_vietnam";
	};	
	class keko_audio_tucker_vietnam_risingsun
	{
		name = "The Animals - House Of The Rising Sun";
		sound[] = {"\keko_audio\tucker_vietnam_music\The_Animals_-_House_of_the_Rising_Sun_1964_HD_Lyri.ogg",db+0, 1.0};
		duration=248;
		theme="safe";
		musicClass = "keko_audio_tucker_vietnam";
	};











	class keko_audio_colonial_dagger_back_in_black
	{
		name = "Back in Black - ACDC";		
		sound[] = {"\keko_audio\colonial_dagger\Back_In_Black.ogg",db+0,1};		
		theme = "Lead";		
		duration = "255";		
		musicClass = "keko_audio_colonial_dagger";
	};
	class keko_audio_colonial_dagger_highway_to_hell
	{
		name = "Highway to Hell - ACDC";		
		sound[] = {"\keko_audio\colonial_dagger\Highway_to_Hell.ogg",db+0,1};		
		theme = "Lead";
		duration = "207";		
		musicClass = "keko_audio_colonial_dagger";
	};
	class keko_audio_colonial_dagger_thunderstruck
	{
		name = "Thunderstruck - ACDC";		
		sound[] = {"\keko_audio\colonial_dagger\Thunderstruck.ogg",db+0,1};		
		theme = "Lead";		
		duration = "292";		
		musicClass = "keko_audio_colonial_dagger";
	};
	class keko_audio_colonial_dagger_danger_zone
	{
		name = "Danger Zone - Kenny Loggins";		
		sound[] = {"\keko_audio\colonial_dagger\Danger_Zone.ogg",db+0,1};		
		theme = "Lead";		
		duration = "226";		
		musicClass = "keko_audio_colonial_dagger";
	};	
	class keko_audio_colonial_dagger_never_gonna_give_you_up
	{
		name = "Never Gonna Give You Up - Rick Astley";		
		sound[] = {"\keko_audio\colonial_dagger\Never_Gonna_Give_You_Up.ogg",db+0,1};		
		theme = "Lead";		
		duration = "214";		
		musicClass = "keko_audio_colonial_dagger";
	};	
	class keko_audio_colonial_dagger_band_of_brothers_theme
	{
		name = "Band of Brothers Theme";		
		sound[] = {"\keko_audio\colonial_dagger\Band_of_Brothers_Theme.ogg",db+0,1};		
		theme = "Lead";		
		duration = "145";		
		musicClass = "keko_audio_colonial_dagger";
	};
	class keko_audio_colonial_dagger_welcome_to_the_jungle
	{
		name = "Welcome to the Jungle - Guns N Roses";		
		sound[] = {"\keko_audio\colonial_dagger\Welcome_to_the_Jungle.ogg",db+0,1};		
		theme = "Lead";		
		duration = "383";		
		musicClass = "keko_audio_colonial_dagger";
	};
	class keko_audio_colonial_dagger_dont_stop_me_now
	{
		name = "Don't Stop Me Now - Queen";		
		sound[] = {"\keko_audio\colonial_dagger\Dont_Stop_Me_Now.ogg",db+0,1};		
		theme = "Lead";		
		duration = "217";
		musicClass = "keko_audio_colonial_dagger";
	};
	class keko_audio_colonial_dagger_run_boy_run
	{
		name = "Run Boy Run - Woodkid";		
		sound[] = {"\keko_audio\colonial_dagger\Run_Boy_Run.ogg",db+0,1};		
		theme = "Lead";		
		duration = "216";		
		musicClass = "keko_audio_colonial_dagger";
	};
	class keko_audio_colonial_dagger_seven_nation_army
	{
		name = "Seven Nation Army - The White Stripes";		
		sound[] = {"\keko_audio\colonial_dagger\Seven_Nation_Army.ogg",db+0,1};		
		theme = "Lead";		
		duration = "257";		
		musicClass = "keko_audio_colonial_dagger";
	};	
};


class CfgSounds
{
	sounds[] = {};
	class keko_audio_horror_music_pack_scary
	{
		name = "Scary Sound 1";
		sound[] = {"\keko_audio\horror_music_pack\scary.ogg",1,1};
		titles[] = {0,""};
	};
	class keko_audio_horror_music_pack_scary1
	{
		name = "Scary Sound 1";
		sound[] = {"\keko_audio\horror_music_pack\scary1.ogg",1,1};
		titles[] = {0,""};
	};
	class keko_audio_horror_music_pack_scary2
	{
		name = "Scary Sound 2";
		sound[] = {"\keko_audio\horror_music_pack\scary2.ogg",1,1};
		titles[] = {0,""};
	};
	class keko_audio_horror_music_pack_scary3
	{
		name = "Scary Sound 3";
		sound[] = {"\keko_audio\horror_music_pack\scary3.ogg",1,1};
		titles[] = {0,""};
	};
	class keko_audio_horror_music_pack_scary4
	{
		name = "Scary Sound 4";
		sound[] = {"\keko_audio\horror_music_pack\scary4.ogg",1,1};
		titles[] = {0,""};
	};
	class keko_audio_horror_music_pack_scary5
	{
		name = "Scary Sound 5";
		sound[] = {"\keko_audio\horror_music_pack\scary5.ogg",1,1};
		titles[] = {0,""};
	};
	class keko_audio_horror_music_pack_scary6
	{
		name = "Scary Sound 6";
		sound[] = {"\keko_audio\horror_music_pack\scary6.ogg",1,1};
		titles[] = {0,""};
	};
	class keko_audio_horror_music_pack_scary7
	{
		name = "Scary Sound 7";
		sound[] = {"\keko_audio\horror_music_pack\scary7.ogg",1,1};
		titles[] = {0,""};
	};
	class keko_audio_horror_music_pack_scary8
	{
		name = "Scary Sound 8";
		sound[] = {"\keko_audio\horror_music_pack\scary8.ogg",1,1};
		titles[] = {0,""};
	};
};