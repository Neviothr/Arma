params ["_target", "_code"];

if (!isMultiplayer) exitWith {[[], _code] remoteExec ["call", 0];};

if (_target isEqualTo 1) exitWith {[[], _code] remoteExec ["call", 0];};

if (_target isEqualTo 0) exitWith {
	[[], _code]  remoteExec ["call", remoteExecutedOwner];
};

if (_target isEqualTo 2) exitWith {
	[[], _code]  remoteExec ["call", 2];
};