#include "script_component.hpp"

if (!hasInterface) exitWith {};

if (IS_ADMIN || (!isMultiplayer) || (isServer && hasInterface)) then {
	player addAction ["<t color = '#228B25'>Debug Menu", {createDialog QGVAR(debugMenuDisplay)}];

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
	<font face='RobotoCondensedBold' size='14'>Decal Debug
	<br/>
		<execute expression=""RHSDecalsDebugMode = true"">Enable decal debug mode</execute>
		<br/>
		<execute expression=""RHSDecalsDebugMode = false"">Disable decal debug mode</execute>
	<br/><br/>

	<font face='RobotoCondensedBold' size='14'>Engine Startup Script
	<br/>
		<execute expression=""RHS_ENGINE_STARTUP_OFF = true"">Enable engine startup script</execute>
		<br/>
		<execute expression=""RHS_ENGINE_STARTUP_OFF = nil"">Disable engine startup script</execute>
	<br/><br/>

	<font face='RobotoCondensedBold' size='14'>HEAT Simulation
	<br/>
		<execute expression=""RHS_HEAT_ENABLED = true"">Enable HEAT simulation</execute>
		<br/>
		<execute expression=""RHS_HEAT_ENABLED = false"">Disable HEAT simulation</execute>
	<br/><br/>

	<font face='RobotoCondensedBold' size='14'>Spall Simulation
	<br/>
		<execute expression=""RHS_SPALL_ENABLED= true"">Enable spall simulation</execute>
		<br/>
		<execute expression=""RHS_SPALL_ENABLED = false"">Disable spall simulation</execute>
	<br/><br/>

	<font face='RobotoCondensedBold' size='14'>Radar
	<br/>
		<execute expression=""RHS_Radar_Enabled = true"">Enable radar simulation</execute>
		<br/>
		<execute expression=""RHS_Radar_Enabled = false"">Disable radar simulation</execute>
		<br/>
		<execute expression=""missionNamespace setVariable ['RHS_Radar_Enabled', false, true]"">Disable radar simulation V2</execute>
	<br/><br/>

	<font face='RobotoCondensedBold' size='14'>Decals
	<br/>
		<execute expression=""RHSDecalsOff = false"">Enable decals</execute>
		<br/>
		<execute expression=""RHSDecalsOff = true"">Disable decals</execute>
"]];

player createDiaryRecord [QGVAR(docs), ["FHQ Debug Info", "
	<font face='RobotoCondensedBold' size='14'>Weather Effects
	<br/>
		<execute expression=""[FHQ_SandHandle, 'sandInterval', 1000] call FHQ_fnc_setWeatherEffect"">Disable sand</execute>
		<br/>
		<execute expression=""[FHQ_SnowHandle, 'snowInterval', 1000] call FHQ_fnc_setWeatherEffect"">Disable snow</execute>
		<br/>
		<execute expression=""[FHQ_FogHandle, 'fogInterval', 1000] call FHQ_fnc_setWeatherEffect"">Disable fog</execute>
"]];
