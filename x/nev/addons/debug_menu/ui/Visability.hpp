class GVAR(visibleButton): NevRscButton {
    text = "Visible";
    x = "SafeZoneX + (360 / 1920) * SafeZoneW";
    y = "SafeZoneY + (345 / 1080) * SafeZoneH";
    action = "player hideObjectGlobal false; player allowDamage true; player setUnitTrait ['camouflageCoef', 1]";
    colorText[] = {0, 0.5, 0, 1};
};

class GVAR(invisibleButton): NevRscButton {
    text = "Invisible";
    x = "SafeZoneX + (360 / 1920) * SafeZoneW";
    y = "SafeZoneY + (380 / 1080) * SafeZoneH";
    action = "player hideObjectGlobal true; player allowDamage false; player setUnitTrait ['camouflageCoef', 0];";
    colorText[] = {0.5, 0, 0, 1};
};
