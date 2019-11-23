#include "script_component.hpp"

private _target = [cursorTarget, vehicle player] select isNull cursorTarget;

[_target, ["engineer", true]] remoteExec ["setUnitTrait", _target];
[_target, ["explosiveSpecialist", true]] remoteExec ["setUnitTrait", _target];

systemChat format ["[Debug Menu] %1 assigned as engineer.", _target];
