class GVAR(healButton): NevRscButton {
    text = "Heal";
    x = "SafeZoneX + (1310 / 1920) * SafeZoneW";
    y = "SafeZoneY + (155 / 1080) * SafeZoneH";
    action = QUOTE([ARR_1(0)] call FUNC(vehicleActions));
};

class GVAR(rearmButton): NevRscButton {
    text = "Rearm";
    x = "SafeZoneX + (1405 / 1920) * SafeZoneW";
    y = "SafeZoneY + (155 / 1080) * SafeZoneH";
    action = QUOTE([ARR_1(1)] call FUNC(vehicleActions));
};

class GVAR(deleteButton): NevRscButton {
    text = "Delete";
    x = "SafeZoneX + (1500 / 1920) * SafeZoneW";
    y = "SafeZoneY + (155 / 1080) * SafeZoneH";
    action = "deleteVehicle cursorObject";
    colorText[] = {0.9, 0.195, 0.195, 1};
};
