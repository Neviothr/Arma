/*
 * Name: TMF_ai_fnc_addWaveHandler
 * Author: Head
 *
 * Arguments:
 * 0: The wave spawner logic <OBJECT>
 * 1: Code to execute <CODE>
 *
 * Return:
 * None
 *
 * Description:
 * Adds an eventhandler to a wave spawner that execute everytime a wave is spawned.
 * Local execution only.
 * https://github.com/TMF3/TMF/blob/master/addons/ai/functions/fn_addWaveHandler.sqf
 *
 * Example for removing headgear from all spawned units:
 * [this, {
 *   params ["", "_groups"];
 *   {
 *     {
 *       removeHeadgear _x;
 *     } forEach units _x;
 *   } forEach _groups;
 * }] call nev_mission_framework_fnc_addWaveHandler;
*/

#include "script_component.hpp"

params ["_logic", "_code"];
TRACE_2("",_logic,_code);

private _handlers = _logic getVariable ["Handlers", []];
private _index = _handlers pushBack _code;
TRACE_1("",_handlers);

_logic setVariable ["Handlers", _handlers, false];

TRACE_1("",_index);
_index
