fnc_repairVehicle = {
	vehicle player setDamage 0;
	["nev_notification", ["VEHICLE REPAIR", "The current vehicle has been fully repaired."]] call bis_fnc_showNotification;
};