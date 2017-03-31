#include "script_component.hpp"

{
	_x addCuratorEditableObjects [entities "", true]; // Better than doing `vehicles` and `allUnits` separately
} forEach allCurators; // Run on all curators, in case there's more than 1

// Notify the user
["nev_notification", ["ZEUS", "All units are now editable by Zeus."]] call BIS_fnc_showNotification;