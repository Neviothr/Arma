#include "script_component.hpp"

params ["_isSafety"];

// Exit if server
if (isDedicated) exitwith {};

switch (_isSafety) do {
	// Turn safety on
	case true: {
		// Delete bullets from fired weapons
		if (isNil QGVAR(ehSafetyMan)) then {
			GVAR(ehSafetyMan) = player addEventHandler ["Fired", {deletevehicle (_this select 6);}];
		};

		// Disable guns and damage for vehicles if player is crewing a vehicle
		if (vehicle player != player && {player in [gunner vehicle player, driver vehicle player, commander vehicle player]}) then {
			player setVariable [QGVAR(varSafetyVeh), vehicle player];
			(player getVariable QGVAR(varSafetyVeh)) allowDamage false;

			if (isNil QGVAR(ehSafetyVeh)) then {
				GVAR(ehSafetyVeh) = (player getVariable QGVAR(varSafetyVeh)) addEventHandler["Fired", {deletevehicle (_this select 6);}];
			};
		};

		// Make player invincible
		player allowDamage false;
	};

	// Turn safety off
	default {
		//Allow player to fire weapons
		if !(isNil QGVAR(ehSafetyMan)) then {
			player removeEventhandler ["Fired", GVAR(ehSafetyMan)];
			GVAR(ehSafetyMan) = nil;
		};

		// Re-enable guns and damage for vehicles if they were disabled
		if !(isNull (player getVariable [QGVAR(varSafetyVeh), objNull])) then {
			(player getVariable QGVAR(varSafetyVeh)) allowDamage true;

			if !(isNil QGVAR(ehSafetyVeh)) then {
				(player getVariable QGVAR(varSafetyVeh)) removeEventhandler ["Fired", GVAR(ehSafetyVeh)];
				GVAR(ehSafetyVeh) = nil;
			};
			player setVariable [QGVAR(varSafetyVeh), nil];
		};

		// Make player vulnerable
		player allowDamage true;
	};
};
