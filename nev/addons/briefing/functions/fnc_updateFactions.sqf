#include "script_component.hpp"

params ["_control", "_selectedIndex"];

private _side = _control lbText _selectedIndex;
private _factions = [_side] call FUNC(getFactions);

private _factionBox = (findDisplay IDD_IFFDisplay) displayCtrl IDC_iffFactionCombo;

for "_i" from 1 to 4 step 1 do
{
	_factionBox lbDelete _i;
};

{
	if !(_x in _factionBoxEntries) then {
		_factionBox lbAdd _x;
	};
} forEach _factions;
