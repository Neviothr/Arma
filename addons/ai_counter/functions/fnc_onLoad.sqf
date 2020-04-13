#include "script_component.hpp"

/*
 * Author: Neviothr
 * Create a per frame eventhandler that updates the AI counter's display with the amount of units ever 5 seconds.
 *
 * Arguments:
 * 0: Display <CONTROL>
 *
 * Return Value:
 * None
 *
 * Example:
 * onLoad = "_this call nev_ai_counter_fnc_onLoad"
 *
 * Public: No
*/

params ["_display"];
private _control = _display displayCtrl IDC_aiCounterText;

GVAR(counterDisplayPFEH) = [
    {
        (_this select 0) ctrlSetText format ["AI %1", str count (allUnits)];
    },
    5,
    _control
] call CBA_fnc_addPerFrameHandler;
