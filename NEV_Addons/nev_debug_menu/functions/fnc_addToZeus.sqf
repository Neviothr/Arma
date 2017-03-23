#include "script_component.hpp"

{
	_x addCuratorEditableObjects [entities "", true];
} forEach allCurators;

["nev_notification", ["ZEUS", "All units are now editable by Zeus."]] call BIS_fnc_showNotification;