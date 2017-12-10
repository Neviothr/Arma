#include "script_component.hpp"

#include "XEH_PREP.hpp"

[
	"CAManBase",
	"killed",
	{_this call FUNC(killedEH)},
	true,
	[],
	true
] call CBA_fnc_addClassEventHandler;
