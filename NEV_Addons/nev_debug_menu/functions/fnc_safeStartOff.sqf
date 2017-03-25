#include "script_component.hpp"
if (hasInterface) then {
	isSafeStart = false;

	hint "Weapons are live in 5 seconds.";
	uisleep 5;

	player removeEventHandler ["Fired", ssDelManProj];
	if (!isNil "ssDelVehProj") then {
	    (ssDelVehProj select 0) removeEventHandler ["Fired", (ssDelVehProj select 1)];
	};
	player allowDamage true;

	titleText ["Game on!", "PLAIN"];
};