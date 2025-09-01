#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "keko_common"
        };
        author = "Schwaggot";
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class CfgMainMenuSpotlight {
    class AwesomeServer {
        text = CSTRING(text); // Text displayed on the square button, converted to upper-case
        textIsQuote = 0; // 1 to add quotation marks around the text
        picture = QPATHTOF(ui\button.paa); // Square picture, ideally 512x512
        //video = "\a3\Ui_f\Video\spotlight_1_Apex.ogv"; // Video played on mouse hover
        action = "connectToServer ['server.kellerkompanie.com', 2302, 'keko']";
        actionText = CSTRING(actionText); // Text displayed in top left corner of on-hover white frame
        condition = "true"; // Condition for showing the spotlight
    };
    // These are referenced somewhere so they can't be deleted
    class Orange_Campaign { condition = "false";};
    class Tacops_Campaign_01 { condition = "false";};

    delete ApexProtocol;
    delete BootCamp;
    delete EastWind;
    delete Orange_CampaignGerman;
    delete Orange_Showcase_IDAP;
    delete Orange_Showcase_LoW;
    delete Showcase_TankDestroyers;
    delete Tacops_Campaign_02;
    delete Tacops_Campaign_03;
    delete Tanks_Campaign_01;
    delete gm_campaign_01;
    delete Contact_Campaign;
    delete OldMan;
    delete Tacops_Campaign_01;
    delete SP_FD14;
    delete Orange_Campaign;
    delete AoW_Showcase_AOW;
    delete AoW_Showcase_Future;
    delete EF_ResoluteCyclone;
    delete Scenario_AirControl_RF;
    delete Scenario_FireSeason_RF;
    delete Scenario_TrainingDay_RF;
};
