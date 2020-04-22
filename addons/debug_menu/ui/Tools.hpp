class GVAR(utilsButton): NevRscButton {
    text = "Utils";
    x = "SafeZoneX + (360 / 1920) * SafeZoneW";
    y = "SafeZoneY + (120 / 1080) * SafeZoneH";
    action = "closeDialog 1; [] execVM 'A3\functions_f\debug\utilities\lib\index.sqf'";
};

class GVAR(iffButton): NevRscButton {
    text = "IFF";
    x = "SafeZoneX + (1215 / 1920) * SafeZoneW";
    y = "SafeZoneY + (330 / 1080) * SafeZoneH";
    action = "closeDialog 1; createDialog 'IFF'";
    colorText[] = {0.85, 0.4, 0, 1};
};

class GVAR(createAceZeusButton): NevRscButton {
    text = "ACE Zeus On";
    x = "SafeZoneX + (1215 / 1920) * SafeZoneW";
    y = "SafeZoneY + (365 / 1080) * SafeZoneH";
    action = "ace_zeus_zeus = objNull; ['ace_zeus_createZeus', player] call CBA_fnc_serverEvent";
};

class GVAR(deleteAceZeusButton): NevRscButton {
    text = "ACE Zeus Off";
    x = "SafeZoneX + (1310 / 1920) * SafeZoneW";
    y = "SafeZoneY + (365 / 1080) * SafeZoneH";
    action = "deleteVehicle ace_zeus_zeus; ace_zeus_zeus) = nil";
};

class GVAR(map): RscMapControl {
    idc = IDC_mapDisplay;
    x = "SafeZoneX + (645 / 1920) * SafeZoneW";
    y = "SafeZoneY + (155 / 1080) * SafeZoneH";
    w = "(565 / 1920) * SafeZoneW";
    h = "(415 / 1080) * SafeZoneH";
    type = CT_MAP_MAIN;
    style = ST_PICTURE;
    scaleDefault = 0.32; // 0.16
};

class GVAR(spawnGroupsButton): NevRscButton {
    text = "Spawn Group";
    x = "SafeZoneX + (1215 / 1920) * SafeZoneW";
    y = "SafeZoneY + (575 / 1080) * SafeZoneH";
    action = QUOTE([ARR_5(GVAR(minDistance), GVAR(maxDistance), GVAR(groupSide), GVAR(groupArray), GVAR(unitCode))] call FUNC(spawnGroup));
    tooltip = "Spawn preset group(s).";
    colorText[] = {0.9, 0.195, 0.195, 1};
};

class GVAR(gameOnButton): NevRscButton {
    text = "Game On";
    x = "SafeZoneX + (1215 / 1920) * SafeZoneW";
    y = "SafeZoneY + (645 / 1080) * SafeZoneH";
    action = QUOTE(nev_mission_framework_safeStartPFH = nil);
    colorText[] = {0.205, 0.8, 0.205, 1};
};
