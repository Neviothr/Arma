#include "script_component.hpp"

private _target = [cursorTarget, vehicle player] select isNull cursorTarget;

[_target, 1] remoteExec ["setFuel", _target];
systemChat format ["[Debug Menu] %1 has been refuled.", _target];
