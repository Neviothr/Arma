class GVAR(healButton): NevRscButton {
    text = "Heal";
    x = "SafeZoneX + (500 / 1920) * SafeZoneW";
    y = "SafeZoneY + (275 / 1080) * SafeZoneH";
    action = QUOTE([ARR_1(0)] call FUNC(vehicleActions));
};

class GVAR(rearmButton): NevRscButton {
    text = "Rearm";
    x = "SafeZoneX + (500 / 1920) * SafeZoneW";
    y = "SafeZoneY + (345 / 1080) * SafeZoneH";
    action = QUOTE([ARR_1(1)] call FUNC(vehicleActions));
};

class GVAR(deleteButton): NevRscButton {
    text = "Delete";
    x = "SafeZoneX + (780 / 1920) * SafeZoneW";
    y = "SafeZoneY + (590 / 1080) * SafeZoneH";
    action = "deleteVehicle cursorObject";
};
