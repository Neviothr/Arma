#include "script_component.hpp"

/*
 * Author: Neviothr
 * Terminate and clean up the IFF dialog.
 *
 * Arguments:
 * None.
 *
 * Return Value:
 * None.
 *
 * Example:
 * onUnload = "call nev_iff_fnc_exitIFF"
 *
 * Public: No
*/

setViewDistance -1;

GVAR(camera) cameraEffect ["terminate", "back"];
camDestroy GVAR(camera);

{
    deleteVehicle _x;
} forEach GVAR(iffUnits);

deleteVehicle GVAR(logicCenter);
deleteVehicle GVAR(light);
deleteVehicle GVAR(orb);

GVAR(camera) = nil;
GVAR(iffUnits) = nil;
GVAR(logicCenter) = nil;
GVAR(light) = nil;
GVAR(orb) = nil;
