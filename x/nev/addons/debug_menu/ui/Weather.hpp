class GVAR(overcastSlider): NevRscSlider {
    idc = IDC_overcastSlider;
    x = "SafeZoneX + (920 / 1920) * SafeZoneW";
    y = "SafeZoneY + (275 / 1080) * SafeZoneH";
    tooltip = "Change overcast...";
    sliderRange[] = {0, 1};
    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(changeWeather), 0)]);
};

class GVAR(fogValueSlider): NevRscSlider {
    idc = IDC_fogValueSlider;
    x = "SafeZoneX + (920 / 1920) * SafeZoneW";
    y = "SafeZoneY + (310 / 1080) * SafeZoneH";
    tooltip = "Change fog value...";
    sliderRange[] = {0, 1};
    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(changeWeather), 0)]);
};

class GVAR(fogDecaySlider): NevRscSlider {
    idc = IDC_fogDecaySlider;
    x = "SafeZoneX + (920 / 1920) * SafeZoneW";
    y = "SafeZoneY + (345 / 1080) * SafeZoneH";
    tooltip = "Change fog decay...";
    sliderRange[] = {-1, 1};
    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(changeWeather), 0)]);
};

class GVAR(fogBaseSlider): NevRscSlider {
    idc = IDC_fogBaseSlider;
    x = "SafeZoneX + (920 / 1920) * SafeZoneW";
    y = "SafeZoneY + (380 / 1080) * SafeZoneH";
    tooltip = "Change fog base...";
    sliderRange[] = {-5000, 5000};
    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(changeWeather), 0)]);
};

class GVAR(rainSlider): NevRscSlider {
    idc = IDC_rainSlider;
    x = "SafeZoneX + (920 / 1920) * SafeZoneW";
    y = "SafeZoneY + (415 / 1080) * SafeZoneH";
    tooltip = "Change rain...";
    sliderRange[] = {0, 1};
    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(changeWeather), 0)]);
};

class GVAR(gustsSlider): NevRscSlider {
    idc = IDC_gustsSlider;
    x = "SafeZoneX + (920 / 1920) * SafeZoneW";
    y = "SafeZoneY + (450 / 1080) * SafeZoneH";
    tooltip = "Change wind gusts...";
    sliderRange[] = {0, 1};
    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(changeWeather), 0)]);
};

class GVAR(windStrSlider): NevRscSlider {
    idc = IDC_windStrSlider;
    x = "SafeZoneX + (920 / 1920) * SafeZoneW";
    y = "SafeZoneY + (485 / 1080) * SafeZoneH";
    tooltip = "Change wind strength...";
    sliderRange[] = {0, 1};
    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(changeWeather), 0)]);
};

class GVAR(windDirSlider): NevRscSlider {
    idc = IDC_windDirSlider;
    x = "SafeZoneX + (920 / 1920) * SafeZoneW";
    y = "SafeZoneY + (520 / 1080) * SafeZoneH";
    tooltip = "Change wind direction...";
    sliderRange[] = {0, 359};
    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(changeWeather), 0)]);
};

class GVAR(lightningsSlider): NevRscSlider {
    idc = IDC_lightningsSlider;
    x = "SafeZoneX + (920 / 1920) * SafeZoneW";
    y = "SafeZoneY + (520 / 1080) * SafeZoneH";
    tooltip = "Change lightnings...";
    sliderRange[] = {0, 1};
    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(changeWeather), 0)]);
};

class GVAR(wavesSlider): NevRscSlider {
    idc = IDC_wavesSlider;
    x = "SafeZoneX + (920 / 1920) * SafeZoneW";
    y = "SafeZoneY + (555 / 1080) * SafeZoneH";
    tooltip = "Change waves...";
    sliderRange[] = {0, 1};
    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(changeWeather), 0)]);
};

class GVAR(randomEnvironmentButton): NevRscButton {
    text = "Random Environment";
    x = "SafeZoneX + (500 / 1920) * SafeZoneW";
    y = "SafeZoneY + (380 / 1080) * SafeZoneH";
    action = QUOTE([] remoteExecCall [ARR_2(QQFUNC(randomEnvironment), 0)]);
};
