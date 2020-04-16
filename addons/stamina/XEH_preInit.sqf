#include "script_component.hpp"

ADDON = false;

// https://github.com/CBATeam/CBA_A3/issues/788#issuecomment-339191918
["x\nev\addons\stamina\functions\fnc_handleEffects.sqf", "ace_advanced_fatigue_fnc_handleEffects"] call CBA_fnc_compileFunction;
call compile preprocessFileLineNumbers "z\ace\addons\advanced_fatigue\XEH_PreInit.sqf";

ADDON = true;
