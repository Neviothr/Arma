class Cfg3DEN {
    class Mission {
        class Scenario {
            class AttributeCategories {
                class States {
                    class Attributes {
                        class EnableTargetDebug {
                            property = "safeStartEnabled";
                            value = 0;
                            control = "CheckboxNumber";
                            displayName = "SafeStart";
                            tooltip = "[NEV Addons] Enable SafeStart on mission launch?";
                            defaultValue = "0";
                            expression = "true";
                            wikiType = "[[Bool]]";
                        };
                    };
                };
            };
        };
    };
};
