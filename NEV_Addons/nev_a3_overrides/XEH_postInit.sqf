#include "script_component.hpp"

disableSerialization;

if (hasInterface) then {
	_mapDisplay = findDisplay 12;
	_mapControl = _mapDisplay displayCtrl 51;

	_mapControl ctrlAddEventHandler ["MouseMoving", {
		GVAR(mapCustomMark) = "custom_mark" in (ctrlMapMouseOver (_this select 0));
	}];

	addMissionEventHandler ["MapSingleClick", {
		params ["_units", "_pos", "_alt", "_shift"]; // Thanks BIS
		if (_shift) then {
			GVAR(markerLocation) = _pos;
		};
	}];

	addMissionEventHandler ["Draw3D", {
		if (GVAR(doWaypoint) && !isNil QGVAR(markerLocation)) then {
			drawIcon3D [
				"\A3\ui_f\data\igui\cfg\cursors\customMark_ca.paa",
				[1, 1, 1, 0.6],
				[GVAR(markerLocation) select 0, GVAR(markerLocation) select 1, GVAR(markerLocation) select 2],
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