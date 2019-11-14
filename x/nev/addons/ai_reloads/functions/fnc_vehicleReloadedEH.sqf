#include "script_component.hpp"

params ["_vehicle"];

if (isPlayer _vehicle) exitWith {};

_vehicle setVehicleAmmoDef 1;
