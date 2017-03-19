fnc_addToZeus = {
	{
		_x addCuratorEditableObjects [allUnits, true];
		_x addCuratorEditableObjects [vehicles, true];
	} forEach allCurators;
	["nev_notification", ["ZEUS", "All units are now editable by Zeus."]] call BIS_fnc_showNotification;
};