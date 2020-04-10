#include "script_component.hpp"

params [["_unitCfg", "", [""]], ["_unitNumber", 0, [0]]];

if (_unitCfg == "") exitWith {ERROR("No classname passed")};

TRACE_1("",_unitCfg);

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
_unit disableAI "ALL";
