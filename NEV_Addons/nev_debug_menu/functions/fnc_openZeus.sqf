#include "script_component.hpp"

private "_curator";

_curator = (createGroup sideLogic) createUnit ["ModuleCurator_F", [0, 0, 0] , [], 0, ""]; // Create curator module, needed in order to assign a curator
player assignCurator _curator; // Assign a curator, the user in our case

// Add all units to zeus
{
	_x addCuratorEditableObjects [entities "", true]; // Better than doing `vehicles` and `allUnits` separately
} forEach allCurators; // Run on all curators, in case there's more than 1

// Notify the user
["nev_notification", ["ZEUS", "Zeus has been created, all entities are editable"]] call BIS_fnc_showNotification;