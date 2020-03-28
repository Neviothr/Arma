class GVAR(healButton): NevRscButton {
    text = "Heal";
    x = "SafeZoneX + (1360 / 1920) * SafeZoneW";
    y = "SafeZoneY + (155 / 1080) * SafeZoneH";
    w = "(88 / 1920) * SafeZoneW";
    action = QUOTE([ARR_1(0)] call FUNC(vehicleActions));
};

class GVAR(rearmButton): NevRscButton {
    text = "Rearm";
    x = "SafeZoneX + (1453 / 1920) * SafeZoneW";
    y = "SafeZoneY + (155 / 1080) * SafeZoneH";
    w = "(88 / 1920) * SafeZoneW";
    action = QUOTE([ARR_1(1)] call FUNC(vehicleActions));
};

class GVAR(deleteButton): NevRscButton {
    text = "Delete";
    x = "SafeZoneX + (1546 / 1920) * SafeZoneW";
    y = "SafeZoneY + (155 / 1080) * SafeZoneH";
    w = "(88 / 1920) * SafeZoneW";
    action = "deleteVehicle cursorObject";
};

class GVAR(objectList): RscListBox {
    idc = IDC_objectListBox;
    type = CT_LISTBOX;
    style = ST_LEFT + LB_TEXTURES;
    x = "SafeZoneX + (1360 / 1920) * SafeZoneW";
    y = "SafeZoneY + (190 / 1080) * SafeZoneH";
    w = "(276 / 1920) * SafeZoneW";
    h = "(185 / 1080) * SafeZoneH";
};
