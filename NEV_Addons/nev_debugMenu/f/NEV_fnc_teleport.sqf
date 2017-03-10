NEV_fnc_teleport = {
	["nevMessage", ["MAP TELEPORT", "Click on the location to which you'd like to be teleported."], 10] call bis_fnc_showNotification;
	openMap true;
	onMapSingleClick "player setPos _pos; onMapSingleClick ''; openMap false; true;";
};