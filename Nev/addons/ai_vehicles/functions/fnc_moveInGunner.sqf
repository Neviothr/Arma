#include "script_component.hpp"

params ["_vehicle", "_driver"];

private _gunnerTurret = _vehicle call ace_common_fnc_getTurretGunner;

_driver assignAsTurret [_vehicle, _gunnerTurret];
_driver moveInTurret [_vehicle, _gunnerTurret];
