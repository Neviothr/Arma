NEV_fnc_openGarage = {
	BIS_fnc_garage_center = player getPos [30, getDir player];
	["Open", true] call BIS_fnc_garage;
};