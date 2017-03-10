NEV_fnc_nearestObjects = {
	_objList = [];
	{
		_objList pushBack _x;
	} forEach nearestObjects [player, ["Air", "Armored", "Car", "Men", "Static", "Submarine", "Truck", "Plane", "Helicopter"], 50];
	hint format ["%1", _objList];
}