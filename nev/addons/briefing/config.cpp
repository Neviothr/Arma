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

class IFF {
	idd = IDD_IFFDisplay;
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = QUOTE(call FUNC(onLoad));
	onUnload = "hint 'ON UNLOAD!!!'";
	duration = 1e6;

	class Controls {
		// Remove dead units and vehicle wreaks
		class GVAR(exitButton): NevRscButton {
			text = "Exit";
			x = "SafeZoneX + (1700 / 1920) * SafeZoneW";
			y = "SafeZoneY + (900/ 1080) * SafeZoneH";
			action = QUOTE(closeDialog 1; call FUNC(exitIFF));
		};
	};
};

