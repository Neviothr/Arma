#include "script_component.hpp"

params ["_unit"];

if !(isPlayer _unit) exitWith {};

LOG_1("%1 is a player, handling damage",_unit);

private _healingFactor = (damage _unit) - (random 1);
TRACE_1("",_healingFactor);

[
    {
        params ["_unit", "_healingFactor"];

         if (_healingFactor <= 0.25) then {
            _unit setDamage 0;
        } else {
            _unit setDamage _healingFactor;
        };
    },
    [_unit, _healingFactor],
    8
] call CBA_fnc_waitAndExecute;
