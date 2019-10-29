#include "script_component.hpp"

params ["_unitCfg", "_unitNumber"];

if ((_unitCfg == "") || (typeName _unitNumber != "SCALAR"))  exitWith {diag_log "ERROR: either _unitCfg or _unitNumber are unvalid."};

deleteVehicle QGVAR(unit0);
deleteVehicle QGVAR(unit1);
deleteVehicle QGVAR(unit2);
deleteVehicle QGVAR(unit3);

switch (_unitNumber) do {
	case 1: {
		QGVAR(unit0) = createVehicle [_unitCfg, getPos GVAR(logicCenter), [], 0, "none"];
		QGVAR(unit0) attachTo [GVAR(logicCenter), [1.5, 0, 0]];
		QGVAR(unit0) setDir -25;
	};

	case 2: {
		QGVAR(unit1) = createVehicle [_unitCfg, getPos GVAR(logicCenter), [], 0, "none"];
		QGVAR(unit1) attachTo [GVAR(logicCenter), [0.5, 0, 0]];
		QGVAR(unit1) setDir -15;
	};

	case 3: {
		QGVAR(unit2) = createVehicle [_unitCfg, getPos GVAR(logicCenter), [], 0, "none"];
		QGVAR(unit2) attachTo [GVAR(logicCenter), [-0.5, 0, 0]];
		QGVAR(unit2) setDir 15;
	};

	case 4: {
		QGVAR(unit3) = createVehicle [_unitCfg, getPos GVAR(logicCenter), [], 0, "none"];
		QGVAR(unit3) attachTo [GVAR(logicCenter), [-1.5, 0, 0]];
		QGVAR(unit3) setDir 25;
	};
};

GVAR(iffUnit) pushBack _unit;

{
	_unit disableAI _x;
} forEach ["TARGET", "AUTOTARGET", "MOVE", "ANIM", "TEAMSWITCH", "FSM", "WEAPONAIM", "COVER", "AUTOCOMBAT", "PATH", "MINEDETECTION", "NVG", "LIGHTS", "RADIOPROTOCOL"];
