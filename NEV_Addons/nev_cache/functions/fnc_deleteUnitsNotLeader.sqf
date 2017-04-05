//zbe_deleteUnitsNotLeaderFnc

#include "script_component.hpp"

{
	deleteVehicle _x;
} forEach units _this - [leader _this];