class GVAR(repairButton): NevRscButton {
    text = "Repair / Heal";
    x = "SafeZoneX + (500 / 1920) * SafeZoneW";
    y = "SafeZoneY + (275 / 1080) * SafeZoneH";
    action = QUOTE(_this call FUNC(repair));
};

class GVAR(refuelButton): NevRscButton {
    text = "Refuel";
    x = "SafeZoneX + (500 / 1920) * SafeZoneW";
    y = "SafeZoneY + (310 / 1080) * SafeZoneH";
    action = QUOTE(_this call FUNC(refuel));
};

class GVAR(rearmButton): NevRscButton {
    text = "Rearm";
    x = "SafeZoneX + (500 / 1920) * SafeZoneW";
    y = "SafeZoneY + (345 / 1080) * SafeZoneH";
    action = QUOTE(_this call FUNC(rearm));
};

class GVAR(deleteButton): NevRscButton {
    text = "Delete";
    x = "SafeZoneX + (780 / 1920) * SafeZoneW";
    y = "SafeZoneY + (590 / 1080) * SafeZoneH";
    action = "deleteVehicle cursorObject";
};
