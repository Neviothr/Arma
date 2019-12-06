class GVAR(teleportButton): NevRscButton {
    text = "Teleport";
    x = "SafeZoneX + (640 / 1920) * SafeZoneW";
    y = "SafeZoneY + (275 / 1080) * SafeZoneH";
    action = QUOTE(closeDialog 0; call FUNC(teleport));
};

class GVAR(groupTeleportButton): NevRscButton {
    text = "Group Teleport";
    x = "SafeZoneX + (640 / 1920) * SafeZoneW";
    y = "SafeZoneY + (310 / 1080) * SafeZoneH";
    action = QUOTE(closeDialog 0; call FUNC(groupTeleport));
};

class GVAR(resetPosButton): NevRscButton {
    text = "Reset Pos";
    x = "SafeZoneX + (640 / 1920) * SafeZoneW";
    y = "SafeZoneY + (380 / 1080) * SafeZoneH";
    action = QUOTE(ARR_1([player]) call FUNC(resetPosition));
};
