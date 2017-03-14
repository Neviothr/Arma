fnc_repairVehicle = {
	vehicle player setDamage 0;
	["nev_notification", ["VEHICLE REPAIR", "The current vehicle has been fully repaired."], 10] call bis_fnc_showNotification;
};