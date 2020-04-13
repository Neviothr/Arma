#include "script_component.hpp"

params ["_control", "_selectedIndex"];

TRACE_2("",_control,_selectedIndex);

private _factionBox = (findDisplay IDD_iffDisplay) displayCtrl IDC_iffFactionCombo;
lbClear _factionBox;

private _factions = [_control lbText _selectedIndex] call FUNC(getFactions);

{
    _factionBox lbAdd _x;
} forEach _factions;
