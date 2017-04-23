#include "script_component.hpp"

GVAR(allGroups) = 0;
GVAR(cachedGroups) = [];
GVAR(cachedUnits) = 0;
GVAR(allVehicles) = 0;
GVAR(cachedVehicles) = 0;
GVAR(objectView) = 0;
GVAR(players) = [];
GVAR(mapSize) = [] call BIS_fnc_mapSize;
GVAR(mapSide) = GVAR(mapSize) / 2;
GVAR(centerPos) = [GVAR(mapSide), GVAR(mapSide), 0];

[] spawn  {
	while {true} do {
		sleep 1;
		GVAR(players) = (switchableUnits + playableUnits);
		{
			_disable = _x getVariable QGVAR(cacheDisabled);
			_disable = if (isNil "_disable") then {
				false;
			} else {
				_disable;
			};
			if (!_disable && !(_x in GVAR(cachedGroups))) then {
					GVAR(cachedGroups) = GVAR(cachedGroups) + [_x];
					[_x] execFSM "\NEV_Addons\addons\nev_cache\fsm\nev_ai_caching.fsm";
				};
		} forEach allGroups;
	};
};

[] spawn {
	private ["_assets"];
	GVAR(cached_assets) = [];

	while {true} do {
		_assets = GVAR(centerPos) nearEntities [["LandVehicle", "Air", "Ship"], GVAR(mapSide)];
		{
			if !(_x in GVAR(cached_assets)) then {
				GVAR(cached_assets) = GVAR(cached_assets) + [_x];
				[_x] execFSM "\NEV_Addons\addons\nev_cache\fsm\nev_vehicle_caching.fsm";
			};
		} forEach _assets;

		{
			if (!(_x in _assets)) then {
			GVAR(cached_assets) = GVAR(cached_assets) - [_x];
			};
		} forEach GVAR(cached_assets);
		GVAR(allVehicles) = (_assets);
		sleep 1;
	};
};

[] spawn {
	while {true} do {
		uiSleep 25;
		GVAR(cachedUnits) = (count allUnits - ({simulationEnabled _x} count allUnits));
		systemChat format ["C %1", GVAR(cachedUnits)];
	};
};