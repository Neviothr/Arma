#include "\userconfig\nev_debugMenu\groupSettings.hpp"

player addAction ["<t color='#ffa500'>Debug Menu</t>", "\nev_debugMenu\f\NEV_fnc_openDebugMenu.sqf"];
call compile preprocessFile "\nev_debugMenu\f\NEV_fnc_spawnGroup.sqf";