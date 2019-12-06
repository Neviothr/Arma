#include "script_component.hpp"

private _target = [vehicle player, cursorTarget] select (cursorTarget isKindOf "AllVehicles");

[_target, 1] remoteExec ["setFuel", _target];
systemChat format ["[Debug Menu] %1 has been refuled.", _target];
