#include "script_component.hpp"

params ["_actionType"];
private _target = [vehicle player, cursorTarget] select (cursorTarget isKindOf "AllVehicles");
TRACE_2("",_actionType,_target);

if (_actionType == 1) then {
    [_target, 1] remoteExec ["setVehicleAmmoDef", _target];
    systemChat format ["[Debug Menu] %1 has been rearmed.", _target];
} else {
    [_target, 0] remoteExec ["setDamage", _target];
    systemChat format ["[Debug Menu] %1 damage set to 0.", _target];
};
