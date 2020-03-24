/*
    Example for removing headgear from all spawned units:

    [this, {
        params ["", "_groups"];
        {
                {
                    removeHeadgear _x;
                } forEach units _x;
        } forEach _groups;
    }] call nev_mission_framework_fnc_addWaveHandler;
*/

#include "script_component.hpp"

params ["_logic", "_code"];

private _handlers = _logic getVariable ["Handlers", []];
private _index = _handlers pushBack _code;

_logic setVariable ["Handlers", _handlers, false];

_index
