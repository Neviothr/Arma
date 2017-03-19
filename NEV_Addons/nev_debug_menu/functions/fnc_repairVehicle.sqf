fnc_repairVehicle = {
	vehicle player setDamage 0;
	["nev_notification", ["VEHICLE REPAIR / UNIT HEALING", "The current vehicle / player has been fully repaired / healed."]] call BIS_fnc_showNotification;
};