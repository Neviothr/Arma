class GVAR(utilsButton): NevRscButton {
    text = "Utils";
    x = "SafeZoneX + (780 / 1920) * SafeZoneW";
    y = "SafeZoneY + (660 / 1080) * SafeZoneH";
    action = "[] execVM 'A3\functions_f\debug\utilities\lib\index.sqf'";
};

class GVAR(iffButton): NevRscButton {
    text = "IFF";
    x = "SafeZoneX + (780 / 1920) * SafeZoneW";
    y = "SafeZoneY + (520 / 1080) * SafeZoneH";
    action = "closeDialog 1; createDialog 'IFF'";
    colorText[] = {0.85, 0.4, 0, 1};
};

class GVAR(createAceZeusButton): NevRscButton {
    text = "Create ACE Zeus";
    x = "SafeZoneX + (780 / 1920) * SafeZoneW";
    y = "SafeZoneY + (625 / 1080) * SafeZoneH";
    action = "ace_zeus_zeus = objNull; ['ace_zeus_createZeus', player] call CBA_fnc_serverEvent";
};
