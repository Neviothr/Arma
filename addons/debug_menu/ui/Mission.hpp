class GVAR(spawnGroupsButton): NevRscButton {
    text = "Spawn Group(s)";
    x = "SafeZoneX + (1220 / 1920) * SafeZoneW";
    y = "SafeZoneY + (750 / 1080) * SafeZoneH";
    action = QUOTE([ARR_5(GVAR(minDistance), GVAR(maxDistance), GVAR(groupSide), GVAR(groupArray), GVAR(unitCode))] call FUNC(spawnGroup));
    tooltip = "Spawn preset group(s).";
};
