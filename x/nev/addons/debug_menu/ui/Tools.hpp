class GVAR(sideList): RscCombo {
    idc = IDC_sideList;
    x = "SafeZoneX + (780 / 1920) * SafeZoneW";
    y = "SafeZoneY + (695 / 1080) * SafeZoneH";
    w = "(135 / 1920) * SafeZoneW";
    h = "(30 / 1080) * SafeZoneH";
    type = CT_COMBO;
    style = ST_LEFT;
    tooltip = "Change side...";
    onLBSelChanged = QUOTE(_this call FUNC(changeSide));
};

class GVAR(utilsButton): NevRscButton {
    text = "Utils";
    x = "SafeZoneX + (780 / 1920) * SafeZoneW";
    y = "SafeZoneY + (660 / 1080) * SafeZoneH";
    action = "[] execVM 'A3\functions_f\debug\utilities\lib\index.sqf'";
};

class GVAR(removeDeadButton): NevRscButton {
    text = "Remove Dead";
    x = "SafeZoneX + (780 / 1920) * SafeZoneW";
    y = "SafeZoneY + (555 / 1080) * SafeZoneH";
    action = QUOTE({deleteVehicle _x} forEach allDead - GVAR(deadOnStart));
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
