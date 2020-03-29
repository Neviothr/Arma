#include "script_component.hpp"

params ["_control", "_selectedIndex"];
TRACE_2("",_control,_selectedIndex);

private _sideBox = (findDisplay IDD_IFFDisplay) displayCtrl IDC_iffSideCombo;
private _side = _sideBox lbText (lbCurSel _sideBox);
TRACE_2("",_sideBox,_side);

if (_side == "GUER") then {
    _side = "INDEP";
};

private _faction = _control lbText _selectedIndex;
private _factionTypeCfg = str (configProperties [configFile >> "CfgGroups" >> _side >> _faction, "isClass _x"]);
private _factionTypesList = _factionTypeCfg splitString "\/,[]";
private _factionType = "";
_factionType = _factionTypesList select (_factionTypesList findIf {("infantry" in toLower _x) || ("spec" in toLower _x)});
TRACE_3("",_faction,_factionTypeCfg,_factionType);

private _groupsCfg = str (configProperties [configFile >> "CfgGroups" >> _side >> _faction >> _factionType, "isClass _x"]);
private _groupsList = _groupsCfg splitString "\/,[]";
private _group = "";
_group = _groupsList select (_groupsList findIf {(("inf" in toLower _x) || ("team" in toLower _x) || ("squad" in toLower _x) || ("cell" in toLower _x) || ("patrol" in toLower _x) || ("gang" in toLower _x)) && ("infantry" != toLower _x) && (_factionType != _x)});
TRACE_3("",_faction,_factionTypeCfg,_factionType);

{
    deleteVehicle _x;
} forEach GVAR(iffUnits);

[getText (configfile >> "CfgGroups" >> _side >> _faction >> _factionType >> _group >> "Unit0" >> "vehicle"), 1] call FUNC(createUnit);
[getText (configfile >> "CfgGroups" >> _side >> _faction >> _factionType >> _group >> "Unit1" >> "vehicle"), 2] call FUNC(createUnit);
[getText (configfile >> "CfgGroups" >> _side >> _faction >> _factionType >> _group >> "Unit2" >> "vehicle"), 3] call FUNC(createUnit);
[getText (configfile >> "CfgGroups" >> _side >> _faction >> _factionType >> _group >> "Unit3" >> "vehicle"), 4] call FUNC(createUnit);
