#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.80;
		requiredAddons[] = {
			"CBA_Main", 
			"tfar_core", 
			"tfar_handhelds"};
		author = ECSTRING(common,KEKOTeam);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG; 
	};
};
 
class RscBackPicture;
class anprc148jem_radio_dialog
{
	onLoad = "if(sunOrMoon < 0.2)then{((_this select 0) displayCtrl TF_BACKGROUND_ID) ctrlSetText 'x\keko\addons\tfar_tape\ui\148_n_20150611.paa';};";

	class background: RscBackPicture
	{
		text = QPATHTOF(ui\148_20150611.paa);
	};
};

class anprc152_radio_dialog
{
	onLoad = "if(sunOrMoon < 0.2)then{((_this select 0) displayCtrl TF_BACKGROUND_ID) ctrlSetText 'x\keko\addons\tfar_tape\ui\152_n_20150611.paa';};";

	class background: RscBackPicture
	{
		text = QPATHTOF(ui\152_20150611.paa);
	};
};