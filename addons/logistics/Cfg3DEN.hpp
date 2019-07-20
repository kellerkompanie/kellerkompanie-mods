class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class GVAR(attributes) {
                collapsed = 1;
                displayName = CSTRING(3denCategory);
                class Attributes {
                    class GVAR(addFullAceArsenal) {
                        displayName = CSTRING(addFullAceArsenal);
                        tooltip = CSTRING(addFullAceArsenalTooltip);
                        property = QGVAR(3denAddFullAceArsenal);
                        control = "Checkbox";
                        expression = QUOTE(if(_value) then {[ARR_2(_this, true)] call ace_arsenal_fnc_initBox});
                        defaultValue = "false";
                        condition = "objectHasInventoryCargo";
                        typeName = "BOOL";
                    };
                    class GVAR(customCrate) {
                        displayName = CSTRING(makeCustomCrate);
                        tooltip = CSTRING(makeCustomCrateTooltip);
                        property = QGVAR(3denConvertCustomCrate);
                        control = "Checkbox";
                        expression = QUOTE(if(_value) then {_this setVariable [ARR_2(QQGVAR(isCustomCrate), true)]});
                        defaultValue = "false";
                        condition = "objectHasInventoryCargo * (1 - objectVehicle)";
                        typeName = "BOOL";
                    };
                    class GVAR(customCrateName) {
                        displayName = CSTRING(nameCustomCrate);
                        tooltip = CSTRING(nameCustomCrateTooltip);
                        property = QGVAR(3denCustomCrateName);
                        control = "Edit";
                        expression = QUOTE(if((_value != '') or (!isNil _value)) then {_this setVariable [ARR_2(QQGVAR(customCrateName), _value)]});
                        defaultValue = "''";
                        condition = "objectHasInventoryCargo * (1 - objectVehicle)";
                        unique = 1;
                        typeName = "STRING";
                    };
                };
            };
        };
    };
};
