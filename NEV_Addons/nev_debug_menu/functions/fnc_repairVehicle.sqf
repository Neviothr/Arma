#include "script_component.hpp"

// Repair current vehicle. Using `vehicle` makes it work for both a unit, and a vehicle
vehicle player setDamage 0;

// Notifiy the user
["nev_notification", ["VEHICLE REPAIR / UNIT HEALING", "The current vehicle / player has been fully repaired / healed."]] call BIS_fnc_showNotification;