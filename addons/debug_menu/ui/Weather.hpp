class GVAR(overcastSlider): NevRscSlider {
    idc = IDC_overcastSlider;
    x = "SafeZoneX + (360 / 1920) * SafeZoneW";
    y = "SafeZoneY + (365 / 1080) * SafeZoneH";
    tooltip = "Change overcast...";
    sliderRange[] = {0, 1};
    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(changeWeather), 0)]);
};

class GVAR(fogValueSlider): NevRscSlider {
    idc = IDC_fogValueSlider;
    x = "SafeZoneX + (360 / 1920) * SafeZoneW";
    y = "SafeZoneY + (400 / 1080) * SafeZoneH";
    tooltip = "Change fog value...";
    sliderRange[] = {0, 1};
    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(changeWeather), 0)]);
};

class GVAR(fogDecaySlider): NevRscSlider {
    idc = IDC_fogDecaySlider;
    x = "SafeZoneX + (360 / 1920) * SafeZoneW";
    y = "SafeZoneY + (435 / 1080) * SafeZoneH";
    tooltip = "Change fog decay...";
    sliderRange[] = {-1, 1};
    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(changeWeather), 0)]);
};

class GVAR(fogBaseSlider): NevRscSlider {
    idc = IDC_fogBaseSlider;
    x = "SafeZoneX + (360 / 1920) * SafeZoneW";
    y = "SafeZoneY + (470 / 1080) * SafeZoneH";
    tooltip = "Change fog base...";
    sliderRange[] = {-5000, 5000};
    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(changeWeather), 0)]);
};

class GVAR(rainSlider): NevRscSlider {
    idc = IDC_rainSlider;
    x = "SafeZoneX + (360 / 1920) * SafeZoneW";
    y = "SafeZoneY + (505 / 1080) * SafeZoneH";
    tooltip = "Change rain...";
    sliderRange[] = {0, 1};
    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(changeWeather), 0)]);
};

class GVAR(windSlider): NevRscSlider {
    idc = IDC_windSlider;
    x = "SafeZoneX + (360 / 1920) * SafeZoneW";
    y = "SafeZoneY + (540 / 1080) * SafeZoneH";
    tooltip = "Change wind...";
    sliderRange[] = {0, 1};
    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(changeWeather), 0)]);
};

class GVAR(lightningsSlider): NevRscSlider {
    idc = IDC_lightningsSlider;
    x = "SafeZoneX + (360 / 1920) * SafeZoneW";
    y = "SafeZoneY + (575 / 1080) * SafeZoneH";
    tooltip = "Change lightnings...";
    sliderRange[] = {0, 1};
    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(changeWeather), 0)]);
};

class GVAR(wavesSlider): NevRscSlider {
    idc = IDC_wavesSlider;
    x = "SafeZoneX + (360 / 1920) * SafeZoneW";
    y = "SafeZoneY + (610 / 1080) * SafeZoneH";
    tooltip = "Change waves...";
    sliderRange[] = {0, 1};
    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(changeWeather), 0)]);
};

class GVAR(randomEnvironmentButton): NevRscButton {
    text = "Random Envi";
    x = "SafeZoneX + (1215 / 1920) * SafeZoneW";
    y = "SafeZoneY + (610 / 1080) * SafeZoneH";
    action = QUOTE([] remoteExecCall [ARR_2(QQFUNC(randomEnvironment), 0)]);
    colorText[] = {0.9, 0.195, 0.195, 1};
};
