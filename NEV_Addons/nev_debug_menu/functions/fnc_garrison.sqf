fnc_garrison = {
	{
		[_x, _x, 50, 2, false] call CBA_fnc_taskDefend;
	} forEach allUnits;

	["nev_notification", ["GARRISON", "All units have been applied with CBA_fnc_taskDefend."], 10] call bis_fnc_showNotification;
};