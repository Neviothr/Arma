#include "script_component.hpp"

// Create empty helipad near player
private _vehicleSpawnPos = createVehicle [ "Land_HelipadEmpty_F", player getPos [30, getDir player], [], 0, "CAN_COLLIDE" ];

// Pass created vehicle to function for use as position
["Open", [true, _vehicleSpawnPos]] call BIS_fnc_garage;