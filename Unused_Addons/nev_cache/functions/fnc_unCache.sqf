#include "script_component.hpp"

{
	if (!(isPlayer _x) && {!("driver" in assignedVehicleRole _x)}) then {
		_x enableSimulationGlobal true;
		_x hideObjectGlobal false;
	};
} forEach _toCache;