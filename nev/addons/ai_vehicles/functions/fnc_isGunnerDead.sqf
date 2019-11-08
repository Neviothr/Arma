#include "script_component.hpp"

params ["_unit"];

private _vehicle = vehicle _unit;

if (_vehicle isKindOf "Car" || _vehicle isKindOf "Tank") then {
    if (gunner _vehicle isEqualTo _unit && {alive (driver _vehicle)} && {!isPlayer (driver _vehicle)}) then {
        _vehicle call FUNC(replaceGunner);
    };
};
