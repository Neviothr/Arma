NEV_fnc_teleport = {
	openMap true;
	onMapSingleClick "player setPos _pos; onMapSingleClick ''; openMap false; true;";
}