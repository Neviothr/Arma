#include "script_component.hpp"

params ["_control", "_selectedIndex"];

private _factions = (_control lbText _selectedIndex) call FUNC(getFactions);

for "_i" from 0 to ((count _factions) - 1) step 1 do {
	_control lbAdd str (_factions select _i);
};

_control lbSetCurSel 0;
