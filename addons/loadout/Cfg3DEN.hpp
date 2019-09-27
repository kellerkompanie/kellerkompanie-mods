class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class GVAR(attributes) {
                collapsed = 1;
                displayName = CSTRING(3denCategory);
                class Attributes {
                    class GVAR(customLoadout) {
                        displayName = CSTRING(makeCustomLoadout);
                        tooltip = CSTRING(makeCustomLoadoutTooltip);
                        property = QGVAR(3denConvertCustomLoadout);
                        control = "Checkbox";
                        expression = QUOTE(if(_value) then {_this setVariable [ARR_2(QQGVAR(isCustomLoadout), true)]});
                        defaultValue = "false";
                        condition = "objectBrain";
                        typeName = "BOOL";
                    };
                    class GVAR(customLoadoutName) {
                        displayName = CSTRING(nameCustomLoadout);
                        tooltip = CSTRING(nameCustomLoadoutTooltip);
                        property = QGVAR(3denCustomLoadoutName);
                        control = "Edit";
                        expression = QUOTE(if((_value != '') or (!isNil _value)) then {_this setVariable [ARR_2(QQGVAR(customLoadoutName), _value)]});
                        defaultValue = "''";
                        condition = "objectBrain";
                        unique = 1;
                        typeName = "STRING";
                    };
                };
            };
        };
    };
};
