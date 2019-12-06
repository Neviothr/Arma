#include "script_component.hpp"

params ["_unit", "_weapon", "_muzzle", "_newMagazine"];

if (isPlayer _unit || { _muzzle != _weapon }) exitWith {};
if (_weapon in ["throw", "put"]) exitWith {};

if (currentWeapon _unit isEqualTo primaryWeapon _unit) then {
    _unit addMagazine (_newMagazine #0);
};
