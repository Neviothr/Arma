#include "script_component.hpp"

#define IDD_DISPLAY3DEN 313

private "_curator";

// Create curator module, needed to assign curator
_curator = (createGroup sideLogic) createUnit ["ModuleCurator_F", [0, 0, 0] , [], 0, "NONE"];
player assignCurator _curator;

// Make all entites editable by all curators
{
	_x addCuratorEditableObjects [entities "", true];
} forEach allCurators;

_curator setVariable ["Addons", 3, true];
_curator setCuratorCoef ["Place", 0];
_curator setCuratorCoef ["Delete", 0];

if (!isMultiplayer && {!isNull findDisplay IDD_DISPLAY3DEN}) then {
	// if loaded from editor (but not after restart), addons are not activated so we do it manually
    private _addons = ('true' configClasses (configFile >> "CfgPatches")) apply {configName _x};
	activateAddons _addons;
	removeAllCuratorAddons _zeus;
	_zeus addCuratorAddons _addons;
};

hint "Zeus has been created, all entities are editable.";
