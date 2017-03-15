fnc_teleport = {

	["nev_notification", ["MAP TELEPORT", "Click on the location to which you'd like to be teleported."]] call bis_fnc_showNotification;

	openMap true;
	["nev_mapTeleport", "onMapSingleClick", {
    	vehicle player setPos _pos;
    	["nev_mapTeleport", "onMapSingleClick"] call BIS_fnc_removeStackedEventHandler;
	}] call BIS_fnc_addStackedEventHandler;
};