#include "script_component.hpp"

/*
 * Author: Cyruz143
 * Creates a blood pool under a unit.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None.
 *
 * Example:
 * [player] call nev_blood_fnc_createBlood
 *
 * Public: No
 https://github.com/Cyruz143/ark_inhouse/blob/master/addons/ark_blood_effects/server_postinit.sqf
*/

params ["_unit"];

TRACE_1("",_unit);

// Ignore units in vehicles.
if !(_unit isKindOf "CAManBase") exitWith {};
if !(isNull objectParent _unit) exitWith {};

private _pos = (getPosWorld _unit) vectorAdd [random 0.4 - 0.2, random 0.4 - 0.2, 0.05];
private _blood = createSimpleObject [(selectRandom GVAR(bloodEffectModels)), _pos];

_blood setDir random 360;
_blood setVectorUp surfaceNormal position _blood;

// Push back the created blood object to array through which we can later interate to delete together with dead bodies and wrecks.
GVAR(bloodDrops) pushBack _blood;
