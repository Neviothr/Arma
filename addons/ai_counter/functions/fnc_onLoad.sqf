#include "script_component.hpp"

params ["_display"];
TRACE_1("",_display);

private _control = _display displayCtrl IDC_aiCounterText;
TRACE_1("",_control);

GVAR(counterDisplayPFEH) = [
    {
        (_this select 0) ctrlSetText format ["AI %1", str count (allUnits - allPlayers)];
    },
    5,
    _control
] call CBA_fnc_addPerFrameHandler;
