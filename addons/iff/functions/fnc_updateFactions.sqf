#include "script_component.hpp"

/*
 * Author: Neviothr
 * Update the listbox of faction in the IFF dialog.
 * Called everytime the side listbox selection is changed.
 *
 * Arguments:
 * 0: Side listbox control <CONTROL>
 * 1: Side listbox index <NUMBER>
 *
 * Return Value:
 * None.
 *
 * Example:
 * onLBSelChanged = "_this call nev_iff_fnc_updateFactions";
 *
 * Public: No
*/

params ["_control", "_selectedIndex"];

TRACE_2("",_control,_selectedIndex);

private _factions = [_control lbText _selectedIndex] call FUNC(getFactions);
private _factionBox = (findDisplay IDD_iffDisplay) displayCtrl IDC_iffFactionCombo;
lbClear _factionBox;

{
    _factionBox lbAdd _x;
} forEach _factions;
