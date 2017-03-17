#include "\userconfig\nev_debug_menu\settings.hpp"

call compile preprocessFile "\nev_debug_menu\functions\fnc_spawnGroup.sqf";
call compile preprocessFile "\nev_debug_menu\functions\fnc_addToZeus.sqf";
call compile preprocessFile "\nev_debug_menu\functions\fnc_aggressiveAI.sqf";
call compile preprocessFile "\nev_debug_menu\functions\fnc_garrison.sqf";
call compile preprocessFile "\nev_debug_menu\functions\fnc_openDebugMenu.sqf";
call compile preprocessFile "\nev_debug_menu\functions\fnc_openZeus.sqf";
call compile preprocessFile "\nev_debug_menu\functions\fnc_removeDead.sqf";
call compile preprocessFile "\nev_debug_menu\functions\fnc_teleport.sqf";
call compile preprocessFile "\nev_debug_menu\functions\fnc_repairVehicle.sqf";
call compile preprocessFile "\nev_debug_menu\functions\fnc_broadcast.sqf";
call compile preprocessFile "\nev_debug_menu\functions\fnc_onLoad.sqf";
call compile preprocessFile "\nev_debug_menu\functions\fnc_commitWeather.sqf";
call compile preprocessFile "\nev_debug_menu\functions\fnc_commitDate.sqf";
call compile preprocessFile "\nev_debug_menu\functions\fnc_nearestObjects.sqf";
call compile preprocessFile "\nev_debug_menu\functions\fnc_sideChange.sqf";
call compile preprocessFile "\nev_debug_menu\functions\fnc_visibility.sqf";
call compile preprocessFile "\nev_debug_menu\functions\fnc_openGarage.sqf";
call compile preprocessFile "\nev_debug_menu\functions\fnc_safeStart.sqf";

player addAction ["<t color='#228B25'>Debug Menu</t>", "call fnc_openDebugMenu"];