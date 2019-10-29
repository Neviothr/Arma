#include "script_component.hpp"

params ["_control", "_selectedIndex"];

private _sideBox = (findDisplay IDD_IFFDisplay) displayCtrl IDC_iffSideCombo;
private _side = _sideBox lbText (lbCurSel _sideBox);
private _faction = _control lbText _selectedIndex;

diag_log format ["%1 %2 %3", _sideBox, _side, _faction];

private _factionTypeCfg = str (configProperties [configFile >> "CfgGroups" >> "WEST" >> "BLU_F", "isClass _x"]);
private _factionTypesList = _factionTypeCfg splitString "\/,";
private _factionType = "ERROR";

{
	if ("infantry" in toLower _x) exitWith {_factionType = _x};
} ForEach _factionTypesList;

diag_log format ["%1 %2 %3", _factionTypeCfg, _factionTypesList, _factionType];

private _groupsCfg = str (configProperties [configFile >> "CfgGroups" >> _side >> _faction >> _factionType, "isClass _x"]);
private _groupsList = _groupsCfg splitString "\/,0";
private _group = "ERROR";

{
	if (("inf" in toLower _x) && ("infantry" != toLower _x)) exitWith {_group = _x};
} forEach _groupsList;

diag_log format ["%1 %2 %3", _groupsCfg, _groupsList, _group];

[getText (configfile >> "CfgGroups" >> _side >> _faction >> _factionType >> _group >> "Unit0" >> "vehicle"), 1] call FUNC(createUnit);
[getText (configfile >> "CfgGroups" >> _side >> _faction >> _factionType >> _group >> "Unit1" >> "vehicle"), 2] call FUNC(createUnit);
[getText (configfile >> "CfgGroups" >> _side >> _faction >> _factionType >> _group >> "Unit2" >> "vehicle"), 3] call FUNC(createUnit);
[getText (configfile >> "CfgGroups" >> _side >> _faction >> _factionType >> _group >> "Unit3" >> "vehicle"), 4] call FUNC(createUnit);
