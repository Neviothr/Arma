/*
Parameters:
    _settingName - Unique setting name. Matches resulting variable name <STRING>
    _settingType - Type of setting. Can be "CHECKBOX", "LIST", "SLIDER" or "COLOR" <STRING>
    _title       - Display name or display name + tooltip (optional, default: same as setting name) <STRING, ARRAY>
    _category    - Category for the settings menu <STRING>
    _valueInfo   - Data for this setting: [min, max, default, number of shown trailing decimals]
    _isGlobal    - true: all clients share the same state of the setting (optional, default: false) <ARRAY>
    _script      - Script to execute when setting is changed or forced. (optional) <CODE>
*/

// Year
[
    "NEV_year",
    "SLIDER",
    "Year",
    "Environmental Settings",
    [1982, 2050, 2035, 0],
    false,
    {
        params ["_value","_month","_day","_hour","_minute"];
        _month = date select 1;
        _day = date select 2;
        _hour = date select 3;
        _minute = date select 4;
        setDate [_value, _month, _day, _hour, _minute];
    }
] call CBA_Settings_fnc_init;

// Month
[
    "NEV_month",
    "SLIDER",
    "Month",
    "Environmental Settings",
    [1, 12, 5, 0],
    false,
    {
        params ["_value","_year","_day","_hour","_minute"];
        _year = date select 0;
        _day = date select 2;
        _hour = date select 3;
        _minute = date select 4;
        setDate [_year, _value, _day, _hour, _minute];
    }
] call CBA_Settings_fnc_init;

// Day
[
    "NEV_day",
    "SLIDER",
    "Day",
    "Environmental Settings",
    [1, 31, 28, 0],
    false,
    {
        params ["_value","_year","_month","_hour","_minute"];
        _year = date select 0;
        _month = date select 1;
        _hour = date select 3;
        _minute = date select 4;
        setDate [_year, _month, _value, _hour, _minute];
    }
] call CBA_Settings_fnc_init;

// Hour
[
    "NEV_hour",
    "SLIDER",
    "Hour",
    "Environmental Settings",
    [0, 23, 12, 0],
    false,
    {
        params ["_value","_year","_month","_day","_minute"];
        _year = date select 0;
        _month = date select 1;
        _day = date select 2;
        _minute = date select 4;
        setDate [_year, _month, _day, _value, _minute];
    }
] call CBA_Settings_fnc_init;

// Minute
[
    "NEV_minute",
    "SLIDER",
    "Minute",
    "Environmental Settings",
    [0, 59, 0, 0],
    false,
    {
        params ["_value","_year","_month","_day","_hour"];
        _year = date select 0;
        _month = date select 1;
        _day = date select 2;
        _hour = date select 3;
        setDate [_year, _month, _day, _hour, _value];
    }
] call CBA_Settings_fnc_init;

// Overcast
[
    "NEV_overcast",
    "SLIDER",
    "Overcast",
    "Environmental Settings",
    [0, 1, 0, 2],
    false,
    {
        params ["_value"];
        skipTime -24;
        86400 setOvercast _value;
        skipTime 24;
        simulWeatherSync;
        forceWeatherChange;
    }
] call CBA_Settings_fnc_init;

// Fog value
[
    "NEV_fogValue",
    "SLIDER",
    "Fog Value",
    "Environmental Settings",
    [0, 100, 0, 0],
    false,
    {
        params ["_value"];
        _fogDecay = fogParams select 1;
        _fogBase = fogParams select 2;
        0 setFog [_value, _fogDecay, _fogBase];
    }
] call CBA_Settings_fnc_init;

// Fog decay
[
    "NEV_fogDecay",
    "SLIDER",
    "Fog Decay",
    "Environmental Settings",
    [0, 10, 1, 0],
    false,
    {
        params ["_value"];
        _fogValue = fogParams select 0;
        _fogBase = fogParams select 2;
        0 setFog [_fogValue, _value, _fogBase];
    }
] call CBA_Settings_fnc_init;

// Fog base
[
    "NEV_fogBase",
    "SLIDER",
    "Fog Value",
    "Environmental Settings",
    [-1000, 1000, 0, 0],
    false,
    {
        params ["_value"];
        _fogValue = fogParams select 0;
        _fogDecay = fogParams select 1;
        0 setFog [_fogValue, _fogDecay, _value];
    }
] call CBA_Settings_fnc_init;

// Rain
[
    "NEV_rain",
    "SLIDER",
    "Rain",
    "Environmental Settings",
    [0, 100, 0, 0],
    false,
    {
        params ["_value"];
        0 setRain _value;
        forceWeatherChange;
    }
] call CBA_Settings_fnc_init;

// Lightnings
[
    "NEV_lightings",
    "SLIDER",
    "Lightnings",
    "Environmental Settings",
    [0, 100, 0, 0],
    false,
    {
        params ["_value"];
        0 setLightnings _value;
        forceWeatherChange;
    }
] call CBA_Settings_fnc_init;

// Waves
[
    "NEV_waves",
    "SLIDER",
    "Waves",
    "Environmental Settings",
    [0, 100, 0, 0],
    false,
    {
        params ["_value"];
        0 setWaves _value;
        forceWeatherChange;
    }
] call CBA_Settings_fnc_init;

// Wind
[
    "NEV_wind",
    "SLIDER",
    "Wind",
    "Environmental Settings",
    [0, 100, 0, 0],
    false,
    {
        params ["_value"];
        0 setWindStr _value;
    }
] call CBA_Settings_fnc_init;

// Gusts
[
    "NEV_gusts",
    "SLIDER",
    "Gusts",
    "Environmental Settings",
    [0, 100, 0, 0],
    false,
    {
        params ["_value"];
        0 setGusts _value;
    }
] call CBA_Settings_fnc_init;

// Wind direction
[
    "NEV_windDir",
    "SLIDER",
    "Wind Direction",
    "Environmental Settings",
    [0, 359, 0, 0],
    false,
    {
        params ["_value"];
        0 setWindDir _value;
    }
] call CBA_Settings_fnc_init;