class CfgPatches
{
	class ace_c_veh_slowsand
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.62;
		requiredAddons[]=
		{
			"ace_main",
			"ace_c_vehicle"
		};
		author[]=
		{
			"conKORD"
		};
		version="1.14.0.593";
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		terrainCoef=3;
	};
	class Motorcycle: LandVehicle
	{
		terrainCoef=2;
	};
	class Bicycle: Motorcycle
	{
		terrainCoef=4;
	};
	class HMMWV_base: Car
	{
		terrainCoef=2;
	};
	class UAZ_Base: Car
	{
		terrainCoef=2;
	};
	class LandRover_Base: Car
	{
		terrainCoef=2;
	};
	class BAF_Jackal2_BASE_D: Car
	{
		terrainCoef=2;
	};
	class SUV_Base_EP1: Car
	{
		terrainCoef=2;
	};
	class Truck: Car
	{
		terrainCoef=2;
	};
	class Wheeled_APC: Car
	{
		terrainCoef=2;
	};
	class BRDM2_Base: Wheeled_APC
	{
		terrainCoef=2;
	};
	class Tractor: Car
	{
		terrainCoef=1.5;
	};
	class ATV_base_EP1: Car
	{
		terrainCoef=1.5;
	};
	class M1030: Motorcycle
	{
		terrainCoef=1.5;
	};
	class TT650_Base: Motorcycle
	{
		terrainCoef=1.5;
	};
};
class CfgSurfaces
{
	class Default;
	class TKMoutain: Default
	{
		rough=0.2;
		dust=0.89999998;
	};
	class TKSkalniSterk: Default
	{
		rough=0.2;
		dust=1;
	};
	class TKPolopoust: Default
	{
		rough=0.1;
		dust=0.89999998;
	};
	class TKHlina: Default
	{
		rough=0.14;
		dust=0.80000001;
	};
	class TKPole: Default
	{
		rough=0.15000001;
		dust=0.60000002;
	};
	class TKForest: Default
	{
		rough=0.2;
		dust=0.89999998;
	};
	class TKTrava: Default
	{
		rough=0.15000001;
		dust=0.5;
	};
	class TKValouny: Default
	{
		rough=0.30000001;
		dust=0.40000001;
	};
	class TKSkala: Default
	{
		rough=0.40000001;
		dust=0.5;
	};
	class TKSterkNaDno: Default
	{
		rough=0.1;
		dust=0;
	};
	class TKPlevel: Default
	{
		rough=0.15000001;
		dust=0.69999999;
	};
	class ZRPolopoust: Default
	{
		rough=0.2;
		dust=0.89999998;
	};
	class ZRSkala: Default
	{
		rough=0.40000001;
		dust=0.5;
	};
	class ZRHlina: Default
	{
		rough=0.14;
		dust=0.80000001;
	};
	class ZRTrava: Default
	{
		rough=0.15000001;
		dust=0.5;
	};
	class ZRPlevel: Default
	{
		rough=0.15000001;
		dust=0.69999999;
	};
	class ZRPole: Default
	{
		rough=0.16;
		dust=0.60000002;
	};
	class ZRSterkNaDno: Default
	{
		rough=0.1;
		dust=0;
	};
	class DEPolopoust: Default
	{
		rough=0.1;
		dust=0.89999998;
	};
	class DESkalniSterk: Default
	{
		rough=0.2;
		dust=1;
	};
	class DBPolopoust: Default
	{
		rough=0.1;
		dust=0.89999998;
	};
	class DBTrava: Default
	{
		rough=0.15000001;
		dust=0.5;
	};
	class DBSkalniSterk: Default
	{
		rough=0.2;
		dust=1;
	};
	class GZforest: Default
	{
		rough=0.14;
		dust=0.80000001;
	};
	class GZTrava: Default
	{
		rough=0.16;
		dust=0.60000002;
	};
};
