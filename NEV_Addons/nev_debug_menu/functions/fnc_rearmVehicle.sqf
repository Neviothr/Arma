#include "script_component.hpp"

// Rearm all unit and vehicle weapons
{
	player setAmmo [_x, 1000000];
} forEach weapons player;

// Notifiy the user
["nev_notification", ["VEHICLE REFUEL", "The current vehicle has been fully refueled."]] call BIS_fnc_showNotification;