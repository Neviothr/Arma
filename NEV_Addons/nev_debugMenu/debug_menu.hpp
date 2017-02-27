class RscPicture;
class RscFrame;
class RscText;
class RscListbox;
class RscControlsGroup;
class RscCombo;
class RscButton;
class RscStructuredText;
class RscButtonMenu;
class RscSlider;
class IGUIBack;

class nevDebugMenu {
	duration = 99999;
	idd = 17000;
	class controls {
		// A button to open Zeus
		class zeusButton: RscButton {
			text = "Open Zeus";
			x = "SafeZoneX + (510 / 1920) * SafeZoneW";
			y = "SafeZoneY + (285 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; call NEV_fnc_openZeus";
			tooltip = "Open the Zeus curator interface";
		};

		// A button to open the virtual aresnal
		class virtualArsenalButton: RscButton {
			text = "Virtual arsenal";
			x = "SafeZoneX + (510 / 1920) * SafeZoneW";
			y = "SafeZoneY + (375 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; [""Open"", true] spawn BIS_fnc_arsenal";
			tooltip = "Open the BIS virtual aresnal";
		};

		// A button to use a teleportion function
		class teleportButton: RscButton {
			text = "Teleport";
			x = "SafeZoneX + (510 / 1920) * SafeZoneW";
			y = "SafeZoneY + (420 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; call NEV_fnc_teleport";
			tooltip = "Teleport on map click";
		};

		// A button to open the BI debug console
		class debugConsoleButton: RscButton {
			text = "Debug console";
			x = "SafeZoneX + (510 / 1920) * SafeZoneW";
			y = "SafeZoneY + (465 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; createDialog ""RscDisplayDebugPublic""";
			tooltip = "Open the BIS debug console";
		};

		// A button to add all units and vehicles to Zeus
		class addUnitsToZeusButton: RscButton {
			text = "Add to zeus";
			x = "SafeZoneX + (510 / 1920) * SafeZoneW";
			y = "SafeZoneY + (330 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; call NEV_fnc_addToZeus";
			tooltip = "Make all units Zeus editable";
		};

		// A button to make units aggressive
		class makeUnitsAggressive: RscButton {
			text = "Aggressive AI";
			x = "SafeZoneX + (660 / 1920) * SafeZoneW";
			y = "SafeZoneY + (285 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; call NEV_fnc_aggressiveAI";
			tooltip = "Give AI aggressive behavior";
		};

		// A button to remove add dead AI units and vehicles
		class removeDead: RscButton {
			text = "Remove dead";
			x = "SafeZoneX + (660 / 1920) * SafeZoneW";
			y = "SafeZoneY + (375 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; call NEV_fnc_removeDead";
			tooltip = "Delete all dead units and vehicles";
		};

		// A button garrison all units
		class garrisonUnits: RscButton {
			text = "Garrison";
			x = "SafeZoneX + (660 / 1920) * SafeZoneW";
			y = "SafeZoneY + (330 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; call NEV_fnc_garrison";
			tooltip = "Call CBA's garrison function on all present units";
		};

		// A button to spawn a group of set units
		class spawnGroup: RscButton {
			text = "Spawn group(s)";
			x = "SafeZoneX + (660 / 1920) * SafeZoneW";
			y = "SafeZoneY + (420 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "call NEV_fnc_spawnGroup";
			tooltip = "Spawn preset group(s)";
		};

		// A static background image
		class backgroundImg: RscFrame {
			x = "SafeZoneX + (495 / 1920) * SafeZoneW";
			y = "SafeZoneY + (255 / 1080) * SafeZoneH";
			w = "(405 / 1920) * SafeZoneW";
			h = "(250 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_FRAME;
			sizeEx = 0.05;
			text = "Debug Menu";
		};
	};
};