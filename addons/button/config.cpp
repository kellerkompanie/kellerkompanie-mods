// Original by Ampersand https://github.com/ampersand38/Server-Spotlight
#include "script_component.hpp"

class CfgPatches {
    class ADDON {
    	name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"A3_Ui_F"};
        author = ECSTRING(common,KEKOTeam);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class RscStandardDisplay;
class RscDisplayMain: RscStandardDisplay {
	class Spotlight {
		class AwesomeServer {
			text = "Kellerkompanie Server"; // Text displayed on the square button, converted to upper-case
			textIsQuote = 0; // 1 to add quotation marks around the text
			picture = QPATHTOF(ui\button.paa); // Square picture, ideally 512x512
			//video = "\a3\Ui_f\Video\spotlight_1_Apex.ogv"; // Video played on mouse hover
			//action = "0 = [_this, 'your.domain.name', '2302', 'yourpasshere'] execVM '\amp_spotlight\joinServer.sqf';";
			action = "0 = [_this, 'server.kellerkompanie.com', '2302', 'keko'] call keko_button_fnc_joinServer;";
			actionText = "Join server: Kellerkompanie Server"; // Text displayed in top left corner of on-hover white frame
			condition = "true"; // Condition for showing the spotlight
		};
	};
};

#include "CfgEventHandlers.hpp"
