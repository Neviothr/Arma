#include "script_component.hpp"

private _target = [cursorTarget, vehicle player] select isNull cursorTarget;

[_target, ["medic", true]] remoteExec ["setUnitTrait", _target];
systemChat format ["[Debug Menu] %1 assigned as medic.", _target];
