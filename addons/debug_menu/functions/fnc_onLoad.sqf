#include "script_component.hpp"

params ["_dialog"];

private _overcastSlider = _dialog displayCtrl IDC_overcastSlider;
_overcastSlider sliderSetPosition overcast;

private _fogValueSlider = _dialog displayCtrl IDC_fogValueSlider;
_fogValueSlider sliderSetPosition (fogParams select 0);

private _fogDecaySlider = _dialog displayCtrl IDC_fogDecaySlider;
_fogDecaySlider sliderSetPosition (fogParams select 1);

private _fogBaseSlider = _dialog displayCtrl IDC_fogBaseSlider;
_fogBaseSlider sliderSetPosition (fogParams select 2);

private _rainSlider = _dialog displayCtrl IDC_rainSlider;
_rainSlider sliderSetPosition rain;

private _windSlider = _dialog displayCtrl IDC_windSlider;
_windStrSlider sliderSetPosition windStr;

private _lightningsSlider = _dialog displayCtrl IDC_lightningsSlider;
_lightningsSlider sliderSetPosition lightnings;

private _wavesSlider = _dialog displayCtrl IDC_wavesSlider;
_wavesSlider sliderSetPosition waves;

private _yearBox = _dialog displayCtrl IDC_yearBox;
for "_year" from 1982 to 2050 do {
    _yearBox lbAdd str _year;
};
_yearBox lbSetCurSel (date select 0) - 1982;
_yearBox ctrlAddEventHandler ["LBSelChanged", {_this call FUNC(setDate)}];

private _monthBox = _dialog displayCtrl IDC_monthBox;
_monthBox lbAdd "January";
_monthBox lbAdd "February";
_monthBox lbAdd "March";
_monthBox lbAdd "April";
_monthBox lbAdd "May";
_monthBox lbAdd "June";
_monthBox lbAdd "July";
_monthBox lbAdd "August";
_monthBox lbAdd "September";
_monthBox lbAdd "October";
_monthBox lbAdd "November";
_monthBox lbAdd "December";
_monthBox lbSetCurSel ((date select 1) - 1);
_monthBox ctrlAddEventHandler ["LBSelChanged", {_this call FUNC(setDate)}];

private _dayBox = _dialog displayCtrl IDC_dayBox;
for "_day" from 1 to 31 do {
    _dayBox lbAdd str _day;
};
_dayBox lbSetCurSel ((date select 2) - 1);
_hourBox ctrlAddEventHandler ["LBSelChanged", {_this call FUNC(setDate)}];

private _hourBox = _dialog displayCtrl IDC_hourBox;
for "_hour" from 0 to 23 do {
    _hourBox lbAdd str _hour;
};
_hourBox lbSetCurSel (date select 3);
_hourBox ctrlAddEventHandler ["LBSelChanged", {_this call FUNC(setDate)}];

private _minuteBox = _dialog displayCtrl IDC_minuteBox;
for "_minute" from 0 to 59 do {
    _minuteBox lbAdd str _minute;
};
_minuteBox lbSetCurSel (date select 4);
_minuteBox ctrlAddEventHandler ["LBSelChanged", {_this call FUNC(setDate)}];

if !(isMultiplayer) then {
    private _execGlobalButton = _dialog displayCtrl IDC_execGlobalButton;
    private _execServerButton = _dialog displayCtrl IDC_execServerButton;
    _execGlobalButton ctrlEnable false;
    _execServerButton ctrlEnable false;
};

private _missionInfo = _dialog displayCtrl IDC_missionInfo;
_missionInfo ctrlSetStructuredText parseText format [
    "<t size = '1' font = 'RobotoCondensedBold' color='#ffffff' align = 'left'>
    %1 on %2
    <br/>
    Cursor Object: %3
    <br/>
    Active SQF: %4 Active FSM: %5 Pos: %6 Time: %7m
    </t>",
    missionName call CBA_fnc_decodeURL,
    worldName,
    ["NULL-Object", format ["%1 (%2)", typeOf cursorObject, cursorObject]] select (!isNull cursorObject),
    (diag_activeScripts select 0) + (diag_activeScripts select 1) + (diag_activeScripts select 2),
    diag_activeScripts select 3,
    getPos player apply {floor _x},
    floor (time / 60)
];

GVAR(moduleMarkers) = [];

private _mapDisplay = _dialog displayCtrl IDC_mapDisplay;
_mapDisplay ctrlAddEventHandler ["Draw", {call FUNC(drawModuleMarkers)}];
_mapDisplay ctrlAddEventHandler ["Destroy", {{deleteMarkerLocal _x} forEach GVAR(moduleMarkers)}];

private _objectList = _dialog displayCtrl IDC_objectListBox;
{
    _objectList lbAdd str typeOf _x;
} forEach nearestObjects [player, [], 25];
