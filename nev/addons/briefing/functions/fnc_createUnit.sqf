#include "script_component.hpp"

params ["_unitCfg", "_unitNumber"];

if ((_unitCfg == "") || (typeName _unitNumber != "SCALAR"))  exitWith {diag_log "ERROR: either _unitCfg or _unitNumber are unvalid."};

private _unit = createVehicle [_unitCfg, getPos GVAR(logicCenter), [], 0, "none"];

switch (_unitNumber) do {
	case 1: {
		_unit attachTo [GVAR(logicCenter), [1.5, 0, 0]];
		_unit setDir -25;
	};

	case 2: {
		_unit attachTo [GVAR(logicCenter), [0.5, 0, 0]];
		_unit setDir -15;
	};

	case 3: {
		_unit attachTo [GVAR(logicCenter), [-0.5, 0, 0]];
		_unit setDir 15;
	};

	case 4: {
		_unit attachTo [GVAR(logicCenter), [-1.5, 0, 0]];
		_unit setDir 25;
	};
};

{
	_unit disableAI _x;
} forEach ["TARGET", "AUTOTARGET", "MOVE", "ANIM", "TEAMSWITCH", "FSM", "WEAPONAIM", "COVER", "AUTOCOMBAT", "PATH", "MINEDETECTION", "NVG", "LIGHTS", "RADIOPROTOCOL"];
