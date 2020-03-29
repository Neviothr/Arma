#include "script_component.hpp"

params ["_actionIcon"];
private _actionIcon = getText (configfile >> "CfgVehicles" >> typeOf _x >> "icon");
TRACE_1("",_actionIcon);

if (_actionIcon find "\" == -1) then {
    _actionIcon = "";
};

TRACE_1("",_actionIcon);
_actionIcon
