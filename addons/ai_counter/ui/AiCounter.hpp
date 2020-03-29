class RscTitles {
    class GVAR(aiCounter) {
        idd = IDD_aiCounter;
        duration = 1e6;
        onLoad = QUOTE(_this call FUNC(onLoad); uiNamespace setVariable [ARR_2(QQGVAR(aiCounterDisplay), _this select 0)]);

        class controls {
            class GVAR(aiCounterText): RscText {
                idc = IDC_aiCounterText;
                x = "0.967152 * safezoneW + safezoneX";
                y = "0.951388 * safezoneH + safezoneY";
                h = "0.0352567 * safezoneW";
                w = "0.0470196 * safezoneH";
                text = "ERROR"; // If onLoad fails this will displayed
            };
        };
    };
};
