#include "script_component.hpp"

params ["_unitCfg", ["_unitNumber", 0, [0]]];
TRACE_2("",_unitCfg,_unitNumber);

if (_unitCfg == "") exitWith {ERROR_1("Unable to create unit",_unitCfg)};

private _unit = _unitCfg createVehicleLocal getPos GVAR(logicCenter);
TRACE_1("",_unit);

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
_unit disableAI "ALL";
