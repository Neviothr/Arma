#include "script_component.hpp"

private _target = [cursorTarget, vehicle player] select isNull cursorTarget;

[_target, 1] remoteExec ["setVehicleAmmoDef", _target];
systemChat format ["[Debug Menu] %1 has been rearmed.", _target];
