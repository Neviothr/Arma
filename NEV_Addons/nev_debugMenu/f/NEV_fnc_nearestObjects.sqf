NEV_fnc_nearestObjects = {
	_objList = [];
	{
		_objList pushBack _x;
	} forEach nearestObjects [player, ["AllVehicles"], 50];
	hint format ["%1", _objList];
};