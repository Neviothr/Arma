NEV_fnc_addToZeus = {
	{
		_x addCuratorEditableObjects [allUnits, true];
		_x addCuratorEditableObjects [vehicles, true];
	} forEach allCurators;
	["nevMessage", ["ZEUS", "Add units are now editable by Zeus."], 10] call bis_fnc_showNotification;
};