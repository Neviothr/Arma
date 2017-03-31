#include "script_component.hpp"

private _i = 0; // Private loop number var, so we can hint it later

// Warning system for settings.hpp file
// TODO: Move this?
if !(isFilePatchingEnabled) then {
	hint "FilePatching is not enabled. Please refer to the readme in the workshop page."; // If filePatching disabled hint
} else {
	// If filePatching enabled check if setting.hpp exist inside userconfig
	_fileCheck = "\userconfig\nev_debug_menu\settings.hpp" call FUNC(fileExists);

	// If settings.hpp exist do nothing and exist loop
	// If settings.hpp doesn't exist hint
	if !(_FileCheck) then {
		hint "Settings.hpp was not found inside userconfig. Please refer to the readme in the workshop page.";
	};
};

// Froup spawning loop
for [{_i = 0}, {_i <= 5}, {_i = _i + 1}] do {
	// Select random pos at a max distance from player
	_aiPos = [player, NEV_maxDistance] call CBA_fnc_randPos;

	// Check if pos is too close or if pos is on water, if so exit loop
	if (((player distance _aiPos) < NEV_minDistance) || surfaceIsWater _aiPos) exitWith {};

	// If above is false, spawn defined groups
	[_aiPos, NEV_groupSide, NEV_group] call BIS_fnc_spawnGroup;
};

// Hint how many groups were spawned based on number of loops, max is 5
systemChat format ["Created %1 groups", _i];

// Call fnc_aggressiveAI to redunce one button click for user. Is this needed?
call FUNC(aggressiveAI);