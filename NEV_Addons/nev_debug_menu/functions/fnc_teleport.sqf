#include "script_component.hpp"

// Notify user that map tele has been enabled
["nev_notification", ["MAP TELEPORT", "Click on the location to which you'd like to be teleported."]] call BIS_fnc_showNotification;

openMap true; // Open the map

// Add a map click EH
["nev_mapTeleport", "onMapSingleClick", {
	 // On click move player / player's vehicle to clicked pos
	vehicle player setPos _pos;

	// Remove our EH to allow compatablity with custom waypoint in nev_a3_overrides
	["nev_mapTeleport", "onMapSingleClick"] call BIS_fnc_removeStackedEventHandler;
}] call BIS_fnc_addStackedEventHandler;