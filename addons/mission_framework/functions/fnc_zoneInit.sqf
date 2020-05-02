#include "script_component.hpp"

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

[_logic, _marker, _maxGroups, _groupPoolSize, _unitArray, _side] call FUNC(handleZone);
