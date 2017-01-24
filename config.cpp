class CfgLights
{
	class CmeasuresLight
	{
		diffuse[]={1,0.44999999,0.15000001};
		color[]={1,0.44999999,0.15000001};
		ambient[]={1,0.44999999,0.15000001};
		size=1;
		brightness=2;
		drawLight=0;
		blinking=0;
		flareSize=3;
		flareMaxDistance=6000;
		useFlare=1;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
		position[]={0,0,0};
	};
	class ScudLight
	{
		color[]={1,0.5,0.2};
		ambient[]={0.80000001,0.60000002,0.2};
		brightness=0.1;
		diffuse[]={1,1,1};
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
	};
	class SmallFireLight
	{
		name="$STR_A3_CfgLights_SmallFireLight0";
		diffuse[]={1,0.44999999,0.15000001};
		color[]={1,0.44999999,0.15000001};
		ambient[]={0,0,0,0};
		brightness=10;
		intensity="3500*(power interpolate[0.1, 1.0, 0.4, 1.0])";
		blinking=0;
		drawLight=0;
		flareSize=1;
		flareMaxDistance=6500;
		useFlare=1;
		class Attenuation
		{
			start=1;
			constant=3;
			linear=0;
			quadratic=22;
		};
		position[]={0,0,0};
	};
	class SmallFlameLight
	{
		name="$STR_A3_CfgLights_SmallFlameLight0";
		diffuse[]={1,0.5,0.2};
		color[]={1,0.5,0.2};
		ambient[]={0,0,0,0};
		brightness=10;
		intensity=3000;
		blinking=0;
		drawLight=0;
		flareSize=0.1;
		flareMaxDistance=6500;
		useFlare=1;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=5;
		};
		position[]={0,0,0};
	};
	class Chemlight_Green
	{
		color[]={0.2,1,0,1};
		ambient[]={0.0049999999,0.025,0};
		brightness=1;
		intensity=3000;
		drawLight=0;
		class Attenuation
		{
			start=0;
			constant=1;
			linear=0;
			quadratic=4;
		};
		position[]={0,0,0};
		diffuse[]={0.02,0.1,0};
	};
	class Chemlight_Red: Chemlight_Green
	{
		color[]={1,0,0.025,1};
		diffuse[]={0.1,0,0.0024999999};
		ambient[]={0.30000001,0,0.00075000001};
		intensity=350;
		class Attenuation
		{
			start=0;
			constant=1;
			linear=0;
			quadratic=6;
		};
	};
	class ChemLight_Yellow: Chemlight_Green
	{
		color[]={1,0.60000002,0,1};
		diffuse[]={1,0.60000002,0};
		ambient[]={0.30000001,0.18000001,0};
		intensity=400;
		class Attenuation
		{
			start=0;
			constant=1;
			linear=0;
			quadratic=6;
		};
	};
	class ChemLight_Blue: Chemlight_Green
	{
		color[]={0,0.60000002,1,1};
		diffuse[]={0,0.60000002,1};
		ambient[]={0,0.47999999,0.80000001};
		intensity=250;
		class Attenuation
		{
			start=0;
			constant=1;
			linear=0;
			quadratic=12;
		};
	};
	class MK82_light_source
	{
		diffuse[]={0.69999999,0.69999999,0.69999999};
		color[]={0.69999999,0.69999999,0.69999999};
		ambient[]={0.30000001,0.30000001,0.30000001,0};
		brightness=12;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=50;
		flareMaxDistance=6000;
		useFlare=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=1;
			hardLimitEnd=0;
		};
		position[]={0,0,0};
	};
	class MK82_light_source_02
	{
		diffuse[]={0.89999998,0.44999999,0.15000001};
		color[]={0.89999998,0.44999999,0.15000001};
		ambient[]={0.89999998,0.44999999,0.15000001};
		brightness=30;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=40;
		flareMaxDistance=6000;
		useFlare=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=1;
			hardLimitEnd=0;
		};
		position[]={0,0,0};
	};
	class Hellfire_light_source
	{
		diffuse[]={0.69999999,0.69999999,0.40000001};
		color[]={0.69999999,0.69999999,0.40000001};
		ambient[]={0.89999998,0.44999999,0.15000001};
		brightness=20;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=50;
		flareMaxDistance=6000;
		useFlare=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=1;
			hardLimitEnd=0;
		};
		position[]={0,0,0};
	};
	class Hellfire_light_source_02
	{
		diffuse[]={0.89999998,0.44999999,0.15000001};
		color[]={0.89999998,0.44999999,0.15000001};
		ambient[]={0.89999998,0.44999999,0.15000001};
		brightness=20;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=50;
		flareMaxDistance=6000;
		useFlare=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=1;
			hardLimitEnd=0;
		};
		position[]={0,0,0};
	};
	class ObjectDestructionLight
	{
		diffuse[]={1,0.40000001,0.15000001};
		color[]={1,0.40000001,0.15000001};
		ambient[]={0.1,0.039999999,0.015};
		brightness=20;
		intensity=125000;
		size=1;
		drawLight=0;
		blinking="false";
		flareSize=5;
		flareMaxDistance=5000;
		useFlare=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
		position[]={0,0,0};
	};
	class ObjectDestructionLightFuel
	{
		diffuse[]={0,0,0};
		color[]={1,0.44999999,0.15000001};
		ambient[]={0.1,0.039999999,0.015};
		brightness=400;
		intensity=200000;
		size=1;
		drawLight=0;
		blinking="false";
		flareSize=15;
		flareMaxDistance=5000;
		useFlare=0;
		class Attenuation
		{
			start=4;
			constant=0;
			linear=0;
			quadratic=0.2;
			hardLimitStart=1000;
			hardLimitEnd=2000;
		};
		position[]={0,0,0};
	};
	class FlameLight1
	{
		diffuse[]={1,0.44999999,0.15000001};
		color[]={1,0.44999999,0.15000001};
		ambient[]={0.1,0.039999999,0.015};
		brightness=500;
		intensity=50000;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=1;
		flareMaxDistance=5000;
		useFlare=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
		position[]={0,2,0};
	};
	class FlameLight2
	{
		diffuse[]={1,0.44999999,0.15000001};
		color[]={1,0.44999999,0.15000001};
		ambient[]={0,0,0};
		brightness=50;
		intensity=5000;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=1;
		flareMaxDistance=5000;
		useFlare=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
		position[]={0,2,0};
	};
	class ExploLight
	{
		diffuse[]={0,0,0};
		color[]={1,0.44999999,0.15000001};
		ambient[]={0.1,0.039999999,0.015};
		brightness=1.3;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=30;
		flareMaxDistance=5000;
		useFlare=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
		position[]={0,40,0};
	};
	class RPGFireLight
	{
		diffuse[]={0,0,0};
		color[]={0.60000002,0.60000002,0.60000002};
		ambient[]={0.059999999,0.059999999,0.059999999,0};
		Brightness=2;
		size=1;
		drawLight=0;
		blinking="false";
		flareSize=2;
		flareMaxDistance=4000;
		useFlare=1;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
		position[]={0,0,0};
	};
	class ExploLightFast
	{
		diffuse[]={0.050000001,0.050000001,0.050000001};
		color[]={0.60000002,0.60000002,0.5};
		ambient[]={0.059999999,0.059999999,0.039999999,0};
		Brightness=6;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=10;
		flareMaxDistance=4000;
		useFlare=1;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
		position[]={0,0,0};
	};
	class ExploLightFast_02
	{
		diffuse[]={0.050000001,0.050000001,0.050000001};
		color[]={0.60000002,0.5,0.30000001};
		ambient[]={0.059999999,0.050000001,0.029999999,0};
		Brightness=3;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=5;
		flareMaxDistance=4000;
		useFlare=1;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
		position[]={0,0,0};
	};
	class ExploLightFastBig
	{
		diffuse[]={0.050000001,0.050000001,0.050000001};
		color[]={0.60000002,0.40000001,0.30000001};
		ambient[]={0.059999999,0.039999999,0.029999999,0};
		Brightness=10;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=20;
		flareMaxDistance=4000;
		useFlare=1;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
		position[]={0,0,0};
	};
	class ExploLightFastSmall
	{
		diffuse[]={0.050000001,0.050000001,0.050000001};
		color[]={0.60000002,0.40000001,0.30000001};
		ambient[]={0.059999999,0.039999999,0.029999999,0};
		Brightness=3;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=10;
		flareMaxDistance=4000;
		useFlare=1;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
		position[]={0,0,0};
	};
	class ExploLightMed
	{
		diffuse[]={255,255,50};
		color[]={255,255,50};
		ambient[]={0,0,0,0};
		brightness=1500;
		size=1;
		intensity=1500;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
		position[]={0,0,0};
	};
	class FiredLightMed
	{
		diffuse[]={2,1.9,1.6};
		color[]={1,0.89999998,0.60000002};
		ambient[]={0,0,0,0};
		brightness=40000;
		size=1;
		intensity=40000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
		position[]={0,0,0};
	};
	class FiredLightCannon: FiredLightMed
	{
		diffuse[]={0.93699998,0.63099998,0.259};
		color[]={0.93699998,0.63099998,0.259};
		ambient[]={0.93699998,0.63099998,0.259};
		brightness=300;
		intensity=10000;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=70;
		flareMaxDistance=4000;
		useFlare=1;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
		position[]=
		{
			"positionX + 0.5 * directionLocalX",
			"positionY + 0.5 * directionLocalY",
			"positionZ + 0.5 * directionLocalZ"
		};
	};
	class FiredLightSmall
	{
		diffuse[]={255,150,50};
		color[]={255,150,50};
		ambient[]={0,0,0,0};
		brightness=100;
		size=1;
		intensity=100;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
		position[]=
		{
			"positionX + 0.12 * directionLocalX",
			"positionY + 0.12 * directionLocalY",
			"positionZ + 0.12 * directionLocalZ"
		};
	};
	class FiredLightSmallFlak
	{
		diffuse[]={1,0.40000001,0.30000001};
		color[]={1,0.40000001,0.2};
		ambient[]={0.0099999998,0.0040000002,0,3};
		intensity=3000;
		size=1;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
		position[]=
		{
			"positionX + 0.12 * directionLocalX",
			"positionY + 0.12 * directionLocalY",
			"positionZ + 0.12 * directionLocalZ"
		};
	};
	class FiredLightLarge
	{
		diffuse[]={100,100,20};
		color[]={1,1,0.2};
		ambient[]={0,0,0,0};
		brightness=250;
		size=1;
		intensity=250;
		drawLight=0;
		blinking=0;
		flareSize=10;
		flareMaxDistance=2500;
		useFlare=1;
		class Attenuation
		{
			start=0.1;
			constant=10;
			linear=0;
			quadratic=150;
			hardLimitStart=500;
			hardLimitEnd=1000;
		};
		position[]={0,0,0};
	};
	class GrenadeExploLight
	{
		diffuse[]={0.255,0.255,0.255};
		color[]={0.30000001,0.22,0.12};
		ambient[]={0,0,0,0};
		intensity=1000;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=5;
		flareMaxDistance=6000;
		useFlare=1;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
		position[]={0,0,0};
	};
	class MineExploLight
	{
		diffuse[]={0.40000001,0.28,0.15000001};
		color[]={0.40000001,0.28,0.15000001};
		ambient[]={0,0,0,0};
		brightness=20;
		size=1;
		intensity=45000;
		drawLight=0;
		blinking=1;
		class Attenuation
		{
			start=0.5;
			constant=0;
			linear=0;
			quadratic=0.30000001;
			hardLimitStart=1500;
			hardLimitEnd=3000;
		};
		position[]={0,0,0};
	};
	class RocketLight
	{
		diffuse[]={0.050000001,0.050000001,0.050000001};
		color[]={0.60000002,0.60000002,0.5};
		ambient[]={0.059999999,0.059999999,0.050000001,0};
		brightness=5;
		size=1;
		flareSize=3;
		flareMaxDistance=4000;
		useFlare=1;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
		position[]={0,0,0};
	};
	class RocketLightBig
	{
		diffuse[]={0.050000001,0.050000001,0.050000001};
		color[]={0.60000002,0.60000002,0.5};
		ambient[]={0.059999999,0.059999999,0.050000001,0};
		brightness=10;
		size=1;
		flareSize=6;
		flareMaxDistance=4000;
		useFlare=1;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
		position[]={0,0,0};
	};
	class SparksLight
	{
		diffuse[]={1,0.80000001,0.80000001};
		color[]={1,0.80000001,0.80000001};
		ambient[]={0,0,0,0};
		brightness=0.30000001;
		size=1;
		intensity=30;
		drawLight=0;
		blinking=0;
		flareSize=2;
		flareMaxDistance=5000;
		useFlare=1;
		class Attenuation
		{
			start=0.050000001;
			constant=0;
			linear=0;
			quadratic=40;
			hardLimitStart=2;
			hardLimitEnd=4;
		};
		position[]={0,0,0};
	};
	class SparksLightSabot
	{
		diffuse[]={0.255,0.255,0.255};
		color[]={0.30000001,0.2,0.1};
		ambient[]={0,0,0,0};
		size=1;
		intensity=350;
		drawLight=0;
		blinking=0;
		flareSize=2.5;
		flareMaxDistance=6000;
		useFlare=1;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
		position[]={0,0,0};
	};
};
class FlareTest
{
	class Light1
	{
		simulation="light";
		type="CmeasuresLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=4;
	};
};
class CounterMeasureChaff
{
	class Light1
	{
		simulation="light";
		type="CmeasuresLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=4;
	};
};
class MachineGun2;
class AutoCannonFired: MachineGun2
{
	class Light1
	{
		simulation="light";
		type="FiredLightSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.0099999998;
	};
};
class 35mmFlakFlash: MachineGun2
{
	class Light1
	{
		simulation="light";
		type="FiredLightSmallFlak";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.029999999;
	};
};
class CannonFiredBC
{
	class Light1
	{
		simulation="light";
		type="FiredLightCannon";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.14;
	};
};
class ArtilleryFired1
{
	class Light1
	{
		simulation="light";
		type="FiredLightCannon";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
};
class MortarFired
{
	class Light1
	{
		simulation="light";
		type="FiredLightSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.079999998;
	};
};
class Missile0
{
	class Light1
	{
		simulation="light";
		type="RocketLightBig";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=-1;
	};
class Missile1
{
	class Light1
	{
		simulation="light";
		type="RocketLight";
		position[]={0,0,0};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
};
class Missile2
{
	class Light1
	{
		simulation="light";
		type="RocketLight";
		position[]={0,0,0};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
};
class Missile3
{
	class Light1
	{
		simulation="light";
		type="RocketLight";
		position[]={0,0,0};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
};
class Missile4
{
	class Light1
	{
		simulation="light";
		type="RocketLight";
		position[]={0,0,0};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
};
class Missile5
{
	class Light1
	{
		simulation="light";
		type="RocketLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class IEDMineBigExplosion
{
	class Light1
	{
		simulation="light";
		type="ExploLightMed";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class IEDMineFlame
{
	class Light1
	{
		simulation="light";
		type="SmallFlameLight";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=7;
	};
};
class IEDMineSmallExplosion
{
	class Light1
	{
		simulation="light";
		type="ExploLightMed";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class IEDMineSmallGarbageCrater
{
	class GrenadeDirt
	{
		simulation="particles";
		type="DirtIEDMine";
		position[]={0,0,0};
		intensity=1.45;
		interval=0;
		lifeTime=0.2;
		qualityLevel=2;
	};
	class GrenadeDirtM
	{
		simulation="particles";
		type="DirtIEDMine";
		position[]={0,0,0};
		intensity=1.45;
		interval=0;
		lifeTime=0.2;
		qualityLevel=1;
	};
	class Grenadedust
	{
		simulation="particles";
		type="CircleDustSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
	};
	class GrenadeStones
	{
		simulation="particles";
		type="IEDMineStones";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		qualityLevel=2;
	};
	class GrenadeStonesM
	{
		simulation="particles";
		type="IEDMineStones";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		qualityLevel=1;
	};
	class GrenadeFireStones
	{
		simulation="particles";
		type="IEDMineFireStones";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		qualityLevel=2;
	};
	class IEDGarbage1
	{
		simulation="particles";
		type="IEDMineGarbage1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		qualityLevel=2;
	};
	class IEDGarbage1M
	{
		simulation="particles";
		type="IEDMineGarbage1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		qualityLevel=1;
	};
	class IEDGarbage2
	{
		simulation="particles";
		type="IEDMineGarbage2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		qualityLevel=2;
	};
	class IEDGarbage2M
	{
		simulation="particles";
		type="IEDMineGarbage2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		qualityLevel=1;
	};
	class CraterSmoke1
	{
		simulation="particles";
		type="CraterSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=9;
	};
};
class IEDMineSmallLandCrater
{
	class GrenadeDirt
	{
		simulation="particles";
		type="DirtIEDMine";
		position[]={0,0,0};
		intensity=1.45;
		interval=0;
		lifeTime=0.2;
	};
	class Grenadedust
	{
		simulation="particles";
		type="CircleDustSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
	};
	class GrenadeStones
	{
		simulation="particles";
		type="IEDMineStones";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class CraterSmoke1
	{
		simulation="particles";
		type="CraterSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=9;
	};
};
class MortarCrater
{
	class MortarDust
	{
		simulation="particles";
		type="CircleDustMed";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class MortarDirt
	{
		simulation="particles";
		type="DirtMed";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class MortarShell_Smoke_01
	{
		simulation="particles";
		type="MortarShell_Smoke_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class RocketDust
	{
		simulation="particles";
		type="ExplosionDustSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class 81_smoke_up_01
	{
		simulation="particles";
		type="81_smoke_up_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 81_smoke_up_02
	{
		simulation="particles";
		type="81_smoke_up_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 81_smoke_up_03
	{
		simulation="particles";
		type="81_smoke_up_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 81_smoke_up_04
	{
		simulation="particles";
		type="81_smoke_up_04";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 81_smoke_side_01
	{
		simulation="particles";
		type="81_smoke_side_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 81_smoke_side_02
	{
		simulation="particles";
		type="81_smoke_side_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 81_smoke_side_03
	{
		simulation="particles";
		type="81_smoke_side_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 81_smoke_side_04
	{
		simulation="particles";
		type="81_smoke_side_04";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 81_stones
	{
		simulation="particles";
		type="81_stones";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class DirtMortar
	{
		simulation="particles";
		type="DirtMortar";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class DirtMortarBig
	{
		simulation="particles";
		type="DirtMortarBig";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
};
class ArtyShellCrater
{
	class ShellSmokeTrail1
	{
		simulation="particles";
		type="ShellSmokeTrail1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class ShellSmokeTrail2
	{
		simulation="particles";
		type="ShellSmokeTrail2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class ShellSmokeTrail3
	{
		simulation="particles";
		type="ShellSmokeTrail3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class ShellStones
	{
		simulation="particles";
		type="DirtBig";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class MissileCircleDust
	{
		simulation="particles";
		type="CircleDustBig";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class Smoke_Trail_Artillery_Emitter
	{
		simulation="particles";
		type="Smoke_Trail_Artillery_Emitter_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_Trail_Artillery_Emit
	{
		simulation="particles";
		type="Smoke_Trail_Artillery_Emitter_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class DirtBig
	{
		simulation="particles";
		type="DirtBig";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Dirt
	{
		simulation="particles";
		type="DirtMed";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class BattleDust_02
	{
		simulation="particles";
		type="BattleDust_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 105_stones
	{
		simulation="particles";
		type="105_stones";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
};
class SecondaryCrater
{
	class SecondarySparks
	{
		simulation="particles";
		type="ExpSparks1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ExploAmmoCrater
{
	class ExploAmmoStones
	{
		simulation="particles";
		type="DirtSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class CircleDust
	{
		simulation="particles";
		type="CircleDustSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class 25mmSmoke1
	{
		simulation="particles";
		type="25mm_Smoke_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mmSmoke2
	{
		simulation="particles";
		type="25mm_Smoke_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mmSmoke3
	{
		simulation="particles";
		type="25mm_Smoke_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ExploAmmoSmoke
	{
		simulation="particles";
		type="ExploAmmoSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class Impact1
	{
		simulation="particles";
		type="DirtBulletImpact1_30mm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact2
	{
		simulation="particles";
		type="DirtBulletImpact2_30mm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact3
	{
		simulation="particles";
		type="DirtBulletImpact3_30mm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact4
	{
		simulation="particles";
		type="DirtBulletImpact4_30mm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_Trail_HeavyBulletRound_Ground
	{
		simulation="particles";
		type="Smoke_Trail_HeavyBulletRound_Ground";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Smoke_Trail_HeavyBulletRound_Ground2
	{
		simulation="particles";
		type="Smoke_Trail_HeavyBulletRound_Ground2";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class BattleDust_01
	{
		simulation="particles";
		type="BattleDust_01";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class ShotUnderwater
{
	class Bubbles1
	{
		simulation="particles";
		type="BubblesShot1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Bubbles2
	{
		simulation="particles";
		type="BubblesShotBig1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=2;
	};
	class BubblesMed2
	{
		simulation="particles";
		type="BubblesShotBigMed1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=1;
	};
};
class AmmoUnderwater
{
	class Bubbles1
	{
		simulation="particles";
		type="BubbleTrack1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class BubblesMed
	{
		simulation="particles";
		type="BubbleTrackMed1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
};
class AmmoClassic
{
	class Bubbles1
	{
		simulation="particles";
		type="BubbleTrack2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ArtilleryTrails
{
	class Trail1
	{
		simulation="particles";
		type="ArtilleryShell1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
};
class BCImpactEffectsSmall
{
	class Stones
	{
		simulation="particles";
		type="DirtBulletImpact3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class BattleDust_01
	{
		simulation="particles";
		type="BattleDust_01";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_Trail_BulletRound_Ground
	{
		simulation="particles";
		type="Smoke_Trail_BulletRound_Ground";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Smoke_Trail_BulletRound_Ground2
	{
		simulation="particles";
		type="Smoke_Trail_BulletRound_Ground2";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class BCImpactEffectsHardGround
{
	class Impact1
	{
		simulation="particles";
		type="DirtBulletImpact1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact2
	{
		simulation="particles";
		type="DirtBulletImpact2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact3
	{
		simulation="particles";
		type="DirtBulletImpact3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class BattleDust_01
	{
		simulation="particles";
		type="BattleDust_01";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class BCImpactConcrete
{
	class Impact1
	{
		simulation="particles";
		type="ConcreteBulletImpact";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact2
	{
		simulation="particles";
		type="ConcreteBulletImpact2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact3
	{
		simulation="particles";
		type="ConcreteBulletImpact3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class BattleDust_01
	{
		simulation="particles";
		type="BattleDust_01";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class BCImpactConcrete_50cal
{
	class Impact1
	{
		simulation="particles";
		type="ConcreteBulletImpact1_50cal";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact2
	{
		simulation="particles";
		type="ConcreteBulletImpact2_50cal";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact3
	{
		simulation="particles";
		type="ConcreteBulletImpact3_50cal";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class BattleDust_01
	{
		simulation="particles";
		type="BattleDust_01";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class BCImpactConcrete_20mm
{
	class LightExp
	{
		simulation="light";
		type="GrenadeExploLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact
	{
		simulation="particles";
		type="25mm_Explode_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact1
	{
		simulation="particles";
		type="ConcreteBulletImpact1_20mm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact2
	{
		simulation="particles";
		type="ConcreteBulletImpact2_20mm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact3
	{
		simulation="particles";
		type="ConcreteBulletImpact3_20mm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact4
	{
		simulation="particles";
		type="ConcreteBulletImpact4_20mm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class BattleDust_01
	{
		simulation="particles";
		type="BattleDust_01";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class BCImpactConcrete_30mm
{
	class Impact
	{
		simulation="particles";
		type="25mm_Explode_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact1
	{
		simulation="particles";
		type="ConcreteBulletImpact1_30mm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact2
	{
		simulation="particles";
		type="ConcreteBulletImpact2_30mm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact3
	{
		simulation="particles";
		type="ConcreteBulletImpact3_30mm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact4
	{
		simulation="particles";
		type="ConcreteBulletImpact4_30mm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class BattleDust_01
	{
		simulation="particles";
		type="BattleDust_01";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class BCImpactConcrete_30mmHE
{
	class LightExp
	{
		simulation="light";
		type="GrenadeExploLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mm_Explode
	{
		simulation="particles";
		type="25mm_Explode";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 30mm_Sparks
	{
		simulation="particles";
		type="30mmSparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact1
	{
		simulation="particles";
		type="ConcreteBulletImpact1_30mm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact2
	{
		simulation="particles";
		type="ConcreteBulletImpact2_30mm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact3
	{
		simulation="particles";
		type="ConcreteBulletImpact3_30mm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact4
	{
		simulation="particles";
		type="ConcreteBulletImpact4_30mm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mmSmoke3
	{
		simulation="particles";
		type="25mm_Smoke_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class BattleDust_01
	{
		simulation="particles";
		type="BattleDust_01";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class BCImpactDirt_50cal
{
	class Smoke_Trail_HeavyBulletRound_Ground
	{
		simulation="particles";
		type="Smoke_Trail_HeavyBulletRound_Ground";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Smoke_Trail_HeavyBulletRound_Ground2
	{
		simulation="particles";
		type="Smoke_Trail_HeavyBulletRound_Ground2";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class BattleDust_01
	{
		simulation="particles";
		type="BattleDust_01";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class BCImpactDirt_20mm
{
	class LightExp
	{
		simulation="light";
		type="GrenadeExploLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mm_Explode
	{
		simulation="particles";
		type="25mm_Explode";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact1
	{
		simulation="particles";
		type="DirtBulletImpact1_20mm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact2
	{
		simulation="particles";
		type="DirtBulletImpact2_20mm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact3
	{
		simulation="particles";
		type="DirtBulletImpact3_20mm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact4
	{
		simulation="particles";
		type="DirtBulletImpact4_20mm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class BattleDust_01
	{
		simulation="particles";
		type="BattleDust_01";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_Trail_HeavyBulletRound_Ground
	{
		simulation="particles";
		type="Smoke_Trail_HeavyBulletRound_Ground";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Smoke_Trail_HeavyBulletRound_Ground2
	{
		simulation="particles";
		type="Smoke_Trail_HeavyBulletRound_Ground2";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class BCImpactDirt_30mm
{
	class Impact1
	{
		simulation="particles";
		type="DirtBulletImpact1_30mm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact2
	{
		simulation="particles";
		type="DirtBulletImpact2_30mm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact3
	{
		simulation="particles";
		type="DirtBulletImpact3_30mm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact4
	{
		simulation="particles";
		type="DirtBulletImpact4_30mm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class BattleDust_01
	{
		simulation="particles";
		type="BattleDust_01";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_Trail_HeavyBulletRound_Ground
	{
		simulation="particles";
		type="Smoke_Trail_HeavyBulletRound_Ground";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Smoke_Trail_HeavyBulletRound_Ground2
	{
		simulation="particles";
		type="Smoke_Trail_HeavyBulletRound_Ground2";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class BCImpactDirt_30mmHE
{
	class LightExp
	{
		simulation="light";
		type="ExploLightFastSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mm_Explode
	{
		simulation="particles";
		type="25mm_Explode";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 30mm_Sparks
	{
		simulation="particles";
		type="30mmSparks";
		position[]={0,0,0};
		intensity=100;
		interval=1;
		lifeTime=0.2;
	};
	class 25mmSmoke1
	{
		simulation="particles";
		type="25mm_Smoke_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mmSmoke2
	{
		simulation="particles";
		type="25mm_Smoke_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mmSmoke3
	{
		simulation="particles";
		type="25mm_Smoke_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact1
	{
		simulation="particles";
		type="DirtBulletImpact1_30mm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact2
	{
		simulation="particles";
		type="DirtBulletImpact2_30mm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact3
	{
		simulation="particles";
		type="DirtBulletImpact3_30mm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact4
	{
		simulation="particles";
		type="DirtBulletImpact4_30mm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class BattleDust_01
	{
		simulation="particles";
		type="BattleDust_01";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_Trail_HeavyBulletRound_Ground
	{
		simulation="particles";
		type="Smoke_Trail_HeavyBulletRound_Ground";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Smoke_Trail_HeavyBulletRound_Ground2
	{
		simulation="particles";
		type="Smoke_Trail_HeavyBulletRound_Ground2";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class BCImpactConcrete_120mm
{
	class ConcreteBulletImpact1_120mm
	{
		simulation="particles";
		type="ConcreteBulletImpact1_120mm";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ConcreteBulletImpact2_120mm
	{
		simulation="particles";
		type="ConcreteBulletImpact2_120mm";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ConcreteBulletImpact3_120mm
	{
		simulation="particles";
		type="ConcreteBulletImpact3_120mm";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ConcreteBulletImpact4_120mm
	{
		simulation="particles";
		type="ConcreteBulletImpact4_120mm";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ConcreteBulletImpact5_120mm
	{
		simulation="particles";
		type="ConcreteBulletImpact5_120mm";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class BCImpactConcrete_120mmHE
{
	class LightExp
	{
		simulation="light";
		type="ExploLightFast";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.15000001;
	};
	class LightExp2
	{
		simulation="light";
		type="ExploLightFast_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class HERound_Explosion_01
	{
		simulation="particles";
		type="HERound_Explosion_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class HERound_Explosion_02
	{
		simulation="particles";
		type="HERound_Explosion_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class ConcreteBulletImpact1_120mm
	{
		simulation="particles";
		type="ConcreteBulletImpact1_120mm";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ConcreteBulletImpact2_120mm
	{
		simulation="particles";
		type="ConcreteBulletImpact2_120mm";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ConcreteBulletImpact3_120mm
	{
		simulation="particles";
		type="ConcreteBulletImpact3_120mm";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ConcreteBulletImpact4_120mm
	{
		simulation="particles";
		type="ConcreteBulletImpact4_120mm";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ConcreteBulletImpact5_120mm
	{
		simulation="particles";
		type="ConcreteBulletImpact5_120mm";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class BCImpactDirt_120mm
{
	class Smoke_Trail_TankRound_Emitter
	{
		simulation="particles";
		type="Smoke_Trail_TankRound_Emitter_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_Trail_TankRound_Emitter2
	{
		simulation="particles";
		type="Smoke_Trail_TankRound_Emitter_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_Trail_TankRound_Emitter3
	{
		simulation="particles";
		type="Smoke_Trail_TankRound_Emitter";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_Trail_TankRound_Emitter4
	{
		simulation="particles";
		type="Smoke_Trail_TankRound_Emitter_BaseSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class BattleDust_01
	{
		simulation="particles";
		type="BattleDust_01";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class DirtBulletImpact5_120mm
	{
		simulation="particles";
		type="DirtBulletImpact5_120mm";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class dirtbig
	{
		simulation="particles";
		type="dirtbig";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
		smokeGenMinDist=1;
		smokeGenMaxDist=1200;
		smokeSizeCoef=0;
		smokeIntervalCoef=0;
	};
};
class BCImpactDirt_120mmHE
{
	class LightExp
	{
		simulation="light";
		type="ExploLightFast";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.15000001;
	};
	class LightExp2
	{
		simulation="light";
		type="ExploLightFast_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_Trail_TankRound_Emitter
	{
		simulation="particles";
		type="Smoke_Trail_TankRound_Emitter_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_Trail_TankRound_Emitter2
	{
		simulation="particles";
		type="Smoke_Trail_TankRound_Emitter_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_Trail_TankRound_Emitter3
	{
		simulation="particles";
		type="Smoke_Trail_TankRound_Emitter";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_Trail_TankRound_Emitter4
	{
		simulation="particles";
		type="Smoke_Trail_TankRound_Emitter_BaseSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class BattleDust_01
	{
		simulation="particles";
		type="BattleDust_01";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class DirtBulletImpact5_120mm
	{
		simulation="particles";
		type="DirtBulletImpact5_120mm";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class HERound_Explosion_01
	{
		simulation="particles";
		type="HERound_Explosion_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class HERound_Explosion_02
	{
		simulation="particles";
		type="HERound_Explosion_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Sparks_med
	{
		simulation="particles";
		type="sparks_med";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class dirtbig
	{
		simulation="particles";
		type="dirtbig";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
		smokeGenMinDist=1;
		smokeGenMaxDist=1200;
		smokeSizeCoef=0;
		smokeIntervalCoef=0;
	};
};
class ImpactEffectsSmall
{
	class Impact1
	{
		simulation="particles";
		type="DirtBulletImpact1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact2
	{
		simulation="particles";
		type="DirtBulletImpact2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact3
	{
		simulation="particles";
		type="DirtBulletImpact3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact4
	{
		simulation="particles";
		type="DirtBulletImpact4";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class BattleDust_01
	{
		simulation="particles";
		type="BattleDust_01";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ImpactDust1
	{
		simulation="particles";
		type="ImpactDust2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class ImpactDust1Med
	{
		simulation="particles";
		type="ImpactDust2";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class ImpactDust1Low
	{
		simulation="particles";
		type="ImpactDust2Low";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class ImpactDustWater1
	{
		simulation="particles";
		type="ImpactDustWater2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ImpactConcrete
	{
		simulation="particles";
		type="ImpactConcrete";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class ImpactConcreteMed
	{
		simulation="particles";
		type="ImpactConcrete";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class ImpactEffectsSmall06
	{
		simulation="particles";
		type="ImpactSandSmoke2";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class Smoke_Trail_BulletRound_Ground
	{
		simulation="particles";
		type="Smoke_Trail_BulletRound_Ground";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Smoke_Trail_BulletRound_Ground2
	{
		simulation="particles";
		type="Smoke_Trail_BulletRound_Ground2";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Stones
	{
		simulation="particles";
		type="DirtBulletImpact3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class ImpactEffectsHardGround
{
	class ImpactDust1
	{
		simulation="particles";
		type="ImpactDust2";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDust1Med
	{
		simulation="particles";
		type="ImpactDust2";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDust1Low
	{
		simulation="particles";
		type="ImpactDust2Low";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDustWater1
	{
		simulation="particles";
		type="ImpactDustWater2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactConcrete
	{
		simulation="particles";
		type="ImpactConcrete";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactConcreteMed
	{
		simulation="particles";
		type="ImpactConcrete";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ImpactEffectsSea
{
	class WaterWave1
	{
		simulation="particles";
		type="WaterWave";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class WaterSplash1
	{
		simulation="particles";
		type="WaterSplash";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class ImpactEffectsSeaMen
{
	class WaterWaveMen1
	{
		simulation="particles";
		type="WaterWaveMen";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class WaterSplashMen1
	{
		simulation="particles";
		type="WaterSplashMen";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class WaterEffectMen
	{
		simulation="particles";
		type="WaterEffectMen";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=2;
	};
};
class ImpactEffectsAir
{
	class WaterWave1
	{
		simulation="particles";
		type="WaterWaveAir";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class WaterSplash1
	{
		simulation="particles";
		type="WaterSplashAir";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class ImpactEffectsWater
{
	class ImpactEffectsWater01
	{
		simulation="particles";
		type="ImpactEffectsWater1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=2;
	};
	class ImpactEffectsWater01Med
	{
		simulation="particles";
		type="ImpactEffectsWater1Med";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=1;
	};
	class ImpactEffectsWater01Low
	{
		simulation="particles";
		type="ImpactEffectsWater1Med";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=0;
	};
	class ImpactEffectsWater02
	{
		simulation="particles";
		type="ImpactEffectsWater2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=2;
	};
	class ImpactEffectsWater02Med
	{
		simulation="particles";
		type="ImpactEffectsWater2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=1;
	};
	class ImpactEffectsWater02Low
	{
		simulation="particles";
		type="ImpactEffectsWater2Med";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=0;
	};
	class ImpactEffectsWater03
	{
		simulation="particles";
		type="ImpactEffectsWater3";
		position[]={0,0.18000001,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=2;
	};
	class ImpactEffectsWater03Med
	{
		simulation="particles";
		type="ImpactEffectsWater3Med";
		position[]={0,0.18000001,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=1;
	};
	class ImpactEffectsWater03Low
	{
		simulation="particles";
		type="ImpactEffectsWater3Med";
		position[]={0,0.18000001,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=0;
	};
	class ImpactEffectsWater04
	{
		simulation="particles";
		type="ImpactEffectsWater4";
		position[]={0,1.2,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=2;
	};
	class ImpactEffectsWater04Med
	{
		simulation="particles";
		type="ImpactEffectsWater4Med";
		position[]={0,1.2,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=1;
	};
};
class ImpactEffectsWaterBig
{
	class ImpactEffectsWater08
	{
		simulation="particles";
		type="ImpactEffectsWater8";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class ImpactEffectsWater09
	{
		simulation="particles";
		type="ImpactEffectsWater9";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
};
class ImpactEffectsWaterRocket
{
	class ImpactEffectsWater08
	{
		simulation="particles";
		type="ImpactEffectsWater8";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
};
class ImpactEffectsWaterHE
{
	class ImpactEffectsWater07
	{
		simulation="particles";
		type="ImpactEffectsWater8";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
};
class ImpactEffectsWaterExplosion
{
	class ImpactEffectsWater06
	{
		simulation="particles";
		type="ImpactEffectsWater8";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class ImpactEffectsWater07
	{
		simulation="particles";
		type="ImpactEffectsWater7";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
};
class ImpactEffectsDeepWaterExplosion
{
};
class ImpactMetal
{
	class SparksLight
	{
		simulation="light";
		type="SparksLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactSparks0
	{
		simulation="particles";
		type="ImpactSparks0";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactSparks2
	{
		simulation="particles";
		type="ImpactSparks2";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactSparks2Med
	{
		simulation="particles";
		type="ImpactSparksMed2";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactSmoke2
	{
		simulation="particles";
		type="ImpactSmoke2";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactSmoke2Med
	{
		simulation="particles";
		type="ImpactSmokeMed2";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactSmoke2Low
	{
		simulation="particles";
		type="ImpactSmokeLow2";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ImpactMetalSabotSmall
{
	class Light1
	{
		simulation="light";
		type="SparksLightSabot";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class ImpactSparks1
	{
		simulation="particles";
		type="ImpactSparksSabot1Small";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ImpactSparks2
	{
		simulation="particles";
		type="ImpactSparksSabot2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ImpactSmoke2
	{
		simulation="particles";
		type="ImpactSmokeSabot2Small";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class ImpactMetalSabotBig
{
	class Light1
	{
		simulation="light";
		type="GrenadeExploLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class SparksLight
	{
		simulation="light";
		type="SparksLightSabot";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class Impact
	{
		simulation="particles";
		type="25mm_Explode_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ImpactSparks1
	{
		simulation="particles";
		type="ImpactSparksSabot1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ImpactSparks2
	{
		simulation="particles";
		type="ImpactSparksSabot2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ImpactSmoke2
	{
		simulation="particles";
		type="ImpactSmokeSabot2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class ImpactEffectsGroundSabot
{
	class Light1
	{
		simulation="light";
		type="GrenadeExploLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class 25mmSmoke1
	{
		simulation="particles";
		type="25mm_Smoke_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mmSmoke2
	{
		simulation="particles";
		type="25mm_Smoke_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mmSmoke3
	{
		simulation="particles";
		type="25mm_Smoke_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_TrailBC4
	{
		simulation="particles";
		type="Smoke_TrailBC4";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_TrailBC8
	{
		simulation="particles";
		type="Smoke_TrailBC8";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 30mm_Sparks
	{
		simulation="particles";
		type="30mmSparks";
		position[]={0,0,0};
		intensity=100;
		interval=1;
		lifeTime=0.2;
	};
	class ImpactDust1
	{
		simulation="particles";
		type="ImpactDustSabot2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ImpactDustWater1
	{
		simulation="particles";
		type="ImpactDustWater2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ImpactConcrete
	{
		simulation="particles";
		type="ImpactConcreteSabot";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ImpactEffectsSmall06
	{
		simulation="particles";
		type="ImpactSandSmokeSabot2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact3
	{
		simulation="particles";
		type="DirtBulletImpact4";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class ImpactEffectsGroundSabotBig
{
	class Light1
	{
		simulation="light";
		type="GrenadeExploLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mmSmoke1
	{
		simulation="particles";
		type="25mm_Smoke_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mmSmoke2
	{
		simulation="particles";
		type="25mm_Smoke_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mmSmoke3
	{
		simulation="particles";
		type="25mm_Smoke_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_TrailBC9
	{
		simulation="particles";
		type="Smoke_TrailBC9";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_TrailBC7
	{
		simulation="particles";
		type="Smoke_TrailBC7";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mm_Explode
	{
		simulation="particles";
		type="25mm_Explode";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 30mm_Sparks
	{
		simulation="particles";
		type="30mmSparks";
		position[]={0,0,0};
		intensity=100;
		interval=1;
		lifeTime=0.2;
	};
	class ImpactDust1
	{
		simulation="particles";
		type="ImpactDustSabot2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ImpactDustWater1
	{
		simulation="particles";
		type="ImpactDustWater2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ImpactConcrete
	{
		simulation="particles";
		type="ImpactConcreteSabot";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ImpactEffectsSmall06
	{
		simulation="particles";
		type="ImpactSandSmokeSabot2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Impact3
	{
		simulation="particles";
		type="DirtBulletImpactBig";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class ImpactConcreteSabot
{
	class Light1
	{
		simulation="light";
		type="GrenadeExploLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_TrailBC6
	{
		simulation="particles";
		type="Smoke_TrailBC6";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mm_Explode
	{
		simulation="particles";
		type="25mm_Explode";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 30mm_Sparks
	{
		simulation="particles";
		type="30mmSparks";
		position[]={0,0,0};
		intensity=100;
		interval=1;
		lifeTime=0.2;
	};
	class ImpactDust
	{
		simulation="particles";
		type="ImpactDustConcreteSabot";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDust2
	{
		simulation="particles";
		type="ImpactDustConcreteSabot2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactSmoke2
	{
		simulation="particles";
		type="ImpactSmokeSabot3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Impact3
	{
		simulation="particles";
		type="ConcreteBulletImpactBig";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class ImpactConcreteSabotSmall
{
	class Light1
	{
		simulation="light";
		type="GrenadeExploLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Smoke_TrailBC5
	{
		simulation="particles";
		type="Smoke_TrailBC5";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mm_Explode
	{
		simulation="particles";
		type="25mm_Explode";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 30mm_Sparks
	{
		simulation="particles";
		type="30mmSparks";
		position[]={0,0,0};
		intensity=100;
		interval=1;
		lifeTime=0.2;
	};
	class ImpactDust
	{
		simulation="particles";
		type="ImpactDustConcreteSabot";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDust2
	{
		simulation="particles";
		type="ImpactDustConcreteSabot2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ImpactGlass
{
	class GlassShard1
	{
		simulation="particles";
		type="GlassShard1";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard1Med
	{
		simulation="particles";
		type="GlassShardMed1";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard1Low
	{
		simulation="particles";
		type="GlassShardLow1";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard2
	{
		simulation="particles";
		type="GlassShard2";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard2Med
	{
		simulation="particles";
		type="GlassShardMed2";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard2Low
	{
		simulation="particles";
		type="GlassShardLow2";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard3
	{
		simulation="particles";
		type="GlassShard3";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard3Med
	{
		simulation="particles";
		type="GlassShardMed3";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard3Low
	{
		simulation="particles";
		type="GlassShardLow3";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard4
	{
		simulation="particles";
		type="GlassShard4";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard4Med
	{
		simulation="particles";
		type="GlassShardMed4";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard4Low
	{
		simulation="particles";
		type="GlassShardLow4";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard5
	{
		simulation="particles";
		type="GlassShard5";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard5Med
	{
		simulation="particles";
		type="GlassShardMed5";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard5Low
	{
		simulation="particles";
		type="GlassShardLow5";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard6
	{
		simulation="particles";
		type="GlassShard6";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard6Med
	{
		simulation="particles";
		type="GlassShardMed6";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard6Low
	{
		simulation="particles";
		type="GlassShardLow6";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard7
	{
		simulation="particles";
		type="GlassShard7";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard7Med
	{
		simulation="particles";
		type="GlassShardMed7";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard7Low
	{
		simulation="particles";
		type="GlassShardLow7";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ImpactGlassThin
{
	class GlassShard1
	{
		simulation="particles";
		type="GlassShard1";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard1Med
	{
		simulation="particles";
		type="GlassShardMed1";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard1Low
	{
		simulation="particles";
		type="GlassShardLow1";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard2
	{
		simulation="particles";
		type="GlassShard2";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard2Med
	{
		simulation="particles";
		type="GlassShardMed2";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard2Low
	{
		simulation="particles";
		type="GlassShardLow2";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard3
	{
		simulation="particles";
		type="GlassShard3";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard3Med
	{
		simulation="particles";
		type="GlassShardMed3";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard3Low
	{
		simulation="particles";
		type="GlassShardLow3";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard4
	{
		simulation="particles";
		type="GlassShard4";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard4Med
	{
		simulation="particles";
		type="GlassShardMed4";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassShard4Low
	{
		simulation="particles";
		type="GlassShardLow4";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassDust
	{
		simulation="particles";
		type="GlassDust";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassDustMed
	{
		simulation="particles";
		type="GlassDustMed";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GlassDustLow
	{
		simulation="particles";
		type="GlassDustLow";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ImpactWood
{
	class WoodChippings1
	{
		simulation="particles";
		type="WoodChippings1";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class WoodChippings1Med
	{
		simulation="particles";
		type="WoodChippingsMed1";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class WoodChippings2
	{
		simulation="particles";
		type="WoodChippings2";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class WoodChippings2Med
	{
		simulation="particles";
		type="WoodChippingsMed2";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class WoodChippings3
	{
		simulation="particles";
		type="WoodChippings3";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class WoodChippings3Med
	{
		simulation="particles";
		type="WoodChippingsMed3";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class WoodChippings4
	{
		simulation="particles";
		type="WoodChippings4";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class WoodChippings4Med
	{
		simulation="particles";
		type="WoodChippingsMed4";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDust
	{
		simulation="particles";
		type="ImpactDustWood";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDustMed
	{
		simulation="particles";
		type="ImpactDustWoodMed";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDustLow
	{
		simulation="particles";
		type="ImpactDustWoodLow";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ImpactPlaster
{
	class ImpactDust1
	{
		simulation="particles";
		type="ImpactDustPlaster";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDust1Med
	{
		simulation="particles";
		type="ImpactDustPlaster";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDust1Low
	{
		simulation="particles";
		type="ImpactDustPlasterLow";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactConcreteWall01
	{
		simulation="particles";
		type="ImpactConcreteWall1";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactConcreteWall02
	{
		simulation="particles";
		type="ImpactConcreteWall2";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactConcreteWall02Med
	{
		simulation="particles";
		type="ImpactConcreteWall2";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactConcreteWall03
	{
		simulation="particles";
		type="ImpactConcreteWall3";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactConcreteWall03Med
	{
		simulation="particles";
		type="ImpactConcreteWall3";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ImpactPlastic
{
	class ImpactDustPlastic1
	{
		simulation="particles";
		type="ImpactDustPlastic";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDustPlasticMed1
	{
		simulation="particles";
		type="ImpactDustPlasticMed";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDustPlasticLow1
	{
		simulation="particles";
		type="ImpactDustPlasticMed";
		position[]={0,0,0};
		qualityLevel=0;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactSmokePlastic1
	{
		simulation="particles";
		type="ImpactSmokePlastic";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=2;
	};
	class ImpactSmokePlasticMed1
	{
		simulation="particles";
		type="ImpactSmokePlasticMed";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=1;
		interval=1;
		lifeTime=2;
	};
};
class ImpactRubber
{
	class ImpactDust
	{
		simulation="particles";
		type="ImpactSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ImpactConcrete
{
	class ImpactDust
	{
		simulation="particles";
		type="ImpactDustConcrete";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ImpactDust2
	{
		simulation="particles";
		type="ImpactDustConcrete2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ImpactLeaves
{
	class LeavesFall
	{
		simulation="particles";
		type="LeavesFall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class LeavesFall2
	{
		simulation="particles";
		type="LeavesFall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class LeavesFall3
	{
		simulation="particles";
		type="LeavesFallMed";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=0;
	};
};
class ImpactLeavesGreen
{
	class LeavesFall
	{
		simulation="particles";
		type="LeavesFallGreen";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class LeavesFall2
	{
		simulation="particles";
		type="LeavesFallGreen";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class LeavesFall3
	{
		simulation="particles";
		type="LeavesFallGreenMed";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=0;
	};
};
class ImpactLeavesDead
{
	class LeavesFall
	{
		simulation="particles";
		type="LeavesFallDead";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class LeavesFall2
	{
		simulation="particles";
		type="LeavesFallDead";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class LeavesFall3
	{
		simulation="particles";
		type="LeavesFallDeadMed";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=0;
	};
};
class ImpactLeavesGreenBig
{
	class LeavesFall
	{
		simulation="particles";
		type="LeavesFallGreenBig";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class LeavesFall2
	{
		simulation="particles";
		type="LeavesFallGreenBig";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class LeavesFall3
	{
		simulation="particles";
		type="LeavesFallGreenBigMed";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=0;
	};
};
class ImpactLeavesPalm
{
	class LeavesFall
	{
		simulation="particles";
		type="LeavesFallPalm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class LeavesFall2
	{
		simulation="particles";
		type="LeavesFallPalm";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class LeavesFall3
	{
		simulation="particles";
		type="LeavesFallPalmMed";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=0;
	};
};
class ImpactLeavesPine
{
	class LeavesFall
	{
		simulation="particles";
		type="LeavesFallPine";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class LeavesFall2
	{
		simulation="particles";
		type="LeavesFallPine";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class LeavesFall3
	{
		simulation="particles";
		type="LeavesFallPineMed";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=0;
	};
};
class ExplosionEffectsWater
{
	class ExplosionEffectsWater
	{
		simulation="particles";
		type="ExplosionEffectsWater";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class CannonFire
{
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class Smoke
	{
		simulation="particles";
		type="CannonSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Flash
	{
		simulation="particles";
		type="CannonFlash";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class HeavyCaliber
{
	class heavyCaliber1
	{
		simulation="particles";
		type="heavyCaliber1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class heavyCaliber2
	{
		simulation="particles";
		type="heavyCaliber2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class RocketBackEffectsNLAW
{
	class RocketBackfire1
	{
		simulation="particles";
		type="RocketBackfireNLAW";
	};
	class RocketBacksmoke1
	{
		simulation="particles";
		type="RocketBacksmokeNLAW";
	};
};
class RocketBackEffectsRPG
{
	class RocketBackfire1
	{
		simulation="particles";
		type="RocketBackfireRPG";
	};
	class RocketBacksmoke2
	{
		simulation="particles";
		type="RocketBacksmokeRPG";
	};
	class RocketFrontsmoke
	{
		simulation="particles";
		type="RocketFrontsmokeRPG";
	};
};
class RocketBackEffectsRPGNT
{
	class RocketBackfire1
	{
		simulation="particles";
		type="RocketBackfireRPGNT";
		intensity=1;
		interval=0.1;
		lifeTime=0.029999999;
	};
	class RocketBacksmoke2
	{
		simulation="particles";
		type="RocketBacksmokeRPGNT";
		intensity=1;
		interval=0.1;
		lifeTime=0.1;
	};
	class RocketFrontsmoke
	{
		simulation="particles";
		type="RocketFrontsmokeRPGNT";
		intensity=1;
		interval=0.1;
		lifeTime=0.2;
	};
};
class RocketBackEffectsStaticRPG
{
	class RocketBackfire1
	{
		simulation="particles";
		type="RocketBackfireStaticRPG";
		enabled="density interpolate [0.98,0.981,-1,1]";
	};
	class RocketBacksmoke2
	{
		simulation="particles";
		type="RocketBacksmokeStaticRPG";
		enabled="density interpolate [0.98,0.981,-1,1]";
	};
	class RocketFrontsmoke
	{
		simulation="particles";
		type="RocketFrontsmokeStaticRPG";
		enabled="density interpolate [0.98,0.981,-1,1]";
	};
};
class SencondaryExplosion
{
	class Light1
	{
		simulation="light";
		type="GrenadeExploLight";
		position[]={0,0,2};
		intensity=0.0099999998;
		interval=1;
		lifeTime=0.2;
	};
	class Exp1
	{
		simulation="particles";
		type="SecondaryExp";
		position[]={0,0,2};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class SecondarySmoke1
	{
		simulation="particles";
		type="SecondarySmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Sparks_ammo_01
	{
		simulation="particles";
		type="Sparks_ammo_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
		smokeGenMinDist=0;
		smokeGenMaxDist=3000;
		smokeSizeCoef=0;
		smokeIntervalCoef=0;
	};
	class Sparks_ammo_02
	{
		simulation="particles";
		type="Sparks_ammo_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		smokeGenMinDist=0;
		smokeGenMaxDist=3000;
		smokeSizeCoef=0;
		smokeIntervalCoef=0;
	};
};
class MineNondirectionalCrater
{
	class MineStones
	{
		simulation="particles";
		type="MineStones";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class CraterSmoke1
	{
		simulation="particles";
		type="CraterSmokeMine";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=6;
	};
	class MineDust1
	{
		simulation="particles";
		type="MineDust1";
	};
	class MineDust2
	{
		simulation="particles";
		type="MineDust2";
		qualityLevel=2;
	};
	class MineDust3
	{
		simulation="particles";
		type="MineDust3";
		qualityLevel=2;
	};
	class MineDust3Med
	{
		simulation="particles";
		type="MineDust3";
		qualityLevel=1;
	};
};
class MineNondirectionalCraterSmall
{
	class MineStones
	{
		simulation="particles";
		type="MineStones1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class CraterSmoke1
	{
		simulation="particles";
		type="CraterSmokeMine";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=6;
	};
	class MineDust1
	{
		simulation="particles";
		type="MineDust1";
	};
	class MineDust2
	{
		simulation="particles";
		type="MineDust2";
		qualityLevel=2;
	};
	class MineDust3
	{
		simulation="particles";
		type="MineDust3";
		qualityLevel=2;
	};
	class MineDust3Med
	{
		simulation="particles";
		type="MineDust3";
		qualityLevel=1;
	};
};
class MineNondirectionalExplosion
{
	class Light1
	{
		simulation="light";
		type="GrenadeExploLight";
		position[]={0,0,0};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
	class GrenadeExp1
	{
		simulation="particles";
		type="MineExp";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class MineSmoke1
	{
		simulation="particles";
		type="MineSmoke1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.60000002;
		qualityLevel=2;
	};
	class MineSmoke1Med
	{
		simulation="particles";
		type="MineSmoke1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.60000002;
		qualityLevel=1;
	};
	class MineSmoke1Low
	{
		simulation="particles";
		type="MineSmokeLow1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.60000002;
		qualityLevel=0;
	};
};
class MineNondirectionalExplosionSmall
{
	class Light1
	{
		simulation="light";
		type="GrenadeExploLight";
		position[]={0,0,0};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
	class GrenadeExp1
	{
		simulation="particles";
		type="GrenadeExp";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class MineSmoke1
	{
		simulation="particles";
		type="MineSmoke2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		qualityLevel=2;
	};
	class MineSmoke2
	{
		simulation="particles";
		type="MineSmoke2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		qualityLevel=1;
	};
	class MineSmoke3
	{
		simulation="particles";
		type="MineSmokeLow2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		qualityLevel=0;
	};
};
class MineUnderwaterExplosion
{
	class Light1
	{
		simulation="light";
		type="MineExploLight";
		position[]={0,0,0};
		intensity=0.1;
		interval=1;
		lifeTime=1;
	};
	class GrenadeExp1
	{
		simulation="particles";
		type="MineExp";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.07;
	};
	class MineWater1
	{
		simulation="particles";
		type="MineUnderwaterWater1";
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class MineWater1M
	{
		simulation="particles";
		type="MineUnderwaterWater1M";
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class MineWater1L
	{
		simulation="particles";
		type="MineUnderwaterWater1M";
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=0;
	};
	class MineWater2
	{
		simulation="particles";
		type="MineUnderwaterWater2";
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class MineWater2M
	{
		simulation="particles";
		type="MineUnderwaterWater2";
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class MineWave
	{
		simulation="particles";
		type="MineWave";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class MineWaveM
	{
		simulation="particles";
		type="MineWaveM";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class MineSmoke1
	{
		simulation="particles";
		type="MineUnderwaterSmoke1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
};
class MineUnderwaterABExplosion
{
	class Light1
	{
		simulation="light";
		type="MineExploLight";
		position[]={0,0,0};
		intensity=0.1;
		interval=1;
		lifeTime=1;
	};
	class GrenadeExp1
	{
		simulation="particles";
		type="MineExp";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.07;
	};
	class MineWater1
	{
		simulation="particles";
		type="MineUnderwaterWaterAB1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class MineWater1M
	{
		simulation="particles";
		type="MineUnderwaterWaterAB1M";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class MineWater1L
	{
		simulation="particles";
		type="MineUnderwaterWaterAB1M";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=0;
	};
	class MineWater2
	{
		simulation="particles";
		type="MineUnderwaterWaterAB2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class MineWave
	{
		simulation="particles";
		type="MineWave";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class MineWaveM
	{
		simulation="particles";
		type="MineWaveM";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class MineSmoke1
	{
		simulation="particles";
		type="MineUnderwaterSmokeAB1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
};
class MineUnderwaterPDMExplosion
{
	class Light1
	{
		simulation="light";
		type="MineExploLight";
		position[]={0,0,0};
		intensity=0.1;
		interval=1;
		lifeTime=1;
	};
	class GrenadeExp1
	{
		simulation="particles";
		type="MineExp";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.07;
	};
	class MineWater1
	{
		simulation="particles";
		type="MineUnderwaterWaterPDM";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class MineWave
	{
		simulation="particles";
		type="MineWaveSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class MineSmoke1
	{
		simulation="particles";
		type="MineUnderwaterSmokeAB1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
};
class WPExplosion
{
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Explosion1
	{
		simulation="particles";
		type="WPCloud";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Trails
	{
		simulation="particles";
		type="WPTrails";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
};
class ExplosionEffects
{
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class Explosion1
	{
		simulation="particles";
		type="ExplosionParticles";
		position[]={0,0,0};
		intensity=3;
		interval=1;
		lifeTime=0.1;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="SmallSmokeFast1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class BasicAmmoExplosion
{
	class Light1
	{
		simulation="light";
		type="ObjectDestructionLight";
		position="";
		intensity=1;
		interval=1;
		lifeTime=3;
	};
	class Explosion
	{
		simulation="particles";
		type="AmmoExplosionParticles";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Smoke1
	{
		simulation="particles";
		type="AmmoSmokeParticles1";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class AmmoBulletEffect
{
	class Light1
	{
		simulation="light";
		type="SmallFlameLight";
		position="";
		intensity=1;
		interval=1;
	};
	class ExpSparks
	{
		simulation="particles";
		type="AmmoExpSparks";
		position="";
		intensity=1;
		interval=1;
	};
	class AmmoLightSmokeParticles
	{
		simulation="particles";
		type="AmmoLightSmokeParticles";
		position="";
		intensity=1;
		interval=1;
	};
};
class MineExplosion
{
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position="explosionPos";
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class Explosion1
	{
		simulation="particles";
		type="MineExplosionParticles";
		position="explosionPos";
		intensity=3;
		interval=1;
		lifeTime=0.25;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="CloudSmallLight";
		position="explosionPos";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class FireSparksSmall1
	{
		simulation="particles";
		type="FireSparksSmall";
		position="explosionPos";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ATMineExplosion
{
	class LightExp
	{
		simulation="light";
		type="ExploLightFast";
		position[]={0,1.5,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Explosion1
	{
		simulation="particles";
		type="ATMineExplosionParticles";
		position[]={0,0,0};
		intensity=3;
		interval=1;
		lifeTime=0.25;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="ATCloudSmallLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
		qualityLevel=2;
	};
	class SmallSmoke1M
	{
		simulation="particles";
		type="ATCloudSmallLightM";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
		qualityLevel=1;
	};
	class SmallSmoke1L
	{
		simulation="particles";
		type="ATCloudSmallLightM";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
		qualityLevel=0;
	};
};
class MineCrater
{
	class MissileCircleDust
	{
		simulation="particles";
		type="MineCircleDust";
		position="explosionPos";
		intensity=1;
		interval=1;
		lifeTime=0.2;
		qualityLevel=2;
	};
	class MissileCircleDustM
	{
		simulation="particles";
		type="MineCircleDust";
		position="explosionPos";
		intensity=1;
		interval=1;
		lifeTime=0.2;
		qualityLevel=1;
	};
	class MineStones1
	{
		simulation="particles";
		type="MineStones1";
		position="explosionPos";
		intensity=1;
		interval=1;
		lifeTime=0.16;
		qualityLevel=2;
	};
};
class ATMineCrater
{
	class MissileCircleDust
	{
		simulation="particles";
		type="MineCircleDust";
		intensity=1;
		interval=1;
		lifeTime=0.2;
		qualityLevel=2;
	};
	class MissileCircleDustM
	{
		simulation="particles";
		type="MineCircleDust";
		intensity=1;
		interval=1;
		lifeTime=0.2;
		qualityLevel=1;
	};
	class MineStones2
	{
		simulation="particles";
		type="MineStones2";
		intensity=1;
		interval=1;
		lifeTime=0.16;
		qualityLevel=2;
	};
};
class BoundingMineExplosion
{
	class LightExp
	{
		simulation="light";
		type="ExploLightFast";
		position[]={0,1.5,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Explosion1
	{
		simulation="particles";
		type="MineExplosionParticles";
		position[]={0,0,0};
		intensity=3;
		interval=1;
		lifeTime=0.25;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="CloudSmallLight1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class FireSparksSmall1
	{
		simulation="particles";
		type="FireSparksSmall1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class BoundingMineCrater
{
	class MissileCircleDust
	{
		simulation="particles";
		type="MineCircleDust";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class MineJumpEffect
{
	class MineJumpEffect
	{
		simulation="particles";
		type="MineJumpEffect";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.012;
	};
};
class DirectionalMineExplosion
{
	class LightExp
	{
		simulation="light";
		type="ExploLightFast";
		position[]={0,1.5,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Explosion1
	{
		simulation="particles";
		type="MineExplosionParticles";
		position[]={0,0,0};
		intensity=3;
		interval=1;
		lifeTime=0.25;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="CloudSmallLight2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class FireSparksSmall1
	{
		simulation="particles";
		type="FireSparksSmall2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class MissileCircleDust
	{
		simulation="particles";
		type="MineCircleDust1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class DirectionalMineExplosionBig
{
	class LightExp
	{
		simulation="light";
		type="ExploLightFast";
		position[]={0,1.5,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Explosion1
	{
		simulation="particles";
		type="MineExplosionParticles";
		position[]={0,0,0};
		intensity=3;
		interval=1;
		lifeTime=0.25;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="CloudSmallLight3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
		qualityLevel=2;
	};
	class SmallSmoke1M
	{
		simulation="particles";
		type="CloudSmallLight3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
		qualityLevel=1;
	};
	class SmallSmoke1L
	{
		simulation="particles";
		type="CloudSmallLight3L";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
		qualityLevel=0;
	};
	class FireSparksSmall1
	{
		simulation="particles";
		type="FireSparksSmall3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
		qualityLevel=2;
	};
	class MissileCircleDust
	{
		simulation="particles";
		type="MineCircleDust2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
		qualityLevel=2;
	};
	class MissileCircleDustM
	{
		simulation="particles";
		type="MineCircleDust2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
		qualityLevel=1;
	};
};
class DirectionalMineCrater
{
};
class HERocketExplosion
{
	class LightExp
	{
		simulation="light";
		type="ExploLightFast";
		position[]={0,0,1};
		intensity=1;
		interval=1;
		lifeTime=0.079999998;
	};
	class LightExp_02
	{
		simulation="light";
		type="ExploLightFast_02";
		position[]={0,0,1};
		intensity=1;
		interval=1;
		lifeTime=0.13;
	};
	class Explosion1
	{
		simulation="particles";
		type="GrenadeExp";
		position[]={0,0,0};
		intensity=3;
		interval=1;
		lifeTime=0;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="CloudBigLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class Hydra_Explode_01
	{
		simulation="particles";
		type="Hydra_Explode_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Hydra_Explode_02
	{
		simulation="particles";
		type="Hydra_Explode_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class 30mmFlashGlow
	{
		simulation="particles";
		type="30mm_Blast_Glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Sparks_med
	{
		simulation="particles";
		type="sparks_med";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Hydra_Smoke_01
	{
		simulation="particles";
		type="Hydra_Smoke_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
	};
};
class HEShellExplosion
{
	class LightExp
	{
		simulation="light";
		type="ExploLightFast";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.15000001;
	};
	class LightExp2
	{
		simulation="light";
		type="ExploLightFast_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class HERound_Explosion_01
	{
		simulation="particles";
		type="HERound_Explosion_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class HERound_Explosion_02
	{
		simulation="particles";
		type="HERound_Explosion_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Sparks_med
	{
		simulation="particles";
		type="sparks_med";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Explosion1
	{
		simulation="particles";
		type="ExplosionParticles";
		position[]={0,0,0};
		intensity=3;
		interval=1;
		lifeTime=0;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="CloudMedDark";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
};
class HEShellCrater
{
	class BattleDust_01
	{
		simulation="particles";
		type="BattleDust_01";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_Trail_TankRound_Emitter
	{
		simulation="particles";
		type="Smoke_Trail_TankRound_Emitter_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_Trail_TankRound_Emitter2
	{
		simulation="particles";
		type="Smoke_Trail_TankRound_Emitter_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_Trail_TankRound_Emitter3
	{
		simulation="particles";
		type="Smoke_Trail_TankRound_Emitter";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_Trail_TankRound_Emitter4
	{
		simulation="particles";
		type="Smoke_Trail_TankRound_Emitter_BaseSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ShellSmokeTrail1
	{
		simulation="particles";
		type="ShellSmokeTrail1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class ShellSmokeTrail2
	{
		simulation="particles";
		type="ShellSmokeTrail2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class ShellSmokeTrail3
	{
		simulation="particles";
		type="ShellSmokeTrail3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class MissileCircleDust
	{
		simulation="particles";
		type="CircleDustMed";
		enabled="distToWater interpolate [0.2,0.21,-1,1]";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class dirtbig
	{
		simulation="particles";
		type="dirtbig";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
		smokeGenMinDist=1;
		smokeGenMaxDist=1200;
		smokeSizeCoef=0;
		smokeIntervalCoef=0;
	};
};
class ArtyShellExplosion
{
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class Explosion1
	{
		simulation="particles";
		type="ExplosionParticles";
		position[]={0,0,5};
		intensity=3;
		interval=1;
		lifeTime=0;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="CloudBigDark";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class 155mm_Explode_01
	{
		simulation="particles";
		type="155mm_Explode_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 155mm_Explode_02
	{
		simulation="particles";
		type="155mm_Explode_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 155mm_Explode_03
	{
		simulation="particles";
		type="155mm_Explode_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Explode_Glow
	{
		simulation="particles";
		type="105mm_Explode_Glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class HelicopterExplosionEffects
{
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class mk82_light
	{
		simulation="light";
		type="mk82_light_source";
		position[]={0,0,5};
		intensity=1;
		interval=1;
		lifeTime=0.40000001;
	};
	class mk82_light_02
	{
		simulation="light";
		type="mk82_light_source_02";
		position[]={0,0,5};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Shards
	{
		simulation="particles";
		type="HeliDestructionShards1";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Shards2
	{
		simulation="particles";
		type="ObjectDestructionShards";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBurn2
	{
		simulation="particles";
		type="ObjectDestructionShardsBurning";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class Shards3
	{
		simulation="particles";
		type="HeliDestructionShards3";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.40000001;
	};
	class VehicleFireball
	{
		simulation="particles";
		type="VehicleExplosionFireBall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class VehicleFireball2
	{
		simulation="particles";
		type="VehicleExplosionFireBall2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class VehicleExplosionSmoke_01
	{
		simulation="particles";
		type="VehicleExplosionSmoke_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class VehicleExplosionSmoke_02
	{
		simulation="particles";
		type="VehicleExplosionSmoke_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Sparks_large
	{
		simulation="particles";
		type="Sparks_large";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Sparks_med
	{
		simulation="particles";
		type="Sparks_med";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Sparks_ammo_01
	{
		simulation="particles";
		type="Sparks_ammo_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class Explosion1
	{
		simulation="particles";
		type="ExplosionParticles";
		position[]={0,0,0};
		intensity=3;
		interval=1;
		lifeTime=0;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="CloudMedDark";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class explosion_glow_01
	{
		simulation="particles";
		type="explosion_glow_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
};
class HelicopterExplosionEffects2
{
	class Shards
	{
		simulation="particles";
		type="HeliDestructionShards2";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class Shards2
	{
		simulation="particles";
		type="ObjectDestructionShards";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class ShardsBurn2
	{
		simulation="particles";
		type="ObjectDestructionShardsBurning";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,0,5};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class Explosion1
	{
		simulation="particles";
		type="VehExplosionParticles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class VehicleFireball
	{
		simulation="particles";
		type="VehicleExplosionFireBall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class VehicleFireball2
	{
		simulation="particles";
		type="VehicleExplosionFireBall2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class VehicleExplosionSmoke_01
	{
		simulation="particles";
		type="VehicleExplosionSmoke_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class VehicleExplosionSmoke_02
	{
		simulation="particles";
		type="VehicleExplosionSmoke_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class Explosion2
	{
		simulation="particles";
		type="FireBallBright";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class Smoke1
	{
		simulation="particles";
		type="VehExpSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=0;
		lifeTime=0;
	};
	class explosion_glow_01
	{
		simulation="particles";
		type="explosion_glow_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
};
class ExplosionSparksLight
{
	class Light1
	{
		simulation="light";
		type="SmallFlameLight";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=10;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Fireball_Glow
{
	class Light1
	{
		simulation="light";
		type="mk82_light_source";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class SmokeTrail_SmokeCS
{
	class Trail
	{
		simulation="particles";
		type="Blastcore_CS";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=1;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class CannonMuzzleFlash
{
	class Link
	{
		simulation="particles";
		type="CannonFired2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=5;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Link2
	{
		simulation="particles";
		type="CannonFired3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=5;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class SmokeTrail_Blastcore1
{
	class Trail
	{
		simulation="particles";
		type="Blastcore_smoke_Bomb";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=2;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail2
	{
		simulation="particles";
		type="Blastcore_smoke_Bomb2";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=2;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail3
	{
		simulation="particles";
		type="Blastcore_smoke_Bomb3";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=2;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trai4
	{
		simulation="particles";
		type="Blastcore_smoke_Bomb_dark";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=2;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail5
	{
		simulation="particles";
		type="Blastcore_smoke_Bomb2_dark";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=2;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail6
	{
		simulation="particles";
		type="Blastcore_smoke_Bomb3_dark";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=2;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class SmokeTrail_Blastcore3
{
	class Trail
	{
		simulation="particles";
		type="Blastcore_smoke_Bomb4";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail2
	{
		simulation="particles";
		type="Blastcore_smoke_Bomb5";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail3
	{
		simulation="particles";
		type="Blastcore_smoke_Bomb6";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail4
	{
		simulation="particles";
		type="Blastcore_smoke_Bomb4_dark";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail5
	{
		simulation="particles";
		type="Blastcore_smoke_Bomb5_dark";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail6
	{
		simulation="particles";
		type="Blastcore_smoke_Bomb6_dark";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Blastcore_Vehicle_Explosion_Emit
{
	class Trail
	{
		simulation="particles";
		type="Vehicle_Explosion_01";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail2
	{
		simulation="particles";
		type="Vehicle_Explosion_Smoke1";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail3
	{
		simulation="particles";
		type="Vehicle_Explosion_Smoke2";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Debris
	{
		simulation="particles";
		type="Vehicle_Explosion_Debris";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=2;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Blastcore_Vehicle_Explosion_Sparks
{
	class Trail
	{
		simulation="particles";
		type="Vehicle_Explosion_Sparks_Trail";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		smokeGenMinDist=800;
		smokeGenMaxDist=2200;
		smokeSizeCoef=0.5;
		smokeIntervalCoef=4;
		numFullSizeParticles=90;
	};
};
class SmokeTrail_Blastcore2
{
	class Trail
	{
		simulation="particles";
		type="Blastcore_smoke_Arty";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail2
	{
		simulation="particles";
		type="Blastcore_smoke_Arty2";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Smoke_Trail_TankRound_EmitterLink_Small
{
	class Link
	{
		simulation="particles";
		type="Blastcore_Smoke_TankRound";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Smoke_Trail_TankRound_EmitterLink_BaseSmoke
{
	class Link
	{
		simulation="particles";
		type="Blastcore_BaseSmoke_TankRound";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Link2
	{
		simulation="particles";
		type="Blastcore_BaseSmoke_TankRound2";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Smoke_Trail_TankRound_EmitterLink
{
	class Link
	{
		simulation="particles";
		type="Blastcore_Smoke_TankRound_01";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Blastcore_Smoke_TankRound_01_Link
{
	class Link
	{
		simulation="particles";
		type="Blastcore_Smoke_TankRound_02";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Link2
	{
		simulation="particles";
		type="Blastcore_Smoke_TankRound_03";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Smoke_Trail_TankRound_EmitterLink_02
{
	class Link
	{
		simulation="particles";
		type="Blastcore_Smoke_Trail_TankRound_01";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Blastcore_TankRound_SmokeTrail
{
	class Link
	{
		simulation="particles";
		type="Blastcore_Smoke_Trail_TankRound_02";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Link2
	{
		simulation="particles";
		type="Blastcore_Smoke_Trail_TankRound_03";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Smoke_Trail_TankRoundConcrete_EmitterLink
{
	class Link
	{
		simulation="particles";
		type="Blastcore_Smoke_TankRoundConcrete_01";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Blastcore_Smoke_TankRoundConcrete_01_Link
{
	class Link
	{
		simulation="particles";
		type="Blastcore_Smoke_TankRoundConcrete_02";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Link2
	{
		simulation="particles";
		type="Blastcore_Smoke_TankRoundConcrete_03";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Smoke_Trail_TankRoundConcrete_EmitterLink_02
{
	class Link
	{
		simulation="particles";
		type="Blastcore_Smoke_Trail_TankRoundConcrete_01";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Blastcore_TankRoundConcrete_SmokeTrail
{
	class Link
	{
		simulation="particles";
		type="Blastcore_Smoke_Trail_TankRoundConcrete_02";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Link2
	{
		simulation="particles";
		type="Blastcore_Smoke_Trail_TankRoundConcrete_03";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class SmokeTrail_BlastcoreBulletRound_Ground
{
	class Trail2
	{
		simulation="particles";
		type="Blastcore_smoke_BulletRound2_Ground";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class SmokeTrail_BlastcoreBulletRound_Ground2
{
	class Trail2
	{
		simulation="particles";
		type="Blastcore_smoke_BulletRound2_Ground2";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class SmokeTrail_BlastcoreHeavyBulletRound_Ground
{
	class Trail2
	{
		simulation="particles";
		type="Blastcore_smoke_BulletRound2_Ground";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class SmokeTrail_BlastcoreHeavyBulletRound_Ground2
{
	class Trail2
	{
		simulation="particles";
		type="Blastcore_smoke_HeavyBulletRound2_Ground2";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class bullet_Concrete
{
	class Trail1
	{
		simulation="particles";
		type="ConcreteBulletImpact1";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail2
	{
		simulation="particles";
		type="ConcreteBulletImpact2";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Smoke_Trail_Rocket_EmitterLink
{
	class Link
	{
		simulation="particles";
		type="Blastcore_Smoke_Rocket_01";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Blastcore_Smoke_Rocket_01_Link
{
	class Link
	{
		simulation="particles";
		type="Blastcore_Smoke_Rocket_02";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Link2
	{
		simulation="particles";
		type="Blastcore_Smoke_Rocket_03";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Smoke_Trail_Rocket_EmitterLink_02
{
	class Link
	{
		simulation="particles";
		type="Blastcore_Smoke_Trail_Rocket_01";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Blastcore_Rocket_SmokeTrail
{
	class Link
	{
		simulation="particles";
		type="Blastcore_Smoke_Trail_Rocket_02";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Link2
	{
		simulation="particles";
		type="Blastcore_Smoke_Trail_Rocket_03";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Blastcore_Artillery_Explosion_EmitterLink
{
	class Link
	{
		simulation="particles";
		type="Blastcore_Artillery_Explosion";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Blastcore_Artillery_ExplosionSmoke_EmitterLink
{
	class Link
	{
		simulation="particles";
		type="Blastcore_Artillery_ExplosionSmoke";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Smoke_Trail_Artillery_EmitterLink
{
	class Link
	{
		simulation="particles";
		type="Blastcore_Smoke_Artillery_01";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Blastcore_Smoke_Artillery_01_Link
{
	class Link
	{
		simulation="particles";
		type="Blastcore_Smoke_Artillery_02";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Link2
	{
		simulation="particles";
		type="Blastcore_Smoke_Artillery_03";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Smoke_Trail_Artillery_EmitterLink_02
{
	class Link
	{
		simulation="particles";
		type="Blastcore_Smoke_Trail_Artillery_01";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Blastcore_Artillery_SmokeTrail
{
	class Link
	{
		simulation="particles";
		type="Blastcore_Smoke_Trail_Artillery_02";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Link2
	{
		simulation="particles";
		type="Blastcore_Smoke_Trail_Artillery_03";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Blastcore_Shockwave_Large_Dust
{
	class Link
	{
		simulation="particles";
		type="Blastcore_Shockwave_Dust_01";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Blastcore_Blood_01
{
	class Link
	{
		simulation="particles";
		type="BlastcoreBlood_Impact_01";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Blastcore_Blood_02
{
	class Link
	{
		simulation="particles";
		type="BlastcoreBlood_Impact_02";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class AA_Explode_Smoke
{
	class Trail
	{
		simulation="particles";
		type="AA_ExplodeSmokeTrail";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class DirtTrail_Blastcore1
{
	class Trail
	{
		simulation="particles";
		type="Blastcore_dirt_01";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class DirtTrail_Blastcore2
{
	class Trail
	{
		simulation="particles";
		type="Blastcore_dirt_02";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class RockBackfireLight
{
	class Light1
	{
		simulation="light";
		type="RPGFireLight";
		position[]={0,0,5};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class CMeasuresFlareLight
{
	class Light1
	{
		simulation="light";
		type="CMeasuresFlareLightSource";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class ExplosionShardsFire
{
	class Light1
	{
		simulation="light";
		type="SmallFlameLight";
		intensity=1;
		interval=1;
		position[]={0,0.050000001,0};
		lifeTime=50;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Fire
	{
		simulation="particles";
		type="ExpSparksFire";
		position[]={0,0.1,0};
		intensity=1;
		interval=1;
		lifeTime=50;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Smoke
	{
		simulation="particles";
		type="ExpSparksSmoke";
		position[]={0,0.1,0};
		intensity=1;
		interval=1;
		lifeTime=50;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Flamelight
{
	class Light1
	{
		simulation="light";
		type="FlameLight1";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=1;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Flamelight2
{
	class Light1
	{
		simulation="light";
		type="FlameLight2";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=1;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class VehicleExplosionEffectsBig
{
	class ExpSparksBig
	{
		simulation="particles";
		type="ExpSparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class explosion_glow_01
	{
		simulation="particles";
		type="explosion_glow_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class ShardsBig
	{
		simulation="particles";
		type="ObjectDestructionShards";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class ShardsBig1
	{
		simulation="particles";
		type="ObjectDestructionShards1";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class ShardsBig2
	{
		simulation="particles";
		type="ObjectDestructionShards2";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class ShardsBig3
	{
		simulation="particles";
		type="ObjectDestructionShards3";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class ShardsBigBurn
	{
		simulation="particles";
		type="ObjectDestructionShardsBurning";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class ShardsBigBurn1
	{
		simulation="particles";
		type="ObjectDestructionShardsBurning1";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class ShardsBigBurn2
	{
		simulation="particles";
		type="ObjectDestructionShardsBurning2";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class ShardsBigBurn3
	{
		simulation="particles";
		type="ObjectDestructionShardsBurning3";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class LightExpBig
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=1;
		interval=1;
		lifeTime=0.80000001;
	};
	class mk82_light
	{
		simulation="light";
		type="mk82_light_source";
		position[]={0,0,5};
		intensity=1;
		interval=1;
		lifeTime=0.40000001;
	};
	class mk82_light_02
	{
		simulation="light";
		type="mk82_light_source_02";
		position[]={0,0,5};
		intensity=1;
		interval=1;
		lifeTime=1.2;
	};
	class Explosion1Big
	{
		simulation="particles";
		type="VehExplosionParticles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class Explosion2Big
	{
		simulation="particles";
		type="FireBallBright";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class Smoke1Big
	{
		simulation="particles";
		type="VehExpSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class SmallSmoke1Big
	{
		simulation="particles";
		type="VehExpSmoke2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class Shards
	{
		simulation="particles";
		type="ObjectDestructionShards";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class ShardsStatic
	{
		simulation="particles";
		type="ObjectDestructionShardsStatic";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.40000001;
	};
	class ShardsStatic2
	{
		simulation="particles";
		type="ObjectDestructionShardsStatic";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsStatic3
	{
		simulation="particles";
		type="ObjectDestructionShardsStaticSmoking";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class VehicleFireball
	{
		simulation="particles";
		type="VehicleExplosionFireBall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class VehicleFireball2
	{
		simulation="particles";
		type="VehicleExplosionFireBall2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class VehicleFireball3
	{
		simulation="particles";
		type="VehicleExplosionFireBall3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class VehicleExplosionSmoke_01
	{
		simulation="particles";
		type="VehicleExplosionSmoke_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class VehicleExplosionSmoke_02
	{
		simulation="particles";
		type="VehicleExplosionSmoke_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class Explosion1
	{
		simulation="particles";
		type="VehExplosionParticles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class Explosion2
	{
		simulation="particles";
		type="FireBallBright";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class Hellfire_Blast_Glow
	{
		simulation="particles";
		type="Hellfire_Blast_Glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class Sparks_med
	{
		simulation="particles";
		type="Sparks_med";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Vehicle_Explosion_Sparks
	{
		simulation="particles";
		type="Vehicle_Explosion_Sparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Sparks_ammo_01
	{
		simulation="particles";
		type="Sparks_ammo_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class Smoke1
	{
		simulation="particles";
		type="VehExpSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="VehExpSmoke2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class MainExplosion
	{
		simulation="particles";
		type="Vehicle_Explosion";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
};
class VehicleExplosionEffects
{
	class ExpSparks
	{
		simulation="particles";
		type="ExpSparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class explosion_glow_01
	{
		simulation="particles";
		type="explosion_glow_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Shards
	{
		simulation="particles";
		type="ObjectDestructionShardsSmall";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class Shards1
	{
		simulation="particles";
		type="ObjectDestructionShardsSmall1";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class Shards2
	{
		simulation="particles";
		type="ObjectDestructionShardsSmall2";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class Shards3
	{
		simulation="particles";
		type="ObjectDestructionShardsSmall3";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class ShardsBurn
	{
		simulation="particles";
		type="ObjectDestructionShardsBurningSmall";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class ShardsBurn1
	{
		simulation="particles";
		type="ObjectDestructionShardsBurningSmall1";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class ShardsBurn2
	{
		simulation="particles";
		type="ObjectDestructionShardsBurningSmall2";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class ShardsBurn3
	{
		simulation="particles";
		type="ObjectDestructionShardsBurningSmall3";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class Shards2_0
	{
		simulation="particles";
		type="ObjectDestructionShards";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class Shards2_1
	{
		simulation="particles";
		type="ObjectDestructionShards1";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class Shards2_2
	{
		simulation="particles";
		type="ObjectDestructionShards2";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class Shards2_3
	{
		simulation="particles";
		type="ObjectDestructionShards3";
		position="";
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,0,5};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class mk82_light
	{
		simulation="light";
		type="mk82_light_source";
		position[]={0,0,5};
		intensity=1;
		interval=1;
		lifeTime=0.40000001;
	};
	class Explosion1
	{
		simulation="particles";
		type="VehExplosionParticlesSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class Hellfire_Blast_Glow
	{
		simulation="particles";
		type="Hellfire_Blast_Glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class Explosion2
	{
		simulation="particles";
		type="FireBallBrightSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class Smoke1
	{
		simulation="particles";
		type="VehExpSmokeSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="VehExpSmoke2Small";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class VehicleFireball
	{
		simulation="particles";
		type="VehicleExplosionFireBall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class VehicleFireball2
	{
		simulation="particles";
		type="VehicleExplosionFireBall2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class VehicleFireball3
	{
		simulation="particles";
		type="VehicleExplosionFireBall3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class VehicleExplosionSmoke_01
	{
		simulation="particles";
		type="VehicleExplosionSmoke_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class VehicleExplosionSmoke_02
	{
		simulation="particles";
		type="VehicleExplosionSmoke_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class Sparks_med
	{
		simulation="particles";
		type="Sparks_med";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class RocketExplosion
{
	class LightExp
	{
		simulation="light";
		type="ExploLightFast";
		position[]={0,0,1};
		intensity=1;
		interval=1;
		lifeTime=0.079999998;
	};
	class LightExp_02
	{
		simulation="light";
		type="ExploLightFast_02";
		position[]={0,0,1};
		intensity=1;
		interval=1;
		lifeTime=0.13;
	};
	class Hydra_Explode_01
	{
		simulation="particles";
		type="Hydra_Explode_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Hydra_Explode_02
	{
		simulation="particles";
		type="Hydra_Explode_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class 30mmFlashGlow
	{
		simulation="particles";
		type="30mm_Blast_Glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Sparks_med
	{
		simulation="particles";
		type="sparks_med";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Hydra_Smoke_01
	{
		simulation="particles";
		type="Hydra_Smoke_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
	};
	class GrenadeExp1
	{
		simulation="particles";
		type="GrenadeExp1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="SmallSmokeFast1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
};
class Demo_Charge_Explode
{
	class Light1
	{
		simulation="light";
		type="ExploLightFast";
		position[]={0,0,1};
		intensity=1;
		interval=1;
		lifeTime=0.079999998;
	};
	class Demo_Charge_Explosion_Emit
	{
		simulation="particles";
		type="Demo_Charge_Explosion_Emit";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class M136_Explode_01
	{
		simulation="particles";
		type="M136_Explode_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class M136_Explode_02
	{
		simulation="particles";
		type="M136_Explode_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class M136_Explode_03
	{
		simulation="particles";
		type="M136_Explode_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class 30mmFlashGlow
	{
		simulation="particles";
		type="30mm_Blast_Glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Sparks_med
	{
		simulation="particles";
		type="sparks_med";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class 25mmSmoke1
	{
		simulation="particles";
		type="25mm_Smoke_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mmSmoke2
	{
		simulation="particles";
		type="25mm_Smoke_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mmSmoke3
	{
		simulation="particles";
		type="25mm_Smoke_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class GrenadeSmoke1
	{
		simulation="particles";
		type="GrenadeSmoke1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class BattleDust_01
	{
		simulation="particles";
		type="BattleDust_01";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class Demo_Charge_Smoke
{
	class AA_SmokeHit_01
	{
		simulation="particles";
		type="AA_SmokeHit_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Hellfire_Smoke_Trail_Emit_01
	{
		simulation="particles";
		type="Hellfire_Smoke_Trail_Emit_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class AA_SmokeHit_02
	{
		simulation="particles";
		type="AA_SmokeHit_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class M136_Explode
{
	class Light1
	{
		simulation="light";
		type="ExploLightFast";
		position[]={0,0,5};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class M136_Explode_01
	{
		simulation="particles";
		type="M136_Explode_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class M136_Explode_02
	{
		simulation="particles";
		type="M136_Explode_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class M136_Explode_03
	{
		simulation="particles";
		type="M136_Explode_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class M136_Smoke_04
	{
		simulation="particles";
		type="M136_Smoke_04";
		position[]={0,1,0};
		intensity=1;
		interval=1;
		lifeTime=2.5;
	};
	class M136_Smoke_05
	{
		simulation="particles";
		type="M136_Smoke_05";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class 30mmFlashGlow
	{
		simulation="particles";
		type="30mm_Blast_Glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Sparks_med
	{
		simulation="particles";
		type="sparks_med";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class 25mmSmoke1
	{
		simulation="particles";
		type="25mm_Smoke_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mmSmoke2
	{
		simulation="particles";
		type="25mm_Smoke_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mmSmoke3
	{
		simulation="particles";
		type="25mm_Smoke_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class GrenadeSmoke1
	{
		simulation="particles";
		type="GrenadeSmoke1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class BattleDust_01
	{
		simulation="particles";
		type="BattleDust_01";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class M136_Smoke
{
	class M136_Smoke_01
	{
		simulation="particles";
		type="M136_Smoke_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1.3;
	};
	class M136_Smoke_02
	{
		simulation="particles";
		type="M136_Smoke_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class M136_Smoke_03
	{
		simulation="particles";
		type="M136_Smoke_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class RocketDust
	{
		simulation="particles";
		type="ExplosionDustSmallRPG";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1.3;
	};
};
class 40mm_HE_Explode
{
	class Light1
	{
		simulation="light";
		type="GrenadeExploLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
	};
	class 30mmFlash
	{
		simulation="particles";
		type="30mmExplode";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class 25mmSmoke1
	{
		simulation="particles";
		type="25mm_Smoke_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mmSmoke2
	{
		simulation="particles";
		type="25mm_Smoke_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 30mmSparks
	{
		simulation="particles";
		type="30mmSparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.15000001;
	};
	class 30mmFlashGlow
	{
		simulation="particles";
		type="30mm_Blast_Glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class 40mm_Smoke1
	{
		simulation="particles";
		type="40mm_Smoke1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
	};
	class ExploAmmoSmoke
	{
		simulation="particles";
		type="ExploAmmoSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.40000001;
	};
	class ExploAmmoSmoke2
	{
		simulation="particles";
		type="ExploAmmoSmoke_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.40000001;
	};
	class RocketDust
	{
		simulation="particles";
		type="ExplosionDustSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Dirt
	{
		simulation="particles";
		type="Dirtsmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
	};
};
class GrenadeExplosion
{
	class Light1
	{
		simulation="light";
		type="GrenadeExploLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class debris_small
	{
		simulation="particles";
		type="debris_grenade";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class GrenadeExp1
	{
		simulation="particles";
		type="GrenadeExp";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class SparkSmallFast
	{
		simulation="particles";
		type="30mmsparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Sparks_small
	{
		simulation="particles";
		type="Sparks_small";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class ExploAmmoSmoke
	{
		simulation="particles";
		type="ExploAmmoSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class GrenadeSmoke1
	{
		simulation="particles";
		type="GrenadeSmoke1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class RocketDust
	{
		simulation="particles";
		type="ExplosionDustSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class 80mm_Explode
{
	class LightExp
	{
		simulation="light";
		type="ExploLightFast";
		position[]={0,0,1};
		intensity=1;
		interval=1;
		lifeTime=0.079999998;
	};
	class LightExp_02
	{
		simulation="light";
		type="ExploLightFast_02";
		position[]={0,0,1};
		intensity=1;
		interval=1;
		lifeTime=0.13;
	};
	class Hydra_Explode_01
	{
		simulation="particles";
		type="Hydra_Explode_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Hydra_Explode_02
	{
		simulation="particles";
		type="Hydra_Explode_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class 30mmFlashGlow
	{
		simulation="particles";
		type="30mm_Blast_Glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Sparks_med
	{
		simulation="particles";
		type="sparks_med";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Hydra_Smoke_01
	{
		simulation="particles";
		type="Hydra_Smoke_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
	};
};
class MortarExplosion
{
	class Light1
	{
		simulation="light";
		type="ExploLightFast";
		position[]={0,0,5};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class MortarShell_Explode_01
	{
		simulation="particles";
		type="MortarShell_Explode_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class MortarShell_Explode_02
	{
		simulation="particles";
		type="MortarShell_Explode_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class MortarShell_Explode_03
	{
		simulation="particles";
		type="MortarShell_Explode_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class MortarShell_Smoke_01
	{
		simulation="particles";
		type="MortarShell_Smoke_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 30mmFlashGlow
	{
		simulation="particles";
		type="30mm_Blast_Glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class RocketDust
	{
		simulation="particles";
		type="ExplosionDustSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
};
class 155mm_Explode
{
	class LightExp
	{
		simulation="light";
		type="ExploLightFastBig";
		position[]={0,0,5};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class Blastcore_Artillery_Explosion_Emitter
	{
		simulation="particles";
		type="Blastcore_Artillery_Explosion_Emitter";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Sparks_Med
	{
		simulation="particles";
		type="Sparks_med";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
};
class MGunSmoke
{
	class MGunSmoke
	{
		simulation="particles";
		type="MGunSmoke1";
	};
};
class ExhaustsEffect
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmoke1";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeRefract";
	};
	class ExhaustsEffectWater01
	{
		simulation="particles";
		type="ExhaustSmokeWater1";
		qualityLevel=2;
	};
	class ExhaustsEffectWater01Med
	{
		simulation="particles";
		type="ExhaustSmokeWater1";
		qualityLevel=1;
	};
	class ExhaustsEffectWater02
	{
		simulation="particles";
		type="ExhaustSmokeWater2";
		qualityLevel=2;
	};
	class ExhaustsEffectWater02Med
	{
		simulation="particles";
		type="ExhaustSmokeWater2";
		qualityLevel=1;
	};
};
class ExhaustEffectOffroad
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmokeOffroad";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeRefractOffroad";
	};
};
class ExhaustEffectStrider
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmoke1Med";
	};
	class ExhaustsEffect02
	{
		simulation="particles";
		type="ExhaustSmoke2Med";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeRefractMed";
	};
};
class ExhaustsEffectFBoat
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmokeBoat1";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeRefract";
	};
};
class ExhaustsEffectBig
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmokeBig1";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeBigRefract";
	};
	class ExhaustsEffectWater01
	{
		simulation="particles";
		type="ExhaustSmokeBigWater1";
		qualityLevel=2;
	};
	class ExhaustsEffectWater01Med
	{
		simulation="particles";
		type="ExhaustSmokeBigWater1";
		qualityLevel=1;
	};
	class ExhaustsEffectWater02
	{
		simulation="particles";
		type="ExhaustSmokeBigWater2";
		qualityLevel=2;
	};
	class ExhaustsEffectWater02Med
	{
		simulation="particles";
		type="ExhaustSmokeBigWater2";
		qualityLevel=1;
	};
};
class ExhaustsEffectAMV
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmokeAMV";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeHEMTTRefract";
	};
};
class ExhaustEffectTractor
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmokeTractor";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeRefract";
	};
};
class ExhaustEffectHEMTT
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmokeHEMTT";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeHEMTTRefract";
	};
};
class ExhaustEffectHTruck
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmokeHTruck";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeHEMTTRefract";
	};
};
class ExhaustEffectIfrit
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmokeIfrit";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeHEMTTRefract";
	};
};
class ExhaustEffectHeli
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmoke1Heli";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeRefractHeli";
	};
};
class ExhaustsEffectHeliMed
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmoke1HeliBig";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeRefractHeliMed";
	};
};
class ExhaustsEffectHeliBig
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmoke1HeliBig";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeRefractHeliBig";
	};
};
class ExhaustsEffectPlane
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmoke1Plane";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeRefractPlane";
	};
};
class ExhaustsEffectPlaneBig
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="ExhaustSmoke1PlaneBig";
	};
	class Fire01
	{
		simulation="particles";
		type="ExhaustFirePlaneBig";
		enabled="randomValue - 0.7";
	};
};
class ExhaustEffectOnWater
{
	class ExhaustsEffectOnWater01
	{
		simulation="particles";
		type="ExhaustSmokeOnWater";
		lifetime=0.1;
	};
};
class ExhaustEffectBigOnWater
{
	class ExhaustsEffectBigOnWater01
	{
		simulation="particles";
		type="ExhaustSmokeBigOnWater";
		lifetime=0.1;
	};
};
class LDustEffects
{
	class LeftDust1
	{
		simulation="particles";
		type="LeftDust1";
		qualityLevel=2;
	};
	class LeftDust1Med
	{
		simulation="particles";
		type="LeftDust1Med";
		qualityLevel=1;
	};
	class LeftDust1Low
	{
		simulation="particles";
		type="LeftDust1Low";
		qualityLevel=0;
	};
	class LeftDustLong
	{
		simulation="particles";
		type="LeftDustLong";
		qualityLevel=2;
	};
	class LeftDustLongMed
	{
		simulation="particles";
		type="LeftDustLongMed";
		qualityLevel=1;
	};
	class LeftDustWater1
	{
		simulation="particles";
		type="LeftDustWater1";
		qualityLevel=2;
	};
	class LeftDustWater1Med
	{
		simulation="particles";
		type="LeftDustWater1Med";
		qualityLevel=1;
	};
	class LeftDustWater1Low
	{
		simulation="particles";
		type="LeftDustWater1Low";
		qualityLevel=0;
	};
	class LeftVehicleWater1
	{
		simulation="particles";
		type="LeftVehicleWater1";
		qualityLevel=2;
	};
	class LeftVehicleWaterMed1
	{
		simulation="particles";
		type="LeftVehicleWater1";
		qualityLevel=1;
	};
	class LVehicleWaterTrack1
	{
		simulation="particles";
		type="LVehicleWaterTrack";
		qualityLevel=2;
	};
	class LVehicleWaterTrackMed1
	{
		simulation="particles";
		type="LVehicleWaterTrackMed";
		qualityLevel=1;
	};
	class LVehicleWaterTrackLow1
	{
		simulation="particles";
		type="LVehicleWaterTrackLow";
		qualityLevel=0;
	};
	class LVehicleWaterTrackFront1
	{
		simulation="particles";
		type="LVehicleWaterTrackFront";
		qualityLevel=2;
	};
};
class RDustEffects
{
	class RightDust1
	{
		simulation="particles";
		type="RightDust1";
		qualityLevel=2;
	};
	class RightDust1Med
	{
		simulation="particles";
		type="RightDust1Med";
		qualityLevel=1;
	};
	class RightDust1Low
	{
		simulation="particles";
		type="RightDust1Low";
		qualityLevel=0;
	};
	class RightDustLong
	{
		simulation="particles";
		type="RightDustLong";
		qualityLevel=2;
	};
	class RightDustLongMed
	{
		simulation="particles";
		type="RightDustLongMed";
		qualityLevel=1;
	};
	class RightDustWater1
	{
		simulation="particles";
		type="RightDustWater1";
		qualityLevel=2;
	};
	class RightDustWater1Med
	{
		simulation="particles";
		type="RightDustWater1Med";
		qualityLevel=1;
	};
	class RightDustWater1Low
	{
		simulation="particles";
		type="RightDustWater1Low";
		qualityLevel=0;
	};
	class RightVehicleWater1
	{
		simulation="particles";
		type="RightVehicleWater1";
		qualityLevel=2;
	};
	class RightVehicleWaterMed1
	{
		simulation="particles";
		type="RightVehicleWater1";
		qualityLevel=1;
	};
	class RVehicleWaterTrack1
	{
		simulation="particles";
		type="RVehicleWaterTrack";
		qualityLevel=2;
	};
	class RVehicleWaterTrackMed1
	{
		simulation="particles";
		type="RVehicleWaterTrackMed";
		qualityLevel=1;
	};
	class RVehicleWaterTrackLow1
	{
		simulation="particles";
		type="RVehicleWaterTrackLow";
		qualityLevel=0;
	};
	class RVehicleWaterTrackFront1
	{
		simulation="particles";
		type="RVehicleWaterTrackFront";
		qualityLevel=2;
	};
};
class DustEffectBottom
{
	class DustEffectBottom1
	{
		simulation="particles";
		type="DustEffectBottom1";
	};
};
class RDustEffectsMan
{
	class RightDust1
	{
		simulation="particles";
		type="RightDustMan";
		lifetime=0.1;
		qualityLevel=2;
	};
	class RightDustMed
	{
		simulation="particles";
		type="RightDustManMed";
		lifetime=0.1;
		qualityLevel=1;
	};
	class RightDustWater1
	{
		simulation="particles";
		type="DustWaterMan";
		lifetime=0.30000001;
	};
};
class LSandEffects
{
	class LSand1
	{
		simulation="particles";
		type="LeftSand";
		qualityLevel=2;
	};
	class LSand1Med
	{
		simulation="particles";
		type="LeftSandMed";
		qualityLevel=1;
	};
};
class RSandEffects
{
	class RSand1
	{
		simulation="particles";
		type="RightSand";
		qualityLevel=2;
	};
	class RSand1Med
	{
		simulation="particles";
		type="RightSandMed";
		qualityLevel=1;
	};
};
class LSandEffectsBig
{
	class LSandBig1
	{
		simulation="particles";
		type="LeftSandBig";
	};
};
class RSandEffectsBig
{
	class RSandBig1
	{
		simulation="particles";
		type="RightSandBig";
	};
};
class LDirtEffects
{
	class LDirt1
	{
		simulation="particles";
		type="LeftDirt";
		qualityLevel=2;
	};
	class LDirt1Med
	{
		simulation="particles";
		type="LeftDirt";
		qualityLevel=1;
	};
};
class RDirtEffects
{
	class RDirt1
	{
		simulation="particles";
		type="RightDirt";
		qualityLevel=2;
	};
	class RDirt1Med
	{
		simulation="particles";
		type="RightDirt";
		qualityLevel=1;
	};
};
class LDirtEffectsBig
{
	class LDirt1
	{
		simulation="particles";
		type="LeftDirtBig";
		qualityLevel=2;
	};
	class LDirt1Med
	{
		simulation="particles";
		type="LeftDirtBig";
		qualityLevel=1;
	};
};
class RDirtEffectsBig
{
	class RDirt1
	{
		simulation="particles";
		type="RightDirtBig";
		qualityLevel=2;
	};
	class RDirt1Med
	{
		simulation="particles";
		type="RightDirtBig";
		qualityLevel=1;
	};
};
class LGrassEffects
{
	class LGrass1
	{
		simulation="particles";
		type="LeftGrass";
		qualityLevel=2;
	};
	class LGrass1Med
	{
		simulation="particles";
		type="LeftGrassMed";
		qualityLevel=1;
	};
};
class RGrassEffects
{
	class RGrass1
	{
		simulation="particles";
		type="RightGrass";
		qualityLevel=2;
	};
	class RGrass1Med
	{
		simulation="particles";
		type="RightGrassMed";
		qualityLevel=1;
	};
};
class LGrassEffectsBig
{
	class LGrass1
	{
		simulation="particles";
		type="LeftGrassBig";
		qualityLevel=2;
	};
	class LGrass1Med
	{
		simulation="particles";
		type="LeftGrassBig";
		qualityLevel=1;
	};
};
class RGrassEffectsBig
{
	class RGrass1
	{
		simulation="particles";
		type="RightGrassBig";
		qualityLevel=2;
	};
	class RGrass1Med
	{
		simulation="particles";
		type="RightGrassBig";
		qualityLevel=1;
	};
};
class LGrassDryEffects
{
	class LGrassDry1
	{
		simulation="particles";
		type="LeftGrassDry";
		qualityLevel=2;
	};
	class LGrassDry1Med
	{
		simulation="particles";
		type="LeftGrassDryMed";
		qualityLevel=1;
	};
};
class RGrassDryEffects
{
	class RGrassDry1
	{
		simulation="particles";
		type="RightGrassDry";
		qualityLevel=2;
	};
	class RGrassDry1Med
	{
		simulation="particles";
		type="RightGrassDryMed";
		qualityLevel=1;
	};
};
class LGrassEffectsDryBig
{
	class LGrassDry1
	{
		simulation="particles";
		type="LeftGrassDryBig";
		qualityLevel=2;
	};
	class LGrassDry1Med
	{
		simulation="particles";
		type="LeftGrassDryBig";
		qualityLevel=1;
	};
};
class RGrassEffectsDryBig
{
	class RGrassDry1
	{
		simulation="particles";
		type="RightGrassDryBig";
		qualityLevel=2;
	};
	class RGrassDry1Med
	{
		simulation="particles";
		type="RightGrassDryBig";
		qualityLevel=1;
	};
};
class LStonesEffects
{
	class LStones1
	{
		simulation="particles";
		type="LeftStones";
		qualityLevel=2;
	};
	class LStones1Med
	{
		simulation="particles";
		type="LeftStones";
		qualityLevel=1;
	};
};
class RStonesEffects
{
	class RStones1
	{
		simulation="particles";
		type="RightStones";
		qualityLevel=2;
	};
	class RStones1Med
	{
		simulation="particles";
		type="RightStones";
		qualityLevel=1;
	};
};
class LStonesEffectsBig
{
	class LStones1
	{
		simulation="particles";
		type="LeftStonesBig";
		qualityLevel=2;
	};
	class LStones1Med
	{
		simulation="particles";
		type="LeftStonesBig";
		qualityLevel=1;
	};
};
class RStonesEffectsBig
{
	class RStones1
	{
		simulation="particles";
		type="RightStonesBig";
		qualityLevel=2;
	};
	class RStones1Med
	{
		simulation="particles";
		type="RightStonesBig";
		qualityLevel=1;
	};
};
class PersonDust
{
	class PersonDust1
	{
		simulation="particles";
		type="PersonDust1";
		qualityLevel=2;
	};
	class PersonDust1M
	{
		simulation="particles";
		type="PersonDust1";
		qualityLevel=1;
	};
};
class RFastWaterEffects
{
	class RightWater1
	{
		simulation="particles";
		type="RightWater1";
		qualityLevel=2;
	};
	class RightWater1M
	{
		simulation="particles";
		type="RightWater1M";
		qualityLevel=1;
	};
	class RightWater1L
	{
		simulation="particles";
		type="RightWater1L";
		qualityLevel=0;
	};
	class RightWater2
	{
		simulation="particles";
		type="RightWater2";
		qualityLevel=2;
	};
};
class LFastWaterEffects
{
	class LeftWater1
	{
		simulation="particles";
		type="LeftWater1";
		qualityLevel=2;
	};
	class LeftWater1M
	{
		simulation="particles";
		type="LeftWater1M";
		qualityLevel=1;
	};
	class LeftWater1L
	{
		simulation="particles";
		type="LeftWater1L";
		qualityLevel=0;
	};
	class LeftWater2
	{
		simulation="particles";
		type="LeftWater2";
		qualityLevel=2;
	};
};
class RWaterEffects
{
	class RightWaterSmall1
	{
		simulation="particles";
		type="RightWaterSmall1";
	};
};
class LWaterEffects
{
	class LeftWaterSmall1
	{
		simulation="particles";
		type="LeftWaterSmall1";
	};
};
class REngEffects
{
	class RightEng1
	{
		simulation="particles";
		type="RightEng1";
		qualityLevel=2;
	};
	class RWaterTrack1
	{
		simulation="particles";
		type="RWaterTrack1";
		qualityLevel=2;
	};
	class RWaterTrack1M
	{
		simulation="particles";
		type="RWaterTrack1M";
		qualityLevel=1;
	};
	class RWaterTrack1L
	{
		simulation="particles";
		type="RWaterTrack1L";
		qualityLevel=0;
	};
};
class LEngEffects
{
	class LeftEng1
	{
		simulation="particles";
		type="LeftEng1";
		qualityLevel=2;
	};
	class LWaterTrack1
	{
		simulation="particles";
		type="LWaterTrack1";
		qualityLevel=2;
	};
	class LWaterTrack1M
	{
		simulation="particles";
		type="LWaterTrack1M";
		qualityLevel=1;
	};
	class LWaterTrack1L
	{
		simulation="particles";
		type="LWaterTrack1L";
		qualityLevel=0;
	};
};
class REngEffectsSmall
{
	class RightEng1
	{
		simulation="particles";
		type="RightEng1";
		qualityLevel=2;
	};
	class RWaterTrack1
	{
		simulation="particles";
		type="RWaterTrackSmall1";
		qualityLevel=2;
	};
	class RWaterTrack1M
	{
		simulation="particles";
		type="RWaterTrackSmall1M";
		qualityLevel=1;
	};
	class RWaterTrack1L
	{
		simulation="particles";
		type="RWaterTrackSmall1L";
		qualityLevel=0;
	};
};
class LEngEffectsSmall
{
	class LeftEng1
	{
		simulation="particles";
		type="LeftEng1";
		qualityLevel=2;
	};
	class LWaterTrack1
	{
		simulation="particles";
		type="LWaterTrackSmall1";
		qualityLevel=2;
	};
	class LWaterTrack1M
	{
		simulation="particles";
		type="LWaterTrackSmall1M";
		qualityLevel=1;
	};
	class LWaterTrack1L
	{
		simulation="particles";
		type="LWaterTrackSmall1L";
		qualityLevel=0;
	};
};
class WaterWhirlEffect
{
};
class FDustEffects
{
};
class HeliDust
{
	class HDust1
	{
		simulation="particles";
		type="HDust1";
		qualityLevel=2;
	};
	class HDust1M
	{
		simulation="particles";
		type="HDust1M";
		qualityLevel=1;
	};
	class HDust1L
	{
		simulation="particles";
		type="HDust1L";
		qualityLevel=0;
	};
	class HDust1Long
	{
		simulation="particles";
		type="HDust1Long";
		qualityLevel=2;
	};
	class HDust1LongM
	{
		simulation="particles";
		type="HDust1LongM";
		qualityLevel=1;
	};
};
class HeliWater
{
	class HWater1
	{
		simulation="particles";
		type="HWater1";
		qualityLevel=2;
	};
	class HWater1M
	{
		simulation="particles";
		type="HWater1M";
		qualityLevel=1;
	};
	class HWater1L
	{
		simulation="particles";
		type="HWater1M";
		qualityLevel=0;
	};
	class HWater2
	{
		simulation="particles";
		type="HWater2";
		qualityLevel=2;
	};
	class HWater3
	{
		simulation="particles";
		type="HWater3";
		qualityLevel=2;
	};
	class HWater3M
	{
		simulation="particles";
		type="HWater3M";
		qualityLevel=1;
	};
};
class DamageSmokeHeli
{
	class DSmoke1
	{
		simulation="particles";
		type="DSmoke1";
	};
};
class DamageSmokePlane
{
	class DSmoke1
	{
		simulation="particles";
		type="DSmoke2";
	};
};
class SmallFire
{
	class Light1
	{
		simulation="light";
		type="SmallFireLight";
	};
	class sound
	{
		simulation="sound";
		type="Fire";
	};
	class Fire1
	{
		simulation="particles";
		type="SmallFireF";
	};
	class Refract1
	{
		simulation="particles";
		type="SmallFireFRefract";
	};
	class Smoke1
	{
		simulation="particles";
		type="SmallFireS";
	};
};
class SmallFireBarrel
{
	class Light1
	{
		simulation="light";
		type="SmallFireLight";
	};
	class sound
	{
		simulation="sound";
		type="Fire";
	};
	class Fire1
	{
		simulation="particles";
		type="SmallFireBarrel";
	};
	class Smoke1
	{
		simulation="particles";
		type="SmallFireS";
	};
};
class SmokeShellWhiteEffect
{
	class SmokeShell
	{
		simulation="particles";
		type="SmokeShellWhite";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class SmokeShell2
	{
		simulation="particles";
		type="SmokeShellWhiteLong";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
};
class SmokeShellWhiteSmall
{
	class SmokeShellWhite
	{
		simulation="particles";
		type="SmokeShellWhiteSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		smokeGenMinDist=0.1;
		smokeGenMaxDist=2000;
		smokeSizeCoef=0;
		smokeIntervalCoef=0;
	};
	class SmokeShellWhite2
	{
		simulation="particles";
		type="SmokeShellWhiteLong";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		smokeGenMinDist=0.1;
		smokeGenMaxDist=2000;
		smokeSizeCoef=0;
		smokeIntervalCoef=0;
	};
};
class IncinerateShell
{
	class SmokeShellWhite
	{
		simulation="particles";
		type="SmokeShellWhite";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class Fire1
	{
		simulation="particles";
		type="IncinerateFire";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
};
class ChemlightLight_green
{
	class Light1
	{
		simulation="light";
		type="ChemLight_green";
	};
};
class ChemlightLight_red
{
	class Light1
	{
		simulation="light";
		type="ChemLight_red";
	};
};
class ChemlightLight_yellow
{
	class Light1
	{
		simulation="light";
		type="ChemLight_yellow";
	};
};
class ChemlightLight_blue
{
	class Light1
	{
		simulation="light";
		type="ChemLight_blue";
	};
};
class ScudEffect
{
	class Light1
	{
		simulation="light";
		type="ScudLight";
	};
	class Smoke
	{
		simulation="particles";
		type="ScudSmoke";
	};
	class Smoke2
	{
		simulation="particles";
		type="ScudSmoke2";
	};
	class Fire
	{
		simulation="particles";
		type="ScudFire";
	};
};
class CfgVehicles
{
	class Land;
	class LandVehicle;
	class car: LandVehicle
	{
		class DestructionEffects
		{
			class Light1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=3;
				enabled="distToWater";
			};
			class LightFlames2
			{
				simulation="particles";
				type="FlameLightBC2";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1.5;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
				type="Fire";
			};
			class Fire1
			{
				simulation="particles";
				type="ObjectDestructionFire1Small";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class Smoke1
			{
				simulation="particles";
				type="ObjectDestructionSmokeSmall";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class Sparks1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class FireSparks1
			{
				simulation="particles";
				type="FireSparks";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=2.8;
			};
			class Fire2
			{
				simulation="particles";
				type="ObjectDestructionFire2Small";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class Smoke1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2Small";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class Smoke2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=3.2;
			};
		};
	};
	class tank: LandVehicle
	{
		class DestructionEffects
		{
			class LightFlames1
			{
				simulation="particles";
				type="FlameLightBC";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0.5;
				enabled="distToWater";
			};
			class LightBig1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=2;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
				type="Fire";
			};
			class FireBig1
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1
			{
				simulation="particles";
				type="ObjectDestructionSmoke";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class SparksBig1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class FireSparksBig1
			{
				simulation="particles";
				type="FireSparks";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=2.8;
			};
			class FireBig2
			{
				simulation="particles";
				type="ObjectDestructionFire2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class SmokeBig2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=3.2;
			};
		};
	};
	class B_Truck_01_mover_F;
	class B_Truck_01_fuel_F: B_Truck_01_mover_F
	{
		class DestructionEffects
		{
			class Light1
			{
				simulation="light";
				type="ObjectDestructionLightFuel";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class Smoke1
			{
				simulation="particles";
				type="FuelTruck_Explosion";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0.001;
			};
			class LightFlames1
			{
				simulation="particles";
				type="FlameLightBC";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0.5;
				enabled="distToWater";
			};
			class LightBig1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=2;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
				type="Fire";
			};
			class FireBig1
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=2;
			};
			class SmokeBig1
			{
				simulation="particles";
				type="ObjectDestructionSmoke";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class SparksBig1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class FireSparksBig1
			{
				simulation="particles";
				type="FireSparks";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=2.8;
			};
			class FireBig2
			{
				simulation="particles";
				type="ObjectDestructionFire2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class SmokeBig2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=3.2;
			};
		};
	};
	class B_Truck_01_ammo_F: B_Truck_01_mover_F
	{
		class DestructionEffects
		{
			class Light1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0.5;
			};
			class Smoke1
			{
				simulation="particles";
				type="AmmoTruck_Explosion";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0.001;
			};
			class LightFlames1
			{
				simulation="particles";
				type="FlameLightBC";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0.5;
				enabled="distToWater";
			};
			class LightBig1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=2;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
				type="Fire";
			};
			class FireBig1
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1
			{
				simulation="particles";
				type="ObjectDestructionSmoke";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class SparksBig1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class FireSparksBig1
			{
				simulation="particles";
				type="FireSparks";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=2.8;
			};
			class FireBig2
			{
				simulation="particles";
				type="ObjectDestructionFire2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class SmokeBig2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=3.2;
			};
		};
	};
	class Truck_02_base_F;
	class Truck_02_fuel_base_F: Truck_02_base_F
	{
		class DestructionEffects
		{
			class Light1
			{
				simulation="light";
				type="ObjectDestructionLightFuel";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class Smoke1
			{
				simulation="particles";
				type="FuelTruck_Explosion";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0.001;
			};
			class LightFlames1
			{
				simulation="particles";
				type="FlameLightBC";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0.5;
				enabled="distToWater";
			};
			class LightBig1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=2;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
				type="Fire";
			};
			class FireBig1
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1
			{
				simulation="particles";
				type="ObjectDestructionSmoke";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class SparksBig1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class FireSparksBig1
			{
				simulation="particles";
				type="FireSparks";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=2.8;
			};
			class FireBig2
			{
				simulation="particles";
				type="ObjectDestructionFire2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class SmokeBig2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=3.2;
			};
		};
	};
	class Truck_02_Ammo_base_F: Truck_02_base_F
	{
		class DestructionEffects
		{
			class Light1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0.5;
			};
			class Smoke1
			{
				simulation="particles";
				type="AmmoTruck_Explosion";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0.001;
			};
			class LightFlames1
			{
				simulation="particles";
				type="FlameLightBC";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0.5;
				enabled="distToWater";
			};
			class LightBig1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=2;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
				type="Fire";
			};
			class FireBig1
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1
			{
				simulation="particles";
				type="ObjectDestructionSmoke";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class SparksBig1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class FireSparksBig1
			{
				simulation="particles";
				type="FireSparks";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=2.8;
			};
			class FireBig2
			{
				simulation="particles";
				type="ObjectDestructionFire2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class SmokeBig2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=3.2;
			};
		};
	};
	class NonStrategic;
	class CraterLong: NonStrategic
	{
		model="\A3\data_f\ParticleEffects\CraterLong\CraterLong.p3d";
		mapSize=2;
		accuracy=1000;
		destrType="DestructNo";
		armor=20;
	};
	class CraterLong_small: CraterLong
	{
		model="\A3\data_f\ParticleEffects\CraterLong\CraterLong_small.p3d";
		mapSize=1;
	};
};
class AirDestructionEffects
{
	class LightBig1
	{
		simulation="light";
		type="ObjectDestructionLight";
		position="0,0,0";
		intensity=1;
		interval=1;
		start="damage - 0.99";
		enabled="distToWater";
		lifeTime=200;
	};
	class Sound
	{
		simulation="sound";
		position="destructionEffect1";
		intensity=1;
		interval=1;
		type="Fire";
		start="damage - 0.99";
		lifeTime=200;
	};
	class FireBig1
	{
		simulation="particles";
		type="AirObjectDestructionFire";
		position="destructionEffect1";
		intensity=0.15000001;
		interval=1;
		start="damage - 0.99";
		lifeTime=200;
	};
	class Parts
	{
		simulation="particles";
		type="AirObjectDestructionParts";
		position="destructionEffect1";
		intensity=0.15000001;
		interval=1;
		start="damage - 0.99";
		lifeTime=1;
	};
	class Sparks
	{
		simulation="particles";
		type="AirObjectDestructionSparks";
		position="destructionEffect1";
		intensity=0.15000001;
		interval=1;
		start="damage - 0.99";
		lifeTime=0.2;
	};
	class FireBig3
	{
		simulation="particles";
		type="AirObjectDestructionFire2";
		position="destructionEffect1";
		intensity=1;
		interval=1;
		start="damage - 0.99";
		lifeTime=2;
	};
	class FireBig4
	{
		simulation="particles";
		type="AirObjectDestructionFire3";
		position="destructionEffect1";
		intensity=1;
		interval=1;
		start="damage - 0.99";
		lifeTime=2;
	};
	class SmokeBig1
	{
		simulation="particles";
		type="AirObjectDestructionSmoke";
		position="destructionEffect1";
		intensity=0.15000001;
		interval=1;
		start="damage - 0.99";
		lifeTime=200;
	};
	class FireSparksBig1
	{
		simulation="particles";
		type="AirFireSparks";
		position="destructionEffect1";
		intensity=1;
		interval=1;
		start="damage - 0.99";
		lifeTime=200;
	};
	class FireBig2
	{
		simulation="particles";
		type="AirObjectDestructionFire";
		position="destructionEffect1";
		intensity=0.15000001;
		interval=1;
		start="damage - 0.99";
		lifeTime=200;
	};
	class SmokeBig1_2
	{
		simulation="particles";
		type="AirObjectDestructionSmoke1";
		position="destructionEffect1";
		intensity=0.15000001;
		interval=1;
		start="damage - 0.99";
		lifeTime=200;
	};
};
class AircraftDebris
{
	class AirObjectDestructionSmokeTrail
	{
		simulation="particles";
		type="AirObjectDestructionFireTrail";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=3;
	};
	class LightBig1
	{
		simulation="light";
		type="ObjectDestructionLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=200;
	};
	class AirObjectDestructionSmokeTrail2
	{
		simulation="particles";
		type="AirObjectDestructionSmokeTrail";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=3;
	};
};
class AircraftDebris2
{
	class AirObjectDestructionSmokeTrail
	{
		simulation="particles";
		type="AirObjectDestructionFireTrail2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=3;
	};
	class AirObjectDestructionSmokeTrail2
	{
		simulation="particles";
		type="AirObjectDestructionSmokeTrail2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=3;
	};
};
class 155mm_Smoke
{
	class Smoke_Trail_Artillery_Emitter
	{
		simulation="particles";
		type="Smoke_Trail_Artillery_Emitter_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_Trail_Artillery_Emit
	{
		simulation="particles";
		type="Smoke_Trail_Artillery_Emitter_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class DirtBig
	{
		simulation="particles";
		type="DirtBig";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Dirt
	{
		simulation="particles";
		type="DirtMed";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class BattleDust_02
	{
		simulation="particles";
		type="BattleDust_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 105_stones
	{
		simulation="particles";
		type="105_stones";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
};
class 80mm_Smoke
{
	class Smoke_Trail_Rocket_Emitter
	{
		simulation="particles";
		type="Smoke_Trail_Rocket_Emitter_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_Trail_Rocket_Emit
	{
		simulation="particles";
		type="Smoke_Trail_Rocket_Emitter_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class hydra_smoke_up_01
	{
		simulation="particles";
		type="hydra_smoke_up_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class hydra_smoke_up_02
	{
		simulation="particles";
		type="hydra_smoke_up_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class hydra_smoke_up_03
	{
		simulation="particles";
		type="hydra_smoke_up_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class hydra_smoke_up_04
	{
		simulation="particles";
		type="hydra_smoke_up_04";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Dirt
	{
		simulation="particles";
		type="DirtRocket";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Stones
	{
		simulation="particles";
		type="Hydra_Explode_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class MK82_Smoke
{
	class BattleDust_01
	{
		simulation="particles";
		type="BattleDust_02";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class mk82_smoke_01
	{
		simulation="particles";
		type="mk82_smoke_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class mk82_smoke_02
	{
		simulation="particles";
		type="mk82_smoke_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class mk82_smoke_01_ground
	{
		simulation="particles";
		type="mk82_smoke_01_ground";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class mk82_smoke_02_ground
	{
		simulation="particles";
		type="mk82_smoke_02_ground";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class mk82_smoke_03_ground
	{
		simulation="particles";
		type="mk82_smoke_03_ground";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class mk82_smoke_04_ground
	{
		simulation="particles";
		type="mk82_smoke_04_ground";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class DirtImpact_MK82_Stones
	{
		simulation="particles";
		type="DirtImpact_MK82_Stones";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class dirtmassive
	{
		simulation="particles";
		type="dirtmassive";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class DirtMK82
	{
		simulation="particles";
		type="DirtMK82";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_TrailBC1
	{
		simulation="particles";
		type="Smoke_TrailBC1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_TrailBC2
	{
		simulation="particles";
		type="Smoke_TrailBC2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class hydra_smoke_up_01
	{
		simulation="particles";
		type="hydra_smoke_up_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class hydra_smoke_up_02
	{
		simulation="particles";
		type="hydra_smoke_up_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class hydra_smoke_up_03
	{
		simulation="particles";
		type="hydra_smoke_up_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class hydra_smoke_up_04
	{
		simulation="particles";
		type="hydra_smoke_up_04";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class ATMissileExplosion
{
	class HellfireLight_01
	{
		simulation="light";
		type="Hellfire_light_source";
		position[]={0,0,5};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class HellfireLight_02
	{
		simulation="light";
		type="Hellfire_light_source_02";
		position[]={0,0,5};
		intensity=1;
		interval=1;
		lifeTime=0.40000001;
	};
	class Hellfire_Explosion_01
	{
		simulation="particles";
		type="Hellfire_Explosion_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Hellfire_Explosion_02
	{
		simulation="particles";
		type="Hellfire_Explosion_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Hellfire_Smoke_Trail_Emit_01
	{
		simulation="particles";
		type="Hellfire_Smoke_Trail_Emit_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Hellfire_Blast_Glow
	{
		simulation="particles";
		type="Hellfire_Blast_Glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class Sparks_med
	{
		simulation="particles";
		type="sparks_med";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=0.001;
		interval=1;
		lifeTime=0;
	};
	class Explosion1
	{
		simulation="particles";
		type="ExplosionParticles";
		position[]={0,0,0};
		intensity=3;
		interval=1;
		lifeTime=0;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="CloudMedDark";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
};
class ATMissileCrater
{
	class MissileCircleDust
	{
		simulation="particles";
		type="CircleDustMed";
		enabled="distToWater interpolate [0.2,0.21,-1,1]";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class RocketSmokeTrails1H
	{
		simulation="particles";
		type="RocketSmokeTrails";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
		qualityLevel=2;
	};
	class RocketSmokeTrails1M
	{
		simulation="particles";
		type="RocketSmokeTrails";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
		qualityLevel=1;
	};
	class RocketSmokeTrails2H
	{
		simulation="particles";
		type="RocketSmokeTrails2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
		qualityLevel=2;
	};
	class RocketSmokeTrails2M
	{
		simulation="particles";
		type="RocketSmokeTrails2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
		qualityLevel=1;
	};
};
class AAMissileExplosion
{
	class LightExp
	{
		simulation="light";
		type="ExploLightFast";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.15000001;
	};
	class LightExp2
	{
		simulation="light";
		type="ExploLightFast_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class AA_Explosion_01
	{
		simulation="particles";
		type="AA_Explosion_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class AA_Explosion_02
	{
		simulation="particles";
		type="AA_Explosion_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Hellfire_Blast_Glow
	{
		simulation="particles";
		type="Hellfire_Blast_Glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Sparks_med
	{
		simulation="particles";
		type="sparks_med";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class AA_SmokeHit_01
	{
		simulation="particles";
		type="AA_SmokeHit_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class AA_SmokeHit_02
	{
		simulation="particles";
		type="AA_SmokeHit_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class AA_SmokeHit_03
	{
		simulation="particles";
		type="AA_SmokeHit_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class AA_SmokeHit_04
	{
		simulation="particles";
		type="AA_SmokeHit_04";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Explosion1
	{
		simulation="particles";
		type="ExplosionParticles";
		position[]={0,0,0};
		intensity=3;
		interval=1;
		lifeTime=0;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="CloudMedLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
};
class AAMissileCrater
{
	class 25mmSmoke1
	{
		simulation="particles";
		type="25mm_Smoke_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mmSmoke2
	{
		simulation="particles";
		type="25mm_Smoke_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class GrenadeSmoke1
	{
		simulation="particles";
		type="GrenadeSmoke1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class MissileCircleDust
	{
		simulation="particles";
		type="CircleDustMed";
		enabled="distToWater interpolate [0.2,0.21,-1,1]";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class RocketSmokeTrails1H
	{
		simulation="particles";
		type="RocketSmokeTrails";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
		qualityLevel=2;
	};
	class RocketSmokeTrails1M
	{
		simulation="particles";
		type="RocketSmokeTrails";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
		qualityLevel=1;
	};
	class RocketSmokeTrails2H
	{
		simulation="particles";
		type="RocketSmokeTrails2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
		qualityLevel=2;
	};
	class RocketSmokeTrails2M
	{
		simulation="particles";
		type="RocketSmokeTrails2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
		qualityLevel=1;
	};
	class CircleDust
	{
		simulation="particles";
		type="CircleDustMed";
		enabled="distToWater interpolate [0.2,0.21,-1,1]";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
};
class ATRocketExplosion
{
	class LightExp
	{
		simulation="light";
		type="ExploLightFast";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.15000001;
	};
	class LightExp2
	{
		simulation="light";
		type="ExploLightFast_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class AA_Explosion_01
	{
		simulation="particles";
		type="AA_Explosion_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class AA_Explosion_02
	{
		simulation="particles";
		type="AA_Explosion_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Hellfire_Blast_Glow
	{
		simulation="particles";
		type="Hellfire_Blast_Glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Sparks_med
	{
		simulation="particles";
		type="sparks_med";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class AA_SmokeHit_01
	{
		simulation="particles";
		type="AA_SmokeHit_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class AA_SmokeHit_02
	{
		simulation="particles";
		type="AA_SmokeHit_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class AA_SmokeHit_03
	{
		simulation="particles";
		type="AA_SmokeHit_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class AA_SmokeHit_04
	{
		simulation="particles";
		type="AA_SmokeHit_04";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Explosion1
	{
		simulation="particles";
		type="ExplosionParticles";
		position[]={0,0,0};
		intensity=3;
		interval=1;
		lifeTime=0;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="CloudBigLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
};
class BombExplosion
{
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=0.001;
		interval=1;
		lifeTime=0;
	};
	class BombExp1
	{
		simulation="particles";
		type="BombExp1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class E541F2C814843775A2A73CE4655A6173
	{
		simulation="particles";
		type="E541F2C814843775A2A73CE4655A6173";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class mk82_light
	{
		simulation="light";
		type="mk82_light_source";
		position[]={0,0,10};
		intensity=1;
		interval=1;
		lifeTime=0.60000002;
	};
	class MK82_Explosion_01
	{
		simulation="particles";
		type="MK82_Explosion_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		smokeGenMinDist=1;
		smokeGenMaxDist=1200;
		smokeSizeCoef=0;
		smokeIntervalCoef=0;
	};
	class MK82_Explosion_02
	{
		simulation="particles";
		type="MK82_Explosion_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		smokeGenMinDist=1;
		smokeGenMaxDist=1200;
		smokeSizeCoef=0;
		smokeIntervalCoef=0;
	};
	class sparks_10
	{
		simulation="particles";
		type="sparks_10";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		smokeGenMinDist=1;
		smokeGenMaxDist=1200;
		smokeSizeCoef=0;
		smokeIntervalCoef=0;
	};
	class shockblast_01
	{
		simulation="particles";
		type="shockblast_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class explosion_glow_01
	{
		simulation="particles";
		type="explosion_glow_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
		smokeGenMinDist=1;
		smokeGenMaxDist=1200;
		smokeSizeCoef=0;
		smokeIntervalCoef=0;
	};
	class mk82_glow
	{
		simulation="particles";
		type="mk82_glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
		smokeGenMinDist=1;
		smokeGenMaxDist=1200;
		smokeSizeCoef=0;
		smokeIntervalCoef=0;
	};
	class sparks_large
	{
		simulation="particles";
		type="sparks_large";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
		qualityLevel=2;
		smokeGenMinDist=0.1;
		smokeGenMaxDist=3000;
		smokeSizeCoef=5;
		smokeIntervalCoef=0;
	};
	class sparks_huge
	{
		simulation="particles";
		type="sparks_huge";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
		qualityLevel=2;
		smokeGenMinDist=0.1;
		smokeGenMaxDist=3000;
		smokeSizeCoef=5;
		smokeIntervalCoef=0;
	};
};
class BombCrater
{
	class BombSmk1
	{
		simulation="particles";
		type="BombSmk1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class BombSmk2
	{
		simulation="particles";
		type="BombSmk2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class BombSmk3
	{
		simulation="particles";
		type="BombSmk3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class mk82_smoke_01
	{
		simulation="particles";
		type="mk82_smoke_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class mk82_smoke_02
	{
		simulation="particles";
		type="mk82_smoke_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class mk82_smoke_01_ground
	{
		simulation="particles";
		type="mk82_smoke_01_ground";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class mk82_smoke_02_ground
	{
		simulation="particles";
		type="mk82_smoke_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class dirtmassive
	{
		simulation="particles";
		type="dirtmassive";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
		smokeGenMinDist=1;
		smokeGenMaxDist=1200;
		smokeSizeCoef=0;
		smokeIntervalCoef=0;
	};
};
class AA_Explode
{
	class LightExp
	{
		simulation="light";
		type="ExploLightFast";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.15000001;
	};
	class LightExp2
	{
		simulation="light";
		type="ExploLightFast_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class AA_Explosion_01
	{
		simulation="particles";
		type="AA_Explosion_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class AA_Explosion_02
	{
		simulation="particles";
		type="AA_Explosion_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Hellfire_Blast_Glow
	{
		simulation="particles";
		type="Hellfire_Blast_Glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Sparks_med
	{
		simulation="particles";
		type="sparks_med";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class AA_SmokeHit_01
	{
		simulation="particles";
		type="AA_SmokeHit_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class AA_SmokeHit_02
	{
		simulation="particles";
		type="AA_SmokeHit_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class AA_SmokeHit_03
	{
		simulation="particles";
		type="AA_SmokeHit_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class AA_SmokeHit_04
	{
		simulation="particles";
		type="AA_SmokeHit_04";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class AA_Smoke
{
	class 25mmSmoke1
	{
		simulation="particles";
		type="25mm_Smoke_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mmSmoke2
	{
		simulation="particles";
		type="25mm_Smoke_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class GrenadeSmoke1
	{
		simulation="particles";
		type="GrenadeSmoke1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
};
class Hellfire_Smoke
{
	class BattleDust_01
	{
		simulation="particles";
		type="BattleDust_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_Trail_Rocket_Emitter
	{
		simulation="particles";
		type="Smoke_Trail_Rocket_Emitter_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_Trail_Rocket_Emit
	{
		simulation="particles";
		type="Smoke_Trail_Rocket_Emitter_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class hydra_smoke_up_01
	{
		simulation="particles";
		type="hydra_smoke_up_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class hydra_smoke_up_02
	{
		simulation="particles";
		type="hydra_smoke_up_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class hydra_smoke_up_03
	{
		simulation="particles";
		type="hydra_smoke_up_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class hydra_smoke_up_04
	{
		simulation="particles";
		type="hydra_smoke_up_04";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Dirt
	{
		simulation="particles";
		type="DirtRocket";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Stones
	{
		simulation="particles";
		type="Hydra_Explode_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class 30mmSmoke
{
};
class Hellfire_Explode
{
	class HellfireLight_01
	{
		simulation="light";
		type="Hellfire_light_source";
		position[]={0,0,5};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class HellfireLight_02
	{
		simulation="light";
		type="Hellfire_light_source_02";
		position[]={0,0,5};
		intensity=1;
		interval=1;
		lifeTime=0.40000001;
	};
	class Hellfire_Explosion_01
	{
		simulation="particles";
		type="Hellfire_Explosion_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Hellfire_Explosion_02
	{
		simulation="particles";
		type="Hellfire_Explosion_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Hellfire_Smoke_Trail_Emit_01
	{
		simulation="particles";
		type="Hellfire_Smoke_Trail_Emit_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Hellfire_Blast_Glow
	{
		simulation="particles";
		type="Hellfire_Blast_Glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class Sparks_med
	{
		simulation="particles";
		type="sparks_med";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
};
class SABOT_Explode
{
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class 25mmFlash
	{
		simulation="particles";
		type="25mm_Explode";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.15000001;
	};
	class 30mmSparks
	{
		simulation="particles";
		type="30mmSparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.15000001;
	};
};
class SABOT_Smoke
{
	class Dirt
	{
		simulation="particles";
		type="DirtA10";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.40000001;
	};
	class ImpactBulletBig01
	{
		simulation="particles";
		type="ImpactBulletBig01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
	};
	class ImpactBulletBig02
	{
		simulation="particles";
		type="ImpactBulletBig02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
	};
};
class MK82_Explode
{
	class mk82_light
	{
		simulation="light";
		type="mk82_light_source";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.079999998;
	};
	class mk82_light_02
	{
		simulation="light";
		type="mk82_light_source_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class mk82_explosion
	{
		simulation="particles";
		type="mk82_explosion";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class airblast
	{
		simulation="particles";
		type="airblast";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class explosion_glow_01
	{
		simulation="particles";
		type="explosion_glow_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class mk82_glow
	{
		simulation="particles";
		type="mk82_glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class sparks_large
	{
		simulation="particles";
		type="sparks_large";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
		qualityLevel=2;
	};
	class sparks_huge
	{
		simulation="particles";
		type="sparks_huge";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
		qualityLevel=2;
	};
	class shockwave
	{
		simulation="particles";
		type="shockwave_large";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=2;
	};
};
class HERound_Emitter
{
	class Trail2
	{
		simulation="particles";
		type="Heround_smoke_01";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail3
	{
		simulation="particles";
		type="Heround_smoke_02";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class hellfire_explosiontrail
{
	class Trail
	{
		simulation="particles";
		type="Hellfire_Explosion_02";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail2
	{
		simulation="particles";
		type="hellfire_smoke_01";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail3
	{
		simulation="particles";
		type="hellfire_smoke_02";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Hellfire_SmokeTrail_01
{
	class Trail
	{
		simulation="particles";
		type="Hellfire_Smoke_Trail_01";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Demo_Charge_Explosion_Emitter
{
	class Trail
	{
		simulation="particles";
		type="Demo_Explosion";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail2
	{
		simulation="particles";
		type="Demo_smoke_01";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail3
	{
		simulation="particles";
		type="Demo_smoke_02";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class mk82_explosiontrail
{
	class Trail
	{
		simulation="particles";
		type="mk82_explosion_01";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=0.2;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail2
	{
		simulation="particles";
		type="mk82_smoke_01";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=0.2;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail3
	{
		simulation="particles";
		type="mk82_smoke_02";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=0.2;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class mk82_light_02
	{
		simulation="light";
		type="mk82_light_source_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class cloudlight_large
	{
		simulation="particles";
		type="cloudlight_large";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
		qualityLevel=2;
	};
};
class FuelTruck_ExplosionLink
{
	class Trail
	{
		simulation="particles";
		type="FuelTruck_Explosion_01";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=3;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail2
	{
		simulation="particles";
		type="FuelTruck_Explosion_02";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=3;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail3
	{
		simulation="particles";
		type="FuelTruckSmoke";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=3;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class cloudlight_large_fire
	{
		simulation="particles";
		type="cloudlight_large_fire";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
		qualityLevel=2;
	};
};
class FuelTruck_FireLight
{
	class FireLight
	{
		simulation="light";
		type="ObjectDestructionLightFuel";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=1.7;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class AmmoTruck_ExplosionLink
{
	class Trail
	{
		simulation="particles";
		type="AmmoTruck_Explosion_01";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail2
	{
		simulation="particles";
		type="AmmoTruck_Explosion_02";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class MLRS_Explode
{
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class 155mm_Explode_01
	{
		simulation="particles";
		type="155mm_Explode_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 155mm_Explode_02
	{
		simulation="particles";
		type="155mm_Explode_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 155mm_Explode_03
	{
		simulation="particles";
		type="155mm_Explode_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Explode_Glow
	{
		simulation="particles";
		type="105mm_Explode_Glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class HERoundExplosion
{
	class LightExp
	{
		simulation="light";
		type="GrenadeExploLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 30mmFlash
	{
		simulation="particles";
		type="30mmExplode";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
	};
	class Dirt
	{
		simulation="particles";
		type="Dirtsmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 30mmImpact
	{
		simulation="particles";
		type="30mmImpact1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class 30mmImpact2
	{
		simulation="particles";
		type="30mmImpact2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class 30mmSparks
	{
		simulation="particles";
		type="30mmSparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		smokeGenMinDist=1;
		smokeGenMaxDist=1200;
		smokeSizeCoef=0;
		smokeIntervalCoef=0;
	};
	class ExploAmmoSmoke
	{
		simulation="particles";
		type="ExploAmmoSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.40000001;
	};
	class ExploAmmoSmoke2
	{
		simulation="particles";
		type="ExploAmmoSmoke_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.40000001;
	};
};
class 25mm_Explode
{
	class LightExp
	{
		simulation="light";
		type="GrenadeExploLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class 25mmFlash
	{
		simulation="particles";
		type="25mm_Explode";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class 30mmSparks
	{
		simulation="particles";
		type="30mmSparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.15000001;
	};
	class 25mmFlashGlow
	{
		simulation="particles";
		type="25mm_Blast_Glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
};
class ExploAmmoExplosion
{
	class LightExp
	{
		simulation="light";
		type="ExploLightFastSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mm_Explode
	{
		simulation="particles";
		type="25mm_Explode";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mmFlash
	{
		simulation="particles";
		type="25mm_Explode";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class 25mmSmoke1
	{
		simulation="particles";
		type="25mm_Smoke_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mmSmoke2
	{
		simulation="particles";
		type="25mm_Smoke_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 30mmSparks
	{
		simulation="particles";
		type="30mmSparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.15000001;
	};
	class 25mmFlashGlow
	{
		simulation="particles";
		type="25mm_Blast_Glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
};
class 30mmExplode
{
	class LightExp
	{
		simulation="light";
		type="GrenadeExploLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mm_Explode
	{
		simulation="particles";
		type="25mm_Explode";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 30mm_Sparks
	{
		simulation="particles";
		type="30mmSparks";
		position[]={0,0,0};
		intensity=100;
		interval=1;
		lifeTime=0.2;
	};
	class 25mmSmoke1
	{
		simulation="particles";
		type="25mm_Smoke_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mmSmoke2
	{
		simulation="particles";
		type="25mm_Smoke_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mmSmoke3
	{
		simulation="particles";
		type="25mm_Smoke_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class 120mm_HE
{
	class LightExp
	{
		simulation="light";
		type="ExploLightFast";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class LightExp2
	{
		simulation="light";
		type="GrenadeExploLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class BlastcoreImpactEffectsBlood
{
	class BlastcoreBlood
	{
		simulation="particles";
		type="BlastcoreBlood";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class ImpactEffectsBlood
{
	class BlastcoreBlood
	{
		simulation="particles";
		type="BlastcoreBlood";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class BlastcoreBlood2
	{
		simulation="particles";
		type="BlastcoreBlood2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Blood
	{
		simulation="particles";
		type="Blood";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class Blood1
	{
		simulation="particles";
		type="Blood1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class Blood2
	{
		simulation="particles";
		type="Blood2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class Blood3
	{
		simulation="particles";
		type="Blood3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0;
	};
	class BloodUnderwater1
	{
		simulation="particles";
		type="BloodUnderwater1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.40000001;
	};
};
class collisionEffect
{
	class collisionVeh1
	{
		simulation="particles";
		type="collisionVeh1";
		lifeTime=0.2;
	};
	class collisionVeh2
	{
		simulation="particles";
		type="collisionVeh2";
		lifeTime=0.2;
	};
	class collisionVehSmoke
	{
		simulation="particles";
		type="collisionVehSmoke";
		lifeTime=0.2;
	};
};
class FireDamage
{
	class FireDamage1
	{
		simulation="particles";
		type="FireDamage1";
	};
};
class EmptyEffect
{
};
class ScubaEffect
{
	class BubblesMedium1
	{
		simulation="particles";
		type="BubblesMedium";
		lifeTime=0.89999998;
	};
	class BubblesSmall1
	{
		simulation="particles";
		type="BubblesSmall";
		lifeTime=0.44999999;
	};
};
class WingVortices
{
	class WingTrail1
	{
		simulation="particles";
		type="WingTrail";
		qualityLevel=2;
	};
	class WingTrail1Med
	{
		simulation="particles";
		type="WingTrailMed";
		qualityLevel=1;
	};
};
class BodyVortices
{
	class BodyTrail1
	{
		simulation="particles";
		type="BodyTrail";
		qualityLevel=2;
	};
	class BodyTrail1Med
	{
		simulation="particles";
		type="BodyTrailMed";
		qualityLevel=1;
	};
};
class BulletBubbles
{
	class BulletBubbles1
	{
		simulation="particles";
		type="BulletBubbles1";
	};
};
class ImpactUnderwater
{
	class ImpactUnderwater1
	{
		simulation="particles";
		type="ImpactUnderwater1";
	};
};
