#include "script_component.hpp"

// Create empty helipad at player's position
_vehicle = createVehicle [ "Land_HelipadEmpty_F", player getPos [30, getDir player], [], 0, "CAN_COLLIDE" ];

// Pass created vehicle to function for use as position
["Open", [true, _vehicle]] call BIS_fnc_garage;