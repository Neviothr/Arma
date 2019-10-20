#include "script_component.hpp"

params ["_vehicle", "", "_damage", "", "_hitPoint"];

_vehicle setVariable [QGVAR(lastHit), time];

if (_damage < 1) exitWith {};

if !(_hitPoint in GVAR(wheelArray)) exitWith {};

if (!isNull (driver _vehicle) && {!isPlayer (driver _vehicle)} && {!(_vehicle getVariable [QGVAR(awaitingRepair), false])}) then {
	_vehicle call FUNC(canRepair);
};
