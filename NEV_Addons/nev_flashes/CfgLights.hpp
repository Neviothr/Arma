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
};
class HelicopterExplosionEffects2
{
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,0,5};
		intensity=1;
		interval=1;
		lifeTime=0.5;
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
};
class VehicleExplosionEffects
{
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
};
class WaterWhirlEffect
{
};
class FDustEffects
{
};
class ScudEffect
{
	class Light1
	{
		simulation="light";
		type="ScudLight";
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
		};
	};
	class tank: LandVehicle
	{
		class DestructionEffects
		{
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
		};
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
};
class AircraftDebris
{
	class LightBig1
	{
		simulation="light";
		type="ObjectDestructionLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=200;
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
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=0.001;
		interval=1;
		lifeTime=0;
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
	class mk82_light
	{
		simulation="light";
		type="mk82_light_source";
		position[]={0,0,10};
		intensity=1;
		interval=1;
		lifeTime=0.60000002;
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
class EmptyEffect
{
};