#include "\userconfig\nev_debugMenu\groupSettings.hpp"

call compile preprocessFile "\nev_debugMenu\f\NEV_fnc_spawnGroup.sqf";
call compile preprocessFile "\nev_debugMenu\f\NEV_fnc_addToZeus.sqf";
call compile preprocessFile "\nev_debugMenu\f\NEV_fnc_aggressiveAI.sqf";
call compile preprocessFile "\nev_debugMenu\f\NEV_fnc_garrison.sqf";
call compile preprocessFile "\nev_debugMenu\f\NEV_fnc_openDebugMenu.sqf";
call compile preprocessFile "\nev_debugMenu\f\NEV_fnc_openZeus.sqf";
call compile preprocessFile "\nev_debugMenu\f\NEV_fnc_removeDead.sqf";
call compile preprocessFile "\nev_debugMenu\f\NEV_fnc_teleport.sqf";
call compile preprocessFile "\nev_debugMenu\f\NEV_fnc_repairVehicle.sqf";

player addAction ["<t color='#228B25'>Debug Menu</t>", "call NEV_fnc_openDebugMenu"];