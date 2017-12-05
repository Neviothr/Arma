#include "script_component.hpp"

params ["_dialog"];
private ["_overcastSlider", "_lightningSlider", "_fogValueSlider", "_fogDecaySlider", "_fogBaseSlider", "_rainSlider", "_wavesSlider", "_yearBox", "_year", "_monthBox", "_dayBox", "_day", "_hourBox", "_hour", "_minuteBox", "_minute", "_sideList", "_execGlobalButton", "_execServerButton", "_missionInfo"];

// Find slider, set it's range, get current weather, set slider accordingly
// Overcast slider
_overcastSlider = _dialog displayCtrl 80003;
_overcastSlider sliderSetRange [0, 1];
_overcastSlider sliderSetPosition overcast;

// Lightnings slider
_lightningSlider = _dialog displayCtrl 80004;
_lightningSlider sliderSetRange [0, 1];
_lightningSlider sliderSetPosition lightnings;

// Fog value slider
_fogValueSlider = _dialog displayCtrl 80005;
_fogValueSlider sliderSetRange [0, 1];
_fogValueSlider sliderSetPosition (fogParams select 0);

// Fog decay slider
_fogDecaySlider = _dialog displayCtrl 80006;
_fogDecaySlider sliderSetRange [0, 1];
_fogDecaySlider sliderSetPosition (fogParams select 1);

// Fog base slider
_fogBaseSlider = _dialog displayCtrl 80007;
_fogBaseSlider sliderSetRange [0, 1];
_fogBaseSlider sliderSetPosition (fogParams select 2);

// Rain slider
_rainSlider = _dialog displayCtrl 80008;
_rainSlider sliderSetRange [0, 1];
_rainSlider sliderSetPosition rain;

// Waves slider
_wavesSlider = _dialog displayCtrl 80009;
_wavesSlider sliderSetRange [0, 1];
_wavesSlider sliderSetPosition waves;

// Year combo box
_yearBox = _dialog displayCtrl 80010;
for "_year" from 1982 to 2050 do {
	_yearBox lbAdd str _year;
};
_yearBox lbSetSelected [(date select 0), true];

// Month combo box
_monthBox = _dialog displayCtrl 80011;
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
_monthBox lbSetSelected [(date select 1), true];

// Day combo box
_dayBox = _dialog displayCtrl 80012;
for "_day" from 1 to 31 do {
	_dayBox lbAdd str _day;
};
_dayBox lbSetSelected [(date select 2), true];

// Hour combo box
_hourBox = _dialog displayCtrl 80013;
for "_hour" from 0 to 23 do {
	_hourBox lbAdd str _hour;
};
_hourBox lbSetSelected [(date select 3), true];

// Minute combo box
_minuteBox = _dialog displayCtrl 80014;
for "_minute" from 0 to 59 do {
	_minuteBox lbAdd str _minute;
};
_minuteBox lbSetSelected [(date select 4), true];

// Side list box
_sideList = _dialog displayCtrl 80015;
_sideList lbAdd "East";
_sideList lbAdd "West";
_sideList lbAdd "Independent";
_sideList lbAdd "Civilian";

// Set the color for each of the side list box's entries
_sideList lbSetColor [0, [0.5, 0.125, 0.125, 1]]; // East
_sideList lbSetColor [1, [0.15, 0.40, 0.6, 1]]; // West
_sideList lbSetColor [2, [0.125, 0.5, 0.125, 1]]; // Independent
_sideList lbSetColor [3, [0.425, 0.125, 0.5, 1]]; // Civilian

// Players list box
_playersList = _dialog displayCtrl 80016;
{
	_playersList lbAdd name _x;
} forEach allPlayers;

// Disable global, server code execution buttons is mode is SP, disable virtual garage button is MP
if !(isMultiplayer) then {
	_execGlobalButton = _dialog displayCtrl 80019;
	_execServerButton = _dialog displayCtrl 80020;
	_execGlobalButton ctrlEnable false;
	_execServerButton ctrlEnable false;
} else {
	_vgButton = _dialog displayCtrl 80021;
	_vgButton ctrlEnable false;
};

// Mission info
_missionInfo = _dialog displayCtrl 80017;
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
	CursorObj: %7
	</t>",
	missionName,
	worldName,
	(diag_activeScripts select 0) + (diag_activeScripts select 1) + (diag_activeScripts select 2),
	diag_activeScripts select 3,
	getPos player apply {floor _x},
	floor ([time / 60, serverTime / 60] select isMultiplayer),
	cursorObject
];
