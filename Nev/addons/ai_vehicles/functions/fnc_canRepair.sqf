#include "script_component.hpp"

params ["_vehicle"];

if (_vehicle getVariable [QGVAR(gunnerDead), false]) exitWith {};

_vehicle setVariable [QGVAR(awaitingRepair), true];

[
    {
        private _lastHit = (_this #0) getVariable [QGVAR(lastHit), 0];
        private _outOfCombatDelayTime = _lastHit + 10;

        time >= _outOfCombatDelayTime
    },
    {(_this #0) call FUNC(doRepair)},
    [_vehicle],
    30,
    {(_this #0) call FUNC(doRepair)}
] call CBA_fnc_waitUntilAndExecute;
