#define CHECK_DISTANCE 10

params [["_unit", objNull, [objNull]]];

private _position = eyePos _unit;
private _intersections = 0;

if (lineIntersects [_position, _position vectorAdd [0, 0, +CHECK_DISTANCE]]) then {
  	_intersections = _intersections + 1;
};

if (lineIntersects [_position, _position vectorAdd [+CHECK_DISTANCE, 0, 0]]) then {
  	_intersections = _intersections + 1;
};

if (lineIntersects [_position, _position vectorAdd [-CHECK_DISTANCE, 0, 0]]) then {
	_intersections = _intersections + 1;
};

if (lineIntersects [_position, _position vectorAdd [0, +CHECK_DISTANCE, 0]]) then {
	_intersections = _intersections + 1;
};

if (lineIntersects [_position, _position vectorAdd [0, -CHECK_DISTANCE, 0]]) then {
  	_intersections = _intersections + 1;
};

if (_intersections > 3) then {
	_unit disableAI "MOVE";
	_unit disableAI "COVER";
	_unit disableAI "PATH";
};

_intersections > 3