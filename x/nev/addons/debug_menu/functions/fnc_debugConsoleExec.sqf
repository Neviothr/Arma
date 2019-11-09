#include "script_component.hpp"

params ["_target"];
_code = compile ctrlText IDC_debugConsole;

if (!isMultiplayer) exitWith {
    [[], _code] remoteExec ["call", 0];
};

// Global execution
if (_target isEqualTo 1) exitWith {
    [[], _code] remoteExec ["call", 0];
};

// Local execution
if (_target isEqualTo 0) exitWith {
    [[], _code] remoteExec ["call", remoteExecutedOwner];
};

// Server execution
if (_target isEqualTo 2) exitWith {
    [[], _code] remoteExec ["call", 2];
};
