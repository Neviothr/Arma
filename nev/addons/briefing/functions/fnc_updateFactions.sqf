#include "script_component.hpp"

params ["_control", "_selectedIndex"];
diag_log "Running fnc_updateFactions";
diag_log format ["_control %1", _control];
diag_log format ["_selectedIndex %1", _selectedIndex];

private _side = _control lbText _selectedIndex;
diag_log format ["_side %1", _side];

private _factions = [_side] call FUNC(getFactions);
diag_log format ["_factions %1", _factions];

private _factionBox = (findDisplay IDD_IFFDisplay) displayCtrl IDC_iffFactionCombo;
diag_log format ["_factionBox %1", _factionBox];

lbClear _factionBox;

{
	diag_log format ["_x %1", _x];
	_factionBox lbAdd _x;
} forEach _factions;
