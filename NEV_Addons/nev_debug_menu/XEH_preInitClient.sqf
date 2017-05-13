#include "script_component.hpp"

#include "XEH_PREP.hpp"

// Keybind
[
	"Debug Menu",
	"debug_menu_key",
	"Open debug menu",
	{
		if (( 													// Open debug menu only if the following is true
		    	(serverCommandAvailable "#logout") || 			// If the player is an admin
		    	(!isMultiplayer) || 							// If gamemode is SP
		    	(getPlayerUID player == "76561198141761169") || // If player is mod author
		    	(isServer && hasInterface) 						// If player is host on a non-dedicated server
			) && !dialog) then { 								// If no dialogs are open
			createDialog "nev_debug_menu";
		};
	},
	""
] call CBA_fnc_addKeybind;

// Max distance
[
	QGVAR(maxDistance),
	"SLIDER",
	"Max spawn distance",
	"Debug Menu Groups",
	[0, 12000, 325, 0],
	true,
	{
		params ["_value"];
		GVAR(maxDistance) = _value;
	}
] call CBA_Settings_fnc_init;

// Min distance
[
	QGVAR(minDistance),
	"SLIDER",
	"Min spawn distance",
	"Debug Menu Groups",
	[0, 12000, 250, 0],
	true,
	{
		params ["_value"];
		GVAR(minDistance) = _value;
	}
] call CBA_Settings_fnc_init;

// Group side
[
	QGVAR(groupSide),
	"LIST",
	"Unit side",
	"Debug Menu Groups",
	[[west, east, independent, civilian], ["West", "East", "Independent", "Civilian"], 0],
	true,
	{
		params ["_value"];
		GVAR(groupSide) = _value;
	}
] call CBA_Settings_fnc_init;

// Group array
[
	"NEV_group",
	"EDITBOX",
	"Unit array",
	"Debug Menu Groups",
	"",
	true,
	{
		params ["_value"];
		GVAR(groupArray) = _value splitString " "; // Turns editbox's `name1 name2` into ["name1", "name2"]
	}
] call CBA_Settings_fnc_init;