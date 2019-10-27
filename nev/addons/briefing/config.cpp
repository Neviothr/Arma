#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = "NEV Component - Briefing";
		author = "Neviothr";
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"nev_main"};
		VERSION_CONFIG;
	};
};

#include "CfgEventhandlers.hpp"
#include "CfgSettings.hpp"
#include "\x\nev\addons\main\ui\BaseDefines.hpp"

class FactionViewer {
	idd = IDD_FactionViewerDisplay;
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = QUOTE(call FUNC(onLoad));

	class Controls {
		class GVAR(background): IGUIBack {
			x = "SafeZoneX + (150 / 1920) * SafeZoneW";
			y = "SafeZoneY + (250 / 1080) * SafeZoneH";
			w = "(1600 / 1920) * SafeZoneW";
			h = "(625 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_BACKGROUND;
			moving = 0;
			colorBackground[] = {0, 0, 0, 0.2};
		};
		class GVAR(textOpfor): RscText {
    		text = "FACTIONS";
    		colorBackground[] = {0,0,0,0};
    		x = "SafeZoneX + (900 / 1920) * SafeZoneW";
    		y = "SafeZoneY + (15 / 1080) * SafeZoneH";
    		sizeEx = 0.07;
    		w = 1;
    		h = 1;
    		colorText[] = {1,1,1,1};
    	};

		/*class GVAR(delDeadButton): NevRscButton {
			text = "Remove dead";
			x = "SafeZoneX + (640 / 1920) * SafeZoneW";
			y = "SafeZoneY + (310 / 1080) * SafeZoneH";
			action = QUOTE({deleteVehicle _x} forEach allDead - GVAR(deadOnStart));
		};*/
	};

	class Objects {
		class GVAR(unit1) {
			idc = IDC_FactionViewerUnit1;
			type = CT_OBJECT_CONTAINER;
			model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
			scale = 0.075;
			direction[] = {0, -0.15, 1};
			up[] = {0, 0.65, -0.35};
			x = -0.3;
			y = 0.2;
			z = 0.2;
			xBack = 0.5;
			yBack = 0.5;
			zBack = 1.2;
			inBack = 0;
			enableZoom = 0;
			zoomDuration = 0;
		};

		class GVAR(unit2): GVAR(unit1) {
			idc = IDC_FactionViewerUnit2;
			type = CT_OBJECT_CONTAINER;
			model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
			x = 0.3;
		};

		class GVAR(unit3): GVAR(unit1) {
			idc = IDC_FactionViewerUnit4;
			type = CT_OBJECT_CONTAINER;
			model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
			x = 0.9;
		};

		class GVAR(unit4): GVAR(unit1) {
			idc = IDC_FactionViewerUnit4;
			type = CT_OBJECT_CONTAINER;
			model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
			x = 1.5;
		};
	};
};
