// https://github.com/TMF3/TMF/blob/0038a0ac3e743ef8adb0df66e6e314b1dd5d4360/addons/common/functions/fn_edenInit.sqf

#include "script_component.hpp"

if !is3DEN exitWith {};

// Add mouseOver EH
private _idx = missionNamespace getVariable [QGVAR(edenDrawIdx), -1];

if !(_idx == -1) then {
    removeMissionEventHandler ["Draw3D", _idx];
};

_idx = addMissionEventHandler ["Draw3D", FUNC(edenDraw)];
GVAR(edenDrawIdx) = _idx;

// Some stuff for hiding map objects
{
    {
        _x hideObjectGlobal false
    } forEach (_x getVariable [QGVAR(intersections), []]);

    private _ints = [];

    _ints append lineIntersectsObjs [AGLToASL (_x modelToWorld [-2, 0, 0]), AGLToASL (_x modelToWorld [2, 0, 0]), objNull, _x, true, 32];
    _ints append lineIntersectsObjs [AGLToASL (_x modelToWorld [0, -2, 0]), AGLToASL (_x modelToWorld [0, 2, 0]), objNull, _x, true, 32];
    _ints append lineIntersectsObjs [AGLToASL (_x modelToWorld [0, 0, -2]), AGLToASL (_x modelToWorld [0, 0, 2]), objNull, _x, true, 32];

    _ints = _ints select {!(_x in (all3DENEntities select 0))};
    _ints = _ints arrayIntersect _ints;

    _x setVariable [QGVAR(intersections), _ints];
    {
        _x hideObjectGlobal true
    } forEach _ints;
} forEach ((all3DENEntities select 3) select {_x isKindOf QGVAR(hideMapObjects)});

add3DENEventHandler ["OnMissionPreviewEnd", {
    // Cheat to get OnMissionPreviewEnd working
    0 = [] spawn {
        uisleep 0.5;
        {
            {
                _x hideObjectGlobal false
            } forEach (_x getVariable [QGVAR(intersections), []]);

            private _ints = [];

            _ints append lineIntersectsObjs [AGLToASL (_x modelToWorld [-2, 0, 0]), AGLToASL (_x modelToWorld [2, 0, 0]), objNull, _x, true, 32];
            _ints append lineIntersectsObjs [AGLToASL (_x modelToWorld [0, -2, 0]), AGLToASL (_x modelToWorld [0, 2, 0]), objNull, _x, true, 32];
            _ints append lineIntersectsObjs [AGLToASL (_x modelToWorld [0, 0, -2]), AGLToASL (_x modelToWorld [0, 0, 2]), objNull, _x, true, 32];

            _ints = _ints select {!(_x in (all3DENEntities select 0))};
            _ints = _ints arrayIntersect _ints;

            _x setVariable [QGVAR(intersections), _ints];
            {
                _x hideObjectGlobal true
            } forEach _ints;
        } forEach ((all3DENEntities select 3) select {_x isKindOf QGVAR(hideMapObjects)});
    };
}];