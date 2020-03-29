class GVAR(teleportButton): NevRscButton {
    text = "Teleport";
    x = "SafeZoneX + (1220 / 1920) * SafeZoneW";
    y = "SafeZoneY + (505 / 1080) * SafeZoneH";
    action = QUOTE(closeDialog 0; call FUNC(teleport));
};

class GVAR(resetPosButton): NevRscButton {
    text = "Reset Pos";
    x = "SafeZoneX + (1220 / 1920) * SafeZoneW";
    y = "SafeZoneY + (540 / 1080) * SafeZoneH";
    action = QUOTE(call FUNC(resetPosition));
};
