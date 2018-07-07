#include "script_component.hpp"

{
	if (typeOf _x == "ModuleEffectsSmoke_F") then {
		deleteVehicle ((_x getVariable "effectEmitter") select 0);
	};
} forEach entities "logic";
