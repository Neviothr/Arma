#include "script_component.hpp"

params ["_unit", "", "", "", "_oldMagazine"];

if (isPlayer _unit) exitWith {};

if (currentWeapon (vehicle _unit) isEqualTo primaryWeapon _unit) then {
    _unit addMagazine (_oldMagazine #0);
};
