disableSerialization;

if (hasInterface) then {
    waitUntil {!isNull (findDisplay 12)};

    _mapDisplay = findDisplay 12;
    _mapControl = _mapDisplay displayCtrl 51;
    _mapControl ctrlAddEventHandler ["MouseMoving", {
        nev_map_custom_mark = "custom_mark" in (ctrlMapMouseOver (_this select 0));
    }];

    ["nev_on_map_click", "onMapSingleClick", {
        if (_shift) then {
            nev_marker_location = _pos;
        };
    }] call BIS_fnc_addStackedEventHandler;

    _mapDisplay displayAddEventHandler ["KeyDown", {
        if (!isNil "nev_map_custom_mark" && {nev_map_custom_mark} && {(_this select 1) == 211}) then {
            nev_marker_location = nil;
        };
    }];

    addMissionEventHandler ["Draw3D", {
        if (!isNil "nev_marker_location") then {
            drawIcon3D [
                "\A3\ui_f\data\igui\cfg\cursors\customMark_ca.paa",
                [1, 1, 1, 0.6],
                [nev_marker_location select 0, nev_marker_location select 1, nev_marker_location select 2],
                1.1,
                1.3,
                0,
                "",
                0,
                0,
                "TahomaB",
                "",
                false
            ];
        };
    }];
};