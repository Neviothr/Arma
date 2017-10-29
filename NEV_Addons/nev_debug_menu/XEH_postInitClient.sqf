#include "script_component.hpp"

if (!hasInterface) exitWith {};

if (IS_ADMIN || (!isMultiplayer) || (isServer && hasInterface) ) then {
	player addAction ["<t color='#228B25'>Debug Menu</t>", {createDialog "nev_debug_menu"}];

	// Using CBA_fnc_waitUntilAndExecute because we can't suspend this script
	[
		{!isNull (findDisplay 46)}, // Condition, wait for RscDisplayMission
		{
			10 cutRsc [QGVAR(aiCount), "PLAIN", -1, true]; // Load the display, using layer 10 to aviod issues with mods that use cutRsc (STNVG, etc)
		}
	] call CBA_fnc_waitUntilAndExecute;
};

// Debug info diary record
player createDiarySubject [QGVAR(docs), "Debug Menu"];
player createDiaryRecord [QGVAR(docs), ["RHS Debug Info", "
	<font face='RobotoCondensedBold' size='16'>Decal Debug</font>
	<br/>
		To enable decal debug mode, `RHSDecalsDebugMode = true`.
		<br/>
		To disable, `RHSDecalsDebugMode = false`.
	<br/><br/>
	<font face='RobotoCondensedBold' size='16'>Engine Startup Script</font>
	<br/>
		To enable engine startup script, `RHS_ENGINE_STARTUP_OFF = true`.
		<br/>
		To disable, `RHS_ENGINE_STARTUP_OFF = nil`.
	<br/><br/>
	<font face='RobotoCondensedBold' size='16'>HEAT Simulation</font>
	<br/>
		To enable HEAT simulation, `RHS_HEAT_ENABLED = true`.
		<br/>
		To disable, `RHS_HEAT_ENABLED = false`.
	<br/><br/>
	<font face='RobotoCondensedBold' size='16'>Spall Simulation</font>
	<br/>
		To enable spall simulation, `RHS_SPALL_ENABLED= true`.
		<br/>
		To disable, `RHS_SPALL_ENABLED = false`.
"]];