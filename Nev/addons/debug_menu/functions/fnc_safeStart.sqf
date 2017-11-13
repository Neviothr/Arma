#include "script_component.hpp"

// Setup vars
if (isNil QGVAR(isSafeStart)) then {
	GVAR(isSafeStart) = true;
	publicVariable QGVAR(isSafeStart);
};

// The server will handle the loop and notifications
if (isServer) then {
	[] spawn FUNC(safeStartLoop);
};

// Enable invincibility for players
if (!isDedicated) then {
	[true] call FUNC(safety);
};
