// Original by Ampersand https://github.com/ampersand38/Server-Spotlight

class CfgPatches {
    class keko_button {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.8;
        requiredAddons[] = {};
        version = 1.0;
        versionStr = 1.0;
        versionAr[] = {1, 0};
        author = "Schwaggot";
    };
};

class RscStandardDisplay;
class RscDisplayMain: RscStandardDisplay
{
	class Spotlight
	{
		class AwesomeServer
		{
			text = "Kellerkompanie Server"; // Text displayed on the square button, converted to upper-case
			textIsQuote = 0; // 1 to add quotation marks around the text
			picture = "\keko_button\button.paa"; // Square picture, ideally 512x512
			//video = "\a3\Ui_f\Video\spotlight_1_Apex.ogv"; // Video played on mouse hover
			//action = "0 = [_this, 'your.domain.name', '2302', 'yourpasshere'] execVM '\amp_spotlight\joinServer.sqf';";
			action = "0 = [_this, 'server.kellerkompanie.com', '2302', 'keko'] execVM '\keko_button\joinServer.sqf';";
			actionText = "Join server: Kellerkompanie Server"; // Text displayed in top left corner of on-hover white frame
			condition = "true"; // Condition for showing the spotlight
		};
	};
};
