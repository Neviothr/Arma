#include "script_component.hpp"

params ["_ammoBox", "_parachute", "_smoke", "_player"];

detach _ammoBox;
deleteVehicle _smoke;
[{deleteVehicle (_this #0)}, [_parachute]] call CBA_fnc_execNextFrame;
_player setVariable [QGVAR(paradropInProgress), nil];
