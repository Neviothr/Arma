#include "script_component.hpp"

nev_allGroups = 0;
nev_cachedGroups = [];
nev_cachedUnits = 0;
nev_allVehicles = 0;
nev_cachedVehicles = 0;
nev_objectView = 0;
nev_players = [];
nev_mapsize = [] call BIS_fnc_mapSize;
nev_mapside = nev_mapsize / 2;
nev_centerPOS = [nev_mapside, nev_mapside, 0];

[] spawn  {
	while {true} do {
		sleep 1;
		nev_players = (switchableUnits + playableUnits);
		{
			_disable = _x getVariable "nev_cacheDisabled";
			_disable = if (isNil "_disable") then {
				false;
			} else {
				_disable;
			};
			if (!_disable && !(_x in nev_cachedGroups)) then {
					nev_cachedGroups = nev_cachedGroups + [_x];
					[_x] execFSM "\NEV_Addons\addons\nev_cache\fsm\nev_ai_caching.fsm";
				};
		} forEach allGroups;
	};
};

[] spawn {
	private ["_assets"];
	nev_cached_assets = [];

	while {true} do {
		_assets = nev_centerPOS nearEntities [["LandVehicle", "Air", "Ship"], nev_mapside];
		{
			if !(_x in nev_cached_assets) then {
				nev_cached_assets = nev_cached_assets + [_x];
				[_x] execFSM "\NEV_Addons\addons\nev_cache\fsm\nev_vehicle_caching.fsm";
			};
		} forEach _assets;

		{
			if (!(_x in _assets)) then {
			nev_cached_assets = nev_cached_assets - [_x];
			};
		} forEach nev_cached_assets;
		nev_allVehicles = (_assets);
		sleep 1;
	};
};

[] spawn {
	while {true} do {
		uiSleep 25;
		nev_cachedUnits = (count allUnits - ({simulationEnabled _x} count allUnits));
		systemChat format ["C %1", nev_cachedUnits];
	};
};