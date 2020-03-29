class GVAR(aceVaButton): NevRscButton {
    text = "ACE VA";
    x = "SafeZoneX + (500 / 1920) * SafeZoneW";
    y = "SafeZoneY + (120 / 1080) * SafeZoneH";
    action = "closeDialog 0; [player, player, true] call ace_arsenal_fnc_openBox";
};

class GVAR(propagateKit): NevRscButton {
    text = "Propagate Kit";
    x = "SafeZoneX + (1220 / 1920) * SafeZoneW";
    y = "SafeZoneY + (470 / 1080) * SafeZoneH";
    action = QUOTE(call FUNC(propagateKit));
    colorText[] = {0.5, 0, 0, 1};
};

class GVAR(supplyDropButton): NevRscButton {
    text = "Supply Drop";
    x = "SafeZoneX + (1220 / 1920) * SafeZoneW";
    y = "SafeZoneY + (435 / 1080) * SafeZoneH";
    action = QUOTE([ARR_1(player)] call FUNC(supplyDrop));
};
