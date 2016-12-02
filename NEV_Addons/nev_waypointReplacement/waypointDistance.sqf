disableSerialization;

if (hasInterface) then {
    waitUntil {!isNull (findDisplay 12)};

_mapDisplay = findDisplay 12;
_mapControl = _mapDisplay displayCtrl 51;

_mapControl ctrlAddEventHandler ["MouseMoving", {
    nev_mainMapMouseOverCustomMark = "customMark" in (ctrlMapMouseOver (_this select 0));
}];

["nev", "onMapSingleClick", {
    if (_shift) then {
        nev_customMarkLocation = _pos;
    };
}] call BIS_fnc_addStackedEventHandler;

_mapDisplay displayAddEventHandler ["KeyDown", {
    if (!isNil "nev_mainMapMouseOverCustomMark" && {nev_mainMapMouseOverCustomMark} && {(_this select 1) == 211}) then {
        nev_customMarkLocation = nil;
    };
}];

addMissionEventHandler ["Draw3D", {
    if (!isNil "nev_customMarkLocation") then {
        drawIcon3D [
            "\A3\ui_f\data\igui\cfg\cursors\customMark_ca.paa",
            [1,1,1,0.6],
            [nev_customMarkLocation select 0, nev_customMarkLocation select 1, nev_customMarkLocation select 2],
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
