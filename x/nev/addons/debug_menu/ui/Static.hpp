 class GVAR(backgroundImage): RscFrame {
    x = "SafeZoneX + (355 / 1920) * SafeZoneW";
    y = "SafeZoneY + (130 / 1080) * SafeZoneH";
    w = "(900 / 1920) * SafeZoneW";
    h = "(600 / 1080) * SafeZoneH";
    type = CT_STATIC;
    style = ST_FRAME;
    sizeEx = 0.05;
    text = "Debug Menu";
    moving = 1;
};

class GVAR(missionInfo): RscStructuredText {
    idc = IDC_missionInfo;
    x = "SafeZoneX + (360 / 1920) * SafeZoneW";
    y = "SafeZoneY + (155 / 1080) * SafeZoneH";
    w = "(555 / 1920) * SafeZoneW";
    h = "(153 / 1920) * SafeZoneW";
    type = CT_STRUCTURED_TEXT;
    style = ST_MULTI;
    size = 0.037;
    colorBackground[] = {0, 0, 0, 0.5};
};
