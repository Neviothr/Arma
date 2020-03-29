#include "script_component.hpp"

{
    private _marker = createMarkerLocal [str _x, getPos _x];
    _marker setMarkerTextLocal str _x;
    _marker setMarkerType "respawn_inf";
    _marker setMarkerColorLocal "colorOPFOR";

    GVAR(moduleMarkers) pushBackUnique _marker;
} forEach entities "nev_mission_framework_waveSpawnModule";
