#include "script_component.hpp"

params ["_display"];
private _control = _display displayCtrl IDC_aiCounterText;
TRACE_2("",_display,_control);

GVAR(counterDisplayPFEH) = [
    {
        (_this select 0) ctrlSetText format ["AI %1", str count (allUnits - 1)];
    },
    5,
    _control
] call CBA_fnc_addPerFrameHandler;
