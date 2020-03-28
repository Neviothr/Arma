#include "script_component.hpp"

params ["_target"];
_code = compile ctrlText IDC_debugConsole;

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
