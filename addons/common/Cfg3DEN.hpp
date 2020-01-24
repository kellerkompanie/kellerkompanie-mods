#define CHECK_ADDONS "private _incompatibleAddonPrefixes = ['warfxpe','blastcore','jsrs']; private _patches = 'getText (_x >> ""name"") != ""objNull""' configClasses (configFile >> 'CfgPatches'); { private _cfgPatchesClass = configName _x; { private _incompatibleAddonPrefix = _x; if (toLower _cfgPatchesClass find _incompatibleAddonPrefix == 0) exitWith { ['KEKO', 'COMMON', nil, 'Do not edit mission while having Blastcore or JSRS activated!', __FILE__, __LINE__ + 1] call CBA_fnc_error; }; } forEach _incompatibleAddonPrefixes; } forEach _patches;"

class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class StateSpecial {
                class Attributes {
                    delete Enh_DoStop; /* delete buggy 3den function */
                };
            };
        };
    };
    class EventHandlers {
        class GVAR(check3denIncompatibility) {
            OnMissionLoad = CHECK_ADDONS;
            OnMissionNew = CHECK_ADDONS;
        };
    };
};
