#include "script_component.hpp"

// Refuel current vehicle
vehicle player setFuel 1;

// Notifiy the user
["nev_notification", ["VEHICLE REFUEL", "The current vehicle has been fully refueled."]] call BIS_fnc_showNotification;