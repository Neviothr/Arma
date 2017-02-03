NEV_fnc_addToZeus = {
	{
		_x addCuratorEditableObjects [allUnits, true];
		_x addCuratorEditableObjects [vehicles, true];
	} forEach allCurators;
};