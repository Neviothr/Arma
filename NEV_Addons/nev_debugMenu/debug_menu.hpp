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

class NewArmAUI {
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
			action = "closeDialog 0; execVM ""\nev_debugMenu\f\NEV_fnc_openZeus.sqf""";
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
			action = "closeDialog 0; [""Open"",true] spawn BIS_fnc_arsenal";
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
			action = "closeDialog 0; execVM ""\nev_debugMenu\f\NEV_fnc_teleport.sqf""";
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
			action = "closeDialog 0; execVM ""\nev_debugMenu\f\NEV_fnc_addUnitsToZeus.sqf""";
		};

		// A button to make all units aggressive
		class makeUnitsAggressive: RscButton {
			text = "Aggressive AI";
			x = "SafeZoneX + (315 / 1920) * SafeZoneW";
			y = "SafeZoneY + (450 / 1080) * SafeZoneH";
			w = "(90 / 1920) * SafeZoneW";
			h = "(45 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; execVM ""\nev_debugMenu\f\NEV_fnc_aggressiveAI.sqf""";
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
			action = "closeDialog 0; execVM ""\nev_debugMenu\f\NEV_fnc_removeDead.sqf""";
		};

		// A button to stop units in buildings from moving
		class inBuildingButton: RscButton {
			text = "Keep garrisoned";
			x = "SafeZoneX + (375 / 1920) * SafeZoneW";
			y = "SafeZoneY + (150 / 1080) * SafeZoneH";
			w = "(90 / 1920) * SafeZoneW";
			h = "(45 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; {[_x] execVM ""inBuilding.sqf""} forEach allUnits";
		};
	};
};