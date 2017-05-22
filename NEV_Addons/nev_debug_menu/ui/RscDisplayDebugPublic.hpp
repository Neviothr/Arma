class BisDisplayDebugPublic {
	idd = 316000;
	movingEnable = 1;
	enableSimulation = 0;
	scriptName = "RscDisplayDebugPublic";
	scriptPath = "GUI";
	onLoad = QUOTE([ARR_4(QUOTE(QUOTE(onLoad)), _this, QUOTE(QUOTE(RscDisplayDebugPublic)), 'GUI')] call FUNC(debugConsole));
	onUnload = QUOTE([ARR_4(QUOTE(QUOTE(onUnload)), _this, QUOTE(QUOTE(RscDisplayDebugPublic)), 'GUI')] call FUNC(debugConsole));
	class controlsBackground {};
	class Controls {
		class DebugConsole: RscDebugConsole {
			x = "9 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2)) / 2)";
			y = "1.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2)) / 2)";
			w = "22 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "21.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonCancel: RscButtonMenuCancel {
			x = "9 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2)) / 2)";
			y = "23.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2)) / 2)";
			w = "7.4 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};