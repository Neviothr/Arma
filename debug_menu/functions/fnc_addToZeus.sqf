#include "script_component.hpp"

{
	_x addCuratorEditableObjects [allUnits, true];
	_x addCuratorEditableObjects [vehicles, true];
} forEach allCurators;

[QGVAR(message), ["ZEUS", "All units are now editable by Zeus."], 10] call bis_fnc_showNotification;