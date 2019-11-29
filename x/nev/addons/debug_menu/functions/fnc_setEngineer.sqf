#include "script_component.hpp"

private _target = [vehicle player, cursorTarget] select (cursorTarget isKindOf "AllVehicles");

[_target, ["engineer", true]] remoteExec ["setUnitTrait", _target];
[_target, ["explosiveSpecialist", true]] remoteExec ["setUnitTrait", _target];

systemChat format ["[Debug Menu] %1 assigned as engineer.", _target];
