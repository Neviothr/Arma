#include "script_component.hpp"

params ["_unit"];

if (isPlayer _unit) then {
	_unit addEventHandler ["HandleDamage", {
		params ["_unit", "", "_damage"];

		_damage = damage _unit;

		if (_damage > 0.9) then {
			_damage = 0.9;
		};

		_unit setDamage _damage;
	}];
};
