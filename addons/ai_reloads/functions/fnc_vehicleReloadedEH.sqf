#include "script_component.hpp"

params ["_vehicle"];
TRACE_1("",_vehicle);

if (isPlayer _vehicle) exitWith {};

_vehicle setVehicleAmmoDef 1;
