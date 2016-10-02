/* This script creates a custom, player placed waypoint without the distance indicator, as a replacement for the default player placed waypoints.
* NOTES:
* Does not work after a restart when used as script.
* Disable waypoints in the difficulty manu.
*/

disableSerialization;
if (hasInterface) then { waitUntil {!isNull (findDisplay 12)};
_mapDisplay = findDisplay 12;
_mapControl = _mapDisplay displayCtrl 51;

_mapControl ctrlAddEventHandler ["MouseMoving", {
    TRN_var_mainMapMouseOverCustomMark = "customMark" in (ctrlMapMouseOver (_this select 0));
}];

 ["TRN", "onMapSingleClick", {
    if (_shift) then {
        TRN_var_customMarkLocation = _pos;
    };
}] call BIS_fnc_addStackedEventHandler;

_mapDisplay displayAddEventHandler ["KeyDown", {
    if (!isNil "TRN_var_mainMapMouseOverCustomMark" && {TRN_var_mainMapMouseOverCustomMark} && {(_this select 1) == 211}) then {
        TRN_var_customMarkLocation = nil;
    };
}];

addMissionEventHandler ["Draw3D", {
    if (!isNil "TRN_var_customMarkLocation") then {
        drawIcon3D ["\A3\ui_f\data\igui\cfg\cursors\customMark_ca.paa", [1,1,1,0.8], [TRN_var_customMarkLocation select 0, TRN_var_customMarkLocation select 1, (TRN_var_customMarkLocation select 2) + 2], 1.5, 1.5, 0, "", 1, 0, "TahomaB", "", true];
    };
}];
};
