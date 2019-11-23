#include "script_component.hpp"

private _target = [cursorTarget, vehicle player] select isNull cursorTarget;

[_target, 0] remoteExec ["setDamage", _target];
systemChat format ["[Debug Menu] %1 damage set to 0.", _target];
