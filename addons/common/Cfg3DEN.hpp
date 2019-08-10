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
};
