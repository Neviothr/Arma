#include "script_component.hpp"

vehicle player setDamage 0;
[QGVAR(message), ["VEHICLE REPAIR", "The current vehicle has been fully repaired."], 10] call bis_fnc_showNotification;