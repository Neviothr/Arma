#include "script_component.hpp"

params ["_display"];

private _control = _display displayCtrl IDC_aiCounterText;

GVAR(counterDisplayPFEH) = [
    {
        (_this select 0) ctrlSetText format ["AI %1", str count (allUnits - allPlayers)];
    },
    5,
    _control
] call CBA_fnc_addPerFrameHandler;
