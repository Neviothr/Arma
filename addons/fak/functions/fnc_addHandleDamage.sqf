#include "script_component.hpp"

params ["_unit"];

TRACE_1("",_unit);

if !(isPlayer _unit) exitWith {};

for "_i" from 1 to 10 step 1 do {
    _unit addItemToUniform "FirstAidKit";
};

 _unit addEventHandler ["HandleDamage", {
    params ["_unit", "", "_damage"];

    _damage = damage _unit;

    if (_damage > 0.9) then {
        _damage = 0.9;
    };

    _unit setDamage _damage;
}];
