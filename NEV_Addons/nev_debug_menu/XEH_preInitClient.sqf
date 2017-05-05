#include "script_component.hpp"

#include "XEH_PREP.hpp"

// Keybind
[
	"Debug Menu",
	"debug_menu_key",
	"Open debug menu",
	{
		// Only if - player is an admin, game is in SP, player is Neviothr, player is host on a non-dedicated server
		if (((serverCommandAvailable "#logout") || (!isMultiplayer) || (getPlayerUID player == "76561198141761169") || (isServer && hasInterface)) && !dialog) then {
			call FUNC(openDebugMenu)
		};
	},
	""
] call CBA_fnc_addKeybind;

// NEV_maxDistance
[
	"NEV_maxDistance",
	"SLIDER",
	"Max spawn distance",
	"Debug Menu Groups",
	[0, 12000, 325, 0],
	true,
	{
		params ["_value"];
		NEV_maxDistance = _value;
	}
] call CBA_Settings_fnc_init;

// NEV_minDistance
[
	"NEV_minDistance",
	"SLIDER",
	"Min spawn distance",
	"Debug Menu Groups",
	[0, 12000, 250, 0],
	true,
	{
		params ["_value"];
		NEV_minDistance = _value;
	}
] call CBA_Settings_fnc_init;

// NEV_groupSide
[
	"NEV_groupSide",
	"LIST",
	"Unit side",
	"Debug Menu Groups",
	[[west, east, independent, civilian], ["West", "East", "Independent", "Civilian"], 0],
	true,
	{
		params ["_value"];
		NEV_groupSide = _value;
	}
] call CBA_Settings_fnc_init;

// NEV_group
[
	"NEV_group",
	"EDITBOX",
	"Unit array",
	"Debug Menu Groups",
	"",
	true,
	{
		params ["_value"];
		NEV_group = _value splitString " "; // Turns editbox's `name1 name2` into ["name1", "name2"]
	}
] call CBA_Settings_fnc_init;