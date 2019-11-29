#include "script_component.hpp"

private _target = [cursorTarget, vehicle player] select (cursorTarget isKindOf "AllVehicles");

[_target, 1] remoteExec ["setVehicleAmmoDef", _target];
systemChat format ["[Debug Menu] %1 has been rearmed.", _target];
