fnc_safeStartOn = {
	isSafeStart = true;
	private _safeStartLoop = 1;

	ssDelManProj = player addEventHandler ["Fired", {deleteVehicle (_this select 6);}];
	if (vehicle player != player && {player in [gunner vehicle player, driver vehicle player, commander vehicle player]}) then {
		ssDelVehProj = (vehicle player) addEventHandler ["Fired", {deleteVehicle (_this select 6);}];
	};
	player allowDamage false;

	while {isSafeStart} do {
		uiSleep 60;
		hint format ["Weapons are cold, wait for admin to trigger start. (%1 minute(s) since briefing stage started)", _safeStartLoop];
		systemChat format ["[SafeStart] Weapons are cold, wait for admin to trigger start. (%1 minute(s) since briefing stage started)", _safeStartLoop];
		_safeStartLoop = _safeStartLoop + 1;
	};
};

fnc_safeStartOff = {
	isSafeStart = false;

	hint "Weapons are live in 5 seconds.";
	systemChat "[SafeStart] Weapons are live in 5 seconds.";
	uisleep 5;

	player removeEventHandler ["Fired", ssDelManProj];
	player removeEventHandler ["Fired", ssDelVehProj];
	player allowDamage true;
	titleText ["Game on!", "PLAIN"];
};