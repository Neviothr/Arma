#include "script_component.hpp"

params ["_unit"];

if (isPlayer _unit) then {
	private _healingFactor = (damage _unit) - (random 1);

	[
		{
			params ["_unit", "_healingFactor"];

			systemChat format ["%1", _healingFactor];

			if (_healingFactor <= 0.25) then {
				_unit setDamage 0;
			} else {
				_unit setDamage _healingFactor;
			};
		},
		[_unit, _healingFactor],
		8
	] call CBA_fnc_waitAndExecute;
};
