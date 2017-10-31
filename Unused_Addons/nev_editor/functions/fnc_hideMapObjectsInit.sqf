// https://github.com/TMF3/TMF/blob/0038a0ac3e743ef8adb0df66e6e314b1dd5d4360/addons/common/functions/fn_hideMapObjectsInit.sqf

#include "script_component.hpp"

params ["_logic"];

if !(isServer) exitWith {};

private _ints = [];

_ints append lineIntersectsObjs [AGLToASL (_logic modelToWorld [-2, 0, 0]), AGLToASL (_logic modelToWorld [2, 0, 0]), objNull, _logic, true, 32];
_ints append lineIntersectsObjs [AGLToASL (_logic modelToWorld [0, -2, 0]), AGLToASL (_logic modelToWorld [0, 2, 0]), objNull, _logic, true, 32];
_ints append lineIntersectsObjs [AGLToASL (_logic modelToWorld [0, 0, -2]), AGLToASL (_logic modelToWorld [0, 0, 2]), objNull, _logic, true, 32];

_ints = _ints select {str (_x) find ".p3d" > 0};
_ints = _ints arrayIntersect _ints;
{
    _x hideObjectGlobal true;
    _x setPosATL ((getPosATL _x) vectorAdd [0, 0, -1000]);
} forEach _ints;

deleteVehicle _logic;