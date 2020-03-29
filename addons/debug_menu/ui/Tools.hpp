class GVAR(utilsButton): NevRscButton {
    text = "Utils";
    x = "SafeZoneX + (360 / 1920) * SafeZoneW";
    y = "SafeZoneY + (120 / 1080) * SafeZoneH";
    action = "closeDialog 1; [] execVM 'A3\functions_f\debug\utilities\lib\index.sqf'";
};

class GVAR(iffButton): NevRscButton {
    text = "IFF";
    x = "SafeZoneX + (1220 / 1920) * SafeZoneW";
    y = "SafeZoneY + (330 / 1080) * SafeZoneH";
    action = "closeDialog 1; createDialog 'IFF'";
    colorText[] = {0.85, 0.4, 0, 1};
};

class GVAR(createAceZeusButton): NevRscButton {
    text = "Create ACE Zeus";
    x = "SafeZoneX + (1220 / 1920) * SafeZoneW";
    y = "SafeZoneY + (365 / 1080) * SafeZoneH";
    action = "ace_zeus_zeus = objNull; ['ace_zeus_createZeus', player] call CBA_fnc_serverEvent";
};

class GVAR(map): RscMapControl {
    idc = IDC_mapDisplay;
    x = "SafeZoneX + (640 / 1920) * SafeZoneW";
    y = "SafeZoneY + (155 / 1080) * SafeZoneH";
    w = "(575 / 1920) * SafeZoneW";
    h = "(415 / 1080) * SafeZoneH";
    type = CT_MAP_MAIN;
    style = ST_PICTURE;
};

class GVAR(spawnGroupsButton): NevRscButton {
    text = "Spawn Group(s)";
    x = "SafeZoneX + (1220 / 1920) * SafeZoneW";
    y = "SafeZoneY + (575 / 1080) * SafeZoneH";
    action = QUOTE([ARR_5(GVAR(minDistance), GVAR(maxDistance), GVAR(groupSide), GVAR(groupArray), GVAR(unitCode))] call FUNC(spawnGroup));
    tooltip = "Spawn preset group(s).";
    colorText[] = {0.5, 0, 0, 1};
    scaleDefault = 0.32; // 0.16
};
