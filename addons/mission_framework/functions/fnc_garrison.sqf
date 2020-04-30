#include "script_component.hpp"

_fnc_all3DENSelected = {
    params [["_whiteList", ["Object", "Logic", "Trigger", "Marker"], [[]]]];
    private _return = [];

    {
        _return = _return + get3DENSelected _x;
    } forEach _whiteList;

    _return
};

private _selectedObjects = [["Object", "Logic", "Trigger", "Marker"]] call _fnc_all3DENSelected;
private _center = (uiNamespace getVariable "bis_fnc_3DENEntityMenu_data") select 0;
_center set [2, 0];

// TODO - find a better way to find all occupiable buildings.
private _buildings = _center nearObjects ["House", 200];
_buildings = _buildings + (_center nearObjects ["Land_BagBunker_Large_F", 200]);
_buildings = _buildings + (_center nearObjects ["Land_BagBunker_Small_F", 200]);
_buildings = _buildings + (_center nearObjects ["Land_BagBunker_01_large_green_F", 200]);
_buildings = _buildings + (_center nearObjects ["Land_BagBunker_01_small_green_F", 200]);
_buildings = _buildings + (_center nearObjects ["Land_fortified_nest_big", 200]);
_buildings = _buildings + (_center nearObjects ["Land_fortified_nest_small_EP1", 200]);

private _positions = [];

// TODO - reduce coverage
{
    private _buildingPositions = _x call BIS_fnc_buildingPositions;
    {
        _positions pushBack _x;
        TRACE_1("",_positions);
    } forEach _buildingPositions;
} forEach _buildings;

collect3DENHistory {
	{
		private _randomPosition = selectRandom _positions;
		_positions = _positions - [_randomPosition];

		if (count _positions == 0) exitWith {[localize "Not enough empty building positions.", 1] call BIS_fnc_3DENNotification};

		if (surfaceIsWater _randomPosition) then {
			_x set3DENAttribute ["position", ASLToATL _randomPosition];
		} else {
			_x set3DENAttribute ["position", _randomPosition];
		};

		_x set3DENAttribute ["UnitPos", 3];
		_x set3DENAttribute ["rotation", [0, 0, random 360]];
		_x disableAI "PATH";
	} forEach _selectedObjects;
};
