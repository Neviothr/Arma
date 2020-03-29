#include "script_component.hpp"

params ["_control", "_selectedIndex"];
TRACE_2("",_control,_selectedIndex);

private _side = _control lbText _selectedIndex;
private _factions = [_side] call FUNC(getFactions);
private _factionBox = (findDisplay IDD_IFFDisplay) displayCtrl IDC_iffFactionCombo;
TRACE_3("",_side,_factions,_factionBox);

lbClear _factionBox;

{
    _factionBox lbAdd _x;
} forEach _factions;
