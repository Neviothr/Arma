#include "script_component.hpp"

params ["_actionIconStr"];

private _actionIconStr = getText (configfile >> "CfgVehicles" >> typeOf _x >> "icon");

if (_actionIconStr find "\" == -1) then {
	_actionIconStr = "";
};

_actionIconStr;
