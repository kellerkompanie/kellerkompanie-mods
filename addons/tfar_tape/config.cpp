class CfgPatches
{
	class keko_tfar_tape
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.80;
		requiredAddons[] = {
			"CBA_Main", 
			"tfar_core", 
			"tfar_handhelds"};
		author = "Schwaggot";
		authorUrl = "http://kellerkompanie.com";
		version = 1.0;
	};
};
 
class RscBackPicture;
class anprc148jem_radio_dialog
{
	onLoad = "if(sunOrMoon < 0.2)then{((_this select 0) displayCtrl TF_BACKGROUND_ID) ctrlSetText '\keko_tfar_tape\img\148_n_20150611.paa';};";

	class background: RscBackPicture
	{
		text = "\keko_tfar_tape\img\148_20150611.paa";
	};
};

class anprc152_radio_dialog
{
	onLoad = "if(sunOrMoon < 0.2)then{((_this select 0) displayCtrl TF_BACKGROUND_ID) ctrlSetText '\keko_tfar_tape\img\152_n_20150611.paa';};";

	class background: RscBackPicture
	{
		text = "\keko_tfar_tape\img\152_20150611.paa";
	};
};