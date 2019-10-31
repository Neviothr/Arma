class IFF {
	idd = IDD_IFFDisplay;
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = QUOTE(call FUNC(onLoad));
	onUnload = QUOTE(call FUNC(exitIFF));
	duration = 1e6;

	class Controls {
		// Close IFF viewer
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
			y = "SafeZoneY + (55 / 1080) * SafeZoneH";
			w = "(250 / 1920) * SafeZoneW";
			h = "(25 / 1080) * SafeZoneH";
			type = CT_COMBO;
			style = ST_LEFT + LB_TEXTURES;
			onLBSelChanged = QUOTE(_this call FUNC(updateFactions));
		};

		// Faction list box
		class GVAR(changeFactionCombo): RscCombo {
			idc = IDC_iffFactionCombo;
			x = "SafeZoneX + (50 / 1920) * SafeZoneW";
			y = "SafeZoneY + (275 / 1080) * SafeZoneH";
			w = "(250 / 1920) * SafeZoneW";
			h = "(25 / 1080) * SafeZoneH";
			type = CT_COMBO;
			style = ST_LEFT + LB_TEXTURES;
			onLBSelChanged = QUOTE(_this call FUNC(updateUnits));
		};

		class GVAR(sideText): RscText {
			x = "SafeZoneX + (50 / 1920) * SafeZoneW";
			y = "SafeZoneY + (25 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			size = 0.037;
			w = 0.1;
			h = 0.05;
			colorText[] = {1,1,1,1};
			text = "SIDE:"
		};

		class GVAR(factionText): RscText {
			x = "SafeZoneX + (50 / 1920) * SafeZoneW";
			y = "SafeZoneY + (245 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			size = 0.037;
			w = 0.1;
			h = 0.05;
			colorText[] = {1,1,1,1};
			text = "FACTION:"
		};

	};
};
