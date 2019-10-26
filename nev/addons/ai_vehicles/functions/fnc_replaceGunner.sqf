#include "script_component.hpp"

params ["_vehicle"];

private _driver = driver _vehicle;
private _allTurrets = allTurrets [_vehicle, false];

if (isNil "_allTurrets" || {count _allTurrets == 0}) exitWith {};

_vehicle setVariable [QGVAR(gunnerDead), true];
_vehicle forceSpeed 0;

[
    {speed (_this #0) isEqualTo 0},
    {
        moveOut (_this #1);
        unassignVehicle (_this #1);
    },
    [_vehicle, _driver],
    4,
    {
        moveOut (_this #1);
        unassignVehicle (_this #1);
    }
] call CBA_fnc_waitUntilAndExecute;

[
    {
        if (alive (_this #0) && isNull objectParent (_this #0)) then {
            [(_this #0),(_this #1)] call FUNC(moveInGunner);
        };
    },
    [_vehicle, _driver],
    8
] call CBA_fnc_waitAndExecute;
