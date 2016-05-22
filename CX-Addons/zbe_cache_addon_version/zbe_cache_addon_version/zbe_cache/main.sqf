zbe_aiCacheDist				= _this select 0;
zbe_minFrameRate			= _this select 1;
zbe_debug					= _this select 2;
zbe_vehicleCacheDistCar		= _this select 3;
zbe_vehicleCacheDistAir		= _this select 4;
zbe_vehicleCacheDistBoat	= _this select 5;

zbe_allGroups	   			= 0;
zbe_cachedGroups   			= [];
zbe_cachedUnits	   			= 0;
zbe_allVehicles	   			= 0;
zbe_cachedVehicles 			= 0;
zbe_objectView	   			= 0;
zbe_players					= [];

call compileFinal preprocessFileLineNumbers "\zbe_cache_addon_version\zbe_cache\zbe_functions.sqf";

if (zbe_minFrameRate == -1) then {if (isDedicated) then {zbe_minFrameRate = 16} else {zbe_minFrameRate = 31};};

zbe_mapsize = [] call bis_fnc_mapSize;
zbe_mapside = zbe_mapsize / 2;
zbe_centerPOS = [zbe_mapside, zbe_mapside, 0];

[] spawn  {
	while {true} do {
		sleep 1;
		zbe_players = (switchableUnits + playableUnits);
		{
			_disable = _x getVariable "zbe_cacheDisabled";
			_disable = if (isNil "_disable") then { false;
				} else {_disable;
				};
			if (!_disable && !(_x in zbe_cachedGroups)) then {
					zbe_cachedGroups = zbe_cachedGroups + [_x];
					[zbe_aiCacheDist, _x, zbe_minFrameRate, zbe_debug] execFSM "\zbe_cache_addon_version\zbe_cache\zbe_aiCaching.fsm";
				};
		} forEach allGroups;
	};
};
// Vehicle Caching Beta (for client FPS)
[] spawn {
	private ["_assetscar", "_assetsair", "_assetsboat"];
	zbe_cached_cars = [];
	zbe_cached_air = [];
	zbe_cached_boat = [];
	while {true} do {
		_assetscar = zbe_centerPOS nearEntities ["LandVehicle", zbe_mapside];
		{
			if !(_x in zbe_cached_cars) then {
				zbe_cached_cars = zbe_cached_cars + [_x];
				[_x, zbe_vehicleCacheDistCar] execFSM "\zbe_cache_addon_version\zbe_cache\zbe_vehicleCaching.fsm";
			};
		} forEach _assetscar;
		_assetsair = zbe_centerPOS nearEntities ["Air", zbe_mapside];
		{
			if !(_x in zbe_cached_air) then {
				zbe_cached_air = zbe_cached_air + [_x];
				[_x, zbe_vehicleCacheDistAir] execFSM "\zbe_cache_addon_version\zbe_cache\zbe_vehicleCaching.fsm";
			};
		} forEach _assetsair;
		_assetsboat = zbe_centerPOS nearEntities ["Ship", zbe_mapside];
		{
			if !(_x in zbe_cached_boat) then {
				zbe_cached_boat = zbe_cached_boat + [_x];
				[_x, zbe_vehicleCacheDistBoat] execFSM "\zbe_cache_addon_version\zbe_cache\zbe_vehicleCaching.fsm";
			};
		} forEach _assetsboat;

		{
			if (!(_x in _assetscar)) then {
			zbe_cached_cars = zbe_cached_cars - [_x];
			};
		} forEach zbe_cached_cars;
		{
			if (!(_x in _assetsair)) then {
			zbe_cached_air = zbe_cached_air - [_x];
			};
		} forEach zbe_cached_air;
		{
			if (!(_x in _assetsboat)) then {
			zbe_cached_boat = zbe_cached_boat - [_x];
			};
		} forEach zbe_cached_boat;
		zbe_allVehicles = (_assetscar + _assetsair + _assetsboat);
		sleep 15;
	};
};

[] spawn {
	if (zbe_debug) then {
			while {true} do {
				uiSleep 15;
				zbe_cachedUnits = (count allUnits - ({simulationEnabled _x} count allUnits));
				zbe_cachedVehicles = (count zbe_allVehicles - ({simulationEnabled _x} count zbe_allVehicles));
				zbe_allVehiclesCount = (count zbe_allVehicles);
				systemChat format ["All units: %1 Cached: %2", count allUnits, zbe_cachedUnits];
			};
		};
};
// Experimental, disabled for now
// if (!isDedicated) then {execFSM "\zbe_cache_addon_version\zbe_cache\zbe_clientObjectDrawAuto.fsm";};
