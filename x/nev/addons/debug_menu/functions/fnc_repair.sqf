#include "script_component.hpp"

private _target = [cursorTarget, vehicle player] select isNull cursorTarget;

[_target, 0] remoteExec ["setDamage", _target];
systemChat "[Debug Menu] Object damage set to 0.";
