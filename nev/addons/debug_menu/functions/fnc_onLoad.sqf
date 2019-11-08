#include "script_component.hpp"

params ["_dialog"];

// Find slider, set it's range, get current weather, set slider accordingly
// Overcast slider
private _overcastSlider = _dialog displayCtrl IDC_overcastSlider;
_overcastSlider sliderSetRange [0, 1];
_overcastSlider sliderSetPosition overcast;

// Lightnings slider
private _lightningSlider = _dialog displayCtrl IDC_lightningSlider;
_lightningSlider sliderSetRange [0, 1];
_lightningSlider sliderSetPosition lightnings;

// Fog value slider
private _fogValueSlider = _dialog displayCtrl IDC_fogValueSlider;
_fogValueSlider sliderSetRange [0, 1];
_fogValueSlider sliderSetPosition (fogParams select 0);

// Fog decay slider
private _fogDecaySlider = _dialog displayCtrl IDC_fogDecaySlider;
_fogDecaySlider sliderSetRange [0, 1];
_fogDecaySlider sliderSetPosition (fogParams select 1);

// Fog base slider
private _fogBaseSlider = _dialog displayCtrl IDC_fogBaseSlider;
_fogBaseSlider sliderSetRange [0, 1];
_fogBaseSlider sliderSetPosition (fogParams select 2);

// Rain slider
private _rainSlider = _dialog displayCtrl IDC_rainSlider;
_rainSlider sliderSetRange [0, 1];
_rainSlider sliderSetPosition rain;

// Waves slider
private _wavesSlider = _dialog displayCtrl IDC_waveSlider;
_wavesSlider sliderSetRange [0, 1];
_wavesSlider sliderSetPosition waves;

// Year combo box
private _yearBox = _dialog displayCtrl IDC_yearBox;
for "_year" from 1982 to 2050 do {
    _yearBox lbAdd str _year;
};
_yearBox lbSetCurSel (date select 0) - 1982;

// Month combo box
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

// Day combo box
private _dayBox = _dialog displayCtrl IDC_dayBox;
for "_day" from 1 to 31 do {
    _dayBox lbAdd str _day;
};
_dayBox lbSetCurSel ((date select 2) - 1);

// Hour combo box
private _hourBox = _dialog displayCtrl IDC_hourBox;
for "_hour" from 0 to 23 do {
    _hourBox lbAdd str _hour;
};
_hourBox lbSetCurSel (date select 3);

// Minute combo box
private _minuteBox = _dialog displayCtrl IDC_minuteBox;
for "_minute" from 0 to 59 do {
    _minuteBox lbAdd str _minute;
};
_minuteBox lbSetCurSel (date select 4);

// Side list box
private _sideList = _dialog displayCtrl IDC_sideList;
_sideList lbAdd "East";
_sideList lbAdd "West";
_sideList lbAdd "Independent";
_sideList lbAdd "Civilian";

// Set the color for each of the side list box's entries
_sideList lbSetColor [0, [0.5, 0.125, 0.125, 1]]; // East
_sideList lbSetColor [1, [0.15, 0.40, 0.6, 1]]; // West
_sideList lbSetColor [2, [0.125, 0.5, 0.125, 1]]; // Independent
_sideList lbSetColor [3, [0.425, 0.125, 0.5, 1]]; // Civilian

// Disable global, server code execution buttons if mode is SP
if !(isMultiplayer) then {
    private _execGlobalButton = _dialog displayCtrl IDC_execGlobalButton;
    private _execServerButton = _dialog displayCtrl IDC_execServerButton;
    _execGlobalButton ctrlEnable false;
    _execServerButton ctrlEnable false;
};

// Mission info
private _missionInfo = _dialog displayCtrl IDC_missionInfo;
_missionInfo ctrlSetStructuredText parseText format [
    "<t size = '1' font = 'RobotoCondensedBold' color='#ffffff' align = 'left'>
    %1 on %2
    <br/>
    Active SQF: %3
    <br/>
    Active FSM: %4
    <br/>
    Pos: %5
    <br/>
    Time: %6m
    <br/>
    Cursor Object: %7
    </t>",
    missionName call CBA_fnc_decodeURL,
    worldName,
    (diag_activeScripts select 0) + (diag_activeScripts select 1) + (diag_activeScripts select 2),
    diag_activeScripts select 3,
    getPos player apply {floor _x},
    floor (time / 60),
    ["NULL-Object", format ["%1 (%2)", typeOf cursorObject, cursorObject]] select (!isNull cursorObject)
];
