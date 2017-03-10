NEV_fnc_repairVehicle = {
	vehicle player setDamage 0;
	["nevMessage", ["VEHICLE REPAIR", "The current vehicle has been fully repaired."], 10] call bis_fnc_showNotification;
};