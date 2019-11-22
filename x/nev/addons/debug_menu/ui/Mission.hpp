class GVAR(spawnGroupsButton): NevRscButton {
    text = "Spawn Group(s)";
    x = "SafeZoneX + (640 / 1920) * SafeZoneW";
    y = "SafeZoneY + (345 / 1080) * SafeZoneH";
    action = QUOTE([ARR_5(GVAR(minDistance), GVAR(maxDistance), GVAR(groupSide), GVAR(groupArray), GVAR(unitCode))] call FUNC(spawnGroup));
    tooltip = "Spawn preset group(s).";
};

class GVAR(supplyDropButton): NevRscButton {
    text = "Supply Drop";
    x = "SafeZoneX + (780 / 1920) * SafeZoneW";
    y = "SafeZoneY + (485 / 1080) * SafeZoneH";
    action = QUOTE([ARR_1(player)] call FUNC(supplyDrop));
};

class GVAR(enableSavingButton): NevRscButton {
    text = "Enable Saving";
    x = "SafeZoneX + (120 / 1920) * SafeZoneW";
    y = "SafeZoneY + (275 / 1080) * SafeZoneH";
    action = "enableSaving [true, true]";
};
