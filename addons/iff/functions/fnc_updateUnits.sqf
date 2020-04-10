#include "script_component.hpp"

params ["_control", "_selectedIndex"];
private _sideBox = (findDisplay IDD_iffDisplay) displayCtrl IDC_iffSideCombo;
private _side = _sideBox lbText (lbCurSel _sideBox);

if (_side == "GUER") then {
    _side = "INDEP";
};
TRACE_1("",_side);

private _faction = _control lbText _selectedIndex;
private _factionGroupType = (configProperties [configFile >> "CfgGroups" >> _side >> _faction, "isClass _x"] apply {configName _x}) select 0;
TRACE_2("",_faction,_factionGroupType);

private _group = (configProperties [configFile >> "CfgGroups" >> _side >> _faction >> _factionGroupType, "isClass _x"] apply {configName _x}) select 0;
TRACE_1("",_group);

{
    deleteVehicle _x;
} forEach GVAR(iffUnits);

for "_unitNumber" from 1 to 4 do {
    [getText (configfile >> "CfgGroups" >> _side >> _faction >> _factionGroupType >> _group >> "Unit0" >> "vehicle"), _unitNumber] call FUNC(createUnit);
};
