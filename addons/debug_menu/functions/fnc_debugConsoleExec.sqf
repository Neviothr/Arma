#include "script_component.hpp"

/*
 * Author: Neviothr
 * Executes code from debug menu's console in specified environment.
 *
 * Arguments:
 * 0: Target environment <NUMBER>
 *
 * Return Value:
 * The return value <BOOL>
 *
 * Example:
 * [1] call nev_debug_menu_fnc_debugConsoleExec
 *
 * Public: No
*/

private _code = compile ctrlText IDC_debugConsole;

if (_code isEqualTo {}) exitWith {LOG("Console is empty, no code to execute provided.")}

params ["_target"];
TRACE_2("",_target,_code);

if (!isMultiplayer) exitWith {
    [[], _code] remoteExec ["call", 0];
};

// Global
if (_target isEqualTo 1) exitWith {
    [[], _code] remoteExec ["call", 0];
};

// Local
if (_target isEqualTo 0) exitWith {
    [[], _code] remoteExec ["call", remoteExecutedOwner];
};

// Server
if (_target isEqualTo 2) exitWith {
    [[], _code] remoteExec ["call", 2];
};
