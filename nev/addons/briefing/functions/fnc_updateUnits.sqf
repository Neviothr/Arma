#include "script_component.hpp"

params ["_control", "_selectedIndex"];

private _sideBox = (findDisplay IDD_IFFDisplay) displayCtrl IDC_iffSideCombo;
private _side = _sideBox lbText (lbCurSel _sideBox);

if (_side == "GUER") then {
    _side = "INDEP";
};

INFO_2("_sideBox - %1, _side - %2", _sideBox, _side);

private _faction = _control lbText _selectedIndex;
private _factionTypeCfg = str (configProperties [configFile >> "CfgGroups" >> _side >> _faction, "isClass _x"]);
private _factionTypesList = _factionTypeCfg splitString "\/,[]";
private _factionType = "";

_factionType = _factionTypesList select (_factionTypesList findIf {("infantry" in toLower _x) || ("spec" in toLower _x)});
INFO_4("_faction - %1, _factionTypeCfg - %2, _factionTypesList - %3, _factionType - %4", _faction, _factionTypeCfg, _factionTypesList, _factionType);

private _groupsCfg = str (configProperties [configFile >> "CfgGroups" >> _side >> _faction >> _factionType, "isClass _x"]);
private _groupsList = _groupsCfg splitString "\/,[]";
private _group = "";

_group = _groupsList select (_groupsList findIf {(("inf" in toLower _x) || ("team" in toLower _x) || ("squad" in toLower _x) || ("cell" in toLower _x) || ("patrol" in toLower _x) || ("gang" in toLower _x)) && ("infantry" != toLower _x) && (_factionType != _x)});
INFO_3("_groupsCfg - %1, _groupsList - %2, _group - %3", _groupsCfg, _groupsList, _group);

private _unitsToDelete = nearestObjects [GVAR(logicCenter), ["Man"], 10];

{
    deleteVehicle _x;
} forEach _unitsToDelete;

[getText (configfile >> "CfgGroups" >> _side >> _faction >> _factionType >> _group >> "Unit0" >> "vehicle"), 1] call FUNC(createUnit);
[getText (configfile >> "CfgGroups" >> _side >> _faction >> _factionType >> _group >> "Unit1" >> "vehicle"), 2] call FUNC(createUnit);
[getText (configfile >> "CfgGroups" >> _side >> _faction >> _factionType >> _group >> "Unit2" >> "vehicle"), 3] call FUNC(createUnit);
[getText (configfile >> "CfgGroups" >> _side >> _faction >> _factionType >> _group >> "Unit3" >> "vehicle"), 4] call FUNC(createUnit);
