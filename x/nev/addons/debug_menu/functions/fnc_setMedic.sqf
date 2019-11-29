#include "script_component.hpp"

private _target = [vehicle player, cursorTarget] select (cursorTarget isKindOf "AllVehicles");

[_target, ["medic", true]] remoteExec ["setUnitTrait", _target];
systemChat format ["[Debug Menu] %1 assigned as medic.", _target];
