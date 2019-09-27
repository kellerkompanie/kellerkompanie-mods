#define CHECK_ADDONS "private _incompatibleAddonPrefixes = ['warfxpe','blastcore','jsrs']; private _patches = 'getText (_x >> ""name"") != ""objNull""' configClasses (configFile >> 'CfgPatches'); { private _cfgPatchesClass = configName _x; { private _incompatibleAddonPrefix = _x; if (toLower _cfgPatchesClass find _incompatibleAddonPrefix == 0) exitWith { ['KEKO', 'COMMON', nil, 'Do not edit mission while having Blastcore or JSRS activated!', __FILE__, __LINE__ + 1] call CBA_fnc_error; }; } forEach _incompatibleAddonPrefixes; } forEach _patches;"

class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class GVAR(aceGarrison) {
                collapsed = 1;
                displayName = CSTRING(3denCategoryACE);
                class Attributes {
                    class Enh_Move {
                        displayName = CSTRING(aceGarrison);
                        tooltip = CSTRING(aceGarrisonTooltip);
                        property = "keko_aceGarrison";
                        control = "Checkbox";
                        expression = "if(_value) then {_this setVariable ['ace_ai_garrisonned', true]}";
                        defaultValue = "false";
                        condition = "objectBrain";
                    };
                };
            };
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
