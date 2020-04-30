class ctrlMenu;
class Display3DEN {
	class ContextMenu: ctrlMenu {
	    class Items {
            items[] += {QGVAR(garrisonEntry)};
			class GVAR(garrisonEntry) {
				text = "[NEV] Garrison...";
                value = 0;
				action = "systemChat 'Showing some old text.'";
				conditionShow = "selected";
			};
		};
	};
};
