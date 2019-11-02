#include "script_component.hpp"

setViewDistance -1;
GVAR(camera) cameraEffect ["terminate", "back"];
camDestroy GVAR(camera);

GVAR(logicCenter) = nil;

{
	deleteVehicle _x;
} forEach GVAR(iffUnits);

GVAR(iffUnits) = nil;
deleteVehicle GVAR(light);
deleteVehicle GVAR(orb);
