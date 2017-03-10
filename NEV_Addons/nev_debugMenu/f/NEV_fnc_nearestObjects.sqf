NEV_fnc_nearestObjects = {
	_objList = [];
	{
		_objList pushBack _x;
		// TODO find a list of all class types
	} forEach nearestObjects [player, ["Air", "Armored", "Car", "Men", "Static", "Submarine", "Truck", "Plane", "Helicopter"], 50];
	hint format ["%1", _objList];
};