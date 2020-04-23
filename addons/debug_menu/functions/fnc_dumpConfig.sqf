#include "script_component.hpp"

/*
 * Author: Neviothr
 * Get config handle from edit box and pass it as an argument to the config dump function.
 *
 * Arguments:
 * None.
 *
 * Return Value:
 * None.
 *
 * Example:
 * None.
 *
 * Public: No
*/

private _configHandle = compile ctrlText IDC_configDumpHandle;

if (_configHandle isEqualTo {}) exitWith {WARNING("No config handle, unable to pass to function.")};

TRACE_1("",_configHandle);

[call _configHandle] call compile preprocessFileLineNumbers "dumpConfig.sqf";
