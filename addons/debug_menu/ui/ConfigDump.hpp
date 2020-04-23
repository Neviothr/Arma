class GVAR(configDumpHandle): RscEdit {
    idc = IDC_configDumpHandle;
    x = "SafeZoneX + (1310 / 1920) * SafeZoneW";
    y = "SafeZoneY + (190 / 1080) * SafeZoneH";
    w = "(281 / 1920) * SafeZoneW";
    h = "(30 / 1080) * SafeZoneH";
    type = CT_EDIT;
    style = ST_MULTI;
    tooltip = "Config Dump Handle";
    colorBackground[] = {0.3, 0.3, 0.3, 0.5};
    sizeEx = 0.05;
};

class GVAR(dumpConfig): NevRscButton {
    idc = IDC_configDumpButton;
    text = "Dump Config";
    x = "SafeZoneX + (1310 / 1920) * SafeZoneW";
    y = "SafeZoneY + (225 / 1080) * SafeZoneH";
    action = QUOTE(call FUNC(dumpConfig));
    colorText[] = {0.9, 0.195, 0.195, 1};
};
