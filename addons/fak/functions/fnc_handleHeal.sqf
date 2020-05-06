#include "script_component.hpp"

params ["_unit"];

if !(isPlayer _unit) exitWith {};

// Reduce the amount of damage the unit has by a random value between 0 and 1,
// this requires multiple FAKs heal.
private _healingFactor = (damage _unit) - (random [0.25, 0.5, 1]);

[
    {
        params ["_unit", "_healingFactor"];

        // If the damage value we're about to inflict on the unit is less than 0.25, heal him completely.
        // Since FAKs can't be used to heal below 0.25
        if (_healingFactor <= 0.25) then {
            _unit setDamage 0;
        } else {
            _unit setDamage _healingFactor;
        };
    },
    [_unit, _healingFactor],
    8
] call CBA_fnc_waitAndExecute;
