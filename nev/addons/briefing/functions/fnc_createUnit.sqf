#include "script_component.hpp"

params ["_unitCfg", "_unitNumber"];

if ((_unitCfg == "") || (typeName _unitNumber != "SCALAR"))  exitWith {diag_log "ERROR: either _unitCfg or _unitNumber are unvalid."};

{
	deleteVehicle _x;
} forEach GVAR(iffUnits);

GVAR(iffUnits) = [];

switch (_unitNumber) do {
	case 1: {
		GVAR(unit0) = createVehicle [_unitCfg, getPos GVAR(logicCenter), [], 0, "none"];
		GVAR(unit0) attachTo [GVAR(logicCenter), [1.5, 0, 0]];
		GVAR(unit0) setDir -25;
	};

	case 2: {
		GVAR(unit1) = createVehicle [_unitCfg, getPos GVAR(logicCenter), [], 0, "none"];
		GVAR(unit1) attachTo [GVAR(logicCenter), [0.5, 0, 0]];
		GVAR(unit1) setDir -15;
	};

	case 3: {
		GVAR(unit2) = createVehicle [_unitCfg, getPos GVAR(logicCenter), [], 0, "none"];
		GVAR(unit2) attachTo [GVAR(logicCenter), [-0.5, 0, 0]];
		GVAR(unit2) setDir 15;
	};

	case 4: {
		GVAR(unit3) = createVehicle [_unitCfg, getPos GVAR(logicCenter), [], 0, "none"];
		GVAR(unit3) attachTo [GVAR(logicCenter), [-1.5, 0, 0]];
		GVAR(unit3) setDir 25;
	};
};

GVAR(iffUnits) pushBack GVAR(unit0);
GVAR(iffUnits) pushBack GVAR(unit1);
GVAR(iffUnits) pushBack GVAR(unit2);
GVAR(iffUnits) pushBack GVAR(unit3);

{
	_aiScript = _x;
	{
		_x disableAI _aiScript;
	} forEach GVAR(iffUnits);
} forEach ["TARGET", "AUTOTARGET", "MOVE", "ANIM", "TEAMSWITCH", "FSM", "WEAPONAIM", "COVER", "AUTOCOMBAT", "PATH", "MINEDETECTION", "NVG", "LIGHTS", "RADIOPROTOCOL"];
