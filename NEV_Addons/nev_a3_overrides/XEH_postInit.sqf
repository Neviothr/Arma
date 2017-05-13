#include "script_component.hpp"

disableSerialization;

diag_log format ["CAN SUSPEND TEST: %1", canSuspend];

if (hasInterface) then {
    _mapDisplay = findDisplay 12;
    _mapControl = _mapDisplay displayCtrl 51;

    _mapControl ctrlAddEventHandler ["MouseMoving", {
        GVAR(map_custom_mark) = "custom_mark" in (ctrlMapMouseOver (_this select 0));
    }];

    [QGVAR(on_map_click), "onMapSingleClick", {
        if (_shift) then {
            GVAR(marker_location) = _pos;
        };
    }] call BIS_fnc_addStackedEventHandler;

    _mapDisplay displayAddEventHandler ["KeyDown", {
        if (!isNil QGVAR(map_custom_mark) && {GVAR(map_custom_mark)} && {(_this select 1) == 211}) then {
            GVAR(marker_location) = nil;
        };
    }];

    addMissionEventHandler ["Draw3D", {
        if (!isNil QGVAR(marker_location)) then {
            drawIcon3D [
                "\A3\ui_f\data\igui\cfg\cursors\customMark_ca.paa",
                [1, 1, 1, 0.6],
                [GVAR(marker_location) select 0, GVAR(marker_location) select 1, GVAR(marker_location) select 2],
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