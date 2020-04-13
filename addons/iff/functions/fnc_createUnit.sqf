#include "script_component.hpp"

/*
 * Author: Neviothr
 * Create a unit of a certain type at one of the 4 given positions.
 *
 * Arguments:
 * 0: Unit classname <STRING>
 * 1: Position <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["B_Soldier_A_F", 3] call nev_iff_fnc_createUnit
 *
 * Public: No
*/

params [["_unitCfg", "", [""]], ["_unitNumber", 0, [0]]];

TRACE_2("",_unitCfg,_unitNumber);

if (_unitCfg == "") exitWith {ERROR("No classname passed")};

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
