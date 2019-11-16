class GVAR(bisVaButton): NevRscButton {
    text = "BIS VA";
    x = "SafeZoneX + (360 / 1920) * SafeZoneW";
    y = "SafeZoneY + (275 / 1080) * SafeZoneH";
    action = "closeDialog 0; ['Open', true] spawn BIS_fnc_arsenal";
};

class GVAR(aceVaButton): NevRscButton {
    text = "ACE VA";
    x = "SafeZoneX + (360 / 1920) * SafeZoneW";
    y = "SafeZoneY + (310 / 1080) * SafeZoneH";
    action = "closeDialog 0; [player, player, true] call ace_arsenal_fnc_openBox";
};

class GVAR(resetPosButton): NevRscButton {
    text = "Reset Pos";
    x = "SafeZoneX + (640 / 1920) * SafeZoneW";
    y = "SafeZoneY + (380 / 1080) * SafeZoneH";
    action = QUOTE(ARR_1([player]) call FUNC(resetPosition));
};
