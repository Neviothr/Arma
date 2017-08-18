#include "script_component.hpp"

{
	_testpos = (formationPosition _x);
	if (!(isNil "_testpos") && (count _testpos > 0)) then {
		if (!(isPlayer _x) && (vehicle _x == _x)) then {
			_x setPos _testpos;
			_x allowDamage false;
			[_x] spawn {
				sleep 3;
				(_this select 0) allowDamage true;
			};
		};
	};
} forEach _toCache;