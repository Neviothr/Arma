#include "script_component.hpp"

private = _effectModules = ["ModuleEffectsSmoke_F", "ModuleEffectsFire_F"];

{
	if (_x in _effectModules) then {
		deleteVehicle ((_x getVariable "effectEmitter") select 0);
	};
} forEach entities "logic";
