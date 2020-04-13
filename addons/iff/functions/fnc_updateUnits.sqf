#include "script_component.hpp"

/*
 * Author: Neviothr
 * Create units in the IFF dialog, delete existing ones.
 * Called each time faction listbox selection is changed.
 *
 * Arguments:
 * 0: Faction listbox control <CONTROL>
 * 1: Faction listbox index <NUMBER>
 *
 * Return Value:
 * None.
 *
 * Example:
 * onLBSelChanged = "_this call nev_iff_fnc_updateUnits"
 *
 * Public: No
*/

params ["_control", "_selectedIndex"];

TRACE_2("",_control,_selectedIndex);

// Using the current side listbox selection find to which side the units we need to display belong.
private _sideBox = (findDisplay IDD_iffDisplay) displayCtrl IDC_iffSideCombo;
private _side = _sideBox lbText (lbCurSel _sideBox);

// "GUER" returned by side for independent units isn't valid inside configs, "INDEP" must be used.
if (_side == "GUER") then {
    _side = "INDEP";
};
TRACE_1("",_side);

// Using the current faction listbox selection, get a list of all faction group types -
// armor, infantry, mechanized infantry, etc. and select the 1st one.
private _faction = _control lbText _selectedIndex;
private _factionGroupType = (configProperties [configFile >> "CfgGroups" >> _side >> _faction, "isClass _x"] apply {configName _x}) select 0;
TRACE_2("",_faction,_factionGroupType);

// Get the 1st group out of the selected group type.
// WEST >> NATO >> Infantry >> Fire Team.
private _group = (configProperties [configFile >> "CfgGroups" >> _side >> _faction >> _factionGroupType, "isClass _x"] apply {configName _x}) select 0;
TRACE_1("",_group);

// Insure the dialog is clear of any previously created units,
// so no one is being created on top of another.
{
    deleteVehicle _x;
} forEach GVAR(iffUnits);

// Create 1st unit out of the selected group 4 times, each time in a diffrent position (1-4).
for "_unitNumber" from 1 to 4 do {
    [getText (configfile >> "CfgGroups" >> _side >> _faction >> _factionGroupType >> _group >> "Unit0" >> "vehicle"), _unitNumber] call FUNC(createUnit);
};
