#include "script_component.hpp"

params ["_ammoBox", "_parachute", "_player"];

detach _ammoBox;
[{deleteVehicle (_this #0)}, [_parachute]] call CBA_fnc_execNextFrame;
_player setVariable [QGVAR(paradropInProgress), nil];

private _ammoBoxMarker = createMarker ["AmmoBox" + str random 10000, _ammoBox];
_ammoBoxMarker setMarkerColor "ColorBlue";
_ammoBoxMarker setMarkerShape "ELLIPSE";
_ammoBoxMarker setMarkerBrush "Solid";
_ammoBoxMarker setMarkerSize [10, 10];
