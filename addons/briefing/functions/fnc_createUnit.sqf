#include "script_component.hpp"

params ["_unitCfg", "_unitNumber"];

if ((_unitCfg == "") || (typeName _unitNumber != "SCALAR"))  exitWith {INFO_2("Unable to create unit(s). _unitCfg - %1, _unitNumber - %2", _unitCfg, _unitNumber)};

private _unit = _unitCfg createVehicleLocal getPos GVAR(logicCenter);

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

GVAR(iffUnits) pushBack _unit;

{
    _unit disableAI _x;
} forEach ["TARGET", "AUTOTARGET", "MOVE", "ANIM", "TEAMSWITCH", "FSM", "WEAPONAIM", "COVER", "AUTOCOMBAT", "PATH", "MINEDETECTION", "NVG", "LIGHTS", "RADIOPROTOCOL"];
