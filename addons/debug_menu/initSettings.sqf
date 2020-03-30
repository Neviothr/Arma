[
    QGVAR(maxDistance),
    "SLIDER",
    ["Maximum Spawn Distance", "The maximum distance from the player at which units will be spawned."],
    "Debug Menu Groups",
    [0, 12000, 325, 0],
    true,
    {
        params ["_value"];
        GVAR(maxDistance) = _value;
    }
] call CBA_fnc_addSetting;

[
    QGVAR(minDistance),
    "SLIDER",
    ["Minimum Spawn Distance", "The minimum distance from the player at which units will be spawned."],
    "Debug Menu Groups",
    [0, 12000, 250, 0],
    true,
    {
        params ["_value"];
        GVAR(minDistance) = _value;
    }
] call CBA_fnc_addSetting;

[
    QGVAR(groupSide),
    "LIST",
    ["Unit Side", "The side of spawned units."],
    "Debug Menu Groups",
    [[west, east, independent, civilian], ["West", "East", "Independent", "Civilian"], 0],
    true,
    {
        params ["_value"];
        GVAR(groupSide) = _value;
    }
] call CBA_fnc_addSetting;

[
    QGVAR(groupArray),
    "EDITBOX",
    ["Unit Array", "Unit group array (class names sperated by a single space)."],
    "Debug Menu Groups",
    "",
    true,
    {
        params ["_value"];
        GVAR(groupArray) = _value splitString " "; // Turns editbox's `name1 name2` into ["name1", "name2"]
    }
] call CBA_fnc_addSetting;

[
    QGVAR(unitCode),
    "EDITBOX",
    ["Unit Code", "The code which will be ran on every spawned unit. Code will be ran though a forEach loop - _x, etc."],
    "Debug Menu Groups",
    "",
    true,
    {
        params ["_value"];
        GVAR(unitCode) = compile _value; // Compile here to check if variable is of type code
    }
] call CBA_fnc_addSetting;

[
    QGVAR(mapCentering),
    "CHECKBOX",
    ["Map Centering", "When enabled the debug menu's map will move to map center upon loading. Used when the player isn't supposed to know where he is."],
    "Debug Menu Map",
    true,
    false
] call CBA_fnc_addSetting;
