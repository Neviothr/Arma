class ctrlMenu;
class Display3DEN {
    class ContextMenu: ctrlMenu {
        class Items {
            items[] += {QGVAR(garrisonEntry)};
            class GVAR(garrisonEntry) {
                text = "[NEV] Garrison...";
                value = 0;
                action = QUOTE(call FUNC(garrison));
                conditionShow = "selected";
            };
        };
    };
};
