#include "script_component.hpp"

private _target = [cursorTarget, vehicle player] select isNull cursorTarget;

[_target, 1] remoteExec ["setVehicleAmmoDef", _target];\
systemChat "[Debug Menu] The vehicle has been rearmed.";
