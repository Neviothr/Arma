#include "script_component.hpp"

params ["_control", "_selectedIndex"];

private _sideBox = (findDisplay IDD_IFFDisplay) displayCtrl IDC_iffSideCombo;
private _side = _sideBox lbText (lbCurSel _sideBox);
private _faction = _control lbText _selectedIndex;

private _unit1 = getText (configfile >> "CfgGroups" >> _side >> _faction >> "Infantry" >> "B_G_InfSquad_Assault" >> "Unit3" >> "vehicle")


["B_Soldier_F", 1] call FUNC(createUnit);
["B_Soldier_F", 2] call FUNC(createUnit);
["B_Soldier_F", 3] call FUNC(createUnit);
["B_Soldier_F", 4] call FUNC(createUnit);
