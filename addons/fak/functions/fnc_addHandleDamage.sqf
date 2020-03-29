#include "script_component.hpp"

params ["_unit"];

if !(isPlayer _unit) exitWith {};

LOG_1("%1 is a player, adding FAKs",_unit);

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
