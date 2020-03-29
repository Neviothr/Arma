 class GVAR(backgroundImage): RscFrame {
    x = "SafeZoneX + (355 / 1920) * SafeZoneW";
    y = "SafeZoneY + (95 / 1080) * SafeZoneH";
    w = "(1300 / 1920) * SafeZoneW";
    h = "(595 / 1080) * SafeZoneH";
    type = CT_STATIC;
    style = ST_FRAME;
    sizeEx = 0.05;
    text = "Debug Menu";
    moving = 1;
};

class GVAR(missionInfo): RscStructuredText {
    idc = IDC_missionInfo;
    x = "SafeZoneX + (640 / 1920) * SafeZoneW";
    y = "SafeZoneY + (575 / 1080) * SafeZoneH";
    w = "(576 / 1920) * SafeZoneW";
    h = "(86 / 1920) * SafeZoneW";
    type = CT_STRUCTURED_TEXT;
    style = ST_MULTI;
    size = 0.038;
    colorBackground[] = {0, 0, 0, 0.5};
};
