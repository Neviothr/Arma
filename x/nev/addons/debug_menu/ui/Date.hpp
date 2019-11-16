class GVAR(yearBox): RscCombo {
    idc = IDC_yearBox;
    x = "SafeZoneX + (780 / 1920) * SafeZoneW";
    y = "SafeZoneY + (275 / 1080) * SafeZoneH";
    w = "(135 / 1920) * SafeZoneW";
    h = "(30 / 1080) * SafeZoneH";
    type = CT_COMBO;
    style = ST_LEFT;
    tooltip = "Change year...";
};

class GVAR(monthBox): RscCombo {
    idc = IDC_monthBox;
    x = "SafeZoneX + (780 / 1920) * SafeZoneW";
    y = "SafeZoneY + (310 / 1080) * SafeZoneH";
    w = "(135 / 1920) * SafeZoneW";
    h = "(30 / 1080) * SafeZoneH";
    type = CT_COMBO;
    style = ST_LEFT;
    tooltip = "Change month...";
};

class GVAR(dayBox): RscCombo {
    idc = IDC_dayBox;
    x = "SafeZoneX + (780 / 1920) * SafeZoneW";
    y = "SafeZoneY + (345 / 1080) * SafeZoneH";
    w = "(135 / 1920) * SafeZoneW";
    h = "(30 / 1080) * SafeZoneH";
    type = CT_COMBO;
    style = ST_LEFT;
    tooltip = "Change day...";
};

class GVAR(hourBox): RscCombo {
    idc = IDC_hourBox;
    x = "SafeZoneX + (780 / 1920) * SafeZoneW";
    y = "SafeZoneY + (380 / 1080) * SafeZoneH";
    w = "(135 / 1920) * SafeZoneW";
    h = "(30 / 1080) * SafeZoneH";
    type = CT_COMBO;
    style = ST_LEFT;
    tooltip = "Change hour...";
};

class GVAR(minuteBox): RscCombo {
    idc = IDC_minuteBox;
    x = "SafeZoneX + (780 / 1920) * SafeZoneW";
    y = "SafeZoneY + (415 / 1080) * SafeZoneH";
    w = "(135 / 1920) * SafeZoneW";
    h = "(30 / 1080) * SafeZoneH";
    type = CT_COMBO;
    style = ST_LEFT;
    tooltip = "Change minute...";
};

class GVAR(commitDateButton): NevRscButton {
    text = "Change Date";
    x = "SafeZoneX + (780 / 1920) * SafeZoneW";
    y = "SafeZoneY + (450 / 1080) * SafeZoneH";
    action = "[[lbCurSel IDC_yearBox, lbCurSel IDC_monthBox, lbCurSel IDC_dayBox, lbCurSel IDC_hourBox, lbCurSel IDC_minuteBox]] remoteExec ['setDate']";
};
