#include "script_component.hpp"

waitUntil {time > 0 && alive player};

if (isNil QGVAR(enabled)) exitWith {};

_canSeeMap = 0; // 0 = can't see the map, 1 = can see map
_old_state = -1;

_has_gps = (player hasWeapon "ItemGPS");
if !(player hasWeapon "ACE_Map") then {
	showMap false;
	showGPS _has_gps;
};

if (player hasWeapon "ItemMap") then {player removeWeapon "ItemMap"};

while {true} do {
	if (GVAR(enabled)) then {
		if (_canSeeMap == 0) then {
			if (alive player && {player hasWeapon "ACE_Map"}) then {
				_canSeeMap = if (speed player > 12 && {vehicle player == player}) then {0} else {1}; // Disable maplook in HALO ?
			};
		} else {
			if (!alive player || {!(player hasWeapon "ACE_Map")}) then {
				_canSeeMap = 0;
			} else {
				if (speed player > 12 && {vehicle player == player}) then { // Disable maplook in HALO ?
					_canSeeMap = 0;
				};
			};
		};

		if (_old_state != _canSeeMap) then {
			_old_state = _canSeeMap;
			showMap (_canSeeMap == 1);
			if (player hasWeapon "ItemGPS") then {
				showGPS true;
			};
		};
		if ((player hasWeapon "ItemGPS") && {!(player hasWeapon "ACE_Map")}) then {
			showGPS true;
		};
		if (player hasWeapon "ItemMap") then {player removeWeapon "ItemMap"};
		if (!alive player) then {
			waitUntil {alive player};
			sleep 0.5;
			if (player hasWeapon "ItemMap") then {player removeWeapon "ItemMap"};
			if (player hasWeapon "ACE_Map") then {
				if (player hasWeapon "ItemGPS") then {
					showGPS true;
				};
			} else {
				showMap false;
				if (player hasWeapon "ItemGPS") then {
					showGPS true;
				};
			};
		};
	} else {
		if (_old_state != -1) then {
			_old_state = -1;
			showMap true;
			if (player hasWeapon "ItemGPS") then {showGPS true};
		};
	};
	sleep 0.512;
};
