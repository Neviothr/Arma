#include "script_component.hpp"
/*
 * Author: Neviothr
 * Handle zone init, create marker, get various variables from module input, pass relevent info to fnc_handleZone.
 *
 * Arguments:
 * 0: Zone spawner module <OBJECT>
 * 1: Objects synced to module <UNUSED>
 * 2: Is the module actived? <BOOL>
 *
 * Return Value:
 * None.
 *
 * Example:
 * [airportZoneModule, [], true] call nev_mission_framework_fnc_endMission
 *
 * Public: No
 * Based on:
 * https://github.com/uksf/modpack/blob/master/addons/mission/functions/fnc_moduleSpawn.sqf
*/

params ["_logic", "", "_activated"];

private _position = position _logic;
private _marker = createMarker [format ["zoneSpawner_%1_%2_%3", _position select 0, _position select 1, random 100], _position];

private _area = _logic getVariable ["objectArea", []];
_area params ["_a", "_b", "_angle", "_isRectangle"];

_marker setMarkerAlpha 0.5;
_marker setMarkerShape (["ELLIPSE", "RECTANGLE"] select _isRectangle);
_marker setMarkerSize [_a, _b];
_marker setMarkerDir (direction _logic);

private _maxGroups = _logic getVariable QGVAR(maxGroups);
private _groupPoolSize = _logic getVariable QGVAR(groupPoolSize);
private _unitArray = _logic getVariable QGVAR(unitArray);
private _side = _logic getVariable QGVAR(side);



// Wait until game on if SafeStart is enabled.
[
    {(GVAR(gameOn)) || (getMissionConfigValue ["safeStartEnabled", 0] == 0)},
    {
        params ["_activated", "_logic", "_marker", "_maxGroups", "_groupPoolSize", "_unitArray", "_side"];

        if (_activated) then {
            [_logic, _marker, _maxGroups, _groupPoolSize, _unitArray, _side] call FUNC(handleZone);
        };
    },
    [_activated, _logic, _marker, _maxGroups, _groupPoolSize, _unitArray, _side]
] call CBA_fnc_waitUntilAndExecute;
