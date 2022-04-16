class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class GVAR(attributes) {
                collapsed = 1;
                displayName = CSTRING(3denCategory);
                class Attributes {
                    class GVAR(isBlacklisted) {
                        displayName = CSTRING(isBlacklisted);
                        tooltip = CSTRING(isBlacklistedTooltip);
                        property = QGVAR(isBlacklisted);
                        control = "Checkbox";
                        expression = "_this setVariable ['%s',_value];";
                        defaultValue = "false";
                        condition = "1";
                        typeName = "BOOL";
                    };
                };
            };
        };
    };
};
