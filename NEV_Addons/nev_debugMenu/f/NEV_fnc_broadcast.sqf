NEV_fnc_broadcast = {
	_title = ctrlText 80001;
	_description = ctrlText 80002;
	["nevMessage", [_title, _description], 10] call bis_fnc_showNotification;
}