#include "script_component.hpp"

if (!hasInterface) exitWith {};

if (IS_ADMIN || (!isMultiplayer) || (isServer && hasInterface)) then {
	player addAction [
		"<t color = '#228B25'>Debug Menu",
		{
			createDialog QGVAR(debugMenuDisplay);

			// Check if the AI counter display is shown, if not - load it
			if (isNull (uiNamespace getVariable ["nev_ai_counter_aiCounterDisplay", displayNull])) then {
				QGVAR(aiCounterLayer) cutRsc ["nev_ai_counter_aiCounter", "PLAIN", -1, true];
			};
		}
	];
};

// Debug info diary record
player createDiarySubject [QGVAR(docs), "Debug Menu"];
player createDiaryRecord [QGVAR(docs), ["FHQ Debug Info", "
	<font face='RobotoCondensedBold' size='14'>Weather Effects
	<br/>
		<execute expression=""[FHQ_SandHandle, 'sandInterval', 1000] call FHQ_fnc_setWeatherEffect"">Disable sand</execute>
		<br/>
		<execute expression=""[FHQ_SnowHandle, 'snowInterval', 1000] call FHQ_fnc_setWeatherEffect"">Disable snow</execute>
		<br/>
		<execute expression=""[FHQ_FogHandle, 'fogInterval', 1000] call FHQ_fnc_setWeatherEffect"">Disable fog</execute>
"]];
