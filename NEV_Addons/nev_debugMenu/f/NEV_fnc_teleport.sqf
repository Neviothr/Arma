NEV_fnc_teleport = {
	["nevMessage", ["MAP TELEPORT", "Click on the location to which you'd like to be teleported."], 10] call bis_fnc_showNotification;
	openMap true;
	["nevTeleport", "onMapSingleClick", {
    vehicle player setPos _pos;
    ["nevTeleport", "onMapSingleClick"] call BIS_fnc_removeStackedEventHandler;
}] call BIS_fnc_addStackedEventHandler;
};