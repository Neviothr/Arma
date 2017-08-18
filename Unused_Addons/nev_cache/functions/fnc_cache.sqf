#include "script_component.hpp"

_toCache = (units _group) - [(_leader)];
{
	if (!(isPlayer _x) && {!("driver" in assignedVehicleRole _x)}) then {
		_x enableSimulationGlobal false;
		_x hideObjectGlobal true;
	};
} forEach _toCache;