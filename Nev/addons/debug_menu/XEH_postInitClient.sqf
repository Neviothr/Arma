#include "script_component.hpp"

if (!hasInterface) exitWith {};

if (IS_ADMIN || (!isMultiplayer) || (isServer && hasInterface)) then {
	player addAction ["<t color = '#228B25'>Debug Menu</font>", {createDialog QGVAR(debugMenuDisplay)}];

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
	<font face='RobotoCondensedBold' size='14'>Decal Debug</font>
	<br/>
		To enable decal debug mode - <font color='#ffa500'>RHSDecalsDebugMode = true</font>
		<br/>
		To disable - <font color='#ffa500'>RHSDecalsDebugMode = false</font>
	<br/><br/>
	<font face='RobotoCondensedBold' size='14'>Engine Startup Script</font>
	<br/>
		To enable engine startup script - <font color='#ffa500'>RHS_ENGINE_STARTUP_OFF = true</font>
		<br/>
		To disable - <font color='#ffa500'>RHS_ENGINE_STARTUP_OFF = nil</font>
	<br/><br/>
	<font face='RobotoCondensedBold' size='14'>HEAT Simulation</font>
	<br/>
		To enable HEAT simulation - <font color='#ffa500'>RHS_HEAT_ENABLED = true</font>
		<br/>
		To disable - <font color='#ffa500'>RHS_HEAT_ENABLED = false</font>
	<br/><br/>
	<font face='RobotoCondensedBold' size='14'>Spall Simulation</font>
	<br/>
		To enable spall simulation - <font color='#ffa500'>RHS_SPALL_ENABLED= true</font>
		<br/>
		To disable - <font color='#ffa500'>RHS_SPALL_ENABLED = false</font>
	<br/><br/>
	<font face='RobotoCondensedBold' size='14'>Radar</font>
	<br/>
		To disable - <font color='#ffa500'>RHS_Radar_Enabled = false</font>
		<br/>
		or - <font color='#ffa500'>missionNamespace setVariable [""RHS_Radar_Enabled"", false, true]</font>
		<br/>
		To enable - <font color='#ffa500'>RHS_Radar_Enabled = true</font>
	<br/><br/>
	<font face='RobotoCondensedBold' size='14'>Decals</font>
	<br/>
		To disable - <font color='#ffa500'>RHSDecalsOff = true</font>
		<br/>
		To enable - <font color='#ffa500'>RHSDecalsOff = false</font>
"]];

player createDiaryRecord [QGVAR(docs), ["FHQ Debug Info", "
	<font face='RobotoCondensedBold' size='14'>Weather Effects</font>
	<br/>
		To disable -
		<br/>
			Sand -
			<br/>
				<font color='#ffa500'>[FHQ_SandHandle, 'sandInterval', 1000] call FHQ_fnc_setWeatherEffect</font>
				<br/><br/>
			Snow -
			<br/>
				<font color='#ffa500'>[FHQ_SnowHandle, 'snowInterval', 1000] call FHQ_fnc_setWeatherEffect</font>
				<br/><br/>
			Fog -
			<br/>
			<font color='#ffa500'>[FHQ_FogHandle, 'fogInterval', 1000] call FHQ_fnc_setWeatherEffect</font>
"]];