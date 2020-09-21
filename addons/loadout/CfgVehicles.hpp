class CfgVehicles {
    class Logic;
    class Module_F: Logic {
        class ArgumentsBaseUnits;
        class ModuleDescription;

        class AttributesBase
        {
            class Default;
            class Edit;
            class Combo;
            class Checkbox;
            class CheckboxNumber;
            class ModuleDescription;
            class Units;

            expression = "_this setVariable ['%s',_value];";
        };
    };
    class GVAR(moduleBase): Module_F {
        author = "Schwaggot";
        category = "KEKO";
        function = QEFUNC(common,dummy);
        scope              = 1;
        scopeCurator       = 2;
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 0;
    };
    class GVAR(moduleBase3den): Module_F {
        author = "Schwaggot";
        category = "KEKO";
        function = QEFUNC(common,dummy);
        scope              = 2;
        scopeCurator       = 1;
        functionPriority   = 2;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
    };
    class GVAR(moduleAddLoadoutMenu3den): GVAR(moduleBase3den) {
        displayName        = "Add Loadout Menu";
        category           = QGVAR(Loadout);
        function           = QFUNC(moduleAddLoadoutMenu3den);
        icon = QPATHTOF(ui\icon_loadout_menu.paa);

        class Attributes: AttributesBase {
            class Faction: Combo {
                property = "Faction";
                displayName = CSTRING(faction);
                tooltip = CSTRING(factionTooltip);
                typeName = "STRING";
                defaultValue = "'DEFAULT'";
                class Values {
                    class FactionDefault {
                        name = "DEFAULT";
                        value = "DEFAULT";
                    };
                    class FactionCustom {
                        name = "Custom";
                        value = "FactionCustom";
                    };
                    class FactionMission {
                        name = "Mission (experimental)";
                        value = "MISSION";
                    };
                    class FactionNATO {
                        name = "[Minimal] NATO";
                        value = "FactionNato";
                    };
                    class FactionAAF {
                        name = "[Minimal] AAF";
                        value = "FactionAAF";
                    };
                    class FactionNATOtropic {
                        name = "[Minimal] NATO (Tropic)";
                        value = "FactionNatoTropic";
                    };
                    class FactionCSAT {
                        name = "[Minimal] CSAT";
                        value = "FactionCSAT";
                    };
                    class FactionCTRG {
                        name = "[Minimal] CTRG";
                        value = "FactionCTRG";
                    };
                    class FactionFIA {
                        name = "[Minimal] FIA";
                        value = "FactionFIA";
                    };
                    class FactionGuerilla {
                        name = "[Minimal] Guerilla";
                        value = "FactionGuerilla";
                    };
                    class FactionUSMarines {
                        name = "[Minimal] U.S. Marines";
                        value = "FactionUSMarines";
                    };
                    class FactionUSBlackOpsTropic {
                        name = "[Minimal] U.S. BlackOps";
                        value = "FactionUSBlackOpsTropic";
                    };
                    class FactionIDAP {
                        name = "[Minimal] IDAP";
                        value = "FactionIDAP";
                    };
                    class FactionLDF {
                        name = "[Minimal] LDF";
                        value = "FactionLDF";
                    };

                    class FactionAlSirae {
                        name = "[Minimal] Al Sirae";
                        value = "FactionAlSirae";
                    };
                    class FactionHAF {
                        name = "[Minimal] HAF";
                        value = "FactionHAF";
                    };
                    class FactionMyrimidones {
                        name = "[Minimal] Myrimidones";
                        value = "FactionMyrimidones";
                    };
                    class FactionNAA {
                        name = "[Minimal] NAA";
                        value = "FactionNAA";
                    };
                    class FactionUNTOFIAAS {
                        name = "[Minimal] UNTOFIAAS";
                        value = "FactionUNTOFIAAS";
                    };
                    class FactionWAM {
                        name = "[Minimal] WAM";
                        value = "FactionWAM";
                    };
                    class FactionWAMVolunteers {
                        name = "[Minimal] WAM Volunteers";
                        value = "FactionWAMVolunteers";
                    };

                    class FactionUSArmyOCP {
                        name = "[Main] U.S. Army (OCP)";
                        value = "FactionUSArmyOCP";
                    };
                    class FactionUSArmyUCP {
                        name = "[Main] U.S. Army (UCP)";
                        value = "FactionUSArmyUCP";
                    };
                    class FactionMarines_Desert {
                        name = "[Main] USMC (Desert)";
                        value = "FactionMarines_Desert";
                    };
                    class FactionMarines_Woodland {
                        name = "[Main] USMC (Woodland)";
                        value = "FactionMarines_Woodland";
                    };
                    class FactionRussiaEMRDesert {
                        name = "[Main] Russia EMR (Desert)";
                        value = "FactionRussiaEMRDesert";
                    };
                    class FactionRussiaEMRSummer {
                        name = "[Main] Russia EMR (Summer)";
                        value = "FactionRussiaEMRSummer";
                    };
                    class FactionRussiaSpeznas {
                        name = "[Main] Russia Speznas";
                        value = "FactionRussiaSpeznas";
                    };
                    class FactionBundeswehrFleck {
                        name = "[Main] Bundeswehr (Fleck)";
                        value = "FactionBundeswehrFleck";
                    };
                    class FactionBundeswehrTropen {
                        name = "[Main] Bundeswehr (Tropen)";
                        value = "FactionBundeswehrTropen";
                    };
                    class FactionBundeswehrSchnee {
                        name = "[Main] Bundeswehr (Schnee)";
                        value = "FactionBundeswehrSchnee";
                    };
                    class FactionBlackorder {
                        name = "[Main] Black Order";
                        value = "FactionBlackorder";
                    };
                    class FactionBlackorderRedBerets {
                        name = "[Main] Black Order Red Berets";
                        value = "FactionBlackorderRedBerets";
                    };
                    class FactionSpecOpsMulticam {
                        name = "[Main] Western Special Forces (Multicam)";
                        value = "FactionSpecOpsMulticam";
                    };
                    class FactionSpecOpsTropic {
                        name = "[Main] Western Special Forces (Tropic)";
                        value = "FactionSpecOpsTropic";
                    };
                    class FactionHorizonIsland {
                        name = "[Main] Horizon Island Defense Forces";
                        value = "FactionHorizonIsland";
                    };

                    class FactionBAFMTP {
                        name = "[Event] BAF MTP";
                        value = "FactionBAFMTP";
                    };
                    class FactionBAFArctic {
                        name = "[Event] BAF Arctic";
                        value = "FactionBAFArctic";
                    };
                    class FactionBAFArcticWhite {
                        name = "[Event] BAF Arctic White";
                        value = "FactionBAFArcticWhite";
                    };
                    class FactionBAFDesert {
                        name = "[Event] BAF Desert";
                        value = "FactionBAFDesert";
                    };
                    class FactionBAFTMP {
                        name = "[Event] BAF TMP";
                        value = "FactionBAFTMP";
                    };
                    class FactionBAFWDL {
                        name = "[Event] BAF WDL";
                        value = "FactionBAFWDL";
                    };

                    class FactionWehrmacht {
                        name = "[Ironfront] Wehrmacht";
                        value = "FactionWehrmacht";
                    };
                    class FactionWehrmachtAfrica {
                        name = "[Ironfront] Wehrmacht (Afrika)";
                        value = "FactionWehrmachtAfrica";
                    };
                    class FactionArmiaKrajowaPartyzanci {
                        name = "[Ironfront] Armia Krajowa (Partyzanci)";
                        value = "FactionArmiaKrajowaPartyzanci";
                    };
                    class FactionArmiaKrajowaCamo {
                        name = "[Ironfront] Armia Krajowa (Camo)";
                        value = "FactionArmiaKrajowaCamo";
                    };
                    class FactionArmiaKrajowaGrade {
                        name = "[Ironfront] Armia Krajowa (Grade)";
                        value = "FactionArmiaKrajowaGrade";
                    };
                    class FactionCommandos {
                        name = "[Ironfront] Commandos";
                        value = "FactionCommandos";
                    };

                    class FactionUNSCDF {
                        name = "[Sci-Fi] UNSCDF";
                        value = "FactionUNSCDF";
                    };
                    class FactionUNSCDFWoodland {
                        name = "[Sci-Fi] UNSCDF (Woodland)";
                        value = "FactionUNSCDFWoodland";
                    };
                    class FactionUNSCDFTropical {
                        name = "[Sci-Fi] UNSCDF (Tropical)";
                        value = "FactionUNSCDFTropical";
                    };
                    class FactionUNSCDFDesert {
                        name = "[Sci-Fi] UNSCDF (Desert)";
                        value = "FactionUNSCDFDesert";
                    };
                    class FactionUNSCDFUrban {
                        name = "[Sci-Fi] UNSCDF (Urban)";
                        value = "FactionUNSCDFUrban";
                    };
                    class FactionUNSCDFBlack {
                        name = "[Sci-Fi] UNSCDF (Black)";
                        value = "FactionUNSCDFBlack";
                    };
                    class FactionUNSCDFSnow {
                        name = "[Sci-Fi] UNSCDF (Snow)";
                        value = "FactionUNSCDFSnow";
                    };
                    class FactionUNSCDFMarines {
                        name = "[Sci-Fi] UNSCDF (Marines)";
                        value = "FactionUNSCDFMarines";
                    };
                    class FactionUNSCDFMarinesHCW {
                        name = "[Sci-Fi] UNSCDF (Marines HCW)";
                        value = "FactionUNSCDFMarinesHCW";
                    };
                    class FactionUNSCDF_ODST {
                        name = "[Sci-Fi] UNSCDF (ODST)";
                        value = "FactionUNSCDF_ODST";
                    };
                    class FactionSystemsAlliance {
                        name = "[Sci-Fi] Systems Alliance";
                        value = "FactionSystemsAlliance";
                    };
                };
            };
        };
    };
    class keko_ModuleAddLoadoutMenu3den: GVAR(moduleAddLoadoutMenu3den) {
        displayName        = "(DEPRECATED - DO NOT USE) Add Loadout Menu";
        category           = QEGVAR(common,Deprecated);
        scope = 1;
        scopeCurator = 0;
    };
    class GVAR(moduleAddLoadoutMenu): GVAR(moduleBase) {
        displayName        = "Add Loadout Menu";
        category           = QGVAR(Loadout);
        function           = QFUNC(moduleAddLoadoutMenu);
        icon                = QPATHTOF(ui\icon_loadout_menu.paa);
        curatorCanAttach   = 1;
    };
    class GVAR(moduleCustomLoadouts3den): GVAR(moduleBase3den) {
        displayName        = "Custom Loadouts";
        category           = QGVAR(Loadout);
        function           = QFUNC(moduleCustomLoadouts3den);
        icon = QPATHTOF(ui\icon_loadouts.paa);
    };
    class keko_ModuleCustomLoadouts3den: GVAR(moduleCustomLoadouts3den) {
        displayName        = "(DEPRECATED - DO NOT USE) Custom Loadouts";
        category           = QEGVAR(common,Deprecated);
        scope = 1;
        scopeCurator = 0;
    };
    class GVAR(moduleAddLoadouts3den): GVAR(moduleBase3den) {
        displayName        = "Add Loadouts";
        category           = QGVAR(Loadout);
        function           = QFUNC(moduleAddLoadouts3den);
        icon = QPATHTOF(ui\icon_loadouts.paa);
        scopeCurator = 1;
    };
    class GVAR(moduleModifyLoadout3den): GVAR(moduleBase3den) {
        displayName        = "Modify Loadout";
        category           = QGVAR(Loadout);
        function           = QFUNC(moduleModifyLoadout3den);
        icon = QPATHTOF(ui\icon_loadouts.paa);

        class Attributes: AttributesBase {
            class ReplaceUniform: Edit {
                property = "ReplaceUniform";
                displayName = "Replace uniform";
                tooltip = "List of classnames without quotes: classname1,classname2,...";
                typeName = "STRING";
                defaultValue = "''";
            };
            class ReplaceVest: Edit {
                property = "ReplaceVest";
                displayName = "Replace vest";
                tooltip = "List of classnames without quotes: classname1,classname2,...";
                typeName = "STRING";
                defaultValue = "''";
            };
            class ReplaceBackpack: Edit {
                property = "ReplaceBackpack";
                displayName = "Replace backpack";
                tooltip = "List of classnames without quotes: classname1,classname2,...";
                typeName = "STRING";
                defaultValue = "''";
            };
            class ReplaceHelmet: Edit {
                property = "ReplaceHelmet";
                displayName = "Replace helmet";
                tooltip = "List of classnames without quotes: classname1,classname2,...";
                typeName = "STRING";
                defaultValue = "''";
            };
            class ReplaceGoggles: Edit {
                property = "ReplaceGoggles";
                displayName = "Replace goggles";
                tooltip = "List of classnames without quotes: classname1,classname2,...";
                typeName = "STRING";
                defaultValue = "''";
            };

            class AddToUniform: Edit {
                property = "AddToUniform";
                displayName = "Add items to uniform";
                tooltip = "List of classnames without quotes: classname1,classname2,...";
                typeName = "STRING";
                defaultValue = "''";
            };
            class AddToVest: Edit {
                property = "AddToVest";
                displayName = "Add items to vest";
                tooltip = "List of classnames without quotes: classname1,classname2,...";
                typeName = "STRING";
                defaultValue = "''";
            };
            class AddToBackpack: Edit {
                property = "AddToBackpack";
                displayName = "Add items to backpack";
                tooltip = "List of classnames without quotes: classname1,classname2,...";
                typeName = "STRING";
                defaultValue = "''";
            };

            class RemoveFromUniform: Edit {
                property = "RemoveFromUniform";
                displayName = "Remove items from uniform";
                tooltip = "List of classnames without quotes: classname1,classname2,...";
                typeName = "STRING";
                defaultValue = "''";
            };
            class RemoveFromVest: Edit {
                property = "RemoveFromVest";
                displayName = "Remove items from vest";
                tooltip = "List of classnames without quotes: classname1,classname2,...";
                typeName = "STRING";
                defaultValue = "''";
            };
            class RemoveFromBackpack: Edit {
                property = "RemoveFromBackpack";
                displayName = "Remove items from backpack";
                tooltip = "List of classnames without quotes: classname1,classname2,...";
                typeName = "STRING";
                defaultValue = "''";
            };

            class ModuleDescription: ModuleDescription{};
        };
    };

    class GVAR(moduleApplyLoadout): GVAR(moduleBase) {
        displayName        = "Apply Loadout";
        category           = QGVAR(Loadout);
        function           = QFUNC(moduleApplyLoadout);
        icon = QPATHTOF(ui\icon_change_loadout.paa);
        curatorCanAttach   = 1;
    };
};
