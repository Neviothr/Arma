#include "script_component.hpp"

params ["_unit"];

// Ignore units in vehicles
if (!(_unit isKindOf "CAManBase") || {!(isNull objectParent _unit)}) exitWith {};

private _pos = (getPosWorld _unit) vectorAdd [0,0,0.05];
private _blood = createSimpleObject [(selectRandom GVAR(bloodEffectModels)), _pos];

_blood setDir random 360;
_blood setVectorUp surfaceNormal position _blood;
