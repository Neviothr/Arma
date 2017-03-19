fnc_broadcast = {
	private ["_title", "_description"];

	_title = ctrlText 80001;
	_description = ctrlText 80002;

	["nev_notification", [_title, _description]] call BIS_fnc_showNotification;
};