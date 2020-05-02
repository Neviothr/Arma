#include "script_component.hpp"

params ["_logic", "_marker", "_maxGroups", "_groupPoolSize", "_unitArray", "_side"];

_logic setVariable [QGVAR(currentGroupsActive), []];
_logic setVariable [QGVAR(groupPoolSize), _groupPoolSize];

[{
    params ["_args", "_idPFH"];
    _args params ["_logic", "_marker", "_maxGroups", "_unitArray", "_side"];

    private _groupPoolSize = _logic getVariable [QGVAR(groupPoolSize), 0];
    if (_groupPoolSize <= 0) exitWith {[_idPFH] call CBA_fnc_removePerFrameHandler};

    private _currentGroupsActive = _logic getVariable [QGVAR(currentGroupsActive), []];
    _currentGroupsActive = _currentGroupsActive select {({alive _x} count (units _x)) > 0};
    _logic setVariable [QGVAR(currentGroupsActive), _currentGroupsActive];

    if ((count _currentGroupsActive) < _maxGroups) then {

        private _spawnPoint = [_marker] call CBA_fnc_randPosArea;
        if (({_x distance2D _randomSpawn < 300} count (call CBA_fnc_players)) > 0) exitWith {};

        private _group = [_spawnPoint, call compile _side, call compile _unitArray] call BIS_fnc_spawnGroup;

        if (isClass (configFile >> "CfgPatches" >> "lambs_main")) then {
            [_group, sqrt ((worldSize ^ 2) + (worldSize ^ 2))] spawn lambs_wp_fnc_taskRush;
        };

        private _currentGroupsActive = _logic getVariable QGVAR(currentGroupsActive);
        _currentGroupsActive pushBack _group;
        _logic setVariable [QGVAR(currentGroupsActive), _currentGroupsActive];

        private _groupPoolSize = _logic getVariable QGVAR(groupPoolSize);
        _logic setVariable [QGVAR(groupPoolSize), (_groupPoolSize - 1)];
    };
}, 5, [_logic, _marker, _maxGroups, _unitArray, _side]] call CBA_fnc_addPerFrameHandler;
