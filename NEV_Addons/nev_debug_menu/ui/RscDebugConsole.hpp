class RscDebugConsole: RscControlsGroupNoScrollbars {
	idc = 13184;
	x = "9 * (((safeZoneW / safeZoneH) min 1.2) / 40) + (safezoneX)";
	y = "0.5 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safezoneY + safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))";
	w = "21.5 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
	h = "21.5 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
	class controls {
		class Title: RscTitle {
			colorBackground[] = {"(profileNamespace getVariable ['GUI_BCG_RGB_R', 0.13])", "(profileNamespace getVariable ['GUI_BCG_RGB_G', 0.54])", "(profileNamespace getVariable ['GUI_BCG_RGB_B', 0.21])", "(profileNamespace getVariable ['GUI_BCG_RGB_A', 0.8])"};
			idc = 11884;
			text = "$STR_UI_DEBUG_TITLE";
			x = "0 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			y = "0 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			w = "22 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
		};
		class Link: RscHTML {
			idc = 11891;
			x = "7 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			y = "0 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			w = "15 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
		};
		class ExpressionBackground: RscText {
			colorBackground[] = {0, 0, 0, 0.69999999};
			idc = 11885;
			x = "0 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			y = "1.1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			w = "22 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			h = "8 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
		};
		class ExpressionText: RscText {
			idc = 11892;
			text = "$STR_A3_RscDebugConsole_ExpressionText";
			x = "0.2 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			y = "1.1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			w = "22 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			h = "0.5 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "0.8 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
		};
		class Expression: RscEdit {
			style = 16;
			autocomplete = "scripting";
			shadow = 0;
			font = "EtelkaMonospacePro";
			idc = 12284;
			x = "0.5 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			y = "1.7 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			w = "21 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			h = "7 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "0.7 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonExecuteLocal: RscButtonMenuOK {
			default = 0;
			text = "$STR_A3_RscDebugConsole_ButtonExecuteLocal";
			x = "15.1 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			y = "9.2 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			w = "6.9 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonExecuteAll: RscButtonMenu {
			idc = 13285;
			text = "$STR_A3_RscDebugConsole_ButtonExecuteAll";
			x = "8.1 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			y = "9.2 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			w = "6.9 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonExecuteServer: RscButtonMenu {
			idc = 13286;
			text = "$STR_A3_RscDebugConsole_ButtonExecuteServer";
			x = "1.1 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			y = "9.2 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			w = "6.9 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonCodePerformance: RscButtonMenu {
			text = "<img image = '\a3\Ui_f\data\GUI\RscCommon\RscDebugConsole\performance_ca.paa' align = 'center' size = '0.7' />";
			class TextPos {
				left = 0;
				top = 0;
				right = 0;
				bottom = 0;
			};
			style = 2;
			idc = 13284;
			x = "0 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			y = "9.2 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			w = "1 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
		};
		class WatchBackground: RscText {
			colorBackground[] = {0, 0, 0, 0.69999999};
			idc = 11886;
			x = "0 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			y = "10.4 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			w = "22 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			h = "8.9 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
		};
		class WatchText: RscText {
			idc = 11893;
			text = "$STR_A3_RscDebugConsole_WatchText";
			x = "0.2 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			y = "10.4 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			w = "22 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			h = "0.5 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "0.8 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
		};
		class WatchInput1: RscEdit {
			autocomplete = "scripting";
			shadow = 0;
			font = "EtelkaMonospacePro";
			idc = 12285;
			x = "0.5 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			y = "11 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			w = "21 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "0.7 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
		};
		class WatchOutputBackground1: RscText {
			idc = 11887;
			x = "0.5 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			y = "12 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			w = "21 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0, 0, 0, 0.75};
		};
		class WatchOutput1: RscEdit {
			lineSpacing = 1;
			style = 512;
			shadow = 0;
			font = "EtelkaMonospacePro";
			idc = 12286;
			x = "0.5 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			y = "12 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			w = "21 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0, 0, 0, 0.75};
			sizeEx = "0.7 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
		};
		class WatchInput2: WatchInput1 {
			idc = 12287;
			x = "0.5 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			y = "13 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			w = "21 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
		};
		class WatchOutputBackground2: WatchOutputBackground1 {
			idc = 11888;
			x = "0.5 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			y = "14 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			w = "21 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
		};
		class WatchOutput2: WatchOutput1 {
			idc = 12288;
			x = "0.5 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			y = "14 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			w = "21 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
		};
		class WatchInput3: WatchInput1 {
			idc = 12289;
			x = "0.5 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			y = "15 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			w = "21 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
		};
		class WatchOutputBackground3: WatchOutputBackground1 {
			idc = 11889;
			x = "0.5 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			y = "16 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			w = "21 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
		};
		class WatchOutput3: WatchOutput1 {
			idc = 12290;
			x = "0.5 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			y = "16 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			w = "21 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
		};
		class WatchInput4: WatchInput1 {
			idc = 12291;
			x = "0.5 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			y = "17 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			w = "21 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
		};
		class WatchOutputBackground4: WatchOutputBackground1 {
			idc = 11890;
			x = "0.5 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			y = "18 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			w = "21 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
		};
		class WatchOutput4: WatchOutput1 {
			idc = 12293;
			x = "0.5 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			y = "18 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			w = "21 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonSpectatorCamera: RscButtonMenu {
			idc = 13287;
			text = "$STR_A3_RscDebugConsole_ButtonSpectatorCamera";
			x = "0 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			y = "19.4 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			w = "7.4 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonSplendidCamera: RscButtonMenu {
			idc = 13288;
			text = "$STR_A3_RscDebugConsole_ButtonSplendidCamera";
			x = "0 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			y = "20.5 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			w = "7.4 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonFunctions: RscButtonMenu {
			idc = 13289;
			text = "$STR_A3_RscDebugConsole_ButtonFunctions";
			x = "7.5 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			y = "19.4 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			w = "7.4 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonConfig: RscButtonMenu {
			idc = 13290;
			text = "$STR_A3_RscDebugConsole_ButtonConfig";
			x = "7.5 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			y = "20.5 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			w = "7.4 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonAnimations: RscButtonMenu {
			idc = 13291;
			text = "$STR_A3_RscDebugConsole_ButtonAnimations";
			x = "15 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			y = "19.4 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			w = "7 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonGUI: RscButtonMenu {
			idc = 13292;
			text = "$STR_A3_RscDebugConsole_ButtonGUI";
			x = "15 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			y = "20.5 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
			w = "7 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
			h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
		};
	};
};