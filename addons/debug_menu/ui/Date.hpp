class GVAR(yearBox): RscCombo {
    idc = IDC_yearBox;
    x = "SafeZoneX + (1220 / 1920) * SafeZoneW";
    y = "SafeZoneY + (155 / 1080) * SafeZoneH";
    w = "(135 / 1920) * SafeZoneW";
    h = "(30 / 1080) * SafeZoneH";
    type = CT_COMBO;
    style = ST_LEFT;
    tooltip = "Change year...";
};

class GVAR(monthBox): RscCombo {
    idc = IDC_monthBox;
    x = "SafeZoneX + (1220 / 1920) * SafeZoneW";
    y = "SafeZoneY + (190 / 1080) * SafeZoneH";
    w = "(135 / 1920) * SafeZoneW";
    h = "(30 / 1080) * SafeZoneH";
    type = CT_COMBO;
    style = ST_LEFT;
    tooltip = "Change month...";
};

class GVAR(dayBox): RscCombo {
    idc = IDC_dayBox;
    x = "SafeZoneX + (1220 / 1920) * SafeZoneW";
    y = "SafeZoneY + (225 / 1080) * SafeZoneH";
    w = "(135 / 1920) * SafeZoneW";
    h = "(30 / 1080) * SafeZoneH";
    type = CT_COMBO;
    style = ST_LEFT;
    tooltip = "Change day...";
};

class GVAR(hourBox): RscCombo {
    idc = IDC_hourBox;
    x = "SafeZoneX + (1220 / 1920) * SafeZoneW";
    y = "SafeZoneY + (260 / 1080) * SafeZoneH";
    w = "(135 / 1920) * SafeZoneW";
    h = "(30 / 1080) * SafeZoneH";
    type = CT_COMBO;
    style = ST_LEFT;
    tooltip = "Change hour...";
};

class GVAR(minuteBox): RscCombo {
    idc = IDC_minuteBox;
    x = "SafeZoneX + (1220 / 1920) * SafeZoneW";
    y = "SafeZoneY + (295 / 1080) * SafeZoneH";
    w = "(135 / 1920) * SafeZoneW";
    h = "(30 / 1080) * SafeZoneH";
    type = CT_COMBO;
    style = ST_LEFT;
    tooltip = "Change minute...";
};
