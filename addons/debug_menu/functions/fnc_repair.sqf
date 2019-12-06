#include "script_component.hpp"

private _target = [vehicle player, cursorTarget] select (cursorTarget isKindOf "AllVehicles");

[_target, 0] remoteExec ["setDamage", _target];
systemChat format ["[Debug Menu] %1 damage set to 0.", _target];
