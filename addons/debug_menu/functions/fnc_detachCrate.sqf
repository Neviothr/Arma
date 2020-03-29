#include "script_component.hpp"

params ["_ammoBox", "_parachute"];
TRACE_3("",_ammoBox,_parachute);

detach _ammoBox;
[{deleteVehicle (_this #0)}, [_parachute]] call CBA_fnc_execNextFrame;

private _ammoBoxMarker = createMarker ["AmmoBox" + str random 10000, _ammoBox];
_ammoBoxMarker setMarkerColor "ColorWEST";
_ammoBoxMarker setMarkerShape "ELLIPSE";
_ammoBoxMarker setMarkerBrush "Solid";
_ammoBoxMarker setMarkerSize [50, 50];
