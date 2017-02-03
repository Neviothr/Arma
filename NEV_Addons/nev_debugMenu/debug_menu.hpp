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
			x = "SafeZoneX + (315 / 1920) * SafeZoneW";
			y = "SafeZoneY + (150 / 1080) * SafeZoneH";
			w = "(90 / 1920) * SafeZoneW";
			h = "(45 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; call NEV_fnc_openZeus";
		};

		// A button to open the virtual aresnal
		class virtualArsenalButton: RscButton {
			text = "Virtual arsenal";
			x = "SafeZoneX + (315 / 1920) * SafeZoneW";
			y = "SafeZoneY + (210 / 1080) * SafeZoneH";
			w = "(90 / 1920) * SafeZoneW";
			h = "(45 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; [""Open"", true] spawn BIS_fnc_arsenal";
		};

		// A button to use a teleportion function
		class teleportButton: RscButton {
			text = "Teleport";
			x = "SafeZoneX + (315 / 1920) * SafeZoneW";
			y = "SafeZoneY + (270 / 1080) * SafeZoneH";
			w = "(90 / 1920) * SafeZoneW";
			h = "(45 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; call NEV_fnc_teleport";
		};

		// A button to open the BI debug console
		class debugConsoleButton: RscButton {
			text = "Debug console";
			x = "SafeZoneX + (315 / 1920) * SafeZoneW";
			y = "SafeZoneY + (330 / 1080) * SafeZoneH";
			w = "(90 / 1920) * SafeZoneW";
			h = "(45 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; createDialog ""RscDisplayDebugPublic""";
		};

		// A button to add all units and vehicles to Zeus
		class addUnitsToZeusButton: RscButton {
			text = "Add to zeus";
			x = "SafeZoneX + (315 / 1920) * SafeZoneW";
			y = "SafeZoneY + (390 / 1080) * SafeZoneH";
			w = "(90 / 1920) * SafeZoneW";
			h = "(45 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; call NEV_fnc_addToZeus";
		};

		// A button to make units aggressive
		class makeUnitsAggressive: RscButton {
			text = "Aggressive AI";
			x = "SafeZoneX + (315 / 1920) * SafeZoneW";
			y = "SafeZoneY + (450 / 1080) * SafeZoneH";
			w = "(90 / 1920) * SafeZoneW";
			h = "(45 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; call NEV_fnc_aggressiveAI";
		};

		// A button to remove add dead AI units and vehicles
		class removeDead: RscButton {
			text = "Remove dead";
			x = "SafeZoneX + (315 / 1920) * SafeZoneW";
			y = "SafeZoneY + (510 / 1080) * SafeZoneH";
			w = "(90 / 1920) * SafeZoneW";
			h = "(45 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; call NEV_fnc_removeDead";
		};

		// A button garrison all units
		class garrisonUnits: RscButton {
			text = "Garrison";
			x = "SafeZoneX + (420 / 1920) * SafeZoneW";
			y = "SafeZoneY + (150 / 1080) * SafeZoneH";
			w = "(90 / 1920) * SafeZoneW";
			h = "(45 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; call NEV_fnc_garrison";
		};

		// A button to spawn a group of set units
		class spawnGroup: RscButton {
			text = "Spawn group(s)";
			x = "SafeZoneX + (420 / 1920) * SafeZoneW";
			y = "SafeZoneY + (210 / 1080) * SafeZoneH";
			w = "(90 / 1920) * SafeZoneW";
			h = "(45 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "call NEV_fnc_spawnGroup";
		};
	};
};