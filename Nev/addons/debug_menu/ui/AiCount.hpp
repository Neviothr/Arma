class RscTitles {
	class GVAR(aiCount) {
		idd = 81000;
		duration = 1e6;
		onLoad = QUOTE(_this call FUNC(aiCountLoop); uiNamespace setVariable [ARR_2(QQGVAR(aiCountDisplay), _this select 0)]);
		class controls {
			class GVAR(aiCountText): RscText {
				idc = 81001;
				x = "0.967152 * safezoneW + safezoneX";
				y = "0.951388 * safezoneH + safezoneY";
				h = "0.0352567 * safezoneW";
				w = "0.0470196 * safezoneH";
				text = "ERROR";
			};
		};
	};
};
