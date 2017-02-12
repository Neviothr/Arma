_zbe_aiCacheDist = 1500;
_zbe_vehicleCacheDistCar = 1500;
_zbe_vehicleCacheDistAir = 1500;
_zbe_vehicleCacheDistBoat = 1500;
_zbe_debug = 1;
_zbe_minFrameRate = -1;
_zbe_cache_debug = true;

if (isServer) then {
	[_zbe_aiCacheDist, _zbe_minFrameRate, _zbe_cache_debug, _zbe_vehicleCacheDistCar, _zbe_vehicleCacheDistAir, _zbe_vehicleCacheDistBoat] execVM "\zbe_cache\zbe_cache\main.sqf"};