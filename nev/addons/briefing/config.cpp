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
	onUnload = QUOTE(call FUNC(exitIFF));
	duration = 1e6;

	class Controls {
		// Remove dead units and vehicle wreaks
		class GVAR(exitButton): NevRscButton {
			text = "Exit";
			x = "SafeZoneX + (1700 / 1920) * SafeZoneW";
			y = "SafeZoneY + (1000/ 1080) * SafeZoneH";
			action = QUOTE(closeDialog 1; call FUNC(exitIFF));
			colorText[] = {0.9, 0, 0, 1};
		};

		// Side list box
		class GVAR(changeSideCombo): RscCombo {
			idc = IDC_iffSideCombo;
			x = "SafeZoneX + (50 / 1920) * SafeZoneW";
			y = "SafeZoneY + (25 / 1080) * SafeZoneH";
			w = "(250 / 1920) * SafeZoneW";
			h = "(25 / 1080) * SafeZoneH";
			type = CT_COMBO;
			style = ST_LEFT + LB_TEXTURES;
			onLBSelChanged = QUOTE(_this call FUNC(updateFactions));
		};

		class GVAR(changeFactionCombo): RscCombo {
			idc = IDC_iffFactionCombo;
			x = "SafeZoneX + (50 / 1920) * SafeZoneW";
			y = "SafeZoneY + (150 / 1080) * SafeZoneH";
			w = "(250 / 1920) * SafeZoneW";
			h = "(25 / 1080) * SafeZoneH";
			type = CT_COMBO;
			style = ST_LEFT + LB_TEXTURES;
			onLBSelChanged = QUOTE(_this call FUNC(updateUnits));
		};
	};
};
