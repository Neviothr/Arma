class CfgAmmo
{
	access = 1;
	class Default
	{
		access = 3;
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 1;
		underwaterHitRangeCoef = 1;
		typicalSpeed = 900;
		explosionForceCoef = 1;
		isCraterOriented = 0;
		model = "";
		proxyShape = "";
		craterShape = "";
		simulation = "";
		weaponType = "Default";
		animated = 0;
		shadow = 0;
		cost = 0;
		maxSpeed = 0;
		cartridge = "";
		simulationStep = 0.05;
		tracerColor[] = {0.7, 0.7, 0.5, 0.04};
		tracerColorR[] = {0.7, 0.7, 0.5, 0.04};
		soundFly[] = {"", 1, 1};
		soundEngine[] = {"", 1, 1};
		soundHit[] = {"", 1, 1};
		supersonicCrackNear[] = {"", 1, 1};
		supersonicCrackFar[] = {"", 1, 1};
		soundFall[] = {"", 1, 1};
		soundFakeFall[] = {"soundFall", 1};
		hitGroundSoft[] = {"soundHit", 1};
		hitGroundHard[] = {"soundHit", 1};
		hitMan[] = {"soundHit", 1};
		hitArmor[] = {"soundHit", 1};
		hitIron[] = {"soundHit", 1};
		hitBuilding[] = {"soundHit", 1};
		hitFoliage[] = {"soundHit", 1};
		hitWood[] = {"soundHit", 1};
		hitGlass[] = {"soundHit", 1};
		hitGlassArmored[] = {"soundHit", 1};
		hitConcrete[] = {"soundHit", 1};
		hitRubber[] = {"soundHit", 1};
		hitPlastic[] = {"soundHit", 1};
		hitDefault[] = {"soundHit", 1};
		hitMetal[] = {"soundHit", 1};
		hitMetalplate[] = {"soundHit", 1};
		hitTyre[] = {"soundHit", 1};
		hitWater[] = {"soundHit", 1};
		soundImpact[] = {"", 1, 1};
		impactGroundSoft[] = {"soundImpact", 1};
		impactGroundHard[] = {"soundImpact", 1};
		impactMan[] = {"soundImpact", 1};
		impactIron[] = {"soundImpact", 1};
		impactArmor[] = {"soundImpact", 1};
		impactBuilding[] = {"soundImpact", 1};
		impactFoliage[] = {"soundImpact", 1};
		impactWood[] = {"soundImpact", 1};
		impactGlass[] = {"soundImpact", 1};
		impactGlassArmored[] = {"soundImpact", 1};
		impactConcrete[] = {"soundImpact", 1};
		impactRubber[] = {"soundImpact", 1};
		impactPlastic[] = {"soundImpact", 1};
		impactDefault[] = {"soundImpact", 1};
		impactMetal[] = {"soundImpact", 1};
		impactMetalplate[] = {"soundImpact", 1};
		impactTyre[] = {"soundImpact", 1};
		impactWater[] = {"soundImpact", 1};
		grenadeFireSound[] = {};
		grenadeBurningSound[] = {};
		deflecting = 0;
		deflectionSlowDown = 0.8;
		explosive = 1;
		explosionEffects = "ExplosionEffects";
		craterEffects = "ImpactEffectsMedium";
		craterWaterEffects = "ImpactEffectsWater";
		effectsMissile = "ExplosionEffects";
		effectsMissileInit = "";
		effectsSmoke = "SmokeShellWhite";
		effectsFire = "CannonFire";
		effectFlare = "FlareShell";
		effectFly = "";
		mineJumpEffects = "";
		waterEffectOffset = 0.45;
		directionalExplosion = 0;
		explosionAngle = 60;
		explosionDir = "explosionDir";
		explosionPos = "explosionPos";
		explosionEffectsDir = "explosionDir";
		minimumSafeZone = 0.1;
		soundTrigger[] = {};
		soundActivation[] = {};
		soundDeactivation[] = {};
		explosionSoundEffect = "";
		timeToLive = 10;
		minTimeToLive = 0;
		irLock = 0;
		airLock = 0;
		laserLock = 0;
		nvLock = 0;
		artilleryLock = 0;
		hitOnWater = 0;
		lockSeekRadius = 100;
		manualControl = 0;
		maxControlRange = 350;
		maneuvrability = 1;
		trackLead = 1;
		trackOversteer = 1;
		missileLockCone = 0;
		weaponLockSystem = 0;
		cmImmunity = 1;
		lockType = 0;
		maverickweaponIndexOffset = 0;
		sideAirFriction = 1;
		artilleryDispersion = 1;
		artilleryCharge = 1;
		autoSeekTarget = 0;
		visibleFire = 0;
		audibleFire = 0;
		shootDistraction = -1;
		visibleFireTime = 0;
		explosionTime = 0;
		fuseDistance = 0;
		initTime = 0;
		thrustTime = 1.5;
		thrust = 210;
		airFriction = -0.0005;
		icon = "";
		submunitionAmmo = "";
		explosionType = "explosive";
		mineTrigger = "RangeTrigger";
		mineBoundingTime = 3;
		mineBoundingDist = 3;
		mineInconspicuousness = 10;
		mineFloating = -1;
		mineDiveSpeed = 1;
		minePlaceDist = 0.5;
		class HitEffects
		{
			vehicle = "ImpactMetal";
			object = "ImpactConcrete";
		};
		suppressionRadiusBulletClose = -1;
		suppressionRadiusHit = -1;
		dangerRadiusBulletClose = -1;
		dangerRadiusHit = -1;
		caliber = 1;
		whistleDist = 0;
		whistleOnFire = 0;
		class NVGMarkers
		{
		};
		minDamageForCamShakeHit = 0.55;
		class EventHandlers
		{
		};
	};
	class MissileCore: Default
	{
		simulation = "shotMissile";
		simulationStep = 0.05;
		timeToLive = 20;
		manualControl = 1;
		maxControlRange = 250;
		initTime = 0.15;
		thrustTime = 2.5;
		thrust = 350;
		maneuvrability = 3;
		missileLockCone = 50;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 20;
		soundHit[] = {"", 100, 1};
		soundFly[] = {"", 0.01, 2};
		soundEngine[] = {"", 0.001, 1};
		cost = 10000;
		deflecting = 5;
	};
	class BombCore: Default
	{
		hit = 50;
		indirectHit = 40;
		indirectHitRange = 10;
		cost = 200;
		irLock = 0;
		laserLock = 0;
		maxControlRange = 0;
		maneuvrability = 16;
		sideAirFriction = 0.1;
		simulation = "shotMissile";
		maxSpeed = 100;
		timeToLive = 120;
		initTime = 0;
		thrustTime = 0;
		thrust = 0;
	};
	class LaserBombCore: BombCore
	{
		hit = 5000;
		indirectHit = 3500;
		indirectHitRange = 15;
		cost = 20000;
		irLock = 0;
		laserLock = 1;
		maxControlRange = 100000;
		maneuvrability = 16;
		sideAirFriction = 0.1;
		simulation = "shotMissile";
		maxSpeed = 100;
		timeToLive = 120;
		initTime = 0;
		thrustTime = 0;
		thrust = 0;
		missileLockCone = 50;
	};
	class RocketCore: Default
	{
		simulation = "shotRocket";
		simulationStep = 0.05;
		timeToLive = 20;
		maneuvrability = 0;
		maxControlRange = 0;
		initTime = 0.05;
		thrustTime = 1;
		thrust = 1500;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 20;
		cost = 2000;
		deflecting = 5;
	};
	class ArtilleryRocketCore: RocketCore
	{
		artilleryLock = 1;
	};
	class BulletCore: Default
	{
		simulation = "shotBullet";
		simulationStep = 0.05;
		timeToLive = 3;
		soundFly[] = {"", 0.251189, 0.7};
		explosive = 0;
		visibleFire = 16;
		audibleFire = 16;
		visibleFireTime = 3;
		soundHit1[] = {"", 0.0316228, 1};
		soundHit2[] = {"", 0.0316228, 1};
		soundHit3[] = {"", 0.0316228, 1};
		soundHitMan1[] = {"", 0.0125893, 1};
		soundHitMan2[] = {"", 0.0125893, 1};
		soundHitArmor1[] = {"", 0.0316228, 1};
		soundHitArmor2[] = {"", 0.0316228, 1};
		soundHitBuilding1[] = {"", 0.0316228, 1};
		soundHitBuilding2[] = {"", 0.0316228, 1};
		hitGround[] = {"soundHit1", 0.33, "soundHit2", 0.33, "soundHit3", 0.33};
		hitMan[] = {"soundHitMan1", 0.5, "soundHitMan2", 0.5};
		hitArmor[] = {"soundHitArmor1", 0.7, "soundHitArmor2", 0.3};
		hitBuilding[] = {"soundHitBuilding1", 0.5, "soundHitBuilding2", 0.5};
		cost = 0.7;
	};
	class ShotgunCore: Default
	{
		simulation = "shotSpread";
		simulationStep = 0.05;
		timeToLive = 3;
		soundFly[] = {"", 0.251189, 0.7};
		explosive = 0;
		visibleFire = 16;
		audibleFire = 16;
		visibleFireTime = 3;
		soundHit1[] = {"", 0.0316228, 1};
		soundHit2[] = {"", 0.0316228, 1};
		soundHit3[] = {"", 0.0316228, 1};
		soundHitMan1[] = {"", 0.0125893, 1};
		soundHitMan2[] = {"", 0.0125893, 1};
		soundHitArmor1[] = {"", 0.0316228, 1};
		soundHitArmor2[] = {"", 0.0316228, 1};
		soundHitBuilding1[] = {"", 0.0316228, 1};
		soundHitBuilding2[] = {"", 0.0316228, 1};
		hitGround[] = {"soundHit1", 0.33, "soundHit2", 0.33, "soundHit3", 0.33};
		hitMan[] = {"soundHitMan1", 0.5, "soundHitMan2", 0.5};
		hitArmor[] = {"soundHitArmor1", 0.7, "soundHitArmor2", 0.3};
		hitBuilding[] = {"soundHitBuilding1", 0.5, "soundHitBuilding2", 0.5};
		cost = 0.7;
	};
	class ShellCore: Default
	{
		simulation = "shotShell";
		simulationStep = 0.05;
		timeToLive = 20;
		cost = 1000;
		soundHit[] = {"", 316.228, 1};
		soundFly[] = {"", 0.0316228, 4};
		indirectHitRange = 8;
		visibleFire = 16;
		audibleFire = 16;
		visibleFireTime = 10;
		deflecting = 5;
	};
	class SubmunitionCore: Default
	{
		simulation = "shotSubmunitions";
		simulationStep = 0.05;
		timeToLive = 180;
		cost = 1000;
		soundHit[] = {"", 316.228, 1};
		soundFly[] = {"", 0.0316228, 4};
		hitOnWater = 1;
		artilleryLock = 1;
		indirectHitRange = 8;
		visibleFire = 16;
		audibleFire = 16;
		visibleFireTime = 10;
		deflecting = 5;
	};
	class ShotDeployCore: Default
	{
		simulation = "shotDeploy";
		simulationStep = 0.05;
		timeToLive = 180;
		cost = 1000;
		soundHit[] = {"", 316.228, 1};
		soundFly[] = {"", 0.0316228, 4};
		hitOnWater = 1;
		artilleryLock = 1;
		indirectHitRange = 8;
		visibleFire = 16;
		audibleFire = 16;
		visibleFireTime = 10;
		deflecting = 5;
	};
	class GrenadeCore: Default
	{
		explosive = 1;
		hit = 20;
		indirectHit = 18;
		indirectHitRange = 7;
		cost = 40;
		simulation = "shotShell";
		simulationStep = 0.05;
		soundHit[] = {"", 10, 1};
		soundFly[] = {"", 3.16228e-005, 1};
		soundEngine[] = {"", 0.0001, 4};
		visibleFire = 2;
		audibleFire = 0.25;
		visibleFireTime = 0;
		timeToLive = 20;
		deflecting = 60;
	};
	class TimeBombCore: Default
	{
		hit = 700;
		indirectHit = 700;
		indirectHitRange = 7;
		model = "";
		cost = 2000;
		simulation = "shotTimeBomb";
		simulationStep = 0.1;
		soundHit[] = {"", 100, 1};
		soundFly[] = {"", 0, 1};
		soundEngine[] = {"", 0, 1};
		visibleFire = 0;
		audibleFire = 0;
		visibleFireTime = 0;
		timeToLive = 0;
		triggerWhenDestroyed = 1;
		mineCanBeReactivated = 1;
	};
	class LaserCore: Default
	{
		simulation = "shotLaser";
		simulationStep = 0.05;
		timeToLive = 1;
		soundFly[] = {"", 0.251189, 0.7};
		explosive = 0;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 1;
		recoil = "Empty";
		recoilProne = "Empty";
		soundHit1[] = {"", 0.0316228, 1};
		soundHit2[] = {"", 0.0316228, 1};
		soundHit3[] = {"", 0.0316228, 1};
		soundHitMan1[] = {"", 0.0125893, 1};
		soundHitMan2[] = {"", 0.0125893, 1};
		soundHitArmor1[] = {"", 0.0316228, 1};
		soundHitArmor2[] = {"", 0.0316228, 1};
		soundHitBuilding1[] = {"", 0.0316228, 1};
		soundHitBuilding2[] = {"", 0.0316228, 1};
		hitGround[] = {"soundHit1", 0.33, "soundHit2", 0.33, "soundHit3", 0.33};
		hitMan[] = {"soundHitMan1", 0.5, "soundHitMan2", 0.5};
		hitArmor[] = {"soundHitArmor1", 0.7, "soundHitArmor2", 0.3};
		hitBuilding[] = {"soundHitBuilding1", 0.5, "soundHitBuilding2", 0.5};
		cost = 0.7;
	};
	class PipeBombCore: TimeBombCore
	{
		simulation = "shotMine";
		mineTrigger = "RemoteTrigger";
	};
	class DirectionalBombCore: TimeBombCore
	{
		hit = 750;
		indirectHit = 750;
		indirectHitRange = 10;
		simulation = "shotDirectionalBomb";
		directionalExplosion = 1;
		explosionAngle = 80;
	};
	class BoundingMineCore: TimeBombCore
	{
		hit = 750;
		indirectHit = 750;
		indirectHitRange = 5;
		simulation = "shotBoundingMine";
		mineBoundingTime = 0.2;
		mineBoundingDist = 3;
	};
	class MineCore: TimeBombCore
	{
		hit = 750;
		indirectHit = 750;
		indirectHitRange = 5;
		simulation = "shotMine";
		model = "";
		defaultMagazine = "";
	};
	class FlareCore: GrenadeCore
	{
		timeToLive = 30;
		hit = 5;
		indirectHit = 2;
		indirectHitRange = 0.2;
		cost = 100;
		simulation = "shotIlluminating";
		simulationStep = 0.05;
		explosive = 0;
		soundHit[] = {"", 0, 1};
		lightColor[] = {1, 1, 1, 0};
		brightness = 2;
		size = 1;
		deflecting = 60;
		thrust = 0;
		airFriction = 0;
		sideairFriction = 0;
		artilleryLock = 1;
	};
	class SmokeShellCore: GrenadeCore
	{
		timeToLive = 60;
		visibleFire = 2;
		audibleFire = 0.25;
		visibleFireTime = 1;
		hit = 5;
		indirectHit = 2;
		indirectHitRange = 0.2;
		cost = 100;
		simulation = "shotSmokeX";
		explosive = 0;
		soundHit[] = {"", 0, 1};
		smokeColor[] = {1, 1, 1, 0};
		deflecting = 60;
	};
	class FakeAmmo: BulletCore
	{
		hit = 13;
		indirectHit = 4;
		indirectHitRange = 0.2;
		cost = 6;
		airlock = 1;
		explosive = 0;
		visibleFire = 16;
		audibleFire = 16;
		visibleFireTime = 3;
	};
	class BulletBase: BulletCore
	{
		visibleFire = 3;
		audibleFire = 40;
		visibleFireTime = 2;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = -1;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\A3\Weapons_f\ammo\shell";
		caliber = 1;
		cartridge = "FxCartridge_556";
		cost = 1;
		timeToLive = 6;
		deflecting = 15;
		tracerStartTime = -1;
		muzzleEffect = "";
		waterEffectOffset = 0.8;
		effectFly = "AmmoClassic";
		aiAmmoUsageFlags = "64 + 128 + 256";
		soundImpactDefault1[] = {"A3\Sounds_F\weapons\Grenades\Grenade_Roll", 2.51189, 1, 200};
		impactGroundSoft[] = {"soundImpactDefault1", 1};
		impactGroundHard[] = {"soundImpactDefault1", 1};
		impactMan[] = {"soundImpactDefault1", 1};
		impactIron[] = {"soundImpactDefault1", 1};
		impactArmor[] = {"soundImpactDefault1", 1};
		impactBuilding[] = {"soundImpactDefault1", 1};
		impactFoliage[] = {"soundImpactDefault1", 1};
		impactWood[] = {"soundImpactDefault1", 1};
		impactGlass[] = {"soundImpactDefault1", 1};
		impactGlassArmored[] = {"soundImpactDefault1", 1};
		impactConcrete[] = {"soundImpactDefault1", 1};
		impactTyre[] = {"soundImpactDefault1", 1};
		impactRubber[] = {"soundImpactDefault1", 1};
		impactPlastic[] = {"soundImpactDefault1", 1};
		impactDefault[] = {"soundImpactDefault1", 1};
		impactMetal[] = {"soundImpactDefault1", 1};
		impactMetalplate[] = {"soundImpactDefault1", 1};
		impactWater[] = {"soundImpactDefault1", 1};
		soundDefault1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01", 2.81838, 1, 75};
		soundDefault2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_02", 2.81838, 1, 75};
		soundDefault3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_03", 2.81838, 1, 75};
		soundDefault4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_04", 2.81838, 1, 75};
		soundDefault5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_05", 2.81838, 1, 75};
		soundDefault6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_06", 2.81838, 1, 75};
		soundDefault7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_07", 2.81838, 1, 75};
		soundDefault8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_08", 2.81838, 1, 75};
		soundGroundSoft1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_01", 2.81838, 1, 75};
		soundGroundSoft2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_02", 2.81838, 1, 75};
		soundGroundSoft3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_03", 2.81838, 1, 75};
		soundGroundSoft4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_04", 2.81838, 1, 75};
		soundGroundSoft5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_05", 2.81838, 1, 75};
		soundGroundSoft6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_06", 2.81838, 1, 75};
		soundGroundSoft7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_07", 2.81838, 1, 75};
		soundGroundSoft8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_08", 2.81838, 1, 75};
		soundGroundHard1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_01", 2.81838, 1, 75};
		soundGroundHard2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_02", 2.81838, 1, 75};
		soundGroundHard3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_03", 2.81838, 1, 75};
		soundGroundHard4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_04", 2.81838, 1, 75};
		soundGroundHard5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_05", 2.81838, 1, 75};
		soundGroundHard6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_06", 2.81838, 1, 75};
		soundGroundHard7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_07", 2.81838, 1, 75};
		soundGroundHard8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_08", 2.81838, 1, 75};
		soundGlass1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_01", 1.25893, 1, 75};
		soundGlass2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_02", 1.25893, 1, 75};
		soundGlass3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_03", 1.25893, 1, 75};
		soundGlass4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_04", 1.25893, 1, 75};
		soundGlass5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_05", 1.25893, 1, 75};
		soundGlass6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_06", 1.25893, 1, 75};
		soundGlass7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_07", 1.25893, 1, 75};
		soundGlass8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_08", 1.25893, 1, 75};
		soundGlassArmored1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_01", 2.23872, 1, 75};
		soundGlassArmored2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_02", 2.23872, 1, 75};
		soundGlassArmored3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_03", 2.23872, 1, 75};
		soundGlassArmored4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_04", 2.23872, 1, 75};
		soundGlassArmored5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_05", 2.23872, 1, 75};
		soundGlassArmored6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_06", 2.23872, 1, 75};
		soundGlassArmored7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_07", 2.23872, 1, 75};
		soundGlassArmored8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_08", 2.23872, 1, 75};
		soundMetal1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_01", 2.23872, 1, 75};
		soundMetal2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_02", 2.23872, 1, 75};
		soundMetal3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_03", 2.23872, 1, 75};
		soundMetal4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_04", 2.23872, 1, 75};
		soundMetal5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_05", 2.23872, 1, 75};
		soundMetal6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_06", 2.23872, 1, 75};
		soundMetal7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_07", 2.23872, 1, 75};
		soundMetal8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_08", 2.23872, 1, 75};
		soundVehiclePlate1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_01", 2.23872, 1, 75};
		soundVehiclePlate2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_02", 2.23872, 1, 75};
		soundVehiclePlate3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_03", 2.23872, 1, 75};
		soundVehiclePlate4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_04", 2.23872, 1, 75};
		soundVehiclePlate5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_05", 2.23872, 1, 75};
		soundVehiclePlate6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_06", 2.23872, 1, 75};
		soundVehiclePlate7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_07", 2.23872, 1, 75};
		soundVehiclePlate8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_08", 2.23872, 1, 75};
		soundWood1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_01", 2.81838, 1, 75};
		soundWood2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_02", 2.81838, 1, 75};
		soundWood3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_03", 2.81838, 1, 75};
		soundWood4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_04", 2.81838, 1, 75};
		soundWood5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_05", 2.81838, 1, 75};
		soundWood6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_06", 2.81838, 1, 75};
		soundWood7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_07", 2.81838, 1, 75};
		soundWood8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_08", 2.81838, 1, 75};
		soundHitBody1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_01", 1, 1, 75};
		soundHitBody2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_02", 1, 1, 75};
		soundHitBody3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_03", 1, 1, 75};
		soundHitBody4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_04", 1, 1, 75};
		soundHitBody5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_05", 1, 1, 75};
		soundHitBody6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_06", 1, 1, 75};
		soundHitBody7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_07", 1, 1, 75};
		soundHitBody8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_08", 1, 1, 75};
		soundHitBuilding1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_01", 3.98107, 1, 75};
		soundHitBuilding2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_02", 3.98107, 1, 75};
		soundHitBuilding3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_03", 3.98107, 1, 75};
		soundHitBuilding4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_04", 3.98107, 1, 75};
		soundHitBuilding5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_05", 3.98107, 1, 75};
		soundHitBuilding6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_06", 3.98107, 1, 75};
		soundHitBuilding7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_07", 3.98107, 1, 75};
		soundHitBuilding8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_08", 3.98107, 1, 75};
		soundHitFoliage1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_01", 1, 1, 75};
		soundHitFoliage2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_02", 1, 1, 75};
		soundHitFoliage3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_03", 1, 1, 75};
		soundHitFoliage4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_04", 1, 1, 75};
		soundHitFoliage5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_05", 1, 1, 75};
		soundHitFoliage6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_06", 1, 1, 75};
		soundHitFoliage7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_07", 1, 1, 75};
		soundHitFoliage8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_08", 1, 1, 75};
		soundPlastic1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_01", 1.41254, 1, 75};
		soundPlastic2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_02", 1.41254, 1, 75};
		soundPlastic3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_03", 1.41254, 1, 75};
		soundPlastic4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_04", 1.41254, 1, 75};
		soundPlastic5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_05", 1.41254, 1, 75};
		soundPlastic6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_06", 1.41254, 1, 75};
		soundPlastic7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_07", 1.41254, 1, 75};
		soundPlastic8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_08", 1.41254, 1, 75};
		soundConcrete1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01", 1.99526, 1, 75};
		soundConcrete2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_02", 1.99526, 1, 75};
		soundConcrete3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_03", 1.99526, 1, 75};
		soundConcrete4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_04", 1.99526, 1, 75};
		soundConcrete5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_05", 1.99526, 1, 75};
		soundConcrete6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_06", 1.99526, 1, 75};
		soundConcrete7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_07", 1.99526, 1, 75};
		soundConcrete8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_08", 1.99526, 1, 75};
		soundTyre1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_01", 1.77828, 1, 75};
		soundTyre2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_02", 1.77828, 1, 75};
		soundTyre3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_03", 1.77828, 1, 75};
		soundTyre4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_04", 1.77828, 1, 75};
		soundTyre5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_05", 1.77828, 1, 75};
		soundTyre6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_06", 1.77828, 1, 75};
		soundTyre7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_07", 1.77828, 1, 75};
		soundTyre8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_08", 1.77828, 1, 75};
		soundRubber1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_01", 0.891251, 1, 75};
		soundRubber2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_02", 0.891251, 1, 75};
		soundRubber3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_03", 0.891251, 1, 75};
		soundRubber4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_04", 0.891251, 1, 75};
		soundRubber5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_05", 0.891251, 1, 75};
		soundRubber6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_06", 0.891251, 1, 75};
		soundWater1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_01", 1.41254, 1, 75};
		soundWater2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_02", 1.41254, 1, 75};
		soundWater3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_03", 1.41254, 1, 75};
		soundWater4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_04", 1.41254, 1, 75};
		soundWater5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_05", 1.41254, 1, 75};
		soundWater6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_06", 1.41254, 1, 75};
		soundWater7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_07", 1.41254, 1, 75};
		soundWater8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_08", 1.41254, 1, 75};
		soundMetalInt1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_01", 2.23872, 1, 35};
		soundMetalInt2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_02", 2.23872, 1, 35};
		soundMetalInt3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_03", 2.23872, 1, 35};
		soundMetalInt4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_04", 2.23872, 1, 35};
		soundMetalInt5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_05", 2.23872, 1, 35};
		soundMetalInt6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_06", 2.23872, 1, 35};
		soundVehiclePlateInt1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_01", 1.4, 1, 35};
		soundVehiclePlateInt2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_02", 1.4, 1, 35};
		soundVehiclePlateInt3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_03", 1.4, 1, 35};
		soundVehiclePlateInt4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_04", 1.4, 1, 35};
		soundVehiclePlateInt5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_05", 1.4, 1, 35};
		soundVehiclePlateInt6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_06", 1.4, 1, 35};
		soundVehiclePlateInt7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_07", 1.4, 1, 35};
		soundVehiclePlateInt8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_08", 1.4, 1, 35};
		soundVehiclePlateInt9[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_09", 1.4, 1, 35};
		soundVehiclePlateInt10[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_10", 1.4, 1, 35};
		soundVehiclePlateInt11[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_11", 1.4, 1, 35};
		soundVehiclePlateInt12[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_12", 1.4, 1, 35};
		soundVehiclePlateInt13[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_13", 1.4, 1, 35};
		soundVehiclePlateInt14[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_14", 1.4, 1, 35};
		soundVehiclePlateInt15[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_15", 1.4, 1, 35};
		hitArmorInt[] = {"soundVehiclePlateInt1", 0.0199, "soundVehiclePlateInt2", 0.0199, "soundVehiclePlateInt3", 0.0199, "soundVehiclePlateInt4", 0.0199, "soundVehiclePlateInt5", 0.0199, "soundVehiclePlateInt6", 0.0199, "soundVehiclePlateInt7", 0.0199, "soundVehiclePlateInt8", 0.0199, "soundVehiclePlateInt9", 0.0199, "soundVehiclePlateInt10", 0.0199, "soundVehiclePlateInt11", 0.0199, "soundVehiclePlateInt12", 0.0199, "soundVehiclePlateInt13", 0.0199, "soundVehiclePlateInt14", 0.0199, "soundVehiclePlateInt15", 0.0199, "soundVehiclePlateInt16", 0.0199, "soundVehiclePlateInt17", 0.0199, "soundVehiclePlateInt18", 0.0199, "soundVehiclePlateInt19", 0.0199, "soundVehiclePlateInt20", 0.0199, "soundVehiclePlateInt21", 0.0199, "soundVehiclePlateInt22", 0.0199, "soundVehiclePlateInt23", 0.0199, "soundVehiclePlateInt24", 0.0199, "soundVehiclePlateInt25", 0.0199, "soundVehiclePlateInt26", 0.0199, "soundVehiclePlateInt27", 0.0199, "soundVehiclePlateInt28", 0.0199, "soundVehiclePlateInt29", 0.0199, "soundVehiclePlateInt30", 0.0199, "soundVehiclePlateInt31", 0.0199, "soundVehiclePlateInt32", 0.0199, "soundVehiclePlateInt33", 0.0199, "soundVehiclePlateInt34", 0.0199, "soundVehiclePlateInt35", 0.0199, "soundVehiclePlateInt36", 0.0199, "soundVehiclePlateInt37", 0.0199, "soundVehiclePlateInt38", 0.0199, "soundVehiclePlateInt39", 0.007, "soundVehiclePlateInt40", 0.007, "soundVehiclePlateInt41", 0.007, "soundVehiclePlateInt42", 0.007, "soundVehiclePlateInt43", 0.007, "soundVehiclePlateInt44", 0.007, "soundVehiclePlateInt45", 0.007, "soundVehiclePlateInt46", 0.007, "soundVehiclePlateInt47", 0.007, "soundVehiclePlateInt48", 0.007, "soundVehiclePlateInt49", 0.007, "soundVehiclePlateInt50", 0.007, "soundVehiclePlateInt51", 0.007, "soundVehiclePlateInt52", 0.007, "soundVehiclePlateInt53", 0.007, "soundVehiclePlateInt54", 0.007, "soundVehiclePlateInt55", 0.007, "soundVehiclePlateInt56", 0.007, "soundVehiclePlateInt57", 0.007, "soundVehiclePlateInt58", 0.007, "soundVehiclePlateInt59", 0.007, "soundVehiclePlateInt60", 0.007, "soundVehiclePlateInt61", 0.007, "soundVehiclePlateInt62", 0.007, "soundVehiclePlateInt63", 0.007, "soundVehiclePlateInt64", 0.007, "soundVehiclePlateInt65", 0.007, "soundVehiclePlateInt66", 0.007, "soundVehiclePlateInt67", 0.007, "soundVehiclePlateInt68", 0.007, "soundVehiclePlateInt69", 0.007, "soundVehiclePlateInt70", 0.007, "soundVehiclePlateInt71", 0.007};
		hitMetalInt[] = {"soundMetalInt1", 0.02454, "soundMetalInt2", 0.02454, "soundMetalInt3", 0.02454, "soundMetalInt4", 0.02454, "soundMetalInt5", 0.02454, "soundMetalInt6", 0.02454, "soundMetalInt7", 0.02454, "soundMetalInt8", 0.02454, "soundMetalInt9", 0.02454, "soundMetalInt10", 0.02454, "soundMetalInt11", 0.02454, "soundMetalInt12", 0.02454, "soundMetalInt13", 0.02454, "soundMetalInt14", 0.02454, "soundMetalInt15", 0.02454, "soundMetalInt16", 0.017, "soundMetalInt17", 0.017, "soundMetalInt18", 0.017, "soundMetalInt19", 0.017, "soundMetalInt20", 0.017, "soundMetalInt21", 0.017, "soundMetalInt22", 0.017, "soundMetalInt23", 0.017, "soundMetalInt24", 0.017, "soundMetalInt25", 0.017, "soundMetalInt26", 0.017, "soundMetalInt27", 0.017, "soundMetalInt28", 0.017, "soundMetalInt29", 0.017, "soundMetalInt30", 0.017, "soundMetalInt31", 0.017, "soundMetalInt32", 0.017, "soundMetalInt33", 0.017, "soundMetalInt34", 0.017, "soundMetalInt35", 0.017, "soundMetalInt36", 0.017, "soundMetalInt37", 0.017, "soundMetalInt38", 0.017, "soundMetalInt39", 0.007, "soundMetalInt40", 0.007, "soundMetalInt41", 0.007, "soundMetalInt42", 0.007, "soundMetalInt43", 0.007, "soundMetalInt44", 0.007, "soundMetalInt45", 0.007, "soundMetalInt46", 0.007, "soundMetalInt47", 0.007, "soundMetalInt48", 0.007, "soundMetalInt49", 0.007, "soundMetalInt50", 0.007, "soundMetalInt51", 0.007, "soundMetalInt52", 0.007, "soundMetalInt53", 0.007, "soundMetalInt54", 0.007, "soundMetalInt55", 0.007, "soundMetalInt56", 0.007, "soundMetalInt57", 0.007, "soundMetalInt58", 0.007, "soundMetalInt59", 0.007, "soundMetalInt60", 0.007, "soundMetalInt61", 0.007, "soundMetalInt62", 0.007, "soundMetalInt63", 0.007, "soundMetalInt64", 0.007, "soundMetalInt65", 0.007, "soundMetalInt66", 0.007, "soundMetalInt67", 0.007, "soundMetalInt68", 0.007, "soundMetalInt69", 0.007, "soundMetalInt70", 0.007, "soundMetalInt71", 0.007};
		hitGroundSoft[] = {"soundGroundSoft1", 0.03388, "soundGroundSoft2", 0.03388, "soundGroundSoft3", 0.03388, "soundGroundSoft4", 0.03388, "soundGroundSoft5", 0.03388, "soundGroundSoft6", 0.03388, "soundGroundSoft7", 0.03388, "soundGroundSoft8", 0.03388, "soundGroundSoft9", 0.03388, "soundGroundSoft10", 0.03388, "soundGroundSoft11", 0.03388, "soundGroundSoft12", 0.03388, "soundGroundSoft13", 0.03388, "soundGroundSoft14", 0.03388, "soundGroundSoft15", 0.03388, "soundGroundSoft16", 0.03388, "soundGroundSoft17", 0.03388, "soundGroundSoft18", 0.03388, "soundGroundSoft19", 0.03388, "soundGroundSoft20", 0.03388, "soundGroundSoft21", 0.03388, "soundGroundSoft22", 0.03388, "soundGroundSoft23", 0.0457, "soundGroundSoft24", 0.0457, "soundGroundSoft25", 0.0457, "soundGroundSoft26", 0.0457, "soundGroundSoft27", 0.0457, "soundGroundSoft28", 0.0457};
		hitGroundHard[] = {"soundGroundHard1", 0.03388, "soundGroundHard2", 0.03388, "soundGroundHard3", 0.03388, "soundGroundHard4", 0.03388, "soundGroundHard5", 0.03388, "soundGroundHard6", 0.03388, "soundGroundHard7", 0.03388, "soundGroundHard8", 0.03388, "soundGroundHard9", 0.03388, "soundGroundHard10", 0.03388, "soundGroundHard11", 0.03388, "soundGroundHard12", 0.03388, "soundGroundHard13", 0.03388, "soundGroundHard14", 0.03388, "soundGroundHard15", 0.03388, "soundGroundHard16", 0.03388, "soundGroundHard17", 0.03388, "soundGroundHard18", 0.03388, "soundGroundHard19", 0.03388, "soundGroundHard20", 0.03388, "soundGroundHard21", 0.03388, "soundGroundHard22", 0.03388, "soundGroundHard23", 0.0457, "soundGroundHard24", 0.0457, "soundGroundHard25", 0.0457, "soundGroundHard26", 0.0457, "soundGroundHard27", 0.0457, "soundGroundHard28", 0.0457};
		hitMan[] = {"soundHitBody1", 0.125, "soundHitBody2", 0.125, "soundHitBody3", 0.125, "soundHitBody4", 0.125, "soundHitBody5", 0.125, "soundHitBody6", 0.125, "soundHitBody7", 0.125, "soundHitBody8", 0.125};
		hitArmor[] = {"soundVehiclePlate1", 0.0199, "soundVehiclePlate2", 0.0199, "soundVehiclePlate3", 0.0199, "soundVehiclePlate4", 0.0199, "soundVehiclePlate5", 0.0199, "soundVehiclePlate6", 0.0199, "soundVehiclePlate7", 0.0199, "soundVehiclePlate8", 0.0199, "soundVehiclePlate9", 0.0199, "soundVehiclePlate10", 0.0199, "soundVehiclePlate11", 0.0199, "soundVehiclePlate12", 0.0199, "soundVehiclePlate13", 0.0199, "soundVehiclePlate14", 0.0199, "soundVehiclePlate15", 0.0199, "soundVehiclePlate16", 0.0199, "soundVehiclePlate17", 0.0199, "soundVehiclePlate18", 0.0199, "soundVehiclePlate19", 0.0199, "soundVehiclePlate20", 0.0199, "soundVehiclePlate21", 0.0199, "soundVehiclePlate22", 0.0199, "soundVehiclePlate23", 0.0199, "soundVehiclePlate24", 0.0199, "soundVehiclePlate25", 0.0199, "soundVehiclePlate26", 0.0199, "soundVehiclePlate27", 0.0199, "soundVehiclePlate28", 0.0199, "soundVehiclePlate29", 0.0199, "soundVehiclePlate30", 0.0199, "soundVehiclePlate31", 0.0199, "soundVehiclePlate32", 0.0199, "soundVehiclePlate33", 0.0199, "soundVehiclePlate34", 0.0199, "soundVehiclePlate35", 0.0199, "soundVehiclePlate36", 0.0199, "soundVehiclePlate37", 0.0199, "soundVehiclePlate38", 0.0199, "soundVehiclePlate39", 0.007, "soundVehiclePlate40", 0.007, "soundVehiclePlate41", 0.007, "soundVehiclePlate42", 0.007, "soundVehiclePlate43", 0.007, "soundVehiclePlate44", 0.007, "soundVehiclePlate45", 0.007, "soundVehiclePlate46", 0.007, "soundVehiclePlate47", 0.007, "soundVehiclePlate48", 0.007, "soundVehiclePlate49", 0.007, "soundVehiclePlate50", 0.007, "soundVehiclePlate51", 0.007, "soundVehiclePlate52", 0.007, "soundVehiclePlate53", 0.007, "soundVehiclePlate54", 0.007, "soundVehiclePlate55", 0.007, "soundVehiclePlate56", 0.007, "soundVehiclePlate57", 0.007, "soundVehiclePlate58", 0.007, "soundVehiclePlate59", 0.007, "soundVehiclePlate60", 0.007, "soundVehiclePlate61", 0.007, "soundVehiclePlate62", 0.007, "soundVehiclePlate63", 0.007, "soundVehiclePlate64", 0.007, "soundVehiclePlate65", 0.007, "soundVehiclePlate66", 0.007, "soundVehiclePlate67", 0.007, "soundVehiclePlate68", 0.007, "soundVehiclePlate69", 0.007, "soundVehiclePlate70", 0.007, "soundVehiclePlate71", 0.007};
		hitBuilding[] = {"soundHitBuilding1", 0.0744, "soundHitBuilding2", 0.0744, "soundHitBuilding3", 0.0744, "soundHitBuilding4", 0.0744, "soundHitBuilding5", 0.0744, "soundHitBuilding6", 0.0744, "soundHitBuilding7", 0.0744, "soundHitBuilding8", 0.0744, "soundHitBuilding9", 0.01215, "soundHitBuilding10", 0.01215, "soundHitBuilding11", 0.01215, "soundHitBuilding12", 0.01215, "soundHitBuilding13", 0.01215, "soundHitBuilding14", 0.01215, "soundHitBuilding15", 0.01215, "soundHitBuilding16", 0.01215, "soundHitBuilding17", 0.01215, "soundHitBuilding18", 0.01215, "soundHitBuilding19", 0.01215, "soundHitBuilding20", 0.01215, "soundHitBuilding21", 0.01215, "soundHitBuilding22", 0.01215, "soundHitBuilding23", 0.01215, "soundHitBuilding24", 0.01215, "soundHitBuilding25", 0.01215, "soundHitBuilding26", 0.01215, "soundHitBuilding27", 0.01215, "soundHitBuilding28", 0.01215, "soundHitBuilding29", 0.01215, "soundHitBuilding30", 0.01215, "soundHitBuilding31", 0.01215, "soundHitBuilding32", 0.01215, "soundHitBuilding33", 0.01215, "soundHitBuilding34", 0.01215, "soundHitBuilding35", 0.01215, "soundHitBuilding36", 0.01215, "soundHitBuilding37", 0.01215, "soundHitBuilding38", 0.01215, "soundHitBuilding39", 0.01215, "soundHitBuilding40", 0.01215, "soundHitBuilding41", 0.01215};
		hitFoliage[] = {"soundHitFoliage1", 0.125, "soundHitFoliage2", 0.125, "soundHitFoliage3", 0.125, "soundHitFoliage4", 0.125, "soundHitFoliage5", 0.125, "soundHitFoliage6", 0.125, "soundHitFoliage7", 0.125, "soundHitFoliage8", 0.125};
		hitWood[] = {"soundWood1", 0.01596, "soundWood2", 0.01596, "soundWood3", 0.01596, "soundWood4", 0.01596, "soundWood5", 0.01596, "soundWood6", 0.01596, "soundWood7", 0.01596, "soundWood8", 0.01596, "soundWood9", 0.01596, "soundWood10", 0.01596, "soundWood11", 0.01596, "soundWood12", 0.01596, "soundWood13", 0.01596, "soundWood14", 0.01596, "soundWood15", 0.01596, "soundWood16", 0.01596, "soundWood17", 0.01596, "soundWood18", 0.01596, "soundWood19", 0.01596, "soundWood20", 0.01596, "soundWood21", 0.01596, "soundWood22", 0.01596, "soundWood23", 0.01596, "soundWood24", 0.01596, "soundWood25", 0.01596, "soundWood26", 0.01596, "soundWood27", 0.01596, "soundWood28", 0.01596, "soundWood29", 0.01596, "soundWood30", 0.01596, "soundWood31", 0.01596, "soundWood32", 0.01596, "soundWood33", 0.01596, "soundWood34", 0.01596, "soundWood35", 0.01596, "soundWood36", 0.01596, "soundWood37", 0.01596, "soundWood38", 0.01596, "soundWood39", 0.01596, "soundWood40", 0.01596, "soundWood41", 0.01596, "soundWood42", 0.01596, "soundWood43", 0.01596, "soundWood44", 0.01596, "soundWood45", 0.01596, "soundWood46", 0.01596, "soundWood47", 0.01596, "soundWood48", 0.01596, "soundWood49", 0.01596, "soundWood50", 0.01596, "soundWood51", 0.006, "soundWood52", 0.006, "soundWood53", 0.006, "soundWood54", 0.006, "soundWood55", 0.006, "soundWood56", 0.006, "soundWood58", 0.006, "soundWood59", 0.006, "soundWood60", 0.006, "soundWood62", 0.006, "soundWood63", 0.006, "soundWood64", 0.006, "soundWood65", 0.006, "soundWood66", 0.006, "soundWood67", 0.006, "soundWood68", 0.006, "soundWood69", 0.006, "soundWood70", 0.006, "soundWood72", 0.006, "soundWood74", 0.006, "soundWood75", 0.006, "soundWood76", 0.006, "soundWood77", 0.006, "soundWood78", 0.006, "soundWood79", 0.006, "soundWood80", 0.006, "soundWood81", 0.006, "soundWood82", 0.006, "soundWood83", 0.006};
		hitGlass[] = {"soundGlass1", 0.125, "soundGlass2", 0.125, "soundGlass3", 0.125, "soundGlass4", 0.125, "soundGlass5", 0.125, "soundGlass6", 0.125, "soundGlass7", 0.125, "soundGlass8", 0.125};
		hitGlassArmored[] = {"soundGlassArmored1", 0.125, "soundGlassArmored2", 0.125, "soundGlassArmored3", 0.125, "soundGlassArmored4", 0.125, "soundGlassArmored5", 0.125, "soundGlassArmored6", 0.125, "soundGlassArmored7", 0.125, "soundGlassArmored8", 0.125};
		hitConcrete[] = {"soundConcrete1", 0.0744, "soundConcrete2", 0.0744, "soundConcrete3", 0.0744, "soundConcrete4", 0.0744, "soundConcrete5", 0.0744, "soundConcrete6", 0.0744, "soundConcrete7", 0.0744, "soundConcrete8", 0.0744, "soundConcrete9", 0.01215, "soundConcrete10", 0.01215, "soundConcrete11", 0.01215, "soundConcrete12", 0.01215, "soundConcrete13", 0.01215, "soundConcrete14", 0.01215, "soundConcrete15", 0.01215, "soundConcrete16", 0.01215, "soundConcrete17", 0.01215, "soundConcrete18", 0.01215, "soundConcrete19", 0.01215, "soundConcrete20", 0.01215, "soundConcrete21", 0.01215, "soundConcrete22", 0.01215, "soundConcrete23", 0.01215, "soundConcrete24", 0.01215, "soundConcrete25", 0.01215, "soundConcrete26", 0.01215, "soundConcrete27", 0.01215, "soundConcrete28", 0.01215, "soundConcrete29", 0.01215, "soundConcrete30", 0.01215, "soundConcrete31", 0.01215, "soundConcrete32", 0.01215, "soundConcrete33", 0.01215, "soundConcrete34", 0.01215, "soundConcrete35", 0.01215, "soundConcrete36", 0.01215, "soundConcrete37", 0.01215, "soundConcrete38", 0.01215, "soundConcrete39", 0.01215, "soundConcrete40", 0.01215, "soundConcrete41", 0.01215};
		hitTyre[] = {"soundTyre1", 0.125, "soundTyre2", 0.125, "soundTyre3", 0.125, "soundTyre4", 0.125, "soundTyre5", 0.125, "soundTyre6", 0.125, "soundTyre7", 0.125, "soundTyre8", 0.125};
		hitRubber[] = {"soundRubber1", 0.125, "soundRubber2", 0.125, "soundRubber3", 0.125, "soundRubber4", 0.125, "soundRubber5", 0.125, "soundRubber6", 0.125};
		hitPlastic[] = {"soundPlastic1", 0.125, "soundPlastic2", 0.125, "soundPlastic3", 0.125, "soundPlastic4", 0.125, "soundPlastic5", 0.125, "soundPlastic6", 0.125, "soundPlastic7", 0.125, "soundPlastic8", 0.125};
		hitDefault[] = {"soundDefault1", 0.2, "soundDefault2", 0.2, "soundDefault3", 0.1, "soundDefault4", 0.1, "soundDefault5", 0.1, "soundDefault6", 0.1, "soundDefault7", 0.1, "soundDefault8", 0.1};
		hitMetal[] = {"soundMetal1", 0.0199, "soundMetal2", 0.0199, "soundMetal3", 0.0199, "soundMetal4", 0.0199, "soundMetal5", 0.0199, "soundMetal6", 0.0199, "soundMetal7", 0.0199, "soundMetal8", 0.0199, "soundMetal9", 0.0199, "soundMetal10", 0.0199, "soundMetal11", 0.0199, "soundMetal12", 0.0199, "soundMetal13", 0.0199, "soundMetal14", 0.0199, "soundMetal15", 0.0199, "soundMetal16", 0.0199, "soundMetal17", 0.0199, "soundMetal18", 0.0199, "soundMetal19", 0.0199, "soundMetal20", 0.0199, "soundMetal21", 0.0199, "soundMetal22", 0.0199, "soundMetal23", 0.0199, "soundMetal24", 0.0199, "soundMetal25", 0.0199, "soundMetal26", 0.0199, "soundMetal27", 0.0199, "soundMetal28", 0.0199, "soundMetal29", 0.0199, "soundMetal30", 0.0199, "soundMetal31", 0.0199, "soundMetal32", 0.0199, "soundMetal33", 0.0199, "soundMetal34", 0.0199, "soundMetal35", 0.0199, "soundMetal36", 0.0199, "soundMetal37", 0.0199, "soundMetal38", 0.0199, "soundMetal39", 0.007, "soundMetal40", 0.007, "soundMetal41", 0.007, "soundMetal42", 0.007, "soundMetal43", 0.007, "soundMetal44", 0.007, "soundMetal45", 0.007, "soundMetal46", 0.007, "soundMetal47", 0.007, "soundMetal48", 0.007, "soundMetal49", 0.007, "soundMetal50", 0.007, "soundMetal51", 0.007, "soundMetal52", 0.007, "soundMetal53", 0.007, "soundMetal54", 0.007, "soundMetal55", 0.007, "soundMetal56", 0.007, "soundMetal57", 0.007, "soundMetal58", 0.007, "soundMetal59", 0.007, "soundMetal60", 0.007, "soundMetal61", 0.007, "soundMetal62", 0.007, "soundMetal63", 0.007, "soundMetal64", 0.007, "soundMetal65", 0.007, "soundMetal66", 0.007, "soundMetal67", 0.007, "soundMetal68", 0.007, "soundMetal69", 0.007, "soundMetal70", 0.007, "soundMetal71", 0.007};
		hitMetalplate[] = {"soundVehiclePlate1", 0.0199, "soundVehiclePlate2", 0.0199, "soundVehiclePlate3", 0.0199, "soundVehiclePlate4", 0.0199, "soundVehiclePlate5", 0.0199, "soundVehiclePlate6", 0.0199, "soundVehiclePlate7", 0.0199, "soundVehiclePlate8", 0.0199, "soundVehiclePlate9", 0.0199, "soundVehiclePlate10", 0.0199, "soundVehiclePlate11", 0.0199, "soundVehiclePlate12", 0.0199, "soundVehiclePlate13", 0.0199, "soundVehiclePlate14", 0.0199, "soundVehiclePlate15", 0.0199, "soundVehiclePlate16", 0.0199, "soundVehiclePlate17", 0.0199, "soundVehiclePlate18", 0.0199, "soundVehiclePlate19", 0.0199, "soundVehiclePlate20", 0.0199, "soundVehiclePlate21", 0.0199, "soundVehiclePlate22", 0.0199, "soundVehiclePlate23", 0.0199, "soundVehiclePlate24", 0.0199, "soundVehiclePlate25", 0.0199, "soundVehiclePlate26", 0.0199, "soundVehiclePlate27", 0.0199, "soundVehiclePlate28", 0.0199, "soundVehiclePlate29", 0.0199, "soundVehiclePlate30", 0.0199, "soundVehiclePlate31", 0.0199, "soundVehiclePlate32", 0.0199, "soundVehiclePlate33", 0.0199, "soundVehiclePlate34", 0.0199, "soundVehiclePlate35", 0.0199, "soundVehiclePlate36", 0.0199, "soundVehiclePlate37", 0.0199, "soundVehiclePlate38", 0.0199, "soundVehiclePlate39", 0.007, "soundVehiclePlate40", 0.007, "soundVehiclePlate41", 0.007, "soundVehiclePlate42", 0.007, "soundVehiclePlate43", 0.007, "soundVehiclePlate44", 0.007, "soundVehiclePlate45", 0.007, "soundVehiclePlate46", 0.007, "soundVehiclePlate47", 0.007, "soundVehiclePlate48", 0.007, "soundVehiclePlate49", 0.007, "soundVehiclePlate50", 0.007, "soundVehiclePlate51", 0.007, "soundVehiclePlate52", 0.007, "soundVehiclePlate53", 0.007, "soundVehiclePlate54", 0.007, "soundVehiclePlate55", 0.007, "soundVehiclePlate56", 0.007, "soundVehiclePlate57", 0.007, "soundVehiclePlate58", 0.007, "soundVehiclePlate59", 0.007, "soundVehiclePlate60", 0.007, "soundVehiclePlate61", 0.007, "soundVehiclePlate62", 0.007, "soundVehiclePlate63", 0.007, "soundVehiclePlate64", 0.007, "soundVehiclePlate65", 0.007, "soundVehiclePlate66", 0.007, "soundVehiclePlate67", 0.007, "soundVehiclePlate68", 0.007, "soundVehiclePlate69", 0.007, "soundVehiclePlate70", 0.007, "soundVehiclePlate71", 0.007};
		hitWater[] = {"soundWater1", 0.125, "soundWater2", 0.125, "soundWater3", 0.125, "soundWater4", 0.125, "soundWater5", 0.125, "soundWater6", 0.125, "soundWater7", 0.125, "soundWater8", 0.125};
		soundBell1[] = {"A3\Sounds_F\ambient\objects\bell_small", 1.41254, 1, 500};
		hitBell[] = {"soundBell1", 1};
		bulletFly1[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby01", 2.23872, 1, 75};
		bulletFly2[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby02", 2.23872, 1, 75};
		bulletFly3[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby03", 2.23872, 1, 75};
		bulletFly4[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby04", 2.23872, 1, 75};
		bulletFly5[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby05", 2.23872, 1, 75};
		bulletFly6[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby06", 2.23872, 1, 75};
		bulletFly7[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby07", 2.23872, 1, 75};
		bulletFly8[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby08", 2.23872, 1, 75};
		bulletFly9[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby09", 2.23872, 1, 75};
		bulletFly10[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby10", 2.23872, 1, 75};
		bulletFly11[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby11", 2.23872, 1, 75};
		bulletFly12[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby12", 2.23872, 1, 75};
		bulletFly[] = {"bulletFly1", 0.083, "bulletFly2", 0.083, "bulletFly3", 0.083, "bulletFly4", 0.083, "bulletFly5", 0.083, "bulletFly6", 0.083, "bulletFly7", 0.083, "bulletFly8", 0.083, "bulletFly9", 0.083, "bulletFly10", 0.083, "bulletFly11", 0.083, "bulletFly12", 0.083};
		supersonicCrackNear[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_close", 3.16228, 1, 200};
		supersonicCrackFar[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_middle", 3.16228, 1, 200};
		class SuperSonicCrack
		{
			superSonicCrack[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow1", 3.16228, 1, 200};
			class SCrackForest
			{
				range[] = {0, 500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_forest1", 1, 1, 500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_forest2", 1, 1, 500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_forest3", 1, 1, 500};
				sounds[] = {"sound1", 0.333, "sound2", 0.333, "sound3", 0.333};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				trigger = "forest";
			};
			class SCrackTrees
			{
				range[] = {0, 500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_trees1", 1, 1, 500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_trees2", 1, 1, 500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_trees3", 1, 1, 500};
				sounds[] = {"sound1", 0.333, "sound2", 0.333, "sound3", 0.333};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				trigger = "trees";
			};
			class SCrackMeadow
			{
				range[] = {0, 500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow1", 1, 1, 500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow2", 1, 1, 500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow3", 1, 1, 500};
				sounds[] = {"sound1", 0.333, "sound2", 0.333, "sound3", 0.333};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				trigger = "meadow max sea";
			};
			class SCrackHouses
			{
				range[] = {0, 500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_houses1", 1, 1, 500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_houses2", 1, 1, 500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_houses3", 1, 1, 500};
				sounds[] = {"sound1", 0.333, "sound2", 0.333, "sound3", 0.333};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				trigger = "houses max interior";
			};
		};
		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitHay = "ImpactHay";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitTyre = "ImpactTyre";
			hitConcrete = "ImpactConcrete";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "ImpactEffectsSmall";
			hitGroundRed = "ImpactEffectsRed";
			hitGroundHard = "ImpactEffectsHardGround";
			hitWater = "ImpactEffectsWater";
			hitVirtual = "ImpactMetal";
		};
		class CamShakeExplode
		{
			power = 1.73205;
			duration = 0.4;
			frequency = 20;
			distance = 5.19615;
		};
		class CamShakeHit
		{
			power = 3;
			duration = 0.2;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		class CamShakePlayerFire
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		soundSetBulletFly[] = {"bulletFlyBy_SoundSet"};
		soundSetSonicCrack[] = {"bulletSonicCrack_SoundSet", "bulletSonicCrackTail_SoundSet"};
		soundGroundSoft9[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_01", 2.81838, 1, 75};
		soundGroundSoft10[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_02", 2.81838, 1, 75};
		soundGroundSoft11[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_03", 2.81838, 1, 75};
		soundGroundSoft12[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_04", 2.81838, 1, 75};
		soundGroundSoft13[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_05", 2.81838, 1, 75};
		soundGroundSoft14[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_06", 2.81838, 1, 75};
		soundGroundSoft15[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_07", 2.81838, 1, 75};
		soundGroundSoft16[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_08", 2.81838, 1, 75};
		soundGroundSoft17[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_09", 2.81838, 1, 75};
		soundGroundSoft18[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_10", 2.81838, 1, 75};
		soundGroundSoft19[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_11", 2.81838, 1, 75};
		soundGroundSoft20[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_12", 2.81838, 1, 75};
		soundGroundSoft21[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_13", 2.81838, 1, 75};
		soundGroundSoft22[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_14", 2.81838, 1, 75};
		soundGroundSoft23[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_15", 2.81838, 1, 75};
		soundGroundSoft24[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_16", 2.81838, 1, 75};
		soundGroundSoft25[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_17", 2.81838, 1, 75};
		soundGroundSoft26[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_18", 2.81838, 1, 75};
		soundGroundSoft27[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_19", 2.81838, 1, 75};
		soundGroundSoft28[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_20", 2.81838, 1, 75};
		soundGroundHard9[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_01", 2.81838, 1, 75};
		soundGroundHard10[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_02", 2.81838, 1, 75};
		soundGroundHard11[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_03", 2.81838, 1, 75};
		soundGroundHard12[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_04", 2.81838, 1, 75};
		soundGroundHard13[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_05", 2.81838, 1, 75};
		soundGroundHard14[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_06", 2.81838, 1, 75};
		soundGroundHard15[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_07", 2.81838, 1, 75};
		soundGroundHard16[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_08", 2.81838, 1, 75};
		soundGroundHard17[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_09", 2.81838, 1, 75};
		soundGroundHard18[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_10", 2.81838, 1, 75};
		soundGroundHard19[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_11", 2.81838, 1, 75};
		soundGroundHard20[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_12", 2.81838, 1, 75};
		soundGroundHard21[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_13", 2.81838, 1, 75};
		soundGroundHard22[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_14", 2.81838, 1, 75};
		soundGroundHard23[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_15", 2.81838, 1, 75};
		soundGroundHard24[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_16", 2.81838, 1, 75};
		soundGroundHard25[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_17", 2.81838, 1, 75};
		soundGroundHard26[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_18", 2.81838, 1, 75};
		soundGroundHard27[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_19", 2.81838, 1, 75};
		soundGroundHard28[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_20", 2.81838, 1, 75};
		soundMetal9[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_01", 2.81838, 1, 75};
		soundMetal10[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_02", 2.81838, 1, 75};
		soundMetal11[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_03", 2.81838, 1, 75};
		soundMetal12[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_04", 2.81838, 1, 75};
		soundMetal13[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_05", 2.81838, 1, 75};
		soundMetal14[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_06", 2.81838, 1, 75};
		soundMetal15[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_07", 2.81838, 1, 75};
		soundMetal16[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_08", 2.81838, 1, 75};
		soundMetal17[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_09", 2.81838, 1, 75};
		soundMetal18[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_10", 2.81838, 1, 75};
		soundMetal19[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_11", 2.81838, 1, 75};
		soundMetal20[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_12", 2.81838, 1, 75};
		soundMetal21[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_13", 2.81838, 1, 75};
		soundMetal22[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_14", 2.81838, 1, 75};
		soundMetal23[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_15", 2.81838, 1, 75};
		soundMetal24[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_16", 2.81838, 1, 75};
		soundMetal25[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_18", 2.81838, 1, 75};
		soundMetal26[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_19", 2.81838, 1, 75};
		soundMetal27[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_20", 2.81838, 1, 75};
		soundMetal28[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_21", 2.81838, 1, 75};
		soundMetal29[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_22", 2.81838, 1, 75};
		soundMetal30[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_23", 2.81838, 1, 75};
		soundMetal31[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_24", 2.81838, 1, 75};
		soundMetal32[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_25", 2.81838, 1, 75};
		soundMetal33[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_26", 2.81838, 1, 75};
		soundMetal34[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_27", 2.81838, 1, 75};
		soundMetal35[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_28", 2.81838, 1, 75};
		soundMetal36[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_29", 2.81838, 1, 75};
		soundMetal37[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_30", 2.81838, 1, 75};
		soundMetal38[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_31", 2.81838, 1, 75};
		soundMetal39[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_01", 2.81838, 1, 75};
		soundMetal40[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_02", 2.81838, 1, 75};
		soundMetal41[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_03", 2.81838, 1, 75};
		soundMetal42[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_04", 2.81838, 1, 75};
		soundMetal43[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_05", 2.81838, 1, 75};
		soundMetal44[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_06", 2.81838, 1, 75};
		soundMetal45[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_07", 2.81838, 1, 75};
		soundMetal46[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_08", 2.81838, 1, 75};
		soundMetal47[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_09", 2.81838, 1, 75};
		soundMetal48[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_10", 2.81838, 1, 75};
		soundMetal49[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_11", 2.81838, 1, 75};
		soundMetal50[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_12", 2.81838, 1, 75};
		soundMetal51[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_13", 2.81838, 1, 75};
		soundMetal52[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_14", 2.81838, 1, 75};
		soundMetal53[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_15", 2.81838, 1, 75};
		soundMetal54[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_16", 2.81838, 1, 75};
		soundMetal55[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_17", 2.81838, 1, 75};
		soundMetal56[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_18", 2.81838, 1, 75};
		soundMetal57[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_19", 2.81838, 1, 75};
		soundMetal58[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_01", 2.81838, 1, 75};
		soundMetal59[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_02", 2.81838, 1, 75};
		soundMetal60[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_03", 2.81838, 1, 75};
		soundMetal61[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_04", 2.81838, 1, 75};
		soundMetal62[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_05", 2.81838, 1, 75};
		soundMetal63[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_06", 2.81838, 1, 75};
		soundMetal64[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_07", 2.81838, 1, 75};
		soundMetal65[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_08", 2.81838, 1, 75};
		soundMetal66[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_09", 2.81838, 1, 75};
		soundMetal67[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_10", 2.81838, 1, 75};
		soundMetal68[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_11", 2.81838, 1, 75};
		soundMetal69[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_12", 2.81838, 1, 75};
		soundMetal70[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_13", 2.81838, 1, 75};
		soundMetal71[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_14", 2.81838, 1, 75};
		soundVehiclePlate9[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_01", 1, 1, 75};
		soundVehiclePlate10[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_02", 1, 1, 75};
		soundVehiclePlate11[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_03", 1, 1, 75};
		soundVehiclePlate12[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_04", 1, 1, 75};
		soundVehiclePlate13[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_05", 1, 1, 75};
		soundVehiclePlate14[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_06", 1, 1, 75};
		soundVehiclePlate15[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_07", 1, 1, 75};
		soundVehiclePlate16[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_08", 1, 1, 75};
		soundVehiclePlate17[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_09", 1, 1, 75};
		soundVehiclePlate18[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_10", 1, 1, 75};
		soundVehiclePlate19[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_11", 1, 1, 75};
		soundVehiclePlate20[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_12", 1, 1, 75};
		soundVehiclePlate21[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_13", 1, 1, 75};
		soundVehiclePlate22[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_14", 1, 1, 75};
		soundVehiclePlate23[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_15", 1, 1, 75};
		soundVehiclePlate24[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_16", 1, 1, 75};
		soundVehiclePlate25[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_18", 1, 1, 75};
		soundVehiclePlate26[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_19", 1, 1, 75};
		soundVehiclePlate27[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_20", 1, 1, 75};
		soundVehiclePlate28[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_21", 1, 1, 75};
		soundVehiclePlate29[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_22", 1, 1, 75};
		soundVehiclePlate30[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_23", 1, 1, 75};
		soundVehiclePlate31[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_24", 1, 1, 75};
		soundVehiclePlate32[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_25", 1, 1, 75};
		soundVehiclePlate33[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_26", 1, 1, 75};
		soundVehiclePlate34[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_27", 1, 1, 75};
		soundVehiclePlate35[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_28", 1, 1, 75};
		soundVehiclePlate36[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_29", 1, 1, 75};
		soundVehiclePlate37[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_30", 1, 1, 75};
		soundVehiclePlate38[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_31", 1, 1, 75};
		soundVehiclePlate39[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_01", 1, 1, 75};
		soundVehiclePlate40[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_02", 1, 1, 75};
		soundVehiclePlate41[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_03", 1, 1, 75};
		soundVehiclePlate42[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_04", 1, 1, 75};
		soundVehiclePlate43[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_05", 1, 1, 75};
		soundVehiclePlate44[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_06", 1, 1, 75};
		soundVehiclePlate45[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_07", 1, 1, 75};
		soundVehiclePlate46[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_08", 1, 1, 75};
		soundVehiclePlate47[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_09", 1, 1, 75};
		soundVehiclePlate48[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_10", 1, 1, 75};
		soundVehiclePlate49[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_11", 1, 1, 75};
		soundVehiclePlate50[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_12", 1, 1, 75};
		soundVehiclePlate51[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_13", 1, 1, 75};
		soundVehiclePlate52[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_14", 1, 1, 75};
		soundVehiclePlate53[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_15", 1, 1, 75};
		soundVehiclePlate54[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_16", 1, 1, 75};
		soundVehiclePlate55[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_17", 1, 1, 75};
		soundVehiclePlate56[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_18", 1, 1, 75};
		soundVehiclePlate57[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_19", 1, 1, 75};
		soundVehiclePlate58[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_01", 1, 1, 75};
		soundVehiclePlate59[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_02", 1, 1, 75};
		soundVehiclePlate60[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_03", 1, 1, 75};
		soundVehiclePlate61[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_04", 1, 1, 75};
		soundVehiclePlate62[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_05", 1, 1, 75};
		soundVehiclePlate63[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_06", 1, 1, 75};
		soundVehiclePlate64[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_07", 1, 1, 75};
		soundVehiclePlate65[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_08", 1, 1, 75};
		soundVehiclePlate66[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_09", 1, 1, 75};
		soundVehiclePlate67[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_10", 1, 1, 75};
		soundVehiclePlate68[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_11", 1, 1, 75};
		soundVehiclePlate69[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_12", 1, 1, 75};
		soundVehiclePlate70[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_13", 1, 1, 75};
		soundVehiclePlate71[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_14", 1, 1, 75};
		soundWood9[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_01", 0.501187, 1, 75};
		soundWood10[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_02", 0.501187, 1, 75};
		soundWood11[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_03", 0.501187, 1, 75};
		soundWood12[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_04", 1.77828, 1, 75};
		soundWood13[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_05", 1.41254, 1, 75};
		soundWood14[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_18", 2.23872, 0.8, 75};
		soundWood15[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_19", 2.23872, 0.8, 75};
		soundWood16[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_20", 2.23872, 0.8, 75};
		soundWood17[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_09", 2.81838, 1, 75};
		soundWood18[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_10", 2.81838, 1, 75};
		soundWood19[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_11", 2.81838, 1, 75};
		soundWood20[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_12", 2.81838, 1, 90};
		soundWood21[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_13", 2.81838, 1, 75};
		soundWood22[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_14", 2.81838, 1, 75};
		soundWood23[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_15", 2.81838, 1, 87};
		soundWood24[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_16", 2.81838, 1, 75};
		soundWood25[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_17", 2.81838, 1, 75};
		soundWood26[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_18", 2.81838, 1, 85};
		soundWood27[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_19", 2.81838, 1, 75};
		soundWood28[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_20", 2.81838, 1, 75};
		soundWood29[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_21", 2.81838, 1, 75};
		soundWood30[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_22", 2.81838, 1, 75};
		soundWood31[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_23", 0.501187, 1, 75};
		soundWood32[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_24", 0.501187, 1, 75};
		soundWood33[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_25", 0.501187, 1, 75};
		soundWood34[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_26", 0.501187, 1, 75};
		soundWood35[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_27", 2.81838, 1, 75};
		soundWood36[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_28", 2.81838, 1, 75};
		soundWood37[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_29", 2.81838, 1, 75};
		soundWood38[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_30", 2.81838, 1, 75};
		soundWood39[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_31", 2.81838, 1, 75};
		soundWood40[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_32", 2.81838, 1, 75};
		soundWood41[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_33", 2.81838, 1, 90};
		soundWood42[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_34", 2.81838, 1, 75};
		soundWood43[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_35", 2.81838, 1, 95};
		soundWood44[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_36", 2.81838, 1, 75};
		soundWood45[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_37", 2.81838, 1, 75};
		soundWood46[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_38", 1.77828, 1, 75};
		soundWood47[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_39", 1.77828, 1, 75};
		soundWood48[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_40", 2.81838, 1, 75};
		soundWood49[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_41", 2.81838, 1, 76};
		soundWood50[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_42", 2.81838, 1, 75};
		soundWood51[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_01", 2.81838, 1, 75};
		soundWood52[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_02", 2.81838, 1, 93};
		soundWood53[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_03", 2.81838, 1, 75};
		soundWood54[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_04", 2.81838, 1, 75};
		soundWood55[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_05", 2.81838, 1, 95};
		soundWood56[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_06", 2.81838, 1, 75};
		soundWood58[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_08", 2.81838, 1, 75};
		soundWood59[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_09", 2.81838, 1, 75};
		soundWood60[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_10", 2.81838, 1, 75};
		soundWood62[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_12", 2.81838, 1, 91};
		soundWood63[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_13", 2.81838, 1, 75};
		soundWood64[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_14", 2.81838, 1, 75};
		soundWood65[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_15", 2.81838, 1, 75};
		soundWood66[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_16", 2.81838, 1, 89};
		soundWood67[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_17", 2.81838, 1, 75};
		soundWood68[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_18", 2.81838, 1, 75};
		soundWood69[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_19", 2.81838, 1, 75};
		soundWood70[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_01", 2.81838, 1, 89};
		soundWood72[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_03", 2.81838, 1, 75};
		soundWood74[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_05", 2.81838, 1, 75};
		soundWood75[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_06", 2.81838, 1, 85};
		soundWood76[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_07", 2.81838, 1, 75};
		soundWood77[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_08", 2.81838, 1, 75};
		soundWood78[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_09", 1.41254, 1, 75};
		soundWood79[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_10", 1.41254, 1, 75};
		soundWood80[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_11", 2.81838, 1, 75};
		soundWood81[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_12", 2.81838, 1, 99};
		soundWood82[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_13", 2.81838, 1, 75};
		soundWood83[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_14", 2.81838, 1, 75};
		soundHitBuilding9[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_01", 2.81838, 1, 75};
		soundHitBuilding10[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_02", 2.81838, 1, 75};
		soundHitBuilding11[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_03", 2.81838, 1, 75};
		soundHitBuilding12[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_04", 2.81838, 1, 75};
		soundHitBuilding13[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_05", 2.81838, 1, 75};
		soundHitBuilding14[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_06", 2.81838, 1, 75};
		soundHitBuilding15[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_07", 2.81838, 1, 75};
		soundHitBuilding16[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_08", 2.81838, 1, 75};
		soundHitBuilding17[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_09", 2.81838, 1, 75};
		soundHitBuilding18[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_10", 2.81838, 1, 75};
		soundHitBuilding19[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_11", 2.81838, 1, 75};
		soundHitBuilding20[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_12", 2.81838, 1, 75};
		soundHitBuilding21[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_13", 2.81838, 1, 75};
		soundHitBuilding22[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_14", 2.81838, 1, 75};
		soundHitBuilding23[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_15", 2.81838, 1, 75};
		soundHitBuilding24[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_16", 2.81838, 1, 75};
		soundHitBuilding25[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_17", 2.81838, 1, 75};
		soundHitBuilding26[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_18", 2.81838, 1, 75};
		soundHitBuilding27[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_19", 2.81838, 1, 75};
		soundHitBuilding28[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_01", 2.81838, 1, 75};
		soundHitBuilding29[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_02", 2.81838, 1, 75};
		soundHitBuilding30[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_03", 2.81838, 1, 75};
		soundHitBuilding31[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_04", 2.81838, 1, 75};
		soundHitBuilding32[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_05", 2.81838, 1, 75};
		soundHitBuilding33[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_06", 2.81838, 1, 75};
		soundHitBuilding34[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_07", 2.81838, 1, 75};
		soundHitBuilding35[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_08", 2.81838, 1, 75};
		soundHitBuilding36[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_09", 2.81838, 1, 75};
		soundHitBuilding37[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_10", 2.81838, 1, 75};
		soundHitBuilding38[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_11", 2.81838, 1, 75};
		soundHitBuilding39[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_12", 2.81838, 1, 75};
		soundHitBuilding40[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_13", 2.81838, 1, 75};
		soundHitBuilding41[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_14", 2.81838, 1, 75};
		soundConcrete9[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_01", 1, 1, 75};
		soundConcrete10[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_02", 1, 1, 75};
		soundConcrete11[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_03", 1, 1, 75};
		soundConcrete12[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_04", 1, 1, 75};
		soundConcrete13[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_05", 1, 1, 75};
		soundConcrete14[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_06", 1, 1, 75};
		soundConcrete15[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_07", 1, 1, 75};
		soundConcrete16[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_08", 1, 1, 75};
		soundConcrete17[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_09", 1, 1, 75};
		soundConcrete18[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_10", 1, 1, 75};
		soundConcrete19[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_11", 1, 1, 75};
		soundConcrete20[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_12", 1, 1, 75};
		soundConcrete21[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_13", 1, 1, 75};
		soundConcrete22[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_14", 1, 1, 75};
		soundConcrete23[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_15", 1, 1, 75};
		soundConcrete24[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_16", 1, 1, 75};
		soundConcrete25[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_17", 1, 1, 75};
		soundConcrete26[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_18", 1, 1, 75};
		soundConcrete27[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_19", 1, 1, 75};
		soundConcrete28[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_01", 1, 1, 75};
		soundConcrete29[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_02", 1, 1, 75};
		soundConcrete30[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_03", 1, 1, 75};
		soundConcrete31[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_04", 1, 1, 75};
		soundConcrete32[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_05", 1, 1, 75};
		soundConcrete33[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_06", 1, 1, 75};
		soundConcrete34[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_07", 1, 1, 75};
		soundConcrete35[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_08", 1, 1, 75};
		soundConcrete36[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_09", 1, 1, 75};
		soundConcrete37[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_10", 1, 1, 75};
		soundConcrete38[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_11", 1, 1, 75};
		soundConcrete39[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_12", 1, 1, 75};
		soundConcrete40[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_13", 1, 1, 75};
		soundConcrete41[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_14", 1, 1, 75};
		soundMetalInt7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_07", 1.12202, 1, 35};
		soundMetalInt8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_08", 1.12202, 1, 35};
		soundMetalInt9[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_01", 1.41254, 1, 35};
		soundMetalInt10[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_02", 1.41254, 1, 35};
		soundMetalInt11[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_03", 1.41254, 1, 35};
		soundMetalInt12[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_04", 1.41254, 1, 35};
		soundMetalInt13[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_05", 1.41254, 1, 35};
		soundMetalInt14[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_06", 1.41254, 1, 35};
		soundMetalInt15[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_07", 1.41254, 1, 35};
		soundMetalInt16[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_08", 1.41254, 1, 35};
		soundMetalInt17[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_09", 1.41254, 1, 35};
		soundMetalInt18[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_10", 1.41254, 1, 35};
		soundMetalInt19[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_11", 1.41254, 1, 35};
		soundMetalInt20[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_12", 1.41254, 1, 35};
		soundMetalInt21[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_13", 1.41254, 1, 35};
		soundMetalInt22[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_14", 1.41254, 1, 35};
		soundMetalInt23[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_15", 1.41254, 1, 35};
		soundMetalInt24[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_16", 1.41254, 1, 35};
		soundMetalInt25[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_18", 1.41254, 1, 35};
		soundMetalInt26[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_19", 1.41254, 1, 35};
		soundMetalInt27[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_20", 1.41254, 1, 35};
		soundMetalInt28[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_21", 1.41254, 1, 35};
		soundMetalInt29[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_22", 1.41254, 1, 35};
		soundMetalInt30[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_23", 1.41254, 1, 35};
		soundMetalInt31[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_24", 1.41254, 1, 35};
		soundMetalInt32[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_25", 1.41254, 1, 35};
		soundMetalInt33[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_26", 1.41254, 1, 35};
		soundMetalInt34[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_27", 1.41254, 1, 35};
		soundMetalInt35[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_28", 1.41254, 1, 35};
		soundMetalInt36[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_29", 1.41254, 1, 35};
		soundMetalInt37[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_30", 1.41254, 1, 35};
		soundMetalInt38[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_31", 1.41254, 1, 35};
		soundMetalInt39[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_01", 1, 1, 35};
		soundMetalInt40[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_02", 1, 1, 35};
		soundMetalInt41[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_03", 1, 1, 35};
		soundMetalInt42[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_04", 1, 1, 35};
		soundMetalInt43[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_05", 1, 1, 35};
		soundMetalInt44[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_06", 1, 1, 35};
		soundMetalInt45[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_07", 1, 1, 35};
		soundMetalInt46[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_08", 1, 1, 35};
		soundMetalInt47[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_09", 1, 1, 35};
		soundMetalInt48[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_10", 1, 1, 35};
		soundMetalInt49[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_11", 1, 1, 35};
		soundMetalInt50[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_12", 1, 1, 35};
		soundMetalInt51[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_13", 1, 1, 35};
		soundMetalInt52[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_14", 1, 1, 35};
		soundMetalInt53[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_15", 1, 1, 35};
		soundMetalInt54[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_16", 1, 1, 35};
		soundMetalInt55[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_17", 1, 1, 35};
		soundMetalInt56[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_18", 1, 1, 35};
		soundMetalInt57[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_19", 1, 1, 35};
		soundMetalInt58[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_01", "", 1, 35};
		soundMetalInt59[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_02", "", 1, 35};
		soundMetalInt60[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_03", "", 1, 35};
		soundMetalInt61[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_04", "", 1, 35};
		soundMetalInt62[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_05", "", 1, 35};
		soundMetalInt63[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_06", "", 1, 35};
		soundMetalInt64[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_07", "", 1, 35};
		soundMetalInt65[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_08", "", 1, 35};
		soundMetalInt66[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_09", "", 1, 35};
		soundMetalInt67[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_10", "", 1, 35};
		soundMetalInt68[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_11", "", 1, 35};
		soundMetalInt69[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_12", "", 1, 35};
		soundMetalInt70[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_13", "", 1, 35};
		soundMetalInt71[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_14", "", 1, 35};
		soundVehiclePlateInt16[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_08", 1.2, 1, 35};
		soundVehiclePlateInt17[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_09", 1.2, 1, 35};
		soundVehiclePlateInt18[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_10", 1.2, 1, 35};
		soundVehiclePlateInt19[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_11", 1.2, 1, 35};
		soundVehiclePlateInt20[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_12", 1.2, 1, 35};
		soundVehiclePlateInt21[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_13", 1.2, 1, 35};
		soundVehiclePlateInt22[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_14", 1.2, 1, 35};
		soundVehiclePlateInt23[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_15", 1.2, 1, 35};
		soundVehiclePlateInt24[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_16", 1.2, 1, 35};
		soundVehiclePlateInt25[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_18", 1.2, 1, 35};
		soundVehiclePlateInt26[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_19", 1.2, 1, 35};
		soundVehiclePlateInt27[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_20", 1.2, 1, 35};
		soundVehiclePlateInt28[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_21", 1.2, 1, 35};
		soundVehiclePlateInt29[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_22", 1.2, 1, 35};
		soundVehiclePlateInt30[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_23", 1.2, 1, 35};
		soundVehiclePlateInt31[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_24", 1.2, 1, 35};
		soundVehiclePlateInt32[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_25", 1.2, 1, 35};
		soundVehiclePlateInt33[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_26", 1.2, 1, 35};
		soundVehiclePlateInt34[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_27", 1.2, 1, 35};
		soundVehiclePlateInt35[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_28", 1.2, 1, 35};
		soundVehiclePlateInt36[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_29", 1.2, 1, 35};
		soundVehiclePlateInt37[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_30", 1.2, 1, 35};
		soundVehiclePlateInt38[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_31", 1.2, 1, 35};
		soundVehiclePlateInt39[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_01", 1.2, 1, 35};
		soundVehiclePlateInt40[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_02", 1.2, 1, 35};
		soundVehiclePlateInt41[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_03", 1.2, 1, 35};
		soundVehiclePlateInt42[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_04", 1.2, 1, 35};
		soundVehiclePlateInt43[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_05", 1.2, 1, 35};
		soundVehiclePlateInt44[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_06", 1.2, 1, 35};
		soundVehiclePlateInt45[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_07", 1.2, 1, 35};
		soundVehiclePlateInt46[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_08", 1.2, 1, 35};
		soundVehiclePlateInt47[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_09", 1.2, 1, 35};
		soundVehiclePlateInt48[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_10", 1.2, 1, 35};
		soundVehiclePlateInt49[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_11", 1.2, 1, 35};
		soundVehiclePlateInt50[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_12", 1.2, 1, 35};
		soundVehiclePlateInt51[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_13", 1.2, 1, 35};
		soundVehiclePlateInt52[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_14", 1.2, 1, 35};
		soundVehiclePlateInt53[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_15", 1.2, 1, 35};
		soundVehiclePlateInt54[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_16", 1.2, 1, 35};
		soundVehiclePlateInt55[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_17", 1.2, 1, 35};
		soundVehiclePlateInt56[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_18", 1.2, 1, 35};
		soundVehiclePlateInt57[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_19", 1.2, 1, 35};
		soundVehiclePlateInt58[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_01", 1.2, 1, 35};
		soundVehiclePlateInt59[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_02", 1.2, 1, 35};
		soundVehiclePlateInt60[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_03", 1.2, 1, 35};
		soundVehiclePlateInt61[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_04", 1.2, 1, 35};
		soundVehiclePlateInt62[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_05", 1.2, 1, 35};
		soundVehiclePlateInt63[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_06", 1.2, 1, 35};
		soundVehiclePlateInt64[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_07", 1.2, 1, 35};
		soundVehiclePlateInt65[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_08", 1.2, 1, 35};
		soundVehiclePlateInt66[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_09", 1.2, 1, 35};
		soundVehiclePlateInt67[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_10", 1.2, 1, 35};
		soundVehiclePlateInt68[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_11", 1.2, 1, 35};
		soundVehiclePlateInt69[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_12", 1.2, 1, 35};
		soundVehiclePlateInt70[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_13", 1.2, 1, 35};
		soundVehiclePlateInt71[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_14", 1.2, 1, 35};
	};
	class ShellBase: ShellCore
	{
		supersonicCrackNear[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_close", 0.316228, 1, 50};
		supersonicCrackFar[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_50meters", 0.223872, 1, 150};
		CraterEffects = "HEShellCrater";
		CraterWaterEffects = "ImpactEffectsWaterHE";
		ExplosionEffects = "HEShellExplosion";
		visibleFire = 64;
		audibleFire = 250;
		dangerRadiusHit = -1;
		suppressionRadiusHit = 30;
		timeToLive = 360;
		muzzleEffect = "";
		caliber = 34;
		deflecting = 10;
		deflectionDirDistribution = 0.39;
		penetrationDirDistribution = 0.26;
		whistleOnFire = 2;
		aiAmmoUsageFlags = "64 + 128 + 256";
		class HitEffects
		{
			hitWater = "ImpactEffectsWaterRocket";
		};
		soundFakeFall0[] = {"a3\Sounds_F\weapons\falling_bomb\fall_01", 3.16228, 1, 1000};
		soundFakeFall1[] = {"a3\Sounds_F\weapons\falling_bomb\fall_02", 3.16228, 1, 1000};
		soundFakeFall2[] = {"a3\Sounds_F\weapons\falling_bomb\fall_03", 3.16228, 1, 1000};
		soundFakeFall3[] = {"a3\Sounds_F\weapons\falling_bomb\fall_04", 3.16228, 1, 1000};
		soundFakeFall[] = {"soundFakeFall0", 0.25, "soundFakeFall1", 0.25, "soundFakeFall2", 0.25, "soundFakeFall3", 0.25};
		soundSetSonicCrack[] = {"bulletSonicCrack_SoundSet", "bulletSonicCrackTail_SoundSet"};
	};
	class ammo_Penetrator_Base: ShellBase
	{
		model = "\A3\weapons_f\empty";
		caliber = 40;
		warheadName = "HEAT";
		hit = 300;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		typicalSpeed = 1000;
		timeToLive = 0.2;
		simulationStep = 0.05;
		airFriction = -0.28;
		deflecting = 0;
		deflectionDirDistribution = 0;
		penetrationDirDistribution = 0;
		aiAmmoUsageFlags = "128 + 512";
		dangerRadiusHit = 60;
		suppressionRadiusHit = 30;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactMetalSabotSmall";
			hitGlassArmored = "ImpactMetalSabotSmall";
			hitWood = "ImpactMetalSabotSmall";
			hitHay = "ImpactMetalSabotSmall";
			hitMetal = "ImpactMetalSabotSmall";
			hitMetalPlate = "ImpactMetalSabotSmall";
			hitBuilding = "ImpactMetalSabotSmall";
			hitPlastic = "ImpactMetalSabotSmall";
			hitRubber = "ImpactMetalSabotSmall";
			hitTyre = "ImpactMetalSabotSmall";
			hitConcrete = "ImpactMetalSabotSmall";
			hitMan = "ImpactMetalSabotSmall";
			hitGroundSoft = "ImpactMetalSabotSmall";
			hitGroundRed = "ImpactMetalSabotSmall";
			hitGroundHard = "ImpactMetalSabotSmall";
			hitWater = "ImpactEffectsWater";
			default_mat = "ImpactMetalSabotSmall";
		};
		whistleOnFire = 1;
		whistleDist = 14;
	};
	class ShotDeployBase: ShotDeployCore
	{
		model = "\A3\Weapons_F\Ammo\shell.p3d";
	};
	class SubmunitionBase: SubmunitionCore
	{
		model = "\A3\Weapons_F\Ammo\shell.p3d";
	};
	class SubmunitionBullet: SubmunitionBase
	{
		explosive = 0;
		triggerTime = 1;
		submunitionConeAngle = 0;
		submunitionCount = 1;
		submunitionAmmo = "BulletBase";
		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitHay = "ImpactHay";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitTyre = "ImpactTyre";
			hitConcrete = "ImpactConcrete";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "ImpactEffectsSmall";
			hitGroundRed = "ImpactEffectsRed";
			hitGroundHard = "ImpactEffectsHardGround";
			hitWater = "ImpactEffectsWater";
			hitVirtual = "ImpactMetal";
		};
	};
	class MissileBase: MissileCore
	{
		manualControl = 0;
		maneuvrability = 20;
		maxSpeed = 500;
		simulationStep = 0.01;
		airFriction = 0.2;
		sideAirFriction = 0.001;
		maxControlRange = 4000;
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 2000};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 2000};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 2000};
		multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
		explosionSoundEffect = "DefaultExplosion";
		soundFly[] = {"", 1, 1, 400};
		soundEngine[] = {"", 1, 1, 50};
		supersonicCrackNear[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_close", 0.398107, 1, 20};
		supersonicCrackFar[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_50meters", 0.316228, 1, 50};
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		muzzleEffect = "BIS_fnc_effectFiredRocket";
		effectsMissile = "missile4";
		deflecting = 0;
		weaponLockSystem = "2 + 16";
		cmImmunity = 0.9;
		dangerRadiusHit = -1;
		suppressionRadiusHit = 30;
		class HitEffects
		{
			hitWater = "ImpactEffectsWaterRocket";
		};
		class Components
		{
		};
		maverickWeaponIndexOffset = 0;
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 0;
		tBody = 0;
		class EventHandlers: EventHandlers
		{
			class RHS_APS_FiredEH
			{
				fired = "_this spawn rhs_fnc_aps_missileFired";
			};
		};
	};
	class ammo_Missile_CruiseBase: MissileBase
	{
		model = "\A3\weapons_f\empty";
		proxyShape = "\A3\weapons_f\empty";
		hit = 6000;
		indirectHit = 2000;
		indirectHitRange = 30;
		explosive = 0.8;
		warheadName = "HE";
		simulationStep = 0.002;
		timeToLive = 205;
		initTime = 0.3;
		thrustTime = 200;
		thrust = 35;
		maxSpeed = 194.444;
		maneuvrability = 16;
		maneuvDependsOnSpeedCoef = 0.4;
		fuseDistance = 100;
		trackLead = 0.5;
		trackOversteer = 1.2;
		airFriction = 0.45;
		sideAirFriction = 0.5;
		cost = 5000;
		aiAmmoUsageFlags = "128 + 512";
		dangerRadiusHit = 2000;
		suppressionRadiusHit = 200;
		audibleFire = 64;
		visibleFire = 64;
		visibleFireTime = 20;
		craterEffects = "HeavyBombCrater";
		explosionEffects = "HeavyBombExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "CruiseMissile";
		muzzleEffect = "BIS_fnc_effectFiredCruiseMissile";
		whistleDist = 64;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2", 1.58489, 1.8, 1000};
		soundEngine[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2", 1.58489, 1.8, 1000};
		soundSetExplosion[] = {"BombsHeavy_Exp_SoundSet", "BombsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		airLock = 0;
		lockType = 0;
		weaponLockSystem = 16;
		cmImmunity = 1;
		cameraViewAvailable = 1;
		autoSeekTarget = 0;
		lockSeekRadius = 1500;
		missileLockCone = 360;
		missileKeepLockedCone = 360;
		missileLockMaxSpeed = 1;
		missileLockMaxDistance = 32000;
		missileLockMinDistance = 50;
		flightProfiles[] = {"Cruise"};
		class Cruise
		{
			preferredFlightAltitude = 100;
			lockDistanceToTarget = 300;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
						class AirTarget
						{
							minRange = 32000;
							maxRange = 32000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 32000;
							maxRange = 32000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 1;
					};
				};
			};
		};
		class CamShakeExplode
		{
			power = 46;
			duration = 3;
			frequency = 20;
			distance = 361.326;
		};
		class CamShakeHit
		{
			power = 230;
			duration = 0.8;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.89432;
			duration = 3;
			frequency = 20;
			distance = 121.326;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class ammo_Missile_CannonLaunchedBase: MissileBase
	{
		model = "\A3\weapons_f\empty";
		proxyShape = "\A3\weapons_f\empty";
		hit = 750;
		indirectHit = 15;
		indirectHitRange = 4.5;
		explosive = 0.4;
		warheadName = "HE";
		simulationStep = 0.002;
		timeToLive = 75;
		initTime = 0;
		thrustTime = 5;
		thrust = 60;
		maxSpeed = 280;
		maneuvrability = 3;
		fuseDistance = 50;
		trackLead = 0.95;
		trackOversteer = 1.4;
		airFriction = 0.05;
		sideAirFriction = 0.1;
		cost = 500;
		aiAmmoUsageFlags = "128 + 512";
		dangerRadiusHit = 1000;
		suppressionRadiusHit = 120;
		craterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "missile2";
		muzzleEffect = "";
		whistleDist = 4;
		lockType = 1;
		manualControl = 1;
		maxControlRange = 5000;
		manualControlOffset = 100;
		missileManualControlCone = 90;
		weaponLockSystem = 16;
		cmImmunity = 1;
		cameraViewAvailable = 1;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class AIManualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 35;
						angleRangeHorizontal = 3;
						angleRangeVertical = 3;
						maxTrackableATL = 50;
					};
				};
			};
		};
		class CamShakeExplode
		{
			power = 11;
			duration = 1.4;
			frequency = 20;
			distance = 91.3296;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.78316;
			duration = 1.6;
			frequency = 20;
			distance = 61.9677;
		};
		class CamShakePlayerFire
		{
			power = 3;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class GrenadeBase: GrenadeCore
	{
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_1", 3.16228, 1, 1400};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_2", 3.16228, 1, 1400};
		soundHit3[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_3", 3.16228, 1, 1400};
		soundHit4[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_4", 3.16228, 1, 1400};
		soundHit5[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_5", 3.16228, 1, 1400};
		soundHit6[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_6", 3.16228, 1, 1400};
		multiSoundHit[] = {"soundHit1", 0.2, "soundHit2", 0.2, "soundHit3", 0.2, "soundHit4", 0.1, "soundHit5", 0.15, "soundHit6", 0.15};
		supersonicCrackNear[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_close", 0.316228, 1, 50};
		supersonicCrackFar[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_50meters", 0.223872, 1, 75};
		explosionSoundEffect = "DefaultExplosion";
		CraterEffects = "GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
		muzzleEffect = "";
		explosionForceCoef = 4;
		shadow = 1;
	};
	class Grenade: Default
	{
		model = "\A3\Weapons_f\ammo\Handgrenade";
		hit = 10;
		indirectHit = 8;
		indirectHitRange = 6;
		explosive = 1;
		explosionEffectsRadius = 5;
		typicalspeed = 60;
		deflecting = 15;
		cost = 40;
		simulation = "shotGrenade";
		simulationStep = 0.05;
		shadow = 1;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_01", 2.51189, 1, 1500};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_02", 2.51189, 1, 1500};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_03", 2.51189, 1, 1500};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_04", 2.51189, 1, 1500};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		soundImpactSoft1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_1", 1.41254, 1, 45};
		soundImpactSoft2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_2", 1.41254, 1, 45};
		soundImpactSoft3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_3", 1.41254, 1, 45};
		soundImpactSoft4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_4", 1.41254, 1, 45};
		soundImpactSoft5[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_5", 1.41254, 1, 45};
		soundImpactSoft6[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_6", 1.41254, 1, 45};
		soundImpactSoft7[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_7", 1.41254, 1, 45};
		soundImpactHard1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_1", 1.41254, 1, 65};
		soundImpactHard2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_2", 1.41254, 1, 65};
		soundImpactHard3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_3", 1.41254, 1, 65};
		soundImpactHard4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_4", 1.41254, 1, 65};
		soundImpactHard5[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_5", 1.41254, 1, 65};
		soundImpactHard6[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_6", 1.41254, 1, 65};
		soundImpactHard7[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_7", 1.41254, 1, 65};
		soundImpactIron1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_1", 1.25893, 1, 95};
		soundImpactIron2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_2", 1.25893, 1, 95};
		soundImpactIron3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_3", 1.25893, 1, 95};
		soundImpactIron4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_4", 1.25893, 1, 95};
		soundImpactIron5[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_5", 1.25893, 1, 95};
		soundImpactWoodExt1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_1", 1.41254, 1, 75};
		soundImpactWoodExt2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_2", 1.41254, 1, 75};
		soundImpactWoodExt3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_3", 1.41254, 1, 75};
		soundImpactWoodExt4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_4", 1.41254, 1, 75};
		soundImpactWater1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_1", 1.41254, 1, 55};
		soundImpactWater2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_2", 1.41254, 1, 55};
		soundImpactWater3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_3", 1.41254, 1, 55};
		impactGroundSoft[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1};
		impactGroundHard[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
		impactIron[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
		impactArmor[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
		impactBuilding[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
		impactFoliage[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1};
		impactWood[] = {"soundImpactWoodExt1", 0.25, "soundImpactWoodExt2", 0.25, "soundImpactWoodExt3", 0.25, "soundImpactWoodExt4", 0.25};
		impactGlass[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
		impactGlassArmored[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
		impactConcrete[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
		impactTyre[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1};
		impactRubber[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1};
		impactPlastic[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1};
		impactDefault[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
		impactMetal[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
		impactMetalplate[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
		impactWater[] = {"soundImpactWater1", 0.35, "soundImpactWater2", 0.35, "soundImpactWater3", 0.3};
		soundFly[] = {"", 0.1, 1, 20};
		soundEngine[] = {"", 1, 1};
		explosionSoundEffect = "DefaultExplosion";
		CraterEffects = "GrenadeCrater";
		CraterWaterEffects = "ImpactEffectsWaterExplosion";
		explosionEffects = "GrenadeExplosion";
		visibleFire = 1;
		audibleFire = 0.25;
		visibleFireTime = 0;
		whistleDist = 28;
		explosionTime = 5;
		timeToLive = 6;
		class HitEffects
		{
			hitWater = "ImpactEffectsWaterRocket";
		};
		class CamShakeExplode
		{
			power = 6;
			duration = 1;
			frequency = 20;
			distance = 99.8178;
		};
		SoundSetExplosion[] = {"GrenadeHe_Exp_SoundSet", "GrenadeHe_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class ammo_Bomb_LaserGuidedBase: LaserBombCore
	{
		model = "\A3\weapons_f\empty";
		proxyShape = "\A3\weapons_f\empty";
		hit = 5000;
		indirectHit = 1100;
		indirectHitRange = 12;
		maneuvrability = 10;
		fuseDistance = 50;
		trackLead = 0.95;
		trackOversteer = 1;
		airFriction = 0.06;
		sideAirFriction = 0.12;
		aiAmmoUsageFlags = "128 + 512";
		dangerRadiusHit = 1000;
		suppressionRadiusHit = 120;
		craterEffects = "BombCrater";
		explosionEffects = "BombExplosion";
		explosionSoundEffect = "DefaultExplosion";
		explosionTime = 2;
		multiSoundHit[] = {"soundHit1", 0.2, "soundHit2", 0.2, "soundHit3", 0.2, "soundHit4", 0.2, "soundHit5", 0.2};
		soundHit1[] = {"\A3\Sounds_F\weapons\Explosion\expl_big_1", 2.51189, 1, 2400};
		soundHit2[] = {"\A3\Sounds_F\weapons\Explosion\expl_big_2", 2.51189, 1, 2400};
		soundHit3[] = {"\A3\Sounds_F\weapons\Explosion\expl_big_3", 2.51189, 1, 2400};
		soundHit4[] = {"\A3\Sounds_F\weapons\Explosion\expl_shell_1", 2.51189, 1, 2400};
		soundHit5[] = {"\A3\Sounds_F\weapons\Explosion\expl_shell_2", 2.51189, 1, 2400};
		whistleDist = 24;
		missileLockCone = 120;
		missileKeepLockedCone = 120;
		missileLockMaxDistance = 5000;
		missileLockMinDistance = 100;
		missileLockMaxSpeed = 30;
		autoSeekTarget = 1;
		lockSeekRadius = 500;
		weaponLockSystem = 4;
		cmImmunity = 0.3;
		flightProfiles[] = {"LoalAltitude"};
		class LoalAltitude
		{
			lockSeekAltitude = 500;
		};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class NVSensorComponent: SensorTemplateNV
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 5000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 30;
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 30;
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
					};
				};
			};
		};
	};
	class RocketBase: RocketCore
	{
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F.p3d";
		hit = 500;
		indirectHit = 150;
		indirectHitRange = 2;
		dangerRadiusHit = -1;
		suppressionRadiusHit = 30;
		soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_02", 2.51189, 1, 2500};
		explosionSoundEffect = "DefaultExplosion";
		soundFly[] = {"", 1, 1, 400};
		soundEngine[] = {"", 1, 1, 20};
		supersonicCrackNear[] = {"", 1, 1, 50};
		supersonicCrackFar[] = {"", 1, 1, 150};
		maxSpeed = 1;
		initTime = 0;
		thrustTime = 0.2;
		thrust = 2000;
		CraterEffects = "HERocketCrater";
		explosionEffects = "HERocketExplosion";
		muzzleEffect = "BIS_fnc_effectFiredRocket";
		effectsMissile = "missile1";
		class HitEffects
		{
			hitWater = "ImpactEffectsWaterRocket";
		};
		airFriction = 0.1;
		sideAirFriction = 0.001;
		class EventHandlers: EventHandlers
		{
			class RHS_APS_FiredEH
			{
				fired = "_this spawn rhs_fnc_aps_missileFired";
			};
		};
	};
	class ShotgunBase: ShotgunCore
	{
		waterEffectOffset = -0.8;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
		model = "\A3\Weapons_f\ammo\shell";
		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitHay = "ImpactHay";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitConcrete = "ImpactConcrete";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "ImpactEffectsSmall";
			hitGroundRed = "ImpactEffectsRed";
			hitGroundHard = "ImpactEffectsHardGround";
			hitWater = "ImpactEffectsWater";
			hitVirtual = "ImpactMetal";
		};
	};
	class FuelExplosion: Default
	{
		hit = 100;
		indirectHit = 100;
		indirectHitRange = 2.5;
		model = "";
		simulation = "";
		cost = 1;
		SoundSetExplosion[] = {"ExplosiveCharge_Exp_SoundSet", "ExplosiveCharge_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		explosionSoundEffect = "DefaultExplosion";
		soundFly[] = {"", 1, 1};
		soundEngine[] = {"", 1, 4};
		explosionEffects = "VehicleExplosionEffects";
	};
	class FuelExplosionBig: FuelExplosion
	{
		explosionEffects = "VehicleExplosionEffectsBig";
	};
	class HelicopterExploSmall: ShellBase
	{
		hit = 2500;
		indirectHit = 500;
		indirectHitRange = 5;
		typicalSpeed = 100;
		explosive = 1;
		cost = 300;
		model = "\A3\Weapons_f\empty";
		airFriction = 0;
		timeToLive = 1;
		explosionTime = 0.001;
		soundFly[] = {"", 1, 1};
		soundEngine[] = {"", 1, 4};
		explosionEffects = "HelicopterExplosionEffects";
		SoundSetExplosion[] = {"SmallIED_Exp_SoundSet", "SmallIED_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class HelicopterExploBig: HelicopterExploSmall
	{
		hit = 10000;
		indirectHit = 200;
		indirectHitRange = 7.5;
		explosionEffects = "HelicopterExplosionEffects2";
		explosionSoundEffect = "DefaultExplosion";
		SoundSetExplosion[] = {"BigIED_Exp_SoundSet", "BigIED_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class SmallSecondary: HelicopterExploSmall
	{
		hit = 5;
		indirectHit = 2;
		indirectHitRange = 5;
		explosionEffects = "SencondaryExplosion";
		craterEffects = "SecondaryCrater";
		SoundSetExplosion[] = {"ExplosiveCharge_Exp_SoundSet", "ExplosiveCharge_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		explosionSoundEffect = "DefaultExplosion";
	};
	class Laserbeam: Default
	{
		hit = 500;
		indirectHit = 150;
		indirectHitRange = 2.5;
		model = "\A3\weapons_f\empty";
		simulation = "laserDesignate";
		simulationStep = 0.1;
		cost = 5000;
		timeToLive = 0;
		soundHit[] = {"", 19.9526, 1, 1500};
		soundFly[] = {"", 0.0001, 4};
		maxSpeed = 350;
		airLock = 1;
		manualControl = 1;
		maxControlRange = 0;
		initTime = 0;
		maneuvrability = 0;
	};
	class B_556x45_Ball: BulletBase
	{
		airLock = 1;
		hit = 9;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 1;
		typicalSpeed = 920;
		airFriction = -0.0012;
		waterFriction = -0.3;
		caliber = 0.869565;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		audibleFire = 35;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		aiAmmoUsageFlags = 64;
		class CamShakeExplode
		{
			power = 2.23607;
			duration = 0.4;
			frequency = 20;
			distance = 6.7082;
		};
		class CamShakeHit
		{
			power = 5;
			duration = 0.2;
			frequency = 20;
			distance = 1;
		};
	};
	class B_556x45_Ball_Tracer_Red: B_556x45_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly = 0;
	};
	class B_556x45_Ball_Tracer_Green: B_556x45_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		nvgOnly = 0;
	};
	class B_556x45_Ball_Tracer_Yellow: B_556x45_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		nvgOnly = 0;
	};
	class B_556x45_dual: B_556x45_Ball
	{
		cartridge = "FxCartridge_65";
		audibleFire = 20;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
		typicalSpeed = 270;
		airFriction = -0.02;
		waterFriction = -0.01;
		effectFly = "AmmoUnderwater";
		nvgOnly = 1;
		aiAmmoUsageFlags = "64 + 32";
	};
	class B_56x15_dual: BulletBase
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 2;
		caliber = 2;
		deflecting = 25;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 0.5;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 1;
		cartridge = "FxCartridge_9mm";
		audibleFire = 20;
		waterFriction = -0.014;
		airFriction = -0.0018;
		aiAmmoUsageFlags = 64;
	};
	class B_65x39_Caseless: BulletBase
	{
		hit = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "";
		aiAmmoUsageFlags = 64;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		cost = 1.2;
		airLock = 1;
		typicalSpeed = 820;
		caliber = 1;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		airFriction = -0.0009;
		class CamShakeExplode
		{
			power = 2.44949;
			duration = 0.4;
			frequency = 20;
			distance = 7.34847;
		};
		class CamShakeHit
		{
			power = 6;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
	};
	class B_65x39_Caseless_green: B_65x39_Caseless
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_65x39_Caseless_yellow: B_65x39_Caseless
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_65x39_Case: B_65x39_Caseless
	{
		cartridge = "FxCartridge_65";
	};
	class B_65x39_Case_green: B_65x39_Case
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_65x39_Case_yellow: B_65x39_Case
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_65x39_Minigun_Caseless: SubmunitionBullet
	{
		hit = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		caliber = 3.2;
		deflecting = 25;
		explosive = 0;
		triggerTime = 0.1;
		submunitionConeAngle = 0;
		submunitionCount = 1;
		submunitionAmmo = "B_65x39_Minigun_Caseless_Red_splash";
		cartridge = "";
		visibleFire = 5;
		audibleFire = 60;
		cost = 1.2;
		airLock = 1;
		typicalSpeed = 820;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		airFriction = -0.0009;
		class CamShakeExplode
		{
			power = 2.44949;
			duration = 0.4;
			frequency = 20;
			distance = 7.34847;
		};
		class CamShakeHit
		{
			power = 6;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
	};
	class B_65x39_Minigun_Caseless_Red_splash: B_65x39_Caseless
	{
		hit = 10;
		indirectHit = 1;
		indirectHitRange = 2;
		caliber = 3.2;
		deflecting = 25;
		fuseDistance = 12;
		soundSetSonicCrack[] = {"BulletSonicCrack_Gatling_SoundSet"};
	};
	class B_65x39_Minigun_Caseless_Yellow_splash: B_65x39_Minigun_Caseless_Red_splash
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_65x39_Minigun_Caseless_Green_splash: B_65x39_Minigun_Caseless_Red_splash
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_762x51_Ball: BulletBase
	{
		hit = 11.6;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_762";
		visibleFire = 3;
		audibleFire = 45;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		cost = 1.2;
		airLock = 1;
		typicalSpeed = 800;
		caliber = 1.6;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 0.6;
		tracerStartTime = 0.0075;
		tracerEndTime = 5;
		airFriction = -0.001;
		class CamShakeExplode
		{
			power = 2.82843;
			duration = 0.6;
			frequency = 20;
			distance = 8.48528;
		};
		class CamShakeHit
		{
			power = 5;
			duration = 0.2;
			frequency = 20;
			distance = 1;
		};
	};
	class B_762x51_Tracer_Red: B_762x51_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_762x51_Tracer_Green: B_762x51_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_762x51_Tracer_Yellow: B_762x51_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_762x54_Ball: B_762x51_Ball
	{
		caliber = 1.8;
		airFriction = -0.0012;
	};
	class B_762x54_Tracer_Red: B_762x54_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_762x54_Tracer_Green: B_762x54_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_762x54_Tracer_Yellow: B_762x54_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_762x51_Minigun_Tracer_Red: SubmunitionBullet
	{
		hit = 11.6;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		caliber = 3.6;
		deflecting = 25;
		explosive = 0;
		triggerTime = 0.1;
		submunitionConeAngle = 0;
		submunitionCount = 1;
		submunitionAmmo = "B_762x51_Minigun_Tracer_Red_splash";
		cartridge = "FxCartridge_762";
		visibleFire = 5;
		audibleFire = 70;
		cost = 1.2;
		airLock = 1;
		typicalSpeed = 800;
		tracerScale = 0.6;
		tracerStartTime = 0.0075;
		tracerEndTime = 5;
		airFriction = -0.001;
		class CamShakeExplode
		{
			power = 2.82843;
			duration = 0.6;
			frequency = 20;
			distance = 8.48528;
		};
		class CamShakeHit
		{
			power = 5;
			duration = 0.2;
			frequency = 20;
			distance = 1;
		};
	};
	class B_762x51_Minigun_Tracer_Red_splash: B_762x51_Ball
	{
		hit = 11.6;
		indirectHit = 1.2;
		indirectHitRange = 2;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		caliber = 3.6;
		deflecting = 25;
		fuseDistance = 12;
		soundSetSonicCrack[] = {"BulletSonicCrack_Gatling_SoundSet"};
	};
	class B_12Gauge_Slug: BulletBase
	{
		hit = 42;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_slug";
		cost = 5;
		typicalSpeed = 600;
		airFriction = -0.008;
		caliber = 3;
		deflecting = 30;
	};
	class B_12Gauge_Pellets: ShotgunBase
	{
		hit = 2;
		indirectHit = 2;
		indirectHitRange = 0.4;
		cartridge = "FxCartridge_slug";
		cost = 5;
		typicalSpeed = 400;
		airFriction = -0.008;
		caliber = 1;
		deflecting = 30;
		class CamShakeFire
		{
			power = 3;
			duration = 0.5;
			frequency = 20;
			distance = 10;
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
		};
		class CamShakeHit
		{
			power = 10;
			duration = 1;
			frequency = 20;
		};
	};
	class B_9x21_Ball: BulletBase
	{
		hit = 5;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_9mm";
		cost = 100;
		typicalSpeed = 380;
		airFriction = -0.0016;
		caliber = 1.2;
		deflecting = 25;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		airLock = 1;
		tracerScale = 0.5;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 1;
		audibleFire = 30;
		aiAmmoUsageFlags = 64;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
	};
	class B_9x21_Ball_Tracer_Green: B_9x21_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 0.5;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 0;
	};
	class B_9x21_Ball_Tracer_Red: B_9x21_Ball_Tracer_Green
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_Red";
	};
	class B_9x21_Ball_Tracer_Yellow: B_9x21_Ball_Tracer_Green
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_Yellow";
	};
	class B_408_Ball: BulletBase
	{
		hit = 24;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_127";
		visibleFire = 5;
		audibleFire = 120;
		visibleFireTime = 3;
		cost = 7;
		airLock = 1;
		caliber = 2.4;
		typicalSpeed = 910;
		timeToLive = 10;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		tracerEndTime = 1;
		airFriction = -0.00048;
		class CamShakeExplode
		{
			power = 3.16228;
			duration = 0.6;
			frequency = 20;
			distance = 9.48683;
		};
		class CamShakeHit
		{
			power = 10;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
	};
	class B_127x33_Ball: BulletBase
	{
		hit = 7.5;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_127";
		audibleFire = 50;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
		visibleFireTime = 3;
		cost = 50;
		airLock = 1;
		caliber = 1;
		deflecting = 25;
		typicalSpeed = 420;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		tracerEndTime = 1;
		airFriction = -0.002;
	};
	class B_127x99_Ball: BulletBase
	{
		hit = 30;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_127";
		visibleFire = 8;
		audibleFire = 120;
		dangerRadiusBulletClose = 12;
		dangerRadiusHit = 16;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 12;
		cost = 5;
		airLock = 1;
		caliber = 2.6;
		typicalSpeed = 880;
		timeToLive = 10;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		tracerEndTime = 1;
		airFriction = -0.00086;
		class CamShakeExplode
		{
			power = 3.60555;
			duration = 0.8;
			frequency = 20;
			distance = 10.8167;
		};
		class CamShakeHit
		{
			power = 13;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
	};
	class B_127x99_Ball_Tracer_Red: B_127x99_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_127x99_Ball_Tracer_Green: B_127x99_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_127x99_Ball_Tracer_Yellow: B_127x99_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_127x99_SLAP: B_127x99_Ball
	{
		hit = 50;
		indirectHit = 0;
		indirectHitRange = 0;
		caliber = 3.4;
		typicalSpeed = 1215;
		airFriction = -0.00036;
		cost = 15;
		class CamShakeExplode
		{
			power = 4.47214;
			duration = 0.8;
			frequency = 20;
			distance = 13.4164;
		};
		class CamShakeHit
		{
			power = 20;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
	};
	class B_127x99_SLAP_Tracer_Red: B_127x99_SLAP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_127x99_SLAP_Tracer_Green: B_127x99_SLAP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_127x99_SLAP_Tracer_Yellow: B_127x99_SLAP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_127x108_Ball: BulletBase
	{
		hit = 35;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_127";
		visibleFire = 5;
		audibleFire = 120;
		dangerRadiusBulletClose = 12;
		dangerRadiusHit = 16;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 12;
		visibleFireTime = 3;
		cost = 5;
		airLock = 1;
		caliber = 2.8;
		typicalSpeed = 820;
		timeToLive = 10;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 1.5;
		tracerStartTime = 0.075;
		tracerEndTime = 1;
		airFriction = -0.00086;
		class CamShakeExplode
		{
			power = 3.60555;
			duration = 0.8;
			frequency = 20;
			distance = 10.8167;
		};
		class CamShakeHit
		{
			power = 13;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
	};
	class B_127x108_APDS: B_127x108_Ball
	{
		hit = 60;
		indirectHit = 0;
		indirectHitRange = 0;
		caliber = 3.6;
		typicalSpeed = 1060;
		airFriction = -0.00036;
		cost = 15;
		class CamShakeExplode
		{
			power = 4.47214;
			duration = 0.8;
			frequency = 20;
			distance = 13.4164;
		};
		class CamShakeHit
		{
			power = 20;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
	};
	class B_19mm_HE: BulletBase
	{
		soundFly[] = {"", 1, 1, 50};
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		explosionSoundEffect = "DefaultExplosion";
		hit = 20;
		indirectHit = 6;
		indirectHitRange = 2;
		warheadName = "HE";
		explosive = 0.8;
		explosionEffects = "ExploAmmoExplosion";
		craterEffects = "ExploAmmoCrater";
		visibleFire = 16;
		audibleFire = 150;
		visibleFireTime = 3;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		cost = 20;
		deflecting = 5;
		airFriction = -0.0006;
		fuseDistance = 3;
		typicalSpeed = 400;
		caliber = 2;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		class CamShakeExplode
		{
			power = 3.8;
			duration = 0.8;
			frequency = 20;
			distance = 50.8712;
		};
		class CamShakeHit
		{
			power = 19;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.0878;
			duration = 0.8;
			frequency = 20;
			distance = 34.8712;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		SoundSetExplosion[] = {"Shell19mm25mm_Exp_SoundSet"};
	};
	class B_30mm_HE: B_19mm_HE
	{
		weaponType = "cannon";
		hit = 30;
		indirectHit = 8;
		indirectHitRange = 3;
		explosive = 0.8;
		visibleFire = 32;
		audibleFire = 200;
		visibleFireTime = 3;
		dangerRadiusBulletClose = 20;
		dangerRadiusHit = 60;
		suppressionRadiusBulletClose = 12;
		suppressionRadiusHit = 24;
		cost = 20;
		airFriction = -0.00036;
		fuseDistance = 3;
		typicalSpeed = 960;
		caliber = 1.4;
		airlock = 1;
		aiAmmoUsageFlags = "64 + 128";
		tracerScale = 2.5;
		tracerStartTime = 0.1;
		tracerEndTime = 4.7;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		class CamShakeExplode
		{
			power = 6;
			duration = 1;
			frequency = 20;
			distance = 67.8178;
		};
		class CamShakeHit
		{
			power = 30;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.23607;
			duration = 1;
			frequency = 20;
			distance = 40;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		SoundSetExplosion[] = {"Shell30mm40mm_Exp_SoundSet", "Shell30mm40mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class B_30mm_HE_Tracer_Red: B_30mm_HE
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_30mm_HE_Tracer_Green: B_30mm_HE
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_30mm_HE_Tracer_Yellow: B_30mm_HE
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_30mm_MP: B_30mm_HE
	{
		hit = 90;
		indirectHit = 4;
		indirectHitRange = 2;
		warheadName = "HEAT";
		caliber = 4.4;
		deflecting = 10;
		explosive = 0.6;
		typicalSpeed = 1070;
		airFriction = -0.00036;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		class CamShakeExplode
		{
			power = 6;
			duration = 1;
			frequency = 20;
			distance = 67.8178;
		};
		class CamShakeHit
		{
			power = 30;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.34035;
			duration = 1;
			frequency = 20;
			distance = 43.8178;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		SoundSetExplosion[] = {"Shell30mm40mm_Exp_SoundSet", "Shell30mm40mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class B_30mm_MP_Tracer_Red: B_30mm_MP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_30mm_MP_Tracer_Green: B_30mm_MP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_30mm_MP_Tracer_Yellow: B_30mm_MP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_40mm_GPR: B_30mm_HE
	{
		hit = 70;
		indirectHit = 8;
		indirectHitRange = 4;
		warheadName = "AP";
		caliber = 4.6;
		deflecting = 10;
		cost = 40;
		airFriction = -0.0006;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		class CamShakeExplode
		{
			power = 8;
			duration = 1.2;
			frequency = 20;
			distance = 82.5964;
		};
		class CamShakeHit
		{
			power = 40;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.51487;
			duration = 1.2;
			frequency = 20;
			distance = 50.5964;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		SoundSetExplosion[] = {"Shell30mm40mm_Exp_SoundSet", "Shell30mm40mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class B_40mm_GPR_Tracer_Red: B_40mm_GPR
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_40mm_GPR_Tracer_Green: B_40mm_GPR
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_40mm_GPR_Tracer_Yellow: B_40mm_GPR
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_20mm: BulletBase
	{
		hit = 60;
		indirectHit = 6;
		indirectHitRange = 1.6;
		weaponType = "cannon";
		warheadName = "HE";
		explosive = 0.4;
		caliber = 3.4;
		cost = 30;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 0;
		typicalSpeed = 1030;
		visibleFire = 32;
		audibleFire = 200;
		visibleFireTime = 4;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		aiAmmoUsageFlags = "64 + 128";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01", 1.77828, 1, 1300};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02", 1.77828, 1, 1300};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03", 1.77828, 1, 1300};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04", 1.77828, 1, 1300};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		explosionSoundEffect = "DefaultExplosion";
		airLock = 1;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		airFriction = -0.00078;
		muzzleEffect = "";
		class CamShakeExplode
		{
			power = 4;
			duration = 0.8;
			frequency = 20;
			distance = 43.7771;
		};
		class CamShakeHit
		{
			power = 20;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.11474;
			duration = 0.8;
			frequency = 20;
			distance = 35.7771;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		SoundSetExplosion[] = {"Shell19mm25mm_Exp_SoundSet"};
	};
	class B_20mm_Tracer_Red: B_20mm
	{
		hit = 75;
		indirecthit = 21;
		indirecthitrange = 1;
		caliber = 3;
		typicalspeed = 725;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly = 0;
		airlock = 1;
		tracklead = 1;
	};
	class B_25mm: BulletBase
	{
		hit = 70;
		indirectHit = 6;
		indirectHitRange = 0.4;
		warheadName = "AP";
		explosive = 0.4;
		caliber = 3.8;
		cost = 20;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 1;
		typicalSpeed = 1030;
		visibleFire = 32;
		audibleFire = 200;
		visibleFireTime = 4;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		explosionSoundEffect = "DefaultExplosion";
		airLock = 1;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		airFriction = -0.00076;
		muzzleEffect = "";
		class CamShakeExplode
		{
			power = 5;
			duration = 1;
			frequency = 20;
			distance = 56;
		};
		class CamShakeHit
		{
			power = 25;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.23607;
			duration = 1;
			frequency = 20;
			distance = 40;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		SoundSetExplosion[] = {"Shell30mm40mm_Exp_SoundSet", "Shell30mm40mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class B_30mm_AP: BulletBase
	{
		weaponType = "cannon";
		hit = 80;
		indirectHit = 8;
		indirectHitRange = 0.2;
		warheadName = "AP";
		caliber = 4.2;
		visibleFire = 32;
		audibleFire = 200;
		visibleFireTime = 3;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		cost = 35;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 2.5;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction = -0.00042;
		muzzleEffect = "";
		deflecting = 15;
		typicalSpeed = 1120;
		airlock = 1;
		aiAmmoUsageFlags = "128 + 512";
		allowAgainstInfantry = 1;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		class CamShakeExplode
		{
			power = 5;
			duration = 1;
			frequency = 20;
			distance = 56;
		};
		class CamShakeHit
		{
			power = 50;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.23607;
			duration = 1;
			frequency = 20;
			distance = 40;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		SoundSetExplosion[] = {"Shell30mm40mm_Exp_SoundSet", "Shell30mm40mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class B_30mm_AP_Tracer_Red: B_30mm_AP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_30mm_AP_Tracer_Green: B_30mm_AP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_30mm_AP_Tracer_Yellow: B_30mm_AP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_30mm_APFSDS: B_30mm_AP
	{
		hit = 120;
		indirectHit = 8;
		indirectHitRange = 0.2;
		caliber = 6;
		deflecting = 15;
		airFriction = -0.0001;
		typicalSpeed = 1320;
		cost = 75;
		tracerEndTime = 1.5;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		class HitEffects
		{
			hitMetal = "ImpactMetalSabotSmall";
			hitMetalPlate = "ImpactMetalSabotSmall";
			hitBuilding = "ImpactConcreteSabotSmall";
			hitConcrete = "ImpactConcreteSabotSmall";
			hitGroundSoft = "ImpactEffectsGroundSabot";
			hitGroundHard = "ImpactEffectsGroundSabot";
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitHay = "ImpactHay";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitTyre = "ImpactTyre";
			hitMan = "ImpactEffectsBlood";
			hitWater = "ImpactEffectsWater";
			default_mat = "ImpactEffectsGroundSabot";
		};
		class CamShakeExplode
		{
			power = 6.7082;
			duration = 1.4;
			frequency = 20;
			distance = 20.1246;
		};
		class CamShakeHit
		{
			power = 45;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.34035;
			duration = 1;
			frequency = 20;
			distance = 43.8178;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class B_30mm_APFSDS_Tracer_Red: B_30mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_30mm_APFSDS_Tracer_Green: B_30mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_30mm_APFSDS_Tracer_Yellow: B_30mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_40mm_APFSDS: B_30mm_APFSDS
	{
		hit = 150;
		indirectHit = 8;
		indirectHitRange = 0.2;
		warheadName = "AP";
		typicalSpeed = 1140;
		caliber = 8;
		airFriction = -0.00012;
		cost = 100;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		class CamShakeExplode
		{
			power = 7.74597;
			duration = 1.6;
			frequency = 20;
			distance = 23.2379;
		};
		class CamShakeHit
		{
			power = 60;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.51487;
			duration = 1.2;
			frequency = 20;
			distance = 50.5964;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class B_40mm_APFSDS_Tracer_Red: B_40mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_40mm_APFSDS_Tracer_Green: B_40mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_40mm_APFSDS_Tracer_Yellow: B_40mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_35mm_AA: BulletBase
	{
		hit = 60;
		indirectHit = 25;
		indirectHitRange = 2.4;
		warheadName = "HE";
		visibleFire = 38;
		audibleFire = 200;
		visibleFireTime = 5;
		dangerRadiusBulletClose = 20;
		dangerRadiusHit = 60;
		suppressionRadiusBulletClose = 12;
		suppressionRadiusHit = 24;
		deflecting = 0;
		explosive = 0.6;
		airLock = 1;
		aiAmmoUsageFlags = "64 + 128 + 256";
		cost = 42;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		explosionSoundEffect = "DefaultExplosion";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 1.85;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction = -0.0005;
		muzzleEffect = "";
		caliber = 2.8;
		typicalSpeed = 960;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		class CamShakeExplode
		{
			power = 3.6;
			duration = 0.8;
			frequency = 20;
			distance = 41.9411;
		};
		class CamShakeHit
		{
			power = 18;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 1.49535;
			duration = 0.4;
			frequency = 20;
			distance = 17.8885;
		};
		class CamShakePlayerFire
		{
			power = 0.001;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		SoundSetExplosion[] = {"Shell19mm25mm_Exp_SoundSet"};
	};
	class B_35mm_AA_Tracer_Red: B_35mm_AA
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_35mm_AA_Tracer_Green: B_35mm_AA
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_35mm_AA_Tracer_Yellow: B_35mm_AA
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_coil_5g_spike: BulletBase
	{
		hit = 30;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_9mm";
		cost = 50;
		typicalSpeed = 3000;
		visibleFire = 1;
		audibleFire = 0.01;
		visibleFireTime = 2;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		airFriction = -0.0001;
		caliber = 10;
		deflecting = 0;
	};
	class B_coil_20g_spike: B_coil_5g_spike
	{
		hit = 120;
		typicalSpeed = 6000;
	};
	class SmokeLauncherAmmo: BulletBase
	{
		muzzleEffect = "BIS_fnc_effectFiredSmokeLauncher";
		effectsSmoke = "EmptyEffect";
		weaponLockSystem = "1 + 2 + 4";
		hit = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		timeToLive = 10;
		thrustTime = 10;
		airFriction = -0.1;
		simulation = "shotCM";
		model = "\A3\weapons_f\empty";
		maxControlRange = 50;
		initTime = 2;
		aiAmmoUsageFlags = "4 + 8";
	};
	class SmokeLauncherAmmo_boat: SmokeLauncherAmmo
	{
		muzzleEffect = "BIS_fnc_effectFiredSmokeLauncher_boat";
	};
	class FlareLauncherAmmo: SmokeLauncherAmmo
	{
		muzzleEffect = "BIS_fnc_effectFiredFlares";
	};
	class CMflareAmmo: BulletBase
	{
		hit = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		timeToLive = 15;
		thrustTime = 4;
		airFriction = -0.01;
		simulation = "shotCM";
		effectsSmoke = "CounterMeasureFlare";
		weaponLockSystem = 2;
		model = "\A3\weapons_f\empty";
		maxControlRange = -1;
		initTime = 0;
		aiAmmoUsageFlags = 8;
	};
	class CMflare_Chaff_Ammo: CMflareAmmo
	{
		effectsSmoke = "CounterMeasureChaff";
		weaponLockSystem = "2 + 8";
	};
	class GrenadeHand: Grenade
	{
		hit = 8;
		indirectHit = 8;
		indirectHitRange = 6;
		dangerRadiusHit = 60;
		suppressionRadiusHit = 24;
		typicalspeed = 18;
		model = "\A3\Weapons_f\ammo\Handgrenade_throw";
		visibleFire = 0.5;
		audibleFire = 0.05;
		visibleFireTime = 1;
		fuseDistance = 0;
	};
	class mini_Grenade: GrenadeHand
	{
		hit = 6;
		indirectHit = 6;
		indirectHitRange = 4;
		dangerRadiusHit = 50;
		suppressionRadiusHit = 18;
		typicalspeed = 26;
		model = "\A3\Weapons_f\ammo\mini_frag_throw";
		whistleDist = 12;
		explosionEffectsRadius = 1.5;
		deflecting = 30;
		class CamShakeExplode
		{
			power = 3.2;
			duration = 0.8;
			frequency = 20;
			distance = 56;
		};
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01", 3.16228, 1, 1300};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02", 3.16228, 1, 1300};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03", 3.16228, 1, 1300};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04", 3.16228, 1, 1300};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		SoundSetExplosion[] = {"MiniGrenade_Exp_SoundSet", "MiniGrenade_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class GrenadeHand_stone: GrenadeHand
	{
		hit = 0.5;
		indirectHit = 0.2;
		indirectHitRange = 1;
		dangerRadiusHit = 6;
		suppressionRadiusHit = -1;
		model = "\A3\Weapons_f\ammo\stone_2";
		CraterEffects = "NoCrater";
		explosionEffects = "NoExplosion";
		explosive = 0;
		soundHit[] = {"", 1, 1};
		cost = 1;
		whistleDist = 0;
		class CamShakeExplode
		{
			power = 0;
			duration = 0.2;
			frequency = 20;
			distance = 0;
		};
		class CamShakeHit
		{
			power = 5;
			duration = 0.2;
			frequency = 20;
			distance = 1;
		};
		SoundSetExplosion[] = {"GrenadeHe_Exp_SoundSet", "GrenadeHe_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class SmokeShell: GrenadeHand
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_white_throw";
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0.2;
		dangerRadiusHit = -1;
		suppressionRadiusHit = -1;
		typicalspeed = 22;
		cost = 100;
		simulation = "shotSmokeX";
		explosive = 0;
		deflecting = 30;
		explosionTime = 2;
		timeToLive = 60;
		fuseDistance = 0;
		soundHit[] = {"", 0, 1};
		SmokeShellSoundHit1[] = {"A3\Sounds_F\weapons\smokeshell\smoke_1", 1.25893, 1, 100};
		SmokeShellSoundHit2[] = {"A3\Sounds_F\weapons\smokeshell\smoke_2", 1.25893, 1, 100};
		SmokeShellSoundHit3[] = {"A3\Sounds_F\weapons\smokeshell\smoke_3", 1.25893, 1, 100};
		SmokeShellSoundLoop1[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop1", 0.125893, 1, 70};
		SmokeShellSoundLoop2[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop2", 0.125893, 1, 70};
		grenadeFireSound[] = {"SmokeShellSoundHit1", 0.25, "SmokeShellSoundHit2", 0.25, "SmokeShellSoundHit3", 0.5};
		grenadeBurningSound[] = {"SmokeShellSoundLoop1", 0.5, "SmokeShellSoundLoop2", 0.5};
		aiAmmoUsageFlags = "4 + 2";
		smokeColor[] = {1, 1, 1, 1};
		effectsSmoke = "SmokeShellWhiteEffect";
		whistleDist = 0;
	};
	class SmokeShellRed: SmokeShell
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_red_throw";
		smokeColor[] = {0.8438, 0.1383, 0.1353, 1};
		effectsSmoke = "SmokeShellRedEffect";
	};
	class SmokeShellGreen: SmokeShell
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_green_throw";
		smokeColor[] = {0.2125, 0.6258, 0.4891, 1};
		effectsSmoke = "SmokeShellGreenEffect";
	};
	class SmokeShellYellow: SmokeShell
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_yellow_throw";
		smokeColor[] = {0.9883, 0.8606, 0.0719, 1};
		effectsSmoke = "SmokeShellYellowEffect";
	};
	class SmokeShellPurple: SmokeShell
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_purple_throw";
		smokeColor[] = {0.4341, 0.1388, 0.4144, 1};
		effectsSmoke = "SmokeShellPurpleEffect";
	};
	class SmokeShellBlue: SmokeShell
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_blue_throw";
		smokeColor[] = {0.1183, 0.1867, 1, 1};
		effectsSmoke = "SmokeShellBlueEffect";
	};
	class SmokeShellOrange: SmokeShell
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_orange_throw";
		smokeColor[] = {0.6697, 0.2275, 0.10053, 1};
		effectsSmoke = "SmokeShellOrangeEffect";
	};
	class G_40mm_Smoke: SmokeShell
	{
		model = "\A3\weapons_f\Ammo\UGL_slug";
	};
	class G_40mm_SmokeRed: G_40mm_Smoke
	{
		smokeColor[] = {0.8438, 0.1383, 0.1353, 1};
		effectsSmoke = "SmokeShellRedEffect";
	};
	class G_40mm_SmokeGreen: G_40mm_Smoke
	{
		smokeColor[] = {0.2125, 0.6258, 0.4891, 1};
		effectsSmoke = "SmokeShellGreenEffect";
	};
	class G_40mm_SmokeYellow: G_40mm_Smoke
	{
		smokeColor[] = {0.9883, 0.8606, 0.0719, 1};
		effectsSmoke = "SmokeShellYellowEffect";
	};
	class G_40mm_SmokePurple: G_40mm_Smoke
	{
		smokeColor[] = {0.4341, 0.1388, 0.4144, 1};
		effectsSmoke = "SmokeShellPurpleEffect";
	};
	class G_40mm_SmokeBlue: G_40mm_Smoke
	{
		smokeColor[] = {0.1183, 0.1867, 1, 1};
		effectsSmoke = "SmokeShellBlueEffect";
	};
	class G_40mm_SmokeOrange: G_40mm_Smoke
	{
		smokeColor[] = {0.6697, 0.2275, 0.10053, 1};
		effectsSmoke = "SmokeShellOrangeEffect";
	};
	class SmokeShellArty: SmokeShell
	{
		simulation = "shotSmoke";
		effectsSmoke = "SmokeShellWhiteSmall";
		model = "\A3\weapons_f\ammo\shell_smoke";
	};
	class IncinerateShell: SmokeShellArty
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_orange";
		effectsSmoke = "IncinerateShell";
	};
	class Chemlight_base: SmokeShell
	{
		timeToLive = 900;
		grenadeFireSound[] = {};
		grenadeBurningSound[] = {};
		aiAmmoUsageFlags = "2 + 1";
	};
	class Chemlight_green: Chemlight_base
	{
		model = "\A3\Weapons_f\chemlight\chemlight_green_lit";
		effectsSmoke = "ChemlightLight_green";
		typicalspeed = 14;
	};
	class Chemlight_red: Chemlight_base
	{
		model = "\A3\Weapons_f\chemlight\chemlight_red_lit";
		effectsSmoke = "ChemlightLight_red";
	};
	class Chemlight_yellow: Chemlight_base
	{
		model = "\A3\Weapons_f\chemlight\chemlight_yellow_lit";
		effectsSmoke = "ChemlightLight_yellow";
	};
	class Chemlight_blue: Chemlight_base
	{
		model = "\A3\Weapons_f\chemlight\chemlight_blue_lit";
		effectsSmoke = "ChemlightLight_blue";
	};
	class SmokeShellVehicle: SmokeShell
	{
		soundFly[] = {"A3\sounds_f\dummysound", 0.1, 1};
		effectsSmoke = "EmptyEffect";
	};
	class SmokeShellVehicle_boat: SmokeShellVehicle
	{
		model = "\A3\weapons_f\Ammo\UGL_slug";
	};
	class FlareCountermeasure: SmokeShellVehicle
	{
		airFriction = -0.05;
		model = "\A3\Weapons_f\empty";
		deflecting = 30;
	};
	class FlareBase: FlareCore
	{
		timeToLive = 25;
		muzzleEffect = "BIS_fnc_effectFiredRifle";
		intensity = 10000;
	};
	class F_40mm_White: FlareBase
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0.5, 0.5, 0.5, 0.5};
		useFlare = 1;
		deflecting = 30;
		smokeColor[] = {1, 1, 1, 0.5};
		brightness = 12;
		size = 1;
		triggerTime = 3;
		triggerSpeedCoef = 1;
		audibleFire = 20;
	};
	class F_40mm_Green: F_40mm_White
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0.25, 0.5, 0.25, 0};
	};
	class F_40mm_Red: F_40mm_White
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0.5, 0.25, 0.25, 0};
	};
	class F_40mm_Yellow: F_40mm_White
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0.5, 0.5, 0.25, 0};
	};
	class F_40mm_Cir: F_40mm_White
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0.5, 0.5, 0.25, 0};
	};
	class F_20mm_White: FlareBase
	{
		model = "\A3\weapons_f\ammo\flare_white";
		lightColor[] = {0.5, 0.5, 0.5, 0.5};
		useFlare = 1;
		flareSize = 3;
		deflecting = 30;
		smokeColor[] = {1, 1, 1, 0.5};
		brightness = 8;
		size = 1;
		triggerTime = 3;
		triggerSpeedCoef = 1;
	};
	class F_20mm_Green: F_20mm_White
	{
		model = "\A3\weapons_f\ammo\flare_green";
		lightColor[] = {0.25, 0.5, 0.25, 0};
	};
	class F_20mm_Red: F_20mm_White
	{
		model = "\A3\weapons_f\ammo\flare_red";
		lightColor[] = {0.5, 0.25, 0.25, 0};
	};
	class F_20mm_Yellow: F_20mm_White
	{
		model = "\A3\weapons_f\ammo\flare_yellow";
		lightColor[] = {0.5, 0.5, 0.25, 0};
	};
	class SmokeShell_Infinite: SmokeShell
	{
		timeToLive = 1e+010;
	};
	class SmokeShellBlue_Infinite: SmokeShellBlue
	{
		timeToLive = 1e+010;
	};
	class SmokeShellGreen_Infinite: SmokeShellGreen
	{
		timeToLive = 1e+010;
	};
	class SmokeShellOrange_Infinite: SmokeShellOrange
	{
		timeToLive = 1e+010;
	};
	class SmokeShellPurple_Infinite: SmokeShellPurple
	{
		timeToLive = 1e+010;
	};
	class SmokeShellRed_Infinite: SmokeShellRed
	{
		timeToLive = 1e+010;
	};
	class SmokeShellYellow_Infinite: SmokeShellYellow
	{
		timeToLive = 1e+010;
	};
	class Chemlight_blue_Infinite: Chemlight_blue
	{
		timeToLive = 1e+010;
	};
	class Chemlight_green_Infinite: Chemlight_green
	{
		timeToLive = 1e+010;
	};
	class Chemlight_red_Infinite: Chemlight_red
	{
		timeToLive = 1e+010;
	};
	class Chemlight_yellow_Infinite: Chemlight_yellow
	{
		timeToLive = 1e+010;
	};
	class G_40mm_Smoke_Infinite: G_40mm_Smoke
	{
		timeToLive = 1e+010;
	};
	class G_40mm_SmokeBlue_Infinite: G_40mm_SmokeBlue
	{
		timeToLive = 1e+010;
	};
	class G_40mm_SmokeGreen_Infinite: G_40mm_SmokeGreen
	{
		timeToLive = 1e+010;
	};
	class G_40mm_SmokeOrange_Infinite: G_40mm_SmokeOrange
	{
		timeToLive = 1e+010;
	};
	class G_40mm_SmokePurple_Infinite: G_40mm_SmokePurple
	{
		timeToLive = 1e+010;
	};
	class G_40mm_SmokeRed_Infinite: G_40mm_SmokeRed
	{
		timeToLive = 1e+010;
	};
	class G_40mm_SmokeYellow_Infinite: G_40mm_SmokeYellow
	{
		timeToLive = 1e+010;
	};
	class F_40mm_White_Infinite: F_40mm_White
	{
		timeToLive = 1e+010;
	};
	class F_40mm_Green_Infinite: F_40mm_Green
	{
		timeToLive = 1e+010;
	};
	class F_40mm_Red_Infinite: F_40mm_Red
	{
		timeToLive = 1e+010;
	};
	class F_40mm_Yellow_Infinite: F_40mm_Yellow
	{
		timeToLive = 1e+010;
	};
	class F_40mm_Cir_Infinite: F_40mm_Cir
	{
		timeToLive = 1e+010;
	};
	class F_20mm_White_Infinite: F_20mm_White
	{
		timeToLive = 1e+010;
	};
	class F_20mm_Green_Infinite: F_20mm_Green
	{
		timeToLive = 1e+010;
	};
	class F_20mm_Red_Infinite: F_20mm_Red
	{
		timeToLive = 1e+010;
	};
	class F_20mm_Yellow_Infinite: F_20mm_Yellow
	{
		timeToLive = 1e+010;
	};
	class ammo_Penetrator_30mm: ammo_Penetrator_Base
	{
		caliber = 2;
		hit = 75;
	};
	class ammo_Penetrator_grenade_40mm: ammo_Penetrator_Base
	{
		caliber = 3.33333;
		hit = 84;
	};
	class ammo_Penetrator_105mm: ammo_Penetrator_Base
	{
		caliber = 28.6667;
		hit = 450;
	};
	class ammo_Penetrator_120mm: ammo_Penetrator_Base
	{
		caliber = 40;
		hit = 510;
	};
	class ammo_Penetrator_125mm: ammo_Penetrator_Base
	{
		caliber = 43.3333;
		warheadName = "TandemHEAT";
		hit = 532.5;
	};
	class ammo_Penetrator_120mm_missile: ammo_Penetrator_Base
	{
		caliber = 53.3333;
		warheadName = "TandemHEAT";
		hit = 630;
	};
	class ammo_Penetrator_125mm_missile: ammo_Penetrator_Base
	{
		caliber = 56.6667;
		warheadName = "TandemHEAT";
		hit = 600;
	};
	class ammo_Penetrator_NLAW: ammo_Penetrator_Base
	{
		caliber = 26.6667;
		warheadName = "AP";
		typicalSpeed = 1000;
		hit = 525;
	};
	class ammo_Penetrator_Titan_AT: ammo_Penetrator_Base
	{
		caliber = 60;
		hit = 585;
	};
	class ammo_Penetrator_Titan_AT_long: ammo_Penetrator_Base
	{
		caliber = 60;
		warheadName = "TandemHEAT";
		hit = 780;
	};
	class ammo_Penetrator_PG_AT: ammo_Penetrator_Base
	{
		caliber = 20;
		hit = 450;
	};
	class ammo_Penetrator_Scalpel: ammo_Penetrator_Base
	{
		caliber = 56.6667;
		warheadName = "TandemHEAT";
		hit = 900;
	};
	class ammo_Penetrator_Jian: ammo_Penetrator_Base
	{
		caliber = 66.6667;
		warheadName = "TandemHEAT";
		hit = 999;
	};
	class ammo_Penetrator_AGM_01: ammo_Penetrator_Base
	{
		caliber = 66.6667;
		warheadName = "HE";
		indirectHit = 90;
		indirectHitRange = 10;
		explosive = 0.65;
		hit = 1650;
	};
	class ammo_Penetrator_AGM_02: ammo_Penetrator_Base
	{
		caliber = 66.6667;
		warheadName = "HE";
		indirectHit = 85;
		indirectHitRange = 8;
		explosive = 0.65;
		hit = 1500;
	};
	class ammo_Penetrator_Vorona: ammo_Penetrator_Base
	{
		caliber = 60;
		warheadName = "TandemHEAT";
		hit = 720;
	};
	class ammo_Penetrator_Firefist: ammo_Penetrator_Base
	{
		caliber = 60;
		warheadName = "TandemHEAT";
		hit = 750;
	};
	class ammo_Penetrator_RPG32V: ammo_Penetrator_Base
	{
		caliber = 43.3333;
		warheadName = "TandemHEAT";
		hit = 480;
	};
	class ammo_Penetrator_PG7: ammo_Penetrator_Base
	{
		caliber = 20;
		hit = 390;
	};
	class ammo_Penetrator_MRAAWS: ammo_Penetrator_Base
	{
		caliber = 33.3333;
		warheadName = "TandemHEAT";
		hit = 495;
	};
	class ammo_Penetrator_MRAAWS_HEAT55: ammo_Penetrator_Base
	{
		caliber = 26.6667;
		hit = 450;
	};
	class ammo_Penetrator_SPG9: ammo_Penetrator_Base
	{
		caliber = 26.6667;
		hit = 450;
	};
	class ammo_Penetrator_Rocket_03_AP: ammo_Penetrator_Base
	{
		caliber = 26.6667;
		hit = 420;
	};
	class ammo_Penetrator_Rocket_04_AP: ammo_Penetrator_Base
	{
		caliber = 20;
		hit = 435;
	};
	class Sh_120mm_HE: ShellBase
	{
		hit = 250;
		indirectHit = 60;
		indirectHitRange = 6;
		warheadName = "HE";
		dangerRadiusHit = 160;
		suppressionRadiusHit = 32;
		typicalSpeed = 1400;
		explosive = 0.8;
		cost = 300;
		airFriction = -0.000275;
		caliber = 10;
		deflecting = 4;
		timeToLive = 15;
		whistleOnFire = 1;
		whistleDist = 14;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		tracerScale = 1;
		tracerStartTime = 0.1;
		tracerEndTime = 3;
		muzzleEffect = "";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01", 1.77828, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02", 1.77828, 1, 1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03", 1.77828, 1, 1800};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04", 1.77828, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		class CamShakeExplode
		{
			power = 24;
			duration = 2.2;
			frequency = 20;
			distance = 143.636;
		};
		class CamShakeHit
		{
			power = 120;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.30975;
			duration = 2.2;
			frequency = 20;
			distance = 87.6356;
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		SoundSetExplosion[] = {"Shell105mm130mm_Exp_SoundSet", "Shell105mm130mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class Sh_120mm_HE_Tracer_Red: Sh_120mm_HE
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class Sh_120mm_HE_Tracer_Green: Sh_120mm_HE
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
	};
	class Sh_120mm_HE_Tracer_Yellow: Sh_120mm_HE
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
	};
	class Sh_120mm_APFSDS: ShellBase
	{
		hit = 500;
		indirectHit = 15;
		indirectHitRange = 0.5;
		warheadName = "AP";
		dangerRadiusHit = 100;
		suppressionRadiusHit = 18;
		explosive = 0;
		cost = 500;
		airFriction = -3.96e-005;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		typicalSpeed = 1550;
		caliber = 35.2688;
		deflecting = 15;
		timeToLive = 15;
		whistleOnFire = 1;
		whistleDist = 14;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		tracerScale = 3;
		tracerStartTime = 0.1;
		tracerEndTime = 3;
		muzzleEffect = "";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01", 1.77828, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02", 1.77828, 1, 1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03", 1.77828, 1, 1800};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04", 1.77828, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		class HitEffects
		{
			hitMetal = "ImpactMetalSabotBig";
			hitMetalPlate = "ImpactMetalSabotBig";
			hitBuilding = "ImpactConcreteSabot";
			hitConcrete = "ImpactConcreteSabot";
			hitGroundSoft = "ImpactEffectsGroundSabot";
			hitGroundHard = "ImpactEffectsGroundSabot";
			hitWater = "ImpactEffectsWater";
			default_mat = "ImpactEffectsGroundSabot";
		};
		aiAmmoUsageFlags = "128 + 512";
		class CamShakeExplode
		{
			power = 13.4164;
			duration = 2.6;
			frequency = 20;
			distance = 40.2492;
		};
		class CamShakeHit
		{
			power = 180;
			duration = 0.8;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.30975;
			duration = 2.2;
			frequency = 20;
			distance = 87.6356;
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		SoundSetExplosion[] = {"Shell105mm130mm_Exp_SoundSet", "Shell105mm130mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class Sh_120mm_APFSDS_Tracer_Red: Sh_120mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class Sh_120mm_APFSDS_Tracer_Green: Sh_120mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
	};
	class Sh_120mm_APFSDS_Tracer_Yellow: Sh_120mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
	};
	class Sh_120mm_HEAT_MP: ShellBase
	{
		hit = 95;
		warheadName = "HE";
		submunitionAmmo = "ammo_Penetrator_120mm";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		indirectHit = 30;
		indirectHitRange = 3.5;
		dangerRadiusHit = 160;
		suppressionRadiusHit = 32;
		typicalSpeed = 1400;
		explosive = 1;
		cost = 500;
		airFriction = -0.000275;
		deflecting = 8;
		timeToLive = 15;
		whistleOnFire = 1;
		whistleDist = 14;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		tracerScale = 1;
		tracerStartTime = 0.1;
		tracerEndTime = 3;
		muzzleEffect = "";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01", 1.77828, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02", 1.77828, 1, 1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03", 1.77828, 1, 1800};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04", 1.77828, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		class CamShakeExplode
		{
			power = 24;
			duration = 2.2;
			frequency = 20;
			distance = 143.636;
		};
		class CamShakeHit
		{
			power = 120;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.30975;
			duration = 2.2;
			frequency = 20;
			distance = 87.6356;
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		explosionSoundEffect = "DefaultExplosion";
	};
	class Sh_120mm_HEAT_MP_T_Red: Sh_120mm_HEAT_MP
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class Sh_120mm_HEAT_MP_T_Green: Sh_120mm_HEAT_MP
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
	};
	class Sh_120mm_HEAT_MP_T_Yellow: Sh_120mm_HEAT_MP
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
	};
	class Sh_155mm_AMOS: ShellBase
	{
		hit = 340;
		indirectHit = 125;
		indirectHitRange = 30;
		warheadName = "HE";
		dangerRadiusHit = 750;
		suppressionRadiusHit = 75;
		typicalSpeed = 800;
		caliber = 10;
		deflecting = 0;
		explosive = 0.8;
		cost = 300;
		model = "\A3\weapons_f\ammo\shell";
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "MortarExplosion";
		whistleDist = 60;
		artilleryLock = 1;
		thrust = 0;
		timeToLive = 180;
		airFriction = 0;
		sideairFriction = 0;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01", 2.51189, 1, 1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02", 2.51189, 1, 1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03", 2.51189, 1, 1900};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04", 2.51189, 1, 1900};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		class CamShakeExplode
		{
			power = 31;
			duration = 2.4;
			frequency = 20;
			distance = 339.599;
		};
		class CamShakeHit
		{
			power = 155;
			duration = 0.8;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.52844;
			duration = 2.4;
			frequency = 20;
			distance = 99.5992;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		SoundSetExplosion[] = {"Shell155mm_Exp_SoundSet", "Shell155mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class Sh_82mm_AMOS: Sh_155mm_AMOS
	{
		hit = 165;
		indirectHit = 52;
		indirectHitRange = 18;
		cost = 200;
		muzzleEffect = "";
		class CamShakeExplode
		{
			power = 16.4;
			duration = 1.8;
			frequency = 20;
			distance = 216.443;
		};
		class CamShakeHit
		{
			power = 82;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.00922;
			duration = 1.8;
			frequency = 20;
			distance = 72.4431;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		SoundSetExplosion[] = {"Mortar_Exp_SoundSet", "Mortar_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class Flare_82mm_AMOS_White: FlareCore
	{
		timeToLive = 45;
		model = "\A3\weapons_f\ammo\shell";
		effectFlare = "CounterMeasureFlare";
		aimAboveTarget[] = {30, 60, 120, 180, 240, 300, 360};
		aimAboveDefault = 4;
		triggerTime = -1;
		triggerSpeedCoef = 1;
		lightColor[] = {0.95, 0.95, 1, 0.5};
		smokeColor[] = {1, 1, 1, 0.5};
		intensity = 10000;
	};
	class Smoke_82mm_AMOS_White: ShotDeployBase
	{
		model = "\A3\weapons_f\ammo\shell";
		submunitionAmmo = "SmokeShellArty";
	};
	class Sh_82mm_AMOS_guided: SubmunitionBase
	{
		submunitionAmmo = "M_Mo_82mm_AT";
		submunitionCount = 1;
		submunitionConeAngle = 0;
		laserLock = 0;
		autoSeekTarget = 1;
		cost = 200;
		muzzleEffect = "";
		triggerDistance = 300;
		airFriction = 0;
		hit = 165;
		class CamShakeFire
		{
			power = 3.00922;
			duration = 1.8;
			frequency = 20;
			distance = 72.4431;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class Sh_82mm_AMOS_LG: Sh_82mm_AMOS_guided
	{
		submunitionAmmo = "M_Mo_82mm_AT_LG";
		cost = 500;
		laserLock = 1;
		irLock = 0;
		muzzleEffect = "";
	};
	class Fire_82mm_AMOS: ShotDeployBase
	{
		model = "\A3\weapons_f\ammo\shell";
		submunitionAmmo = "IncinerateShell";
		hit = 165;
	};
	class Sh_155mm_AMOS_guided: Sh_82mm_AMOS_guided
	{
		submunitionAmmo = "M_Mo_155mm_AT";
		muzzleEffect = "";
		triggerDistance = 500;
		hit = 300;
	};
	class Sh_155mm_AMOS_LG: Sh_82mm_AMOS_LG
	{
		submunitionAmmo = "M_Mo_155mm_AT_LG";
		muzzleEffect = "";
		triggerDistance = 500;
		hit = 300;
	};
	class Smoke_120mm_AMOS_White: SubmunitionBase
	{
		submunitionAmmo = "SmokeShellArty";
		submunitionConeType[] = {"poissondisc", 5};
		submunitionConeAngle = 5;
		triggerDistance = 100;
		cost = 200;
		airFriction = 0;
		muzzleEffect = "";
		hit = 300;
		class CamShakeFire
		{
			power = 3.30975;
			duration = 2.2;
			frequency = 20;
			distance = 87.6356;
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class Mo_ClassicMineRange: ShotDeployBase
	{
		submunitionAmmo = "APERSMine_Range_Ammo";
		airFriction = 0;
		EffectFly = "ArtilleryTrails";
		hit = 300;
	};
	class Mo_ATMineRange: ShotDeployBase
	{
		submunitionAmmo = "ATMine_Range_Ammo";
		airFriction = 0;
		EffectFly = "ArtilleryTrails";
		hit = 300;
	};
	class Mo_UnderwaterMineRange: Mo_ClassicMineRange
	{
		submunitionAmmo = "UnderwaterMine_Range_Ammo";
		airFriction = 0;
		hit = 300;
	};
	class Mine_155mm_AMOS_range: SubmunitionBase
	{
		submunitionAmmo = "Mo_ClassicMineRange";
		submunitionConeType[] = {"randomcenter", 24};
		submunitionConeAngle = 30;
		triggerDistance = 100;
		cost = 500;
		airFriction = 0;
		muzzleEffect = "";
		hit = 300;
		class CamShakeFire
		{
			power = 3.52844;
			duration = 2.4;
			frequency = 20;
			distance = 99.5992;
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class AT_Mine_155mm_AMOS_range: SubmunitionBase
	{
		submunitionAmmo = "Mo_ATMineRange";
		submunitionConeType[] = {"randomcenter", 12};
		submunitionConeAngle = 30;
		triggerDistance = 100;
		cost = 500;
		airFriction = 0;
		muzzleEffect = "";
		hit = 300;
		class CamShakeFire
		{
			power = 3.52844;
			duration = 2.4;
			frequency = 20;
			distance = 99.5992;
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class UWMine_155mm_AMOS_range: Mine_155mm_AMOS_range
	{
		submunitionAmmo = "Mo_UnderwaterMineRange";
		airFriction = 0;
	};
	class Cluster_155mm_AMOS: SubmunitionBase
	{
		triggerDistance = 200;
		triggerSpeedCoef[] = {0.5, 1};
		submunitionConeAngle = 15;
		submunitionConeType[] = {"randomcenter", 35};
		submunitionAmmo[] = {"Mo_cluster_AP", 0.93, "Mo_cluster_AP_UXO_deploy", 0.07};
		cost = 200;
		airFriction = 0;
		muzzleEffect = "";
		hit = 300;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_01", 1.77828, 1, 2000};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_02", 1.77828, 1, 2000};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_03", 1.77828, 1, 2000};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_04", 1.77828, 1, 2000};
		soundHit5[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_05", 1.77828, 1, 2000};
		soundHit6[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_06", 1.77828, 1, 2000};
		soundHit7[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_07", 1.77828, 1, 2000};
		soundHit8[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_08", 1.77828, 1, 2000};
		multiSoundHit[] = {"soundHit1", 0.125, "soundHit2", 0.125, "soundHit3", 0.125, "soundHit4", 0.125, "soundHit5", 0.125, "soundHit6", 0.125, "soundHit7", 0.125, "soundHit8", 0.125};
		class CamShakeFire
		{
			power = 3.52844;
			duration = 2.4;
			frequency = 20;
			distance = 99.5992;
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		SoundSetExplosion[] = {"GrenadeHe_Exp_SoundSet", "GrenadeHe_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class M_PG_AT: MissileBase
	{
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Rocket_01_F";
		submunitionAmmo = "ammo_Penetrator_PG_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 95;
		indirectHit = 40;
		indirectHitRange = 3.2;
		warheadName = "HE";
		cost = 200;
		maxSpeed = 720;
		irLock = 1;
		laserLock = 1;
		aiAmmoUsageFlags = "128 + 64";
		trackOversteer = 1;
		trackLead = 1;
		maneuvrability = 8;
		timeToLive = 20;
		simulationStep = 0.002;
		airFriction = 0.1;
		sideAirFriction = 0.16;
		initTime = 0;
		thrustTime = 1.07;
		thrust = 825;
		fuseDistance = 50;
		effectsMissileInit = "MissileDAR1";
		effectsMissile = "missile2";
		whistleDist = 4;
		muzzleEffect = "";
		airLock = 0;
		missileLockCone = 30;
		missileKeepLockedCone = 60;
		missileLockMaxDistance = 5000;
		missileLockMinDistance = 100;
		missileLockMaxSpeed = 35;
		weaponLockSystem = "2 + 4 + 16";
		cmImmunity = 0.3;
		manualControl = 1;
		maxControlRange = 5000;
		missileManualControlCone = 240;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 35;
						angleRangeHorizontal = 45;
						angleRangeVertical = 35;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 4000;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 4000;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 35;
						angleRangeHorizontal = 90;
						angleRangeVertical = 70;
					};
				};
			};
		};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 0.562341, 1.2, 700};
		SoundSetExplosion[] = {"RocketsLight_Exp_SoundSet", "RocketsLight_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class M_AT: M_PG_AT
	{
		submunitionAmmo = "";
		submunitionDirectionType = "";
		submunitionInitSpeed = 0;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, 0};
		triggerOnImpact = 0;
		hit = 300;
		cost = 100;
		indirectHit = 50;
		indirectHitRange = 8;
		irLock = 0;
		laserLock = 0;
		maneuvrability = 0;
		maxControlRange = 0;
		simulationStep = 0.05;
		sideAirFriction = 0.005;
		muzzleEffect = "";
		simulation = "shotRocket";
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 1900};
		multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
		soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_2", 0.562341, 1.2, 700};
		explosionSoundEffect = "DefaultExplosion";
		weaponLockSystem = 0;
		manualControl = 0;
		SoundSetExplosion[] = {"RocketsLight_Exp_SoundSet", "RocketsLight_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class M_NLAW_AT_F: MissileBase
	{
		hit = 50;
		indirectHit = 25;
		indirectHitRange = 2.4;
		proximityExplosionDistance = 5;
		explosive = 0.5;
		maneuvrability = 2;
		simulationStep = 0.002;
		trackOversteer = 0.8;
		trackLead = 1;
		irLock = 1;
		aiAmmoUsageFlags = "128 + 512";
		maxControlRange = 11;
		model = "\A3\weapons_f\launchers\nlaw\nlaw_rocket";
		cost = 400;
		timeToLive = 8;
		airFriction = 0.09;
		sideAirFriction = 0.5;
		maxSpeed = 180;
		initTime = 0.2;
		thrustTime = 0.8;
		thrust = 200;
		fuseDistance = 20;
		effectsMissile = "missile3";
		whistleDist = 16;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissileInit = "";
		allowAgainstInfantry = 0;
		soundHit[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\NLAW_Hit", 1.77828, 1, 1500};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Fly_NLAW", 0.562341, 1.5, 700};
		class CamShakeExplode
		{
			power = 11;
			duration = 1.4;
			frequency = 20;
			distance = 91.3296;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.51487;
			duration = 1.2;
			frequency = 20;
			distance = 50.5964;
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		submunitionAmmo = "ammo_Penetrator_NLAW";
		submunitionDirectionType = "SubmunitionTargetDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.5};
		triggerOnImpact = 1;
		triggerDistance = 2.5;
		deleteParentWhenTriggered = 0;
		flightProfiles[] = {"Direct", "Overfly"};
		class Direct
		{
		};
		class Overfly: Direct
		{
			overflyElevation = 2.5;
		};
		airLock = 1;
		missileLockCone = 5;
		missileKeepLockedCone = 300;
		missileLockMaxDistance = 800;
		missileLockMinDistance = 20;
		missileLockMaxSpeed = 35;
		weaponLockSystem = "1 + 16";
		cmImmunity = 0.2;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 800;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 800;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 35;
						nightRangeCoef = 0.8;
						angleRangeHorizontal = 5;
						angleRangeVertical = 5;
						maxTrackableATL = 20;
					};
				};
			};
		};
		SoundSetExplosion[] = {"RocketsMedium_Exp_SoundSet", "RocketsMedium_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class M_Scalpel_AT: MissileBase
	{
		hit = 150;
		indirectHit = 50;
		indirectHitRange = 4;
		warheadName = "TandemHEAT";
		submunitionAmmo = "ammo_Penetrator_Scalpel";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_02", 0.891251, 1, 1900};
		model = "\A3\Weapons_F\Ammo\Missile_AT_03_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Missile_AT_03_F";
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		whistleDist = 8;
		maneuvrability = 15;
		simulationStep = 0.002;
		aiAmmoUsageFlags = "128 + 512";
		irLock = 1;
		nvLock = 1;
		laserLock = 1;
		cost = 300;
		maxSpeed = 450;
		timeToLive = 28;
		airFriction = 0.103;
		sideAirFriction = 0.18;
		trackLead = 1;
		trackOversteer = 1.5;
		initTime = 0;
		thrustTime = 3.5;
		thrust = 168;
		fuseDistance = 500;
		muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
		class Hiteffects
		{
			hitWater = "ImpactEffectsSmall";
		};
		cameraViewAvailable = 1;
		airLock = 0;
		missileLockCone = 30;
		missileKeepLockedCone = 60;
		missileLockMaxDistance = 6000;
		missileLockMinDistance = 250;
		missileLockMaxSpeed = 55;
		weaponLockSystem = "2 + 4 + 16";
		cmImmunity = 0.45;
		manualControl = 1;
		maxControlRange = 6000;
		missileManualControlCone = 120;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 0.562341, 1.5, 700};
		flightProfiles[] = {"TopDown"};
		class TopDown
		{
			ascendHeight = 400;
			descendDistance = 800;
			minDistance = 800;
			ascendAngle = 20;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 55;
						angleRangeHorizontal = 45;
						angleRangeVertical = 35;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 6000;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 6000;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 55;
						angleRangeHorizontal = 90;
						angleRangeVertical = 70;
					};
				};
			};
		};
		SoundSetExplosion[] = {"RocketsMedium_Exp_SoundSet", "RocketsMedium_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class M_Scalpel_AT_hidden: M_Scalpel_AT
	{
		proxyShape = "\A3\weapons_f\empty";
	};
	class Bo_Air_LGB: M_Scalpel_AT
	{
	};
	class Bo_Air_LGB_hidden: M_Scalpel_AT_hidden
	{
	};
	class Bo_GBU12_LGB: ammo_Bomb_LaserGuidedBase
	{
		model = "\A3\Weapons_F\Ammo\Bomb_01_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Bomb_01_F";
		SoundSetExplosion[] = {"BombsHeavy_Exp_SoundSet", "BombsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class Bo_GBU12_LGB_MI10: Bo_GBU12_LGB
	{
		maverickWeaponIndexOffset = 10;
	};
	class Bomb_03_F: ammo_Bomb_LaserGuidedBase
	{
		model = "\A3\Weapons_F_EPC\Ammo\Bomb_03_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Bomb_03_F.p3d";
		maverickWeaponIndexOffset = 6;
		hit = 6400;
		indirectHit = 1400;
		indirectHitRange = 16;
	};
	class Bomb_04_F: ammo_Bomb_LaserGuidedBase
	{
		model = "\A3\Weapons_F_EPC\Ammo\Bomb_04_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Bomb_04_F.p3d";
		maverickWeaponIndexOffset = 8;
		SoundSetExplosion[] = {"BombsHeavy_Exp_SoundSet", "BombsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class Bo_Mk82: BombCore
	{
		hit = 5000;
		indirectHit = 1100;
		indirectHitRange = 12;
		dangerRadiusHit = 1250;
		suppressionRadiusHit = 100;
		cost = 500;
		irLock = 0;
		laserLock = 0;
		airFriction = 0.08;
		sideAirFriction = 0.12;
		maneuvrability = 4.6;
		trackLead = 0;
		maxSpeed = 100;
		timeToLive = 120;
		initTime = 0;
		thrustTime = 0;
		thrust = 0;
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\expl_big_1", 2.51189, 1, 1500};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\expl_big_2", 2.51189, 1, 1500};
		soundHit3[] = {"A3\Sounds_F\weapons\Explosion\expl_big_3", 2.51189, 1, 1500};
		soundHit4[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_1", 2.51189, 1, 1500};
		soundHit5[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_2", 2.51189, 1, 1500};
		multiSoundHit[] = {"soundHit1", 0.2, "soundHit2", 0.2, "soundHit3", 0.2, "soundHit4", 0.2, "soundHit5", 0.2};
		explosionSoundEffect = "DefaultExplosion";
		model = "\A3\Weapons_F\Ammo\Bomb_02_F";
		proxyShape = "\A3\Weapons_F\Ammo\Bomb_02_F";
		CraterEffects = "BombCrater";
		explosionEffects = "BombExplosion";
		whistleDist = 24;
		SoundSetExplosion[] = {"BombsHeavy_Exp_SoundSet", "BombsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class Bo_Mk82_MI08: Bo_Mk82
	{
		maverickWeaponIndexOffset = 8;
	};
	class R_PG32V_F: RocketBase
	{
		model = "\A3\weapons_f\launchers\RPG32\pg32v_rocket.p3d";
		hit = 150;
		indirectHit = 28;
		indirectHitRange = 3;
		warheadName = "TandemHEAT";
		submunitionAmmo = "ammo_Penetrator_RPG32V";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		explosive = 1;
		cost = 100;
		airFriction = 0.075;
		sideAirFriction = 0.075;
		maxSpeed = 140;
		initTime = 0;
		thrustTime = 0.1;
		thrust = 500;
		fuseDistance = 10;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "";
		effectsMissile = "EmptyEffect";
		simulationStep = 0.02;
		airLock = 0;
		aiAmmoUsageFlags = "128 + 512";
		irLock = 0;
		timeToLive = 10;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Fly_RPG32", 0.316228, 1.5, 900};
		class CamShakeExplode
		{
			power = 11;
			duration = 1.4;
			frequency = 20;
			distance = 99.3296;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.11474;
			duration = 0.8;
			frequency = 20;
			distance = 35.7771;
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		SoundSetExplosion[] = {"RocketsLight_Exp_SoundSet", "RocketsLight_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class R_TBG32V_F: R_PG32V_F
	{
		submunitionAmmo = "";
		submunitionDirectionType = "";
		submunitionInitSpeed = 0;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, 0};
		triggerOnImpact = 0;
		hit = 200;
		indirectHit = 50;
		indirectHitRange = 6;
		warheadName = "HE";
		explosive = 1;
		model = "\A3\weapons_f\launchers\RPG32\tbg32v_rocket.p3d";
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "MortarExplosion";
		aiAmmoUsageFlags = "64 + 128";
		class CamShakeExplode
		{
			power = 22;
			duration = 2;
			frequency = 20;
			distance = 123.905;
		};
	};
	class R_80mm_HE: RocketBase
	{
		model = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
		hit = 400;
		indirectHit = 60;
		indirectHitRange = 15;
		warheadName = "HE";
		cost = 100;
		maxSpeed = 590;
		initTime = 0.002;
		thrustTime = 0.69;
		thrust = 1060;
		airFriction = 0.09;
		sideAirFriction = 0.005;
		fuseDistance = 50;
		whistleDist = 30;
		timeToLive = 15;
		effectsMissileInit = "PylonBackEffectsRockets";
		muzzleEffect = "";
		simulation = "shotMissile";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 0.562341, 1.9, 700};
		class CamShakeExplode
		{
			power = 16;
			duration = 1.8;
			frequency = 20;
			distance = 191.554;
		};
		class CamShakeHit
		{
			power = 80;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.9907;
			duration = 1.8;
			frequency = 20;
			distance = 71.5542;
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		SoundSetExplosion[] = {"RocketsMedium_Exp_SoundSet", "RocketsMedium_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class R_60mm_HE: R_80mm_HE
	{
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		hit = 200;
		indirectHit = 40;
		indirectHitRange = 10;
		cost = 100;
		maxSpeed = 490;
		thrustTime = 1.1;
		thrust = 620;
		airFriction = 0.2;
		timeToLive = 10;
		class CamShakeExplode
		{
			power = 12;
			duration = 1.6;
			frequency = 20;
			distance = 141.968;
		};
		class CamShakeHit
		{
			power = 60;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.78316;
			duration = 1.6;
			frequency = 20;
			distance = 61.9677;
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class R_230mm_HE: SubmunitionBase
	{
		artilleryLock = 1;
		submunitionAmmo = "R_230mm_fly";
		triggerDistance = 500;
		cost = 1000;
		airFriction = 0;
		muzzleEffect = "";
		effectFly = "Missile0";
		model = "\A3\Weapons_F\Ammo\Rocket_230mm_F";
		hit = 300;
		class CamShakeExplode
		{
			power = 46;
			duration = 3;
			frequency = 20;
			distance = 361.326;
		};
		class CamShakeHit
		{
			power = 230;
			duration = 0.8;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.89432;
			duration = 3;
			frequency = 20;
			distance = 121.326;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 0.562341, 1.9, 500};
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class R_230mm_Cluster: R_230mm_HE
	{
		triggerDistance = 250;
		triggerSpeedCoef[] = {0.5, 1};
		submunitionConeAngle = 19;
		submunitionConeType[] = {"randomcenter", 50};
		submunitionAmmo[] = {"Mo_cluster_AP", 0.93, "Mo_cluster_AP_UXO_deploy", 0.07};
	};
	class R_230mm_LG: R_230mm_HE
	{
		submunitionAmmo = "M_Mo_230mm_AT_LG";
		muzzleEffect = "";
		triggerDistance = 500;
	};
	class R_230mm_fly: ShellBase
	{
		artilleryLock = 1;
		model = "\A3\Weapons_F\Ammo\Rocket_230mm_Fly_F";
		hit = 1200;
		indirectHit = 800;
		indirectHitRange = 30;
		warheadName = "HE";
		cost = 1000;
		audibleFire = 64;
		dangerRadiusHit = 1250;
		suppressionRadiusHit = 120;
		deflecting = 0;
		airFriction = 0;
		muzzleEffect = "";
		effectFly = "ArtilleryTrails";
		class CamShakeExplode
		{
			power = 46;
			duration = 3;
			frequency = 20;
			distance = 361.326;
		};
		class CamShakeHit
		{
			power = 230;
			duration = 0.8;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.89432;
			duration = 3;
			frequency = 20;
			distance = 121.326;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 1900};
		multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class G_40mm_HE: GrenadeBase
	{
		explosionSoundEffect = "DefaultExplosion";
		simulation = "shotShell";
		model = "\A3\weapons_f\ammo\UGL_slug";
		hit = 80;
		indirectHit = 8;
		indirectHitRange = 6;
		warheadName = "HE";
		visibleFire = 1;
		audibleFire = 30;
		visibleFireTime = 3;
		dangerRadiusHit = 60;
		suppressionRadiusHit = 24;
		explosive = 1;
		cost = 10;
		deflecting = 5;
		airFriction = -0.001;
		fuseDistance = 15;
		whistleDist = 16;
		typicalSpeed = 185;
		caliber = 2;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_01", 3.16228, 1, 1500};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_02", 3.16228, 1, 1500};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_03", 3.16228, 1, 1500};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_04", 3.16228, 1, 1500};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		class CamShakeExplode
		{
			power = 8;
			duration = 1.2;
			frequency = 20;
			distance = 74.5964;
		};
		class CamShakeHit
		{
			power = 20;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 0;
			duration = 0.2;
			frequency = 20;
			distance = 0;
		};
		class CamShakePlayerFire
		{
			power = 0;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		SoundSetExplosion[] = {"GrenadeHe_Exp_SoundSet", "GrenadeHe_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class G_20mm_HE: G_40mm_HE
	{
		hit = 40;
		indirectHit = 6;
		indirectHitRange = 4;
		whistleDist = 20;
		caliber = 1;
		class CamShakeExplode
		{
			power = 4;
			duration = 0.8;
			frequency = 20;
			distance = 75.7771;
		};
		class CamShakeHit
		{
			power = 20;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
	};
	class G_40mm_HEDP: G_40mm_HE
	{
		hit = 100;
		indirectHit = 6;
		indirectHitRange = 4;
		caliber = 3;
		warheadName = "HEAT";
		class CamShakeHit
		{
			power = 30;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
	};
	class G_40mm_HEDP_Bullet: G_40mm_HEDP
	{
		simulation = "shotBullet";
	};
	class B_45ACP_Ball: BulletBase
	{
		airLock = 1;
		hit = 5;
		indirectHit = 0;
		indirectHitRange = 0;
		aiAmmoUsageFlags = 64;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
		cartridge = "FxCartridge_9mm";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		caliber = 1.4;
		deflecting = 25;
		audibleFire = 45;
		cost = 100;
		typicalSpeed = 280;
		airFriction = -0.0018;
		tracerScale = 0.6;
		tracerStartTime = 0.0075;
		tracerEndTime = 5;
	};
	class B_45ACP_Ball_Green: B_45ACP_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_45ACP_Ball_Yellow: B_45ACP_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class M_Titan_AA: MissileBase
	{
		model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_atl_fly.p3d";
		hit = 80;
		indirectHit = 60;
		indirectHitRange = 6;
		warheadName = "HE";
		proximityExplosionDistance = 10;
		maneuvrability = 15;
		simulationStep = 0.002;
		trackOversteer = 1;
		trackLead = 0.95;
		aiAmmoUsageFlags = 256;
		irLock = 1;
		cost = 1000;
		timeToLive = 15;
		airFriction = 0.145;
		sideAirFriction = 0.1;
		maxSpeed = 850;
		initTime = 0.25;
		thrustTime = 2.25;
		thrust = 380;
		fuseDistance = 50;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissileInit = "";
		effectsMissile = "missile3";
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 1900};
		multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
		airLock = 2;
		missileLockCone = 4;
		missileKeepLockedCone = 75;
		missileLockMaxDistance = 3500;
		missileLockMinDistance = 100;
		missileLockMaxSpeed = 250;
		weaponLockSystem = "2 + 16";
		cmImmunity = 0.9;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 3500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 2500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 250;
						angleRangeHorizontal = 7;
						angleRangeVertical = 4.5;
						groundNoiseDistanceCoef = 0.2;
						maxGroundNoiseDistance = 50;
					};
				};
			};
		};
		class CamShakeExplode
		{
			power = 22;
			duration = 2;
			frequency = 20;
			distance = 147.905;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.78316;
			duration = 1.6;
			frequency = 20;
			distance = 61.9677;
		};
		class CamShakePlayerFire
		{
			power = 3;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class M_Titan_AA_static: M_Titan_AA
	{
		effectsMissileInit = "RocketBackEffectsStaticRPG";
	};
	class M_Titan_AA_long: M_Titan_AA
	{
		model = "\A3\Weapons_F_Beta\Launchers\Titan\titan_missile_atl_fly.p3d";
		thrustTime = 3;
		missileLockCone = 30;
		missileKeepLockedCone = 40;
		missileLockMaxDistance = 4500;
		missileLockMaxSpeed = 500;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 4500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 500;
						angleRangeHorizontal = 40;
						angleRangeVertical = 25;
						groundNoiseDistanceCoef = 0.2;
						maxGroundNoiseDistance = 50;
					};
				};
			};
		};
	};
	class M_Zephyr: M_Titan_AA
	{
		proxyShape = "\A3\Weapons_F\Ammo\Missile_AA_02_F.p3d";
		model = "\A3\Weapons_F\Ammo\Missile_AA_02_fly_F.p3d";
		airFriction = 0.078;
		sideAirFriction = 0.18;
		maneuvrability = 22;
		hit = 170;
		indirectHit = 115;
		indirectHitRange = 12;
		proximityExplosionDistance = 25;
		timeToLive = 30;
		initTime = 0.6;
		effectsMissileInit = "PylonBackEffects_InitDelay";
		muzzleEffect = "";
		thrustTime = 7;
		thrust = 200;
		maxSpeed = 850;
		fuseDistance = 500;
		cost = 1500;
		trackOversteer = 1.1;
		trackLead = 1.05;
		class CamShakeFire
		{
			power = 2.9907;
			duration = 1.8;
			frequency = 20;
			distance = 71.5542;
		};
		class CamShakePlayerFire
		{
			power = 4;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		activeSensorAlwaysOn = 0;
		missileLockCone = 40;
		missileKeepLockedCone = 75;
		missileLockMaxDistance = 10000;
		missileLockMinDistance = 500;
		missileLockMaxSpeed = 835;
		weaponLockSystem = "8 + 16";
		cmImmunity = 0.94;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 0.562341, 1.1, 700};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class RadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 10000;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
					};
				};
			};
		};
	};
	class M_Zephyr_Mi06: M_Zephyr
	{
		maverickWeaponIndexOffset = 6;
	};
	class M_Zephyr_air: M_Zephyr
	{
		effectsMissile = "missile3";
	};
	class Mo_cluster_AP: ShellBase
	{
		model = "\A3\weapons_f\ammo\shell";
		hit = 35;
		indirectHit = 25;
		indirectHitRange = 8;
		CraterEffects = "ClusterCraterEffects";
		CraterWaterEffects = "ClusterCraterWaterEffects";
		EffectFly = "ClusterEffectFly";
		ExplosionEffects = "ClusterExplosionEffects";
		effectsSmoke = "";
		class CamShakeExplode
		{
			power = 7;
			duration = 1.2;
			frequency = 20;
			distance = 287.329;
		};
		class CamShakeHit
		{
			power = 35;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.4323;
			duration = 1.2;
			frequency = 20;
			distance = 47.3286;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		timeToLive = 20;
		initTime = 0.025;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_01", 1.77828, 1, 2000};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_02", 1.77828, 1, 2000};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_03", 1.77828, 1, 2000};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_04", 1.77828, 1, 2000};
		soundHit5[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_05", 1.77828, 1, 2000};
		soundHit6[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_06", 1.77828, 1, 2000};
		soundHit7[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_07", 1.77828, 1, 2000};
		soundHit8[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_08", 1.77828, 1, 2000};
		multiSoundHit[] = {"soundHit1", 0.125, "soundHit2", 0.125, "soundHit3", 0.125, "soundHit4", 0.125, "soundHit5", 0.125, "soundHit6", 0.125, "soundHit7", 0.125, "soundHit8", 0.125};
		SoundSetExplosion[] = {"ClusterBomb_Exp_SoundSet", "ClusterBomb_Debris_SoundSet"};
	};
	class M_Air_AA: MissileBase
	{
		model = "\A3\Weapons_F\Ammo\Missile_AT_02_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Missile_AT_02_F";
		hit = 200;
		indirectHit = 100;
		indirectHitRange = 7;
		warheadName = "HE";
		maneuvrability = 42;
		simulationStep = 0.002;
		aiAmmoUsageFlags = 256;
		irLock = 1;
		cost = 1000;
		maxSpeed = 1020;
		timeToLive = 30;
		airFriction = 0.14;
		sideAirFriction = 0.18;
		trackOversteer = 1;
		trackLead = 1;
		initTime = 0;
		thrustTime = 5;
		thrust = 250;
		fuseDistance = 300;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissile = "missile3";
		whistleDist = 20;
		muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 1900};
		multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2", 0.562341, 1.1, 700};
		airLock = 2;
		missileLockCone = 90;
		missileKeepLockedCone = 120;
		missileLockMaxDistance = 6000;
		missileLockMinDistance = 200;
		missileLockMaxSpeed = 600;
		weaponLockSystem = "2 + 16";
		cmImmunity = 0.92;
		manualControl = 0;
		maxControlRange = 6000;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 5000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 120;
						angleRangeVertical = 90;
					};
				};
			};
		};
		class CamShakeExplode
		{
			power = 22;
			duration = 2;
			frequency = 20;
			distance = 163.905;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.9907;
			duration = 1.8;
			frequency = 20;
			distance = 71.5542;
		};
		class CamShakePlayerFire
		{
			power = 4;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class M_Air_AA_MI02: M_Air_AA
	{
		maverickWeaponIndexOffset = 2;
	};
	class M_Air_AA_MI06: M_Air_AA
	{
		maverickWeaponIndexOffset = 6;
	};
	class M_Titan_AT: MissileBase
	{
		model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_at_fly";
		hit = 95;
		indirectHit = 20;
		indirectHitRange = 3.3;
		explosive = 1;
		warheadName = "HE";
		submunitionAmmo = "ammo_Penetrator_Titan_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		cost = 500;
		aiAmmoUsageFlags = "128 + 512";
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "";
		muzzleEffect = "";
		simulationStep = 0.002;
		initTime = 0.25;
		trackOversteer = 1.5;
		trackLead = 0.9;
		timeToLive = 22;
		maneuvrability = 20;
		airFriction = 0.085;
		sideAirFriction = 1;
		maxSpeed = 180;
		typicalSpeed = 160;
		thrustTime = 5;
		thrust = 45;
		fuseDistance = 50;
		effectsMissile = "missile2";
		whistleDist = 4;
		airLock = 1;
		lockType = 0;
		missileLockCone = 4.5;
		missileKeepLockedCone = 160;
		missileLockMaxDistance = 2000;
		missileLockMinDistance = 50;
		missileLockMaxSpeed = 35;
		manualControl = 1;
		missileManualControlCone = 45;
		maxControlRange = 2000;
		weaponLockSystem = "2 + 16";
		cmImmunity = 0.4;
		flightProfiles[] = {"Direct", "TopDown"};
		class Direct
		{
		};
		class TopDown
		{
			ascendHeight = 150;
			descendDistance = 180;
			minDistance = 180;
			ascendAngle = 30;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 2000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 2000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 35;
						angleRangeHorizontal = 3.7;
						angleRangeVertical = 2.3;
						maxTrackableATL = 50;
					};
				};
			};
		};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Fly_Titan", 0.630957, 1.5, 300};
		class CamShakeExplode
		{
			power = 11;
			duration = 1.4;
			frequency = 20;
			distance = 91.3296;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.78316;
			duration = 1.6;
			frequency = 20;
			distance = 61.9677;
		};
		class CamShakePlayerFire
		{
			power = 3;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class M_Titan_AP: M_Titan_AT
	{
		submunitionAmmo = "";
		submunitionDirectionType = "";
		submunitionInitSpeed = 0;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, 0};
		triggerOnImpact = 0;
		model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_ap_fly";
		hit = 100;
		indirectHit = 25;
		indirectHitRange = 10;
		warheadName = "HE";
		explosive = 1;
		aiAmmoUsageFlags = "64 + 128";
		irLock = 0;
		cost = 300;
		CraterEffects = "ATMissileCrater";
		effectsMissile = "missile3";
		lockType = 1;
		manualControl = 1;
		manualControlOffset = 100;
		missileManualControlCone = 60;
		flightProfiles[] = {"Direct"};
		class Components: Components
		{
			class SensorsManagerComponent
			{
			};
		};
		class CamShakeExplode
		{
			power = 11;
			duration = 1.4;
			frequency = 20;
			distance = 123.33;
		};
		class CamShakeHit
		{
			power = 55;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
	};
	class M_Titan_AT_static: M_Titan_AT
	{
		effectsMissileInit = "RocketBackEffectsStaticRPG";
		initTime = 0.1;
	};
	class M_Titan_AT_long: M_Titan_AT
	{
		submunitionAmmo = "ammo_Penetrator_Titan_AT_long";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		warheadName = "TandemHEAT";
		hit = 150;
		indirectHit = 40;
		indirectHitRange = 4;
		timeToLive = 35;
		initTime = 0.15;
		thrustTime = 8;
		thrust = 35;
		maxSpeed = 180;
		typicalSpeed = 1660;
		missileLockCone = 12;
		missileLockMaxDistance = 5000;
		missileLockMinDistance = 200;
		missileLockMaxSpeed = 35;
		maxControlRange = 5000;
		weaponLockSystem = "2 + 16";
		cmImmunity = 0.5;
		flightProfiles[] = {"Direct", "TopDown"};
		class Direct
		{
		};
		class TopDown
		{
			ascendHeight = 200;
			descendDistance = 240;
			minDistance = 240;
			ascendAngle = 30;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 5000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 35;
						angleRangeHorizontal = 9.5;
						angleRangeVertical = 6;
						maxTrackableATL = 50;
					};
				};
			};
		};
	};
	class M_Air_AT: M_Titan_AT
	{
	};
	class IRStrobeBase: GrenadeCore
	{
		muzzleEffect = "BIS_Effects_Rifle";
		timeToLive = 300;
		explosionTime = 310;
		shadow = 1;
		hit = 5;
		indirectHit = 2;
		indirectHitRange = 0.2;
		typicalspeed = 18;
		cost = 5000;
		irLock = 1;
		simulation = "shotNVGMarker";
		simulationStep = 0.05;
		explosive = 0;
		soundHit[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_1", 1, 1, 45};
		deflecting = 30;
		class NVGMarkers
		{
			class Blinking1
			{
				name = "cerveny pozicni blik";
				color[] = {0.01, 0.01, 0.01, 1};
				ambient[] = {0.005, 0.005, 0.005, 1};
				blinking = 1;
				brightness = 0.002;
				onlyInNvg = 1;
			};
		};
		soundImpactSoft1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_1", 1.41254, 1, 45};
		soundImpactSoft2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_2", 1.41254, 1, 45};
		soundImpactSoft3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_3", 1.41254, 1, 45};
		soundImpactSoft4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_4", 1.41254, 1, 45};
		soundImpactSoft5[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_5", 1.41254, 1, 45};
		soundImpactSoft6[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_6", 1.41254, 1, 45};
		soundImpactSoft7[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_7", 1.41254, 1, 45};
		soundImpactHard1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_1", 1.41254, 1, 65};
		soundImpactHard2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_2", 1.41254, 1, 65};
		soundImpactHard3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_3", 1.41254, 1, 65};
		soundImpactHard4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_4", 1.41254, 1, 65};
		soundImpactHard5[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_5", 1.41254, 1, 65};
		soundImpactHard6[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_6", 1.41254, 1, 65};
		soundImpactHard7[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_7", 1.41254, 1, 65};
		soundImpactIron1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_1", 1.25893, 1, 95};
		soundImpactIron2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_2", 1.25893, 1, 95};
		soundImpactIron3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_3", 1.25893, 1, 95};
		soundImpactIron4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_4", 1.25893, 1, 95};
		soundImpactIron5[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_5", 1.25893, 1, 95};
		soundImpactWoodExt1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_1", 1.41254, 1, 75};
		soundImpactWoodExt2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_2", 1.41254, 1, 75};
		soundImpactWoodExt3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_3", 1.41254, 1, 75};
		soundImpactWoodExt4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_4", 1.41254, 1, 75};
		soundImpactWater1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_1", 1.41254, 1, 55};
		soundImpactWater2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_2", 1.41254, 1, 55};
		soundImpactWater3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_3", 1.41254, 1, 55};
		impactGroundSoft[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1};
		impactGroundHard[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
		impactIron[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
		impactArmor[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
		impactBuilding[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
		impactFoliage[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1};
		impactWood[] = {"soundImpactWoodExt1", 0.25, "soundImpactWoodExt2", 0.25, "soundImpactWoodExt3", 0.25, "soundImpactWoodExt4", 0.25};
		impactGlass[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
		impactGlassArmored[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
		impactConcrete[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
		impactTyre[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1};
		impactRubber[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1};
		impactPlastic[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1};
		impactDefault[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
		impactMetal[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
		impactMetalplate[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
		impactWater[] = {"soundImpactWater1", 0.35, "soundImpactWater2", 0.35, "soundImpactWater3", 0.3};
	};
	class B_IRStrobe: IRStrobeBase
	{
		model = "\A3\Weapons_F_EPB\Ammo\B_IRstrobe_F.p3d";
		class NVGMarkers
		{
			class Blinking1
			{
			};
		};
	};
	class O_IRStrobe: IRStrobeBase
	{
		model = "\A3\Weapons_F_EPB\Ammo\O_IRstrobe_F.p3d";
		class NVGMarkers
		{
			class Blinking1
			{
			};
		};
	};
	class I_IRStrobe: IRStrobeBase
	{
		model = "\A3\Weapons_F_EPB\Ammo\I_IRstrobe_F.p3d";
		class NVGMarkers
		{
			class Blinking1
			{
			};
		};
	};
	class B_762x51_Minigun_Tracer_Yellow: B_762x51_Minigun_Tracer_Red
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		submunitionAmmo = "B_762x51_Minigun_Tracer_Yellow_splash";
	};
	class B_762x51_Minigun_Tracer_Yellow_splash: B_762x51_Minigun_Tracer_Red_splash
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class Sh_125mm_APFSDS: Sh_120mm_APFSDS
	{
		hit = 550;
		indirectHit = 20;
		indirectHitRange = 0.5;
		typicalSpeed = 1550;
		caliber = 34.8387;
		deflecting = 15;
	};
	class Sh_125mm_APFSDS_T_Red: Sh_125mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class Sh_125mm_APFSDS_T_Green: Sh_125mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
	};
	class Sh_125mm_APFSDS_T_Yellow: Sh_125mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
	};
	class Sh_125mm_HE: Sh_120mm_HE
	{
		hit = 300;
		indirectHit = 80;
		indirectHitRange = 6;
		caliber = 10;
		deflecting = 4;
	};
	class Sh_125mm_HE_T_Red: Sh_125mm_HE
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class Sh_125mm_HE_T_Green: Sh_125mm_HE
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
	};
	class Sh_125mm_HE_T_Yellow: Sh_125mm_HE
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
	};
	class Sh_125mm_HEAT: Sh_125mm_HE
	{
		warheadName = "TandemHEAT";
		hit = 150;
		indirectHit = 31;
		indirectHitRange = 3.75;
		submunitionAmmo = "ammo_Penetrator_125mm";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		cost = 500;
		typicalSpeed = 900;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01", 1.77828, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02", 1.77828, 1, 1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03", 1.77828, 1, 1800};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04", 1.77828, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		explosionSoundEffect = "DefaultExplosion";
	};
	class Sh_125mm_HEAT_T_Red: Sh_125mm_HEAT
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class Sh_125mm_HEAT_T_Green: Sh_125mm_HEAT
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
	};
	class Sh_125mm_HEAT_T_Yellow: Sh_125mm_HEAT
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
	};
	class Gatling_30mm_HE_Plane_CAS_01_F: BulletBase
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red.p3d";
		cost = 20;
		hit = 180;
		indirectHit = 4;
		indirectHitRange = 3;
		caliber = 5;
		explosive = 0.4;
		warheadName = "AP";
		airlock = 1;
		deflecting = 5;
		airFriction = -0.00036;
		typicalSpeed = 960;
		visibleFire = 32;
		audibleFire = 250;
		visibleFireTime = 3;
		fuseDistance = 10;
		dangerRadiusBulletClose = 20;
		dangerRadiusHit = 60;
		suppressionRadiusBulletClose = 12;
		suppressionRadiusHit = 24;
		tracerScale = 2.5;
		tracerStartTime = 0.1;
		tracerEndTime = 4.7;
		soundFly[] = {"", 1, 1, 50};
		explosionSoundEffect = "DefaultExplosion";
		explosionEffects = "ExploAmmoExplosionPlaneCAS";
		craterEffects = "ExploAmmoCrater";
		soundSetSonicCrack[] = {"BulletSonicCrack_Gatling_SoundSet"};
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_01", 3.16228, 1, 1300};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_02", 3.16228, 1, 1300};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_03", 3.16228, 1, 1300};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_04", 3.16228, 1, 1300};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		class CamShakeExplode
		{
			power = 6;
			duration = 1;
			frequency = 20;
			distance = 67.8178;
		};
		class CamShakeHit
		{
			power = 30;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.23607;
			duration = 1;
			frequency = 20;
			distance = 40;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "";
			hitGlassArmored = "";
			hitWood = "ImpactWood";
			hitHay = "ImpactHay";
			hitMetal = "";
			hitMetalPlate = "";
			hitBuilding = "";
			hitPlastic = "";
			hitRubber = "";
			hitConcrete = "";
			hitMan = "";
			hitGroundSoft = "";
			hitGroundHard = "";
			hitWater = "ImpactEffectsWater";
			hitVirtual = "";
		};
		SoundSetExplosion[] = {"Shell19mm25mm_Exp_SoundSet"};
	};
	class Missile_AA_04_F: MissileBase
	{
		model = "\A3\Weapons_F_EPC\Ammo\Missile_AA_04_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Missile_AA_04_F.p3d";
		maverickWeaponIndexOffset = 0;
		cost = 1000;
		hit = 100;
		indirectHit = 75;
		indirectHitRange = 9;
		proximityExplosionDistance = 15;
		warheadName = "HE";
		airLock = 2;
		irLock = 1;
		laserLock = 0;
		nvLock = 0;
		missileLockCone = 30;
		missileKeepLockedCone = 45;
		missileLockMaxDistance = 4500;
		missileLockMinDistance = 150;
		missileLockMaxSpeed = 445;
		weaponLockSystem = "2 + 16";
		cmImmunity = 0.9;
		manualControl = 0;
		maxControlRange = 4500;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 30;
						angleRangeVertical = 30;
					};
				};
			};
		};
		aiAmmoUsageFlags = 256;
		initTime = 0;
		thrust = 220;
		thrustTime = 5;
		airFriction = 0.14;
		sideAirFriction = 0.2;
		maxSpeed = 920;
		maneuvrability = 36;
		simulationStep = 0.002;
		fuseDistance = 500;
		timeToLive = 20;
		trackLead = 0.9;
		trackOversteer = 1;
		craterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissileInit = "PylonBackEffects";
		muzzleEffect = "";
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 2000};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 2000};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 2000};
		multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
		whistleDist = 8;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 0.562341, 1, 1500};
		class Hiteffects
		{
			hitWater = "ImpactEffectsSmall";
		};
		SoundSetExplosion[] = {"RocketsMedium_Exp_SoundSet", "RocketsMedium_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class Missile_AGM_02_F: MissileBase
	{
		model = "\A3\Weapons_F_EPC\Ammo\Missile_AGM_02_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Missile_AGM_02_F.p3d";
		maverickWeaponIndexOffset = 2;
		cost = 800;
		submunitionAmmo = "ammo_Penetrator_AGM_02";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 1100;
		indirectHit = 85;
		indirectHitRange = 8;
		warheadName = "HE";
		cameraViewAvailable = 1;
		airLock = 0;
		missileLockCone = 50;
		missileKeepLockedCone = 30;
		missileLockMaxDistance = 6000;
		missileLockMinDistance = 350;
		missileLockMaxSpeed = 55;
		weaponLockSystem = "2 + 16";
		cmImmunity = 0.5;
		flightProfiles[] = {"TopDown"};
		class TopDown
		{
			ascendHeight = 400;
			descendDistance = 1000;
			minDistance = 400;
			ascendAngle = 0.01;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 55;
						angleRangeHorizontal = 35;
						angleRangeVertical = 35;
					};
				};
			};
		};
		aiAmmoUsageFlags = "128 + 512";
		initTime = 0;
		thrust = 95;
		thrustTime = 4;
		airFriction = 0.05;
		sideAirFriction = 0.15;
		maxSpeed = 320;
		typicalSpeed = 270;
		maneuvrability = 27;
		simulationStep = 0.002;
		fuseDistance = 350;
		timeToLive = 40;
		trackLead = 1;
		trackOversteer = 4;
		craterEffects = "AAMissileCrater";
		effectsMissile = "missile3";
		explosionEffects = "AAMissileExplosion";
		effectsMissileInit = "PylonBackEffects";
		muzzleEffect = "";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2", 0.501187, 1, 1700};
		whistleDist = 20;
		class CamShakeExplode
		{
			power = 22;
			duration = 2;
			frequency = 20;
			distance = 163.905;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.9907;
			duration = 1.8;
			frequency = 20;
			distance = 71.5542;
		};
		class CamShakePlayerFire
		{
			power = 4;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		SoundSetExplosion[] = {"RocketsLight_Exp_SoundSet", "RocketsLight_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class M_Mo_82mm_AT: MissileBase
	{
		model = "\A3\weapons_f\ammo\shell";
		hit = 160;
		indirectHit = 50;
		indirectHitRange = 8;
		autoSeekTarget = 1;
		airLock = 0;
		maneuvrability = 6;
		simulationStep = 0.002;
		fuseDistance = 0;
		airFriction = 0.01;
		sideAirFriction = 0.03;
		weaponLockSystem = 2;
		missileLockCone = 40;
		missileKeepLockedCone = 40;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 800;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 800;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 40;
						angleRangeVertical = 40;
					};
				};
			};
		};
	};
	class M_Mo_82mm_AT_LG: M_Mo_82mm_AT
	{
		hit = 240;
		simulationStep = 0.002;
		weaponLockSystem = 4;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 800;
							maxRange = 800;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 800;
							maxRange = 800;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 40;
						angleRangeVertical = 40;
					};
				};
			};
		};
	};
	class M_Mo_120mm_AT: M_Mo_82mm_AT
	{
		hit = 800;
		indirectHit = 50;
		indirectHitRange = 3;
		EffectFly = "ArtilleryTrails";
		cameraViewAvailable = 1;
	};
	class M_Mo_120mm_AT_LG: M_Mo_120mm_AT
	{
		weaponLockSystem = 4;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 800;
							maxRange = 800;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 800;
							maxRange = 800;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 40;
						angleRangeVertical = 40;
					};
				};
			};
		};
	};
	class M_Mo_155mm_AT: M_Mo_120mm_AT
	{
		hit = 1200;
		indirectHit = 200;
		indirectHitRange = 4;
	};
	class M_Mo_155mm_AT_LG: M_Mo_120mm_AT_LG
	{
		hit = 1200;
		indirectHit = 200;
		indirectHitRange = 4;
	};
	class M_Mo_230mm_AT_LG: M_Mo_155mm_AT_LG
	{
		model = "\A3\Weapons_F_Delta\Ammo\Rocket_230mm_F";
		hit = 1200;
		indirectHit = 800;
		indirectHitRange = 30;
		cost = 1000;
		audibleFire = 64;
		dangerRadiusHit = 1250;
		suppressionRadiusHit = 120;
		deflecting = 0;
		airFriction = 0;
		muzzleEffect = "";
		effectFly = "ArtilleryTrails";
		class CamShakeExplode
		{
			power = 46;
			duration = 3;
			frequency = 20;
			distance = 361.326;
		};
		class CamShakeHit
		{
			power = 230;
			duration = 0.8;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.89432;
			duration = 3;
			frequency = 20;
			distance = 121.326;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class M_Mo_230mm_guided: R_230mm_HE
	{
		submunitionAmmo = "M_Mo_230mm_AT";
		muzzleEffect = "";
		triggerDistance = 500;
		hit = 300;
	};
	class M_Mo_230mm_AT: M_Mo_155mm_AT
	{
		model = "\A3\Weapons_F_Delta\Ammo\Rocket_230mm_F";
		hit = 1200;
		indirectHit = 800;
		indirectHitRange = 30;
		cost = 1000;
		audibleFire = 64;
		dangerRadiusHit = 1250;
		suppressionRadiusHit = 120;
		deflecting = 0;
		airFriction = 0;
		muzzleEffect = "";
		effectFly = "ArtilleryTrails";
		class CamShakeExplode
		{
			power = 46;
			duration = 3;
			frequency = 20;
			distance = 361.326;
		};
		class CamShakeHit
		{
			power = 230;
			duration = 0.8;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.89432;
			duration = 3;
			frequency = 20;
			distance = 121.326;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class Rocket_04_HE_F: MissileBase
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_04_HE_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_04_HE_F.p3d";
		maverickWeaponIndexOffset = 12;
		maverickweapon = 1;
		cost = 100;
		hit = 210;
		indirectHit = 55;
		indirectHitRange = 15;
		warheadName = "HE";
		manualControl = 0;
		maxControlRange = 0;
		airLock = 0;
		irLock = 0;
		laserLock = 0;
		nvLock = 0;
		weaponLockSystem = 0;
		aiAmmoUsageFlags = "64 + 128";
		missileLockMinDistance = 500;
		missileLockMaxDistance = 3000;
		initTime = 0.002;
		thrust = 1060;
		thrustTime = 0.69;
		airFriction = 0.09;
		sideAirFriction = 0.005;
		maxSpeed = 590;
		maneuvrability = 0;
		fuseDistance = 50;
		timeToLive = 60;
		effectsMissileInit = "PylonBackEffectsFFAR";
		muzzleEffect = "";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 0.630957, 1.2, 1700};
		whistleDist = 30;
		class CamShakeExplode
		{
			power = 16;
			duration = 1.8;
			frequency = 20;
			distance = 191.554;
		};
		class CamShakeHit
		{
			power = 80;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.9907;
			duration = 1.8;
			frequency = 20;
			distance = 71.5542;
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		SoundSetExplosion[] = {"RocketsLight_Exp_SoundSet", "RocketsLight_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class Rocket_04_AP_F: Rocket_04_HE_F
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_04_AP_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_04_AP_F.p3d";
		maverickWeaponIndexOffset = 19;
		submunitionAmmo = "ammo_Penetrator_Rocket_04_AP";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 95;
		indirectHit = 25;
		indirectHitRange = 2.5;
		warheadName = "HE";
		aiAmmoUsageFlags = 128;
	};
	class Cannon_30mm_HE_Plane_CAS_02_F: Gatling_30mm_HE_Plane_CAS_01_F
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green.p3d";
		hit = 150;
		indirectHit = 4;
		indirectHitRange = 4;
		caliber = 3;
		explosive = 0.6;
		missileLockMaxDistance = 1000;
		missileLockMinDistance = 350;
	};
	class Missile_AA_03_F: Missile_AA_04_F
	{
		model = "\A3\Weapons_F_EPC\Ammo\Missile_AA_03_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Missile_AA_03_F.p3d";
		maverickWeaponIndexOffset = 0;
		hit = 140;
		indirectHit = 90;
		indirectHitRange = 8;
		proximityExplosionDistance = 15;
		missileLockCone = 45;
		missileKeepLockedCone = 120;
		missileLockMaxDistance = 6000;
		missileLockMinDistance = 150;
		missileLockMaxSpeed = 700;
		weaponLockSystem = "2 + 16";
		cmImmunity = 0.9;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 700;
						angleRangeHorizontal = 45;
						angleRangeVertical = 45;
					};
				};
			};
		};
		airFriction = 0.13;
		thrust = 200;
		thrustTime = 7;
		maxSpeed = 850;
		maneuvrability = 30;
		fuseDistance = 300;
	};
	class Missile_AGM_01_F: Missile_AGM_02_F
	{
		model = "\A3\Weapons_F_EPC\Ammo\Missile_AGM_01_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Missile_AGM_01_F.p3d";
		maverickWeaponIndexOffset = 2;
		thrustTime = 6;
		submunitionAmmo = "ammo_Penetrator_AGM_01";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 1200;
		indirectHit = 90;
		indirectHitRange = 8;
		warheadName = "HE";
		cameraViewAvailable = 1;
		missileLockCone = 20;
		missileKeepLockedCone = 20;
		missileLockMaxDistance = 6000;
		missileLockMinDistance = 300;
		missileLockMaxSpeed = 40;
		weaponLockSystem = "2 + 16";
		cmImmunity = 0.5;
		flightProfiles[] = {"Direct"};
		class Direct
		{
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 40;
						angleRangeHorizontal = 20;
						angleRangeVertical = 20;
					};
				};
			};
		};
	};
	class Rocket_03_HE_F: Rocket_04_HE_F
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_F.p3d";
		maverickWeaponIndexOffset = 8;
	};
	class Rocket_03_AP_F: Rocket_04_AP_F
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_AP_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_03_AP_F.p3d";
		maverickWeaponIndexOffset = 28;
		submunitionAmmo = "ammo_Penetrator_Rocket_03_AP";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 95;
		indirectHit = 25;
		indirectHitRange = 3;
	};
	class Sh_105mm_APFSDS: Sh_120mm_APFSDS
	{
		hit = 450;
		indirectHit = 10;
		indirectHitRange = 0.5;
		airFriction = -3.48e-005;
		caliber = 28.5714;
		tracerEndTime = 2.5;
	};
	class Sh_105mm_APFSDS_T_Red: Sh_105mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class Sh_105mm_APFSDS_T_Green: Sh_105mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
	};
	class Sh_105mm_APFSDS_T_Yellow: Sh_105mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
	};
	class Sh_105mm_HEAT_MP: Sh_125mm_HEAT
	{
		hit = 95;
		indirectHit = 26;
		indirectHitRange = 4.2;
		submunitionAmmo = "ammo_Penetrator_105mm";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		airFriction = -0.000308;
	};
	class Sh_105mm_HEAT_MP_T_Red: Sh_105mm_HEAT_MP
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class Sh_105mm_HEAT_MP_T_Green: Sh_105mm_HEAT_MP
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
	};
	class Sh_105mm_HEAT_MP_T_Yellow: Sh_105mm_HEAT_MP
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
	};
	class MineBase: MineCore
	{
		icon = "iconExplosiveAT";
		mapsize = 1;
		explosionType = "mine";
		triggerWhenDestroyed = 1;
		underwaterHitRangeCoef = 2;
		soundTrigger[] = {"A3\Sounds_F\ApersMine_Trigger_01", 1, 1, 20};
		soundActivation[] = {"A3\Sounds_F\ApersMine_Placement_01", 1, 1, 20};
		soundDeactivation[] = {"A3\Sounds_F\ApersMine_Deactivate_01", 1, 1, 20};
		aiAmmoUsageFlags = 16;
	};
	class BoundingMineBase: BoundingMineCore
	{
		mineBoundingTime = 5;
		mineBoundingDist = 3;
		icon = "iconExplosiveAP";
		mapsize = 1;
		explosionType = "mine";
		triggerWhenDestroyed = 1;
		underwaterHitRangeCoef = 0.5;
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\expl_trigger_1", 0.562341, 1, 30};
		soundActivation[] = {"A3\Sounds_F\weapons\Mines\electron_activate_mine_1", 0.562341, 1, 30};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersMine_Deactivate_02", 1, 1, 20};
	};
	class DirectionalBombBase: DirectionalBombCore
	{
		explosionPos = "explosionPos";
		explosionDir = "explosionDir";
		minimumSafeZone = 1;
		explosionAngle = 60;
		simulation = "shotDirectionalBomb";
		directionalExplosion = 1;
		icon = "iconExplosiveAPDirectional";
		underwaterHitRangeCoef = 0.1;
		mapsize = 1;
		explosionType = "mine";
		triggerWhenDestroyed = 1;
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\electron_trigger_1", 0.562341, 1, 30};
		soundActivation[] = {"A3\Sounds_F\weapons\mines\electron_activate_mine_1", 0.562341, 1, 30};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersMine_Deactivate_02", 1, 1, 20};
		craterShape = "\A3\weapons_f\empty.p3d";
	};
	class PipeBombBase: PipeBombCore
	{
		icon = "iconExplosiveGP";
		mapsize = 1;
		explosionType = "bomb";
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\electron_trigger_1", 0.562341, 1, 30};
		soundActivation[] = {"A3\Sounds_F\weapons\mines\electron_activate_mine_1", 0.562341, 1, 30};
		soundDeactivation[] = {"A3\Sounds_F\weapons\Mines\deactivate_mine_3a", 1.99526, 1, 20};
		triggerWhenDestroyed = 1;
		underwaterHitRangeCoef = 1;
	};
	class ATMine_Range_Ammo: MineBase
	{
		hit = 2000;
		indirectHit = 2000;
		indirectHitRange = 1;
		model = "\A3\Weapons_f\Explosives\mine_at";
		mineModelDisabled = "\A3\Weapons_f\Explosives\mine_at_d";
		defaultMagazine = "ATMine_Range_Mag";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\mines\AT_landmine_explosion_01", 3.16228, 1, 2000};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\mines\AT_landmine_explosion_02", 3.16228, 1, 2000};
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\AtMine_Deactivate_01", 1.99526, 1, 20};
		explosionEffects = "ATMineExplosion";
		CraterEffects = "ATMineCrater";
		whistleDist = 8;
		mineInconspicuousness = 40;
		mineTrigger = "TankTriggerMagnetic";
		SoundSetExplosion[] = {"ATmine_Exp_SoundSet", "ATmine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\AtMine_Placement_01", 1, 1, 20};
	};
	class UnderwaterMine_Range_Ammo: MineBase
	{
		hit = 3000;
		indirectHit = 3000;
		indirectHitRange = 10;
		model = "\A3\Weapons_F\explosives\mine_naval";
		mineModelDisabled = "\A3\Weapons_F\explosives\mine_naval_d";
		defaultMagazine = "";
		icon = "iconExplosiveUW";
		soundHit[] = {"A3\Sounds_F\weapons\mines\underwater_mine_3", 1.77828, 1, 2000};
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\electron_UWtrigger_1", 0.562341, 1, 30};
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\NavalMine_Moored_Deactivate_01", 1.99526, 1, 20};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\NavalMine_Moored_Deactivate_01", 1.99526, 1, 20};
		explosionEffects = "MineUnderwaterExplosion";
		CraterEffects = "";
		whistleDist = 20;
		cost = 2000;
		mineTrigger = "UnderwaterRangeTriggerMagnetic";
		mineFloating = -2;
		mineInconspicuousness = 0.5;
		aiAmmoUsageFlags = "16 + 32";
		SoundSetExplosion[] = {"UnderwaterMine_Exp_SoundSet", "UnderwaterMine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		ssoundTrigger[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\PDM7_Trigger_01", 1.99526, 1, 20};
	};
	class UnderwaterMineAB_Range_Ammo: UnderwaterMine_Range_Ammo
	{
		hit = 2000;
		indirectHit = 2000;
		indirectHitRange = 10;
		model = "\A3\Weapons_F\explosives\mine_naval2";
		defaultMagazine = "";
		mineModelDisabled = "\A3\Weapons_F\explosives\mine_naval2_d";
		soundHit[] = {"A3\Sounds_F\weapons\mines\underwater_mine_2", 3.16228, 1, 2000};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\NavalMine_Bottom_Deactivate_01", 1.99526, 1, 20};
		explosionEffects = "MineUnderwaterABExplosion";
		mineFloating = 1;
		mineInconspicuousness = 1;
		SoundSetExplosion[] = {"UnderwaterMineAB_Exp_SoundSet", "UnderwaterMineAB_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\NavalMine_Bottom_Deactivate_01", 1.99526, 1, 20};
		soundTrigger[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\PDM7_Trigger_01", 1.99526, 1, 20};
	};
	class UnderwaterMinePDM_Range_Ammo: UnderwaterMine_Range_Ammo
	{
		hit = 500;
		indirectHit = 500;
		indirectHitRange = 5;
		model = "\A3\Weapons_F\explosives\mine_naval3";
		defaultMagazine = "";
		mineModelDisabled = "\A3\Weapons_F\explosives\mine_naval3_d";
		soundHit[] = {"A3\Sounds_F\weapons\mines\underwater_mine_1", 10, 1, 2000};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\PDM7_Deactivate_01", 1.99526, 1, 20};
		explosionEffects = "MineUnderwaterPDMExplosion";
		mineTrigger = "UnderwaterRangeTriggerMagneticShort";
		whistleDist = 10;
		mineFloating = 1;
		mineInconspicuousness = 50;
		SoundSetExplosion[] = {"UnderwaterMinePDM_Exp_SoundSet", "UnderwaterMinePDM_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\PDM7_Deactivate_01", 1.99526, 1, 20};
		soundTrigger[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\PDM7_Trigger_01", 1.99526, 1, 20};
	};
	class APERSMine_Range_Ammo: MineBase
	{
		hit = 10;
		indirectHit = 10;
		indirectHitRange = 5;
		model = "\A3\Weapons_F\explosives\mine_ap";
		mineModelDisabled = "\A3\Weapons_F\explosives\mine_ap_d";
		icon = "iconExplosiveAP";
		defaultMagazine = "APERSMine_Range_Mag";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\mines\AP_mines_explosion_01", 3.16228, 1, 1500};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\mines\AP_mines_explosion_02", 3.16228, 1, 2000};
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		soundTrigger[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersMine_Trigger_01", 2.51189, 1, 20};
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersMine_Placement_01", 0.398107, 1, 20};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersMine_Deactivate_01", 1.41254, 1, 20};
		explosionEffects = "MineExplosion";
		CraterEffects = "MineCrater";
		whistleDist = 8;
		cost = 200;
		mineInconspicuousness = 50;
		mineTrigger = "RangeTriggerShort";
		SoundSetExplosion[] = {"APmine_Exp_SoundSet", "APmine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class APERSBoundingMine_Range_Ammo: BoundingMineBase
	{
		hit = 20;
		indirectHit = 20;
		indirectHitRange = 20;
		model = "\A3\Weapons_F\explosives\mine_AP_bouncing";
		mineModelDisabled = "\A3\Weapons_F\explosives\mine_AP_bouncing_d";
		defaultMagazine = "APERSBoundingMine_Range_Mag";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\mines\Explosion_M6_slam_mine_01", 3.16228, 1, 1300};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\mines\Explosion_M6_slam_mine_02", 3.16228, 1, 2000};
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersBoundingMine_Deactivate_01", 1.99526, 1, 20};
		explosionEffects = "BoundingMineExplosion";
		CraterEffects = "BoundingMineCrater";
		mineJumpEffects = "MineJumpEffect";
		whistleDist = 60;
		cost = 300;
		mineBoundingTime = 0.3;
		mineBoundingDist = 2;
		mineInconspicuousness = 40;
		mineTrigger = "RangeTriggerBounding";
		SoundSetExplosion[] = {"M6slamMine_Exp_SoundSet", "M6slamMine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersBoundingMine_Placement_01", 1, 1, 20};
		soundTrigger[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersBoundingMine_Trigger_01", 3.98107, 1, 20};
	};
	class SLAMDirectionalMine_Wire_Ammo: DirectionalBombBase
	{
		hit = 1000;
		indirectHit = 1000;
		indirectHitRange = 10;
		model = "\A3\Weapons_F\Explosives\mine_SLAM_directional";
		icon = "iconExplosiveGPDirectional";
		mineModelDisabled = "\A3\Weapons_F\Explosives\mine_SLAM_directional_d";
		defaultMagazine = "SLAMDirectionalMine_Wire_Mag";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\mines\Explosion_M6_slam_mine_01", 3.16228, 1, 1500};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\mines\Explosion_M6_slam_mine_02", 3.16228, 1, 1500};
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\M6SlamMine_Deactivate_01", 1.99526, 1, 20};
		explosionEffects = "DirectionalMineExplosionBig";
		explosionAngle = 30;
		CraterEffects = "";
		whistleDist = 100;
		cost = 400;
		mineTrigger = "IRTrigger";
		mineInconspicuousness = 20;
		craterShape = "\A3\weapons_f\empty.p3d";
		SoundSetExplosion[] = {"M6slamMine_Exp_SoundSet", "M6slamMine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\M6SlamMine_Placement_01", 1.99526, 1, 20};
	};
	class APERSTripMine_Wire_Ammo: DirectionalBombBase
	{
		hit = 15;
		indirectHit = 15;
		indirectHitRange = 10;
		model = "\A3\Weapons_F\explosives\mine_AP_tripwire";
		mineModelDisabled = "\A3\Weapons_F\explosives\mine_AP_tripwire_d";
		defaultMagazine = "APERSTripMine_Wire_Mag";
		icon = "iconExplosiveAP";
		soundHit[] = {"\A3\Sounds_F\arsenal\explosives\mines\Explosion_tripwire_landmine", 3.16228, 1, 1500};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersTripwire_Deactivate_01", 1.99526, 1, 20};
		minimumSafeZone = 0;
		explosionAngle = 360;
		explosionEffects = "MineExplosion";
		CraterEffects = "MineCrater";
		whistleDist = 8;
		cost = 200;
		mineTrigger = "WireTrigger";
		mineInconspicuousness = 30;
		SoundSetExplosion[] = {"TripwireMine_Exp_SoundSet", "TripwireMine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersTripwire_Placement_01", 1.77828, 1, 20};
		soundTrigger[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersTripwire_Trigger_01", 1, 1, 20};
	};
	class ClaymoreDirectionalMine_Remote_Ammo: DirectionalBombBase
	{
		hit = 40;
		indirectHit = 40;
		indirectHitRange = 30;
		model = "\A3\Weapons_F\explosives\mine_AP_miniclaymore";
		mineModelDisabled = "\A3\Weapons_F\explosives\mine_AP_miniclaymore_d";
		defaultMagazine = "ClaymoreDirectionalMine_Remote_Mag";
		soundHit[] = {"A3\Sounds_F\arsenal\explosives\mines\Explosion_claymore", 2.23872, 1, 1500};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\Claymore_Deactivate_01", 2.81838, 1, 20};
		explosionEffects = "DirectionalMineExplosion";
		explosionAngle = 60;
		CraterEffects = "";
		whistleDist = 100;
		cost = 400;
		mineInconspicuousness = 20;
		mineTrigger = "RemoteTrigger";
		craterShape = "\A3\weapons_f\empty.p3d";
		SoundSetExplosion[] = {"ClaymoreMine_Exp_SoundSet", "ClaymoreMine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\Claymore_Placement_01", 2.81838, 1, 20};
		soundTrigger[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\Claymore_TouchOff_01", 1, 1, 20};
	};
	class ClaymoreDirectionalMine_Remote_Ammo_Scripted: ClaymoreDirectionalMine_Remote_Ammo
	{
	};
	class SatchelCharge_Remote_Ammo: PipeBombBase
	{
		hit = 3000;
		indirectHit = 3000;
		indirectHitRange = 5;
		model = "\A3\Weapons_F\Explosives\satchel";
		mineModelDisabled = "\A3\Weapons_F\Explosives\satchel_d";
		defaultMagazine = "SatchelCharge_Remote_Mag";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosion_satchel_01", 3.16228, 1, 1500};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosion_satchel_02", 3.16228, 1, 1500};
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ExplosiveSatchel_Deactivate_01", 1.99526, 1, 20};
		ExplosionEffects = "MineNondirectionalExplosion";
		CraterEffects = "MineNondirectionalCrater";
		whistleDist = 10;
		mineInconspicuousness = 3;
		mineTrigger = "RemoteTrigger";
		SoundSetExplosion[] = {"ClaymoreMine_Exp_SoundSet", "ClaymoreMine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ExplosiveSatchel_Placement_01", 1, 1, 20};
		soundTrigger[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ExplosiveSatchel_TouchOff_01", 0.630957, 1, 20};
	};
	class SatchelCharge_Remote_Ammo_Scripted: SatchelCharge_Remote_Ammo
	{
	};
	class DemoCharge_Remote_Ammo: PipeBombBase
	{
		hit = 1000;
		indirectHit = 1000;
		indirectHitRange = 3;
		model = "\A3\Weapons_F\explosives\c4_charge_small";
		mineModelDisabled = "\A3\Weapons_F\explosives\c4_charge_small_d";
		soundHit[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosive_Charge", 3.16228, 1, 1500};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ExplosiveCharge_Deactivate_01", 1.58489, 1, 20};
		defaultMagazine = "DemoCharge_Remote_Mag";
		ExplosionEffects = "MineNondirectionalExplosionSmall";
		CraterEffects = "MineNondirectionalCraterSmall";
		whistleDist = 32;
		mineInconspicuousness = 5;
		mineTrigger = "RemoteTrigger";
		SoundSetExplosion[] = {"ExplosiveCharge_Exp_SoundSet", "ExplosiveCharge_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ExplosiveCharge_Placement_01", 1.58489, 1, 20};
		soundTrigger[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ExplosiveCharge_TouchOff_01", 1, 1, 20};
	};
	class DemoCharge_Remote_Ammo_Scripted: DemoCharge_Remote_Ammo
	{
	};
	class IEDUrbanBig_Remote_Ammo: PipeBombBase
	{
		hit = 2000;
		indirectHit = 2000;
		indirectHitRange = 5;
		model = "\A3\Weapons_F\Explosives\IED_urban_big";
		mineModelDisabled = "\A3\Weapons_F\Explosives\IED_urban_big_d";
		defaultMagazine = "IEDUrbanBig_Remote_Mag";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosion_IED_bigBomb_01", 3.16228, 1, 2000};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosion_IED_bigBomb_02", 3.16228, 1, 2000};
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\Ied_Large_Urban_Deactivate_01", 3.16228, 1, 20};
		whistleDist = 20;
		CraterEffects = "IEDMineBigGarbageCrater";
		explosionEffects = "IEDMineBigExplosion";
		cost = 2000;
		mineInconspicuousness = 20;
		mineTrigger = "RemoteTrigger";
		SoundSetExplosion[] = {"BigIED_Exp_SoundSet", "BigIED_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\Ied_Large_Urban_Placement_01", 3.16228, 1, 20};
	};
	class IEDLandBig_Remote_Ammo: PipeBombBase
	{
		hit = 2000;
		indirectHit = 2000;
		indirectHitRange = 5;
		model = "\A3\Weapons_F\Explosives\IED_land_big";
		mineModelDisabled = "\A3\Weapons_F\Explosives\IED_land_big_d";
		defaultMagazine = "IEDLandBig_Remote_Mag";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosion_IED_bigBomb_01", 2.51189, 1, 1500};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosion_IED_bigBomb_02", 2.51189, 1, 1500};
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_1", 0.562341, 1, 30};
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\Ied_Large_DugIn_Placement_01", 3.16228, 1, 20};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\Ied_Large_DugIn_Deactivate_01", 3.16228, 1, 20};
		CraterEffects = "IEDMineBigLandCrater";
		explosionEffects = "IEDMineBigExplosion";
		whistleDist = 8;
		cost = 2000;
		mineInconspicuousness = 30;
		mineTrigger = "RemoteTrigger";
		SoundSetExplosion[] = {"BigIED_Exp_SoundSet", "BigIED_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class IEDUrbanSmall_Remote_Ammo: PipeBombBase
	{
		hit = 1000;
		indirectHit = 1000;
		indirectHitRange = 3;
		model = "\A3\Weapons_F\Explosives\IED_urban_small";
		mineModelDisabled = "\A3\Weapons_F\Explosives\IED_urban_small_d";
		defaultMagazine = "IEDUrbanSmall_Remote_Mag";
		soundHit1[] = {"A3\sounds_f\arsenal\explosives\bombs\Explosion_IED_smallBomb_01", 2.51189, 1, 1600};
		soundHit2[] = {"A3\sounds_f\arsenal\explosives\bombs\Explosion_IED_smallBomb_02", 2.51189, 1, 1600};
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\Ied_Small_Urban_Deactivate_01", 3.16228, 1, 20};
		CraterEffects = "IEDMineSmallGarbageCrater";
		explosionEffects = "IEDMineSmallExplosion";
		whistleDist = 12;
		cost = 200;
		mineInconspicuousness = 40;
		mineTrigger = "RemoteTrigger";
		SoundSetExplosion[] = {"SmallIED_Exp_SoundSet", "SmallIED_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\Ied_Small_Urban_Placement_01", 3.16228, 1, 20};
	};
	class IEDLandSmall_Remote_Ammo: PipeBombBase
	{
		hit = 1000;
		indirectHit = 1000;
		indirectHitRange = 3;
		model = "\A3\Weapons_F\Explosives\IED_land_small";
		mineModelDisabled = "\A3\Weapons_F\Explosives\IED_land_small_d";
		defaultMagazine = "IEDLandSmall_Remote_Mag";
		soundHit1[] = {"A3\sounds_f\arsenal\explosives\bombs\Explosion_IED_smallBomb_01", 2.51189, 1, 1500};
		soundHit2[] = {"A3\sounds_f\arsenal\explosives\bombs\Explosion_IED_smallBomb_02", 2.51189, 1, 1500};
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\Ied_Small_DugIn_Deactivate_01", 3.16228, 1, 20};
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_1", 0.562341, 1, 40};
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\Ied_Small_DugIn_Placement_01", 3.16228, 1, 20};
		CraterEffects = "IEDMineSmallLandCrater";
		explosionEffects = "IEDMineSmallExplosion";
		whistleDist = 6;
		cost = 200;
		mineInconspicuousness = 50;
		mineTrigger = "RemoteTrigger";
		SoundSetExplosion[] = {"SmallIED_Exp_SoundSet", "SmallIED_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class M_RIM_116: M_Air_AA
	{
		hit = 800;
		weaponlocksystem = "2 + 4 + 8";
	};
	class M_RIM_7: M_RIM_116
	{
		hit = 1300;
		manualcontrol = 1;
	};
	class B_25mm_Tracer_Red: B_20mm_Tracer_Red
	{
		hit = 90;
		indirecthit = 21;
		indirecthitrange = 2;
	};
	class B_20mm_Tracer_Yellow: B_20mm_Tracer_Red
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_25mm_Tracer_Yellow: B_20mm_Tracer_Yellow
	{
		hit = 90;
		indirecthit = 21;
		indirecthitrange = 2;
	};
	class B_20mm_Tracer_Green: B_20mm_Tracer_Red
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_25mm_Tracer_Green: B_20mm_Tracer_Green
	{
		hit = 90;
		indirecthit = 21;
		indirecthitrange = 2;
	};
	class kyo_fake_ammo: Default
	{
		airLock = 0;
		hit = 1;
		indirectHit = 1;
		indirectHitRange = 1;
		typicalSpeed = 10;
		maxSpeed = 10;
		cost = 100;
		displayName = "";
		effectsMissile = "NoEffect";
		muzzleEffect = "NoEffect";
		CraterEffects = "NoEffect";
		explosionEffects = "NoEffect";
		explosive = 0;
		deflecting = 1;
		model = "";
		proxyShape = "";
	};
	class ModuleOrdnanceMortar_F_ammo: Sh_82mm_AMOS
	{
		explosionEffects = "HEShellExplosion";
	};
	class ModuleOrdnanceHowitzer_F_ammo: Sh_155mm_AMOS
	{
		hit = 500;
		indirectHit = 300;
		soundHit[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_2", 1.99526, 1, 1800};
	};
	class ModuleOrdnanceRocket_F_ammo: R_230mm_HE
	{
		submunitionAmmo[] = {"Mo_cluster_AP", 0.93, "Mo_cluster_AP_UXO_deploy", 0.07};
		submunitionConeType[] = {"poissonDisc", 50};
		triggerDistance = 100;
		triggerSpeedCoef[] = {0.75, 1.25};
		submunitionConeAngle = 25;
	};
	class ModuleOrdnanceRocket_F_subammo: R_230mm_fly
	{
		indirectHit = 600;
		indirectHitRange = 27;
		soundHit[] = {"A3\Sounds_F\weapons\Explosion\expl_big_1", 1.99526, 1, 1800};
	};
	class LightningBolt: ShellBase
	{
		model = "\A3\Weapons_f\empty";
		hit = 10000;
		indirectHit = 10000;
		indirectHitRange = 0.1;
		explosive = 0.8;
		explosionEffects = "ExploAmmoExplosion";
		craterEffects = "ExploAmmoCrater";
		class CamShakeHit
		{
			power = 100;
			duration = 1;
			frequency = 20;
		};
		multiSoundHit[] = {"soundHit1", 0.33, "soundHit2", 0.33, "soundHit3", 0.34};
		soundHit1[] = {"\A3\Sounds_F\ambient\thunder\thunder_02", 10, 1, 3000};
		soundHit2[] = {"\A3\Sounds_F\ambient\thunder\thunder_03", 10, 1, 3000};
		soundHit3[] = {"\A3\Sounds_F\ambient\thunder\thunder_06", 10, 1, 3000};
		soundHit[] = {"", 1, 1};
		simulation = "shotMine";
		mineTrigger = "RemoteTrigger";
		triggerWhenDestroyed = 1;
	};
	class F_Signal_Green: FlareBase
	{
		hit = 0;
		model = "\A3\Weapons_f\empty";
		lightColor[] = {0.25, 0.5, 0.25, 0};
		useFlare = 1;
		deflecting = 30;
		smokeColor[] = {1, 1, 1, 0.5};
		effectFlare = "CounterMeasureFlare";
		brightness = 12;
		size = 1;
		triggerTime = 0.5;
		triggerSpeedCoef = 1;
		timeToLive = 10;
	};
	class F_Signal_Red: F_Signal_Green
	{
		model = "\A3\Weapons_f\empty";
		lightColor[] = {0.5, 0.25, 0.25, 0};
	};
	class Sub_F_Signal_Green: B_9x21_Ball
	{
		simulation = "shotSubmunitions";
		hit = 0;
		submunitionAmmo = "F_Signal_Green";
		triggerTime = 0.9;
		submunitionConeType[] = {"poissondisccenter", 3};
		submunitionConeAngle = 35;
		airFriction = -0.0216;
		model = "\A3\Weapons_F_Kart\Ammo\tracer_green.p3d";
		tracerStartTime = 0.1;
		tracerScale = 5;
	};
	class Sub_F_Signal_Red: Sub_F_Signal_Green
	{
		submunitionAmmo = "F_Signal_Red";
		model = "\A3\Weapons_F_Kart\Ammo\tracer_red.p3d";
	};
	class B_93x64_Ball: BulletBase
	{
		hit = 18;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_93x64_Ball";
		audibleFire = 80;
		visibleFireTime = 3;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 14;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 10;
		cost = 6;
		airLock = 1;
		caliber = 2.2;
		typicalSpeed = 785;
		timeToLive = 10;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		tracerEndTime = 1;
		airFriction = -0.00075;
		class CamShakeExplode
		{
			power = 3.16228;
			duration = 0.6;
			frequency = 20;
			distance = 9.48683;
		};
		class CamShakeHit
		{
			power = 10;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
	};
	class M_Vorona_HEAT: MissileBase
	{
		model = "\A3\Weapons_F_Tank\Launchers\Vorona\Vorona_missile_heat_fly";
		submunitionAmmo = "ammo_Penetrator_Vorona";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 150;
		warheadName = "TandemHEAT";
		indirectHit = 25;
		indirectHitRange = 3.5;
		explosive = 0.8;
		cost = 500;
		aiAmmoUsageFlags = "128 + 512";
		lockType = 1;
		manualControl = 1;
		manualControlOffset = 80;
		missileManualControlCone = 60;
		maxControlRange = 2000;
		weaponLockSystem = 0;
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		initTime = 0.05;
		trackOversteer = 0.5;
		trackLead = 0.85;
		timeToLive = 30;
		maneuvrability = 6;
		simulationStep = 0.002;
		airFriction = 0.06;
		sideAirFriction = 0.09;
		maxSpeed = 200;
		thrustTime = 1;
		thrust = 70;
		fuseDistance = 50;
		effectsMissile = "missile2";
		whistleDist = 4;
		class CamShakeExplode
		{
			power = 11;
			duration = 1.4;
			frequency = 20;
			distance = 91.3296;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 0;
			duration = 0.2;
			frequency = 20;
			distance = 0;
		};
		class CamShakePlayerFire
		{
			power = 0;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_B_545x39_Ball: BulletBase
	{
		hit = 8.4;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 1;
		airFriction = -0.0011204;
		caliber = 0.8;
		cartridge = "CUP_FxCartridge_545";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 0;
		tracerStartTime = 0;
		tracerEndTime = 0;
		nvgOnly = 0;
		initSpeed = 900;
		ACE_caliber = 5.588;
		ACE_bulletLength = 21.59;
		ACE_bulletMass = 3.42792;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.168};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {780, 880, 920};
		ACE_barrelLengths[] = {254, 414.02, 508};
	};
	class CUP_B_545x39_Ball_Subsonic: CUP_B_545x39_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		initSpeed = 900;
		airFriction = -0.0006754;
		audiblefire = 0.09;
		dangerRadiusBulletClose = 2;
		dangerRadiusHit = 3;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
		visiblefire = 0.09;
		visibleFireTime = 2;
		typicalSpeed = 303;
		ACE_caliber = 5.588;
		ACE_bulletLength = 21.59;
		ACE_bulletMass = 3.22704;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.168};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {785, 883, 925};
		ACE_barrelLengths[] = {254, 414.02, 508};
	};
	class CUP_B_545x39_Ball_Tracer_Green: CUP_B_545x39_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		ACE_caliber = 5.588;
		ACE_bulletLength = 21.59;
		ACE_bulletMass = 3.22704;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.168};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {785, 883, 925};
		ACE_barrelLengths[] = {254, 414.02, 508};
	};
	class CUP_B_545x39_Ball_Tracer_Red: CUP_B_545x39_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		ACE_caliber = 5.588;
		ACE_bulletLength = 21.59;
		ACE_bulletMass = 3.22704;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.168};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {785, 883, 925};
		ACE_barrelLengths[] = {254, 414.02, 508};
	};
	class CUP_B_545x39_Ball_Tracer_White: CUP_B_545x39_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		ACE_caliber = 5.588;
		ACE_bulletLength = 21.59;
		ACE_bulletMass = 3.22704;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.168};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {785, 883, 925};
		ACE_barrelLengths[] = {254, 414.02, 508};
	};
	class CUP_B_545x39_Ball_Tracer_Yellow: CUP_B_545x39_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		ACE_caliber = 5.588;
		ACE_bulletLength = 21.59;
		ACE_bulletMass = 3.22704;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.168};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {785, 883, 925};
		ACE_barrelLengths[] = {254, 414.02, 508};
	};
	class CUP_B_762x39_Ball: BulletBase
	{
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_762";
		visibleFire = 18;
		audibleFire = 18;
		airLock = 1;
		cost = 1;
		typicalSpeed = 710;
		tracerColor[] = {0, 0, 0, 0};
		tracerColorR[] = {0, 0, 0, 0};
		airFriction = -0.00150173;
		caliber = 1.1;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		ACE_caliber = 7.823;
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 7.9704;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.275};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {650, 716, 750};
		ACE_barrelLengths[] = {254, 414.02, 508};
	};
	class CUP_B_762x39_Ball_Tracer_Green: CUP_B_762x39_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerColor[] = {0.2, 0.8, 0.1, 0.04};
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		ACE_caliber = 7.823;
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 7.5816;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.275};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {650, 716, 750};
		ACE_barrelLengths[] = {254, 414.02, 508};
	};
	class CUP_B_762x39_Ball_Tracer_Red: CUP_B_762x39_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerColor[] = {0.8, 0.2, 0.1, 0.04};
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		ACE_caliber = 7.823;
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 7.5816;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.275};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {650, 716, 750};
		ACE_barrelLengths[] = {254, 414.02, 508};
	};
	class CUP_B_762x39_Ball_Tracer_Yellow: CUP_B_762x39_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerColor[] = {0.8, 0.8, 0.1, 0.04};
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		ACE_caliber = 7.823;
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 7.5816;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.275};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {650, 716, 750};
		ACE_barrelLengths[] = {254, 414.02, 508};
	};
	class CUP_B_762x39_Ball_Subsonic: CUP_B_762x39_Ball
	{
		hit = 9;
		caliber = 1;
		airFriction = -0.0007324;
		audibleFire = 3;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 3;
		visibleFire = 1.5;
		visibleFireTime = 2;
		typicalSpeed = 293;
		ACE_caliber = 7.823;
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 7.9704;
		ACE_ammoTempMuzzleVelocityShifts[] = {-8.85, -8.49, -7.61667, -6.70667, -5.66, -4.26667, -2.54667, -0.51, 1.98667, 5.05667, 8.73};
		ACE_ballisticCoefficients[] = {0.275};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {};
		ACE_barrelLengths[] = {};
	};
	class CUP_B_762x51_noTracer: B_762x51_Ball
	{
		airFriction = -0.00099036;
		tracerStartTime = -1;
		ACE_caliber = 7.823;
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 9.4608;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.2};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {700, 800, 820, 833, 845};
		ACE_barrelLengths[] = {254, 406.4, 508, 609.6, 660.4};
	};
	class CUP_B_762x51_Tracer_Green: CUP_B_762x51_noTracer
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerStartTime = 0.0075;
		tracerEndTime = 4;
		airFriction = -0.00099036;
	};
	class CUP_B_762x51_Tracer_Red: CUP_B_762x51_noTracer
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerStartTime = 0.0075;
		tracerEndTime = 4;
		airFriction = -0.00099036;
	};
	class CUP_B_762x51_Tracer_Yellow: CUP_B_762x51_noTracer
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerStartTime = 0.0075;
		tracerEndTime = 4;
		airFriction = -0.00099036;
	};
	class CUP_B_762x51_Tracer_White: CUP_B_762x51_noTracer
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerStartTime = 0.0075;
		tracerEndTime = 4;
		airFriction = -0.00099036;
	};
	class CUP_B_762x51_Red_Tracer_3RndBurst: CUP_B_762x51_noTracer
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerStartTime = 0.0075;
		tracerEndTime = 4;
		hit = 25;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 25;
		audibleFire = 22;
		visibleFireTime = 4;
	};
	class CUP_B_762x51_White_Tracer_3RndBurst: CUP_B_762x51_noTracer
	{
		hit = 25;
		tracerStartTime = 0.0075;
		tracerEndTime = 4;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 25;
		audibleFire = 22;
		visibleFireTime = 4;
	};
	class CUP_B_762x51_Tracer_Red_Splash: CUP_B_762x51_Tracer_Red
	{
		hit = 12;
		indirectHit = 1.2;
		indirectHitRange = 1.5;
		caliber = 3.2;
		fuseDistance = 12;
		deflecting = 30;
		soundSetSonicCrack[] = {"BulletSonicCrack_Gatling_SoundSet"};
	};
	class CUP_B_762x51_Tracer_White_Splash: CUP_B_762x51_Tracer_Red_Splash
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
	};
	class CUP_B_303_Ball: BulletBase
	{
		hit = 14;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 18;
		audibleFire = 18;
		visibleFireTime = 2;
		cost = 1.2;
		airLock = 1;
		tracerStartTime = -1;
		airFriction = -0.00062555;
		typicalSpeed = 770;
		caliber = 1;
		initSpeed = 770;
		ACE_caliber = 7.899;
		ACE_bulletLength = 31.166;
		ACE_bulletMass = 11.2752;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.499, 0.493, 0.48};
		ACE_velocityBoundaries[] = {671, 549};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {748, 761, 765};
		ACE_barrelLengths[] = {508, 609.6, 660.4};
	};
	class CUP_B_762x54_Ball_White_Tracer: BulletBase
	{
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_762";
		visibleFire = 6;
		audibleFire = 9;
		cost = 1.2;
		airLock = 1;
		typicalSpeed = 800;
		caliber = 1.6;
		airFriction = -0.00101742;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 0.6;
		tracerStartTime = 0.0075;
		tracerEndTime = 5;
		ACE_caliber = 7.925;
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 9.6552;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.395};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {680, 750, 798, 800};
		ACE_barrelLengths[] = {406.4, 508, 609.6, 660.4};
		class CamShakeExplode
		{
			power = "(8^0.5)";
			duration = "((round (8^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((8^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 5;
			duration = "((round (5^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_B_762x54_Ball_Red_Tracer: CUP_B_762x54_Ball_White_Tracer
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		ACE_caliber = 7.925;
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 9.6552;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.395};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {680, 750, 798, 800};
		ACE_barrelLengths[] = {406.4, 508, 609.6, 660.4};
	};
	class CUP_B_762x54_Ball_Green_Tracer: CUP_B_762x54_Ball_White_Tracer
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		ACE_caliber = 7.925;
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 9.6552;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.395};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {680, 750, 798, 800};
		ACE_barrelLengths[] = {406.4, 508, 609.6, 660.4};
	};
	class CUP_B_762x54_Ball_Yellow_Tracer: CUP_B_762x54_Ball_White_Tracer
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		ACE_caliber = 7.925;
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 9.6552;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.395};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {680, 750, 798, 800};
		ACE_barrelLengths[] = {406.4, 508, 609.6, 660.4};
	};
	class CUP_B_9x39_SP5: BulletBase
	{
		hit = 9;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "CUP_FxCartridge_939";
		cost = 5;
		typicalSpeed = 300;
		visibleFire = 0.07;
		audibleFire = 0.07;
		visibleFireTime = 2;
		airFriction = -0.00075274;
		caliber = 0.33;
		ACE_caliber = 9.246;
		ACE_bulletLength = 31.496;
		ACE_bulletMass = 16.2;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655, -2.547, -2.285, -2.012, -1.698, -1.28, -0.764, -0.153, 0.596, 1.517, 2.619};
		ACE_ballisticCoefficients[] = {0.275};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {280, 300, 320};
		ACE_barrelLengths[] = {254, 414.02, 508};
	};
	class CUP_B_86x70_Ball_noTracer: BulletBase
	{
		hit = 26;
		indirectHit = 3;
		indirectHitRange = 0.01;
		cartridge = "FxCartridge_127";
		visibleFire = 22;
		audibleFire = 22;
		visibleFireTime = 3;
		initSpeed = 936;
		cost = 20;
		airLock = 1;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		caliber = 2.07;
		tracerColor[] = {0, 0, 0, 0};
		tracerColorR[] = {0, 0, 0, 0};
		tracerStartTime = -1;
		airFriction = -0.0005788;
		muzzleEffect = "BIS_fnc_effectFiredRifle";
		ACE_caliber = 8.585;
		ACE_bulletLength = 39.573;
		ACE_bulletMass = 16.2;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.322};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {880, 915, 925};
		ACE_barrelLengths[] = {508, 660.4, 711.2};
		class CamShakeExplode
		{
			power = "(13^0.5)";
			duration = "((round (13^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((13^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 13;
			duration = "((round (13^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_B_762x67_noTracer_Ball: B_762x51_Ball
	{
		hit = 14;
		airFriction = -0.00099036;
		tracerStartTime = -1;
		ACE_caliber = 7.823;
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 9.4608;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.2};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {700, 800, 820, 833, 845};
		ACE_barrelLengths[] = {254, 406.4, 508, 609.6, 660.4};
	};
	class CUP_B_9x18_Ball: BulletBase
	{
		hit = 6;
		cartridge = "FxCartridge_9mm";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		cost = 5;
		typicalSpeed = 320;
		airFriction = -0.00180193;
		caliber = 0.33;
		tracerScale = 0;
		tracerStartTime = 0;
		tracerEndTime = 0;
		nvgOnly = 0;
		initSpeed = 350;
		ACE_caliber = 9.271;
		ACE_bulletLength = 15.494;
		ACE_bulletMass = 6.00048;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655, -2.547, -2.285, -2.012, -1.698, -1.28, -0.764, -0.153, 0.596, 1.517, 2.619};
		ACE_ballisticCoefficients[] = {0.125};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {298, 330, 350};
		ACE_barrelLengths[] = {96.52, 127, 228.6};
	};
	class CUP_B_9x18_SD: CUP_B_9x18_Ball
	{
		hit = 6;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		caliber = 0.33;
		visibleFire = 0.035;
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 0;
		initSpeed = 350;
		audibleFire = 0.035;
		visibleFireTime = 2;
		cost = 5;
		typicalSpeed = 290;
		airFriction = -0.00180193;
		ACE_caliber = 9.271;
		ACE_bulletLength = 15.494;
		ACE_bulletMass = 6.00048;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655, -2.547, -2.285, -2.012, -1.698, -1.28, -0.764, -0.153, 0.596, 1.517, 2.619};
		ACE_ballisticCoefficients[] = {0.125};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {298, 330, 340};
		ACE_barrelLengths[] = {96.52, 127, 228.6};
	};
	class CUP_B_9x18_Ball_Tracer_Green: CUP_B_9x18_Ball
	{
		cartridge = "FxCartridge_9mm";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		typicalSpeed = 350;
		airFriction = -0.002751;
		caliber = 0.33;
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 0;
	};
	class CUP_B_9x18_Ball_Tracer_Red: CUP_B_9x18_Ball
	{
		cartridge = "FxCartridge_9mm";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		typicalSpeed = 350;
		airFriction = -0.002751;
		caliber = 0.33;
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 0;
	};
	class CUP_B_9x18_Ball_Tracer_Yellow: CUP_B_9x18_Ball
	{
		cartridge = "FxCartridge_9mm";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		typicalSpeed = 350;
		airFriction = -0.002751;
		caliber = 0.33;
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 0;
	};
	class CUP_B_9x18_Ball_White_Tracer: CUP_B_9x18_Ball
	{
		cartridge = "FxCartridge_9mm";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed = 350;
		airFriction = -0.002751;
		caliber = 0.33;
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 0;
	};
	class CUP_B_9x19_Ball: BulletBase
	{
		hit = 6;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_9mm";
		cost = 5;
		typicalSpeed = 380;
		airFriction = -0.00205726;
		caliber = 1.7;
		deflecting = 45;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 0.5;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 1;
		visibleFire = 3;
		audibleFire = 5;
		ACE_caliber = 9.017;
		ACE_bulletLength = 15.494;
		ACE_bulletMass = 8.0352;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655, -2.547, -2.285, -2.012, -1.698, -1.28, -0.764, -0.153, 0.596, 1.517, 2.619};
		ACE_ballisticCoefficients[] = {0.165};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {340, 370, 400};
		ACE_barrelLengths[] = {101.6, 127, 228.6};
	};
	class CUP_B_9x19_AP: BulletBase
	{
		hit = 7.5;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_9mm";
		cost = 5;
		typicalSpeed = 460;
		airFriction = -0.00205726;
		caliber = 1.7;
		deflecting = 45;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 0.5;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 1;
		visibleFire = 3;
		audibleFire = 5;
		ACE_caliber = 9.05;
		ACE_bulletLength = 15.494;
		ACE_bulletMass = 5.4;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655, -2.547, -2.285, -2.012, -1.698, -1.28, -0.764, -0.153, 0.596, 1.517, 2.619};
		ACE_ballisticCoefficients[] = {0.165};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {445, 460, 470};
		ACE_barrelLengths[] = {200, 237, 320};
	};
	class CUP_B_765x17_Ball: BulletBase
	{
		cartridge = "FxCartridge_9mm";
		hit = 3;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalSpeed = 300;
		airFriction = -0.00173452;
		caliber = 0.25;
		visibleFire = 14;
		audibleFire = 14;
		ACE_caliber = 7.938;
		ACE_bulletLength = 15.494;
		ACE_bulletMass = 4.212;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655, -2.547, -2.285, -2.012, -1.698, -1.28, -0.764, -0.153, 0.596, 1.517, 2.619};
		ACE_ballisticCoefficients[] = {0.118};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {282, 300, 320};
		ACE_barrelLengths[] = {101.6, 127, 228.6};
	};
	class CUP_B_50AE_Ball: BulletBase
	{
		airLock = 1;
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		aiAmmoUsageFlags = 64;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
		cartridge = "FxCartridge_9mm";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		caliber = 1.4;
		deflecting = 25;
		audibleFire = 45;
		cost = 100;
		typicalSpeed = 450;
		airFriction = -0.0018;
		tracerScale = 0.6;
		tracerStartTime = 0.0075;
		tracerEndTime = 5;
	};
	class CUP_B_46x30_Ball: BulletBase
	{
		hit = 7;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_9mm";
		cost = 20;
		airFriction = -0.0008;
		typicalSpeed = 725;
		caliber = 0.57;
		deflecting = 35;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 0.5;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 1;
		visibleFire = 3;
		audibleFire = 7;
		ACE_caliber = 4.902;
		ACE_bulletLength = 13.005;
		ACE_bulletMass = 2.0088;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.1455};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {680, 720, 730, 740};
		ACE_barrelLengths[] = {101.6, 177.8, 228.6, 304.8};
	};
	class CUP_B_93x64_Ball: B_93x64_Ball
	{
		airFriction = -0.00061;
		caliber = 1.1;
	};
	class B_127x107_Ball: BulletBase
	{
		hit = 28;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_127";
		visibleFire = 20;
		audibleFire = 22;
		visibleFireTime = 3;
		cost = 20;
		airLock = 1;
		caliber = 2.07;
		deflecting = 30;
		typicalSpeed = 400;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 1.5;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
		airFriction = -0.00062618;
		ACE_caliber = 12.979;
		ACE_bulletLength = 64.008;
		ACE_bulletMass = 48.276;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.63};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {820};
		ACE_barrelLengths[] = {728.98};
	};
	class CUP_B_127x107_Ball_Green_Tracer: B_127x107_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 1.5;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
		airFriction = -0.00062618;
	};
	class CUP_B_127x108_Ball_Green_Tracer: BulletBase
	{
		hit = 30;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_127";
		visibleFire = 21;
		audibleFire = 22;
		visibleFireTime = 3;
		cost = 20;
		airLock = 1;
		airFriction = -0.00062618;
		caliber = 2.07;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 1.5;
		tracerStartTime = 0.075;
		tracerEndTime = 1;
		ACE_caliber = 12.979;
		ACE_bulletLength = 64.008;
		ACE_bulletMass = 48.276;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.63};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {820};
		ACE_barrelLengths[] = {728.98};
		class CamShakeExplode
		{
			power = "(13^0.5)";
			duration = "((round (13^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((13^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 13;
			duration = "((round (13^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_B_127x99_Ball_White_Tracer: B_127x99_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		airFriction = -0.00057503;
		tracerEndTime = 2.3;
		ACE_caliber = 12.954;
		ACE_bulletLength = 58.674;
		ACE_bulletMass = 41.9256;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.67};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {853};
		ACE_barrelLengths[] = {736.6};
	};
	class CUP_B_127x99_Ball_Red_Tracer: CUP_B_127x99_Ball_White_Tracer
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class CUP_B_127x99_Ball_Green_Tracer: CUP_B_127x99_Ball_White_Tracer
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class CUP_B_127x99_Ball_Yellow_Tracer: CUP_B_127x99_Ball_White_Tracer
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class CUP_B_127x99_Ball_Red_Tracer_Splash: CUP_B_127x99_Ball_Red_Tracer
	{
		hit = 32;
		indirectHit = 1.5;
		indirectHitRange = 1.5;
		fuseDistance = 12;
		deflecting = 30;
		caliber = 3.2;
		soundSetSonicCrack[] = {"BulletSonicCrack_Gatling_SoundSet"};
	};
	class CUP_B_127x99_Ball_M3P_Red_Tracer: CUP_B_127x99_Ball_Red_Tracer_Splash
	{
		airlock = 2;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class CUP_B_145x115_AP_Green_Tracer: BulletBase
	{
		hit = 31;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 25;
		audibleFire = 25;
		visibleFireTime = 3;
		cost = 22;
		airLock = 1;
		model = "a3\weapons_f\data\bullettracer\tracer_green";
		tracerScale = 1.6;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction = -0.00059041;
		caliber = 1.87;
		ACE_caliber = 14.884;
		ACE_bulletLength = 50.8;
		ACE_bulletMass = 65.448;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.62};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {1000};
		ACE_barrelLengths[] = {1346.2};
	};
	class CUP_B_12Gauge_74Slug: BulletBase
	{
		hit = 42;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_slug";
		cost = 5;
		typicalSpeed = 600;
		visibleFire = 18;
		audibleFire = 18;
		airFriction = -0.008;
		caliber = 3;
		deflecting = 30;
		model = "\A3\weapons_f\empty";
		simulation = "shotSubmunitions";
		AGM_BulletMass = 4;
	};
	class B_12Gauge_Pellets_Submunition: BulletBase
	{
		cost = 1;
		hit = 20;
		simulationStep = 0.0001;
		cartridge = "";
		submunitionAmmo = "B_12Gauge_Pellets_Submunition_Deploy";
		submunitionConeType[] = {"poissondisc", 18};
		submunitionConeAngle = 0.8;
		triggerSpeedCoef[] = {0.85, 1};
		triggerTime = 0.001;
	};
	class CUP_B_12Gauge_Pellets: B_12Gauge_Pellets_Submunition
	{
		cartridge = "FxCartridge_slug";
	};
	class CUP_B_19mm_HE: BulletBase
	{
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_1", 3.16228, 1, 1600};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_2", 3.16228, 1, 1600};
		soundHit3[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_3", 3.16228, 1, 1600};
		soundHit4[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_4", 3.16228, 1, 1600};
		soundHit5[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_5", 3.16228, 1, 1600};
		soundHit6[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_6", 3.16228, 1, 1600};
		multiSoundHit[] = {"soundHit1", 0.2, "soundHit2", 0.2, "soundHit3", 0.2, "soundHit4", 0.1, "soundHit5", 0.15, "soundHit6", 0.15};
		explosive = 0.5;
		explosionEffects = "CUP_AA12AmmoExplosion";
		craterEffects = "CUP_AA12AmmoImpact";
		hit = 9;
		indirectHit = 4;
		indirectHitRange = 1.5;
		warheadName = "HE";
		visibleFire = 16;
		audibleFire = 18;
		visibleFireTime = 3;
		cost = 20;
		deflecting = 0;
		airFriction = -0.0005;
		fuseDistance = 3;
		typicalSpeed = 400;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		class CamShakeExplode
		{
			power = "(19 * 0.2)";
			duration = "((round (19^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((2 + 19^0.5)*8)";
		};
	};
	class CUP_M_9K32_Strela_2_AA: M_Titan_AA
	{
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\9K38_Igla\CUP_9K38_Igla_fly.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\9K38_Igla\CUP_9K38_Igla.p3d";
		hit = 60;
		indirectHit = 45;
		indirectHitRange = 8;
		proximityExplosionDistance = 10;
		warheadName = "HE";
		maneuvrability = 8;
		simulationStep = 0.002;
		trackOversteer = 0.75;
		trackLead = 0.7;
		airLock = 2;
		irLock = 1;
		cost = 7500;
		maxSpeed = 470;
		initTime = 0.3;
		sideAirFriction = 0.162;
		thrustTime = 2.5;
		thrust = 232;
		fuseDistance = 120;
		timeToLive = 17;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 32;
		missileKeepLockedCone = 24;
		missileLockCone = 15;
		missileLockMaxDistance = 5200;
		missileLockMinDistance = 100;
		missileLockMaxSpeed = 150;
		weaponLockSystem = "16 + 2";
		cmImmunity = 0.7;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 5200;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3700;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxFogSeeThrough = 0.5;
						maxGroundNoiseDistance = 40;
						groundNoiseDistanceCoef = 0.05;
						angleRangeHorizontal = 6;
						angleRangeVertical = 3;
						maxTrackableSpeed = 150;
						minTrackableATL = 20;
					};
				};
			};
		};
	};
	class CUP_M_9K38_Igla_AA: M_Titan_AA
	{
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\9K38_Igla\CUP_9K38_Igla_fly.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\9K38_Igla\CUP_9K38_Igla.p3d";
		hit = 70;
		indirecthit = 50;
		indirecthitrange = 8;
		proximityExplosionDistance = 10;
		warheadName = "HE";
		inittime = 0.25;
		maneuvrability = 10;
		simulationStep = 0.002;
		maxspeed = 800;
		sideAirFriction = 0.038;
		thrust = 600;
		airLock = 2;
		irLock = 1;
		timeToLive = 9;
		cost = 7500;
		cmImmunity = 0.8;
		thrusttime = 1.5;
		fuseDistance = 120;
		missileKeepLockedCone = 30;
		missileLockCone = 6;
		missileLockMaxDistance = 4800;
		missileLockMinDistance = 100;
		missileLockMaxSpeed = 150;
		trackOversteer = 1;
		trackLead = 0.8;
		weaponlocksystem = "16 + 2";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 32;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 4100;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxFogSeeThrough = 0.6;
						maxGroundNoiseDistance = 30;
						groundNoiseDistanceCoef = 0.1;
						angleRangeHorizontal = 9;
						angleRangeVertical = 5;
						maxTrackableSpeed = 150;
						minTrackableATL = 15;
					};
				};
			};
		};
	};
	class CUP_M_9M311_Tunguska_AA: M_Titan_AA
	{
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\9K38_Igla\CUP_9K38_Igla_fly.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\9K38_Igla\CUP_9K38_Igla.p3d";
		hit = 80;
		indirecthit = 60;
		indirecthitrange = 10;
		warheadName = "HE";
		inittime = 0.25;
		maneuvrability = 14;
		simulationStep = 0.002;
		maxspeed = 900;
		sideAirFriction = 0.038;
		thrust = 600;
		airLock = 2;
		irLock = 1;
		timeToLive = 20;
		cost = 10000;
		cmImmunity = 0.9;
		thrusttime = 1.5;
		fuseDistance = 120;
		trackOversteer = 1;
		trackLead = 1;
		weaponlocksystem = "16 + 8";
		missileLockMaxDistance = 7500;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 32;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 7500;
							maxRange = 7500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxFogSeeThrough = 1;
						maxGroundNoiseDistance = 150;
						groundNoiseDistanceCoef = 0.1;
						angleRangeHorizontal = 9;
						angleRangeVertical = 7;
						maxTrackableSpeed = 500;
						minTrackableATL = 15;
					};
				};
			};
		};
	};
	class CUP_M_9M311M_Tunguska_AA: CUP_M_9M311_Tunguska_AA
	{
		missileLockMaxDistance = 10000;
		class Components: Components
		{
			class SensorsManagerComponent: SensorsManagerComponent
			{
				class Components: Components
				{
					class ActiveRadarSensorComponent: ActiveRadarSensorComponent
					{
						class AirTarget: AirTarget
						{
							minRange = 10000;
							maxRange = 10000;
						};
					};
				};
			};
		};
	};
	class CUP_M_3M11_AT2_Falanga_AT: MissileBase
	{
		SoundSetExplosion[] = {"RocketsMedium_Exp_SoundSet", "RocketsMedium_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\3M11_Falanga_AT2\CUP_3M11_Falanga_AT2_fly.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\3M11_Falanga_AT2\CUP_3M11_Falanga_AT2_proxy.p3d";
		hit = 150;
		indirectHit = 25;
		indirectHitRange = 2.4;
		warheadName = "HE";
		submunitionAmmo = "CUP_P_3M11_AT2_Falanga_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		deflecting = 0;
		cost = 7000;
		manualControl = 1;
		lockType = 1;
		maxControlRange = 2500;
		trackOversteer = 0.9;
		trackLead = 0.9;
		maneuvrability = 4;
		simulationStep = 0.005;
		sideAirFriction = 0.076;
		initTime = 0.075;
		thrustTime = 1.5;
		thrust = 191;
		maxSpeed = 323;
		timeToLive = 26;
		effectsMissile = "missile2";
		soundFly[] = {"CUP\Weapons\CUP_Weapons_Ammunition\data\sound\atgm_flyby_1", 6, 10, 500};
		whistleDist = 32;
		weaponLockSystem = "16 + 1";
		cmImmunity = 0.7;
		class CamShakeExplode
		{
			power = "(55 * 0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((4 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(60^0.25)";
			duration = "((round (60^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((60^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 3;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_M_9K11_AT3_Sagger_AT: MissileBase
	{
		SoundSetExplosion[] = {"RocketsMedium_Exp_SoundSet", "RocketsMedium_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\9K11_AT3\CUP_9K11_AT3.p3d";
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\9K11_AT3\CUP_9K11_AT3.p3d";
		hit = 75;
		indirectHit = 10;
		indirectHitRange = 1.8;
		warheadName = "HE";
		submunitionAmmo = "CUP_P_9K11_AT3_Sagger_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		cost = 7000;
		initTime = 0;
		thrustTime = 2.5;
		thrust = 200;
		maxSpeed = 115;
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_1", 5.62341, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_2", 5.62341, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		manualControl = 1;
		lockType = 1;
		trackOversteer = 1;
		sideAirFriction = 0.14;
		trackLead = 1;
		timeToLive = 26;
		maxControlRange = 3000;
		maneuvrability = 2;
		soundFly[] = {"CUP\Weapons\CUP_Weapons_Ammunition\data\sound\atgm_flyby_1", 6, 10, 500};
		whistleDist = 32;
		class CamShakeExplode
		{
			power = "(55 * 0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((4 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(60^0.25)";
			duration = "((round (60^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((60^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 3;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_M_9M113_AT5_Spandrel_AT: M_Titan_AT
	{
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\9M113_AT5\CUP_9M113_AT5.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\9M113_AT5\CUP_9M113_AT5.p3d";
		hit = 75;
		indirectHit = 12;
		indirectHitRange = 1.8;
		warheadName = "HE";
		submunitionAmmo = "CUP_P_9M113_AT5_Spandrel_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		aiAmmoUsageFlags = "128 + 512";
		canLock = 0;
		cost = 800;
		irLock = 1;
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_1", 5.62341, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_2", 5.62341, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		manualControl = 1;
		lockType = 1;
		maxControlRange = 4000;
		trackOversteer = 1;
		trackLead = 1;
		maneuvrability = 20;
		timeToLive = 9;
		simulationStep = 0.001;
		sideAirFriction = 0.9;
		maxSpeed = 170;
		initTime = 0.25;
		thrustTime = 1.5;
		thrust = 300;
		deflecting = 0;
		fuseDistance = 5;
		soundFly[] = {"CUP\Weapons\CUP_Weapons_Ammunition\data\sound\atgm_flyby_1", 6, 10, 500};
		whistleDist = 32;
		class CamShakeExplode
		{
			power = "(55 * 0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((4 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(60^0.25)";
			duration = "((round (60^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((60^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 3;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_M_Shturm_9K114_AT6_Spiral_AT: MissileBase
	{
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\AT1_Generic\CUP_AT1_fly.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\AT1_Generic\CUP_AT1.p3d";
		hit = 150;
		indirectHit = 25;
		indirectHitRange = 2.4;
		warheadName = "HE";
		submunitionAmmo = "CUP_P_Shturm_9K114_AT6_Spiral_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		cost = 500;
		manualControl = 1;
		lockType = 1;
		maxControlRange = 5000;
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_1", 5.62341, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_2", 5.62341, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		initTime = 0;
		trackOversteer = 0.85;
		trackLead = 0.85;
		timeToLive = 17.6;
		maneuvrability = 6;
		simulationStep = 0.002;
		sideAirFriction = 0.08;
		maxSpeed = 345;
		thrustTime = 3.25;
		thrust = 168;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 32;
		class CamShakeExplode
		{
			power = "(55 * 0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((4 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(60^0.25)";
			duration = "((round (60^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((60^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 3;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_M_Ataka_V_9M120_AT9_Spiral_2_AT: MissileBase
	{
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\AT1_Generic\CUP_AT1_fly.p3d";
		proxyShape = "";
		hit = 150;
		indirectHit = 52;
		indirectHitRange = 3.25;
		warheadName = "TandemHEAT";
		submunitionAmmo = "CUP_P_Ataka_V_9M120_AT9_Spiral_2_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		cost = 10000;
		manualControl = 1;
		lockType = 1;
		maxControlRange = 6000;
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_1", 5.62341, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_2", 5.62341, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		initTime = 0;
		trackOversteer = 1;
		trackLead = 1;
		maneuvrability = 8;
		simulationStep = 0.002;
		sideAirFriction = 0.1;
		maxSpeed = 550;
		thrustTime = 3.5;
		timeToLive = 20;
		cameraViewAvailable = 1;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 3;
							maxRange = 5000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxFogSeeThrough = 0.5;
						angleRangeHorizontal = 30;
						angleRangeVertical = 30;
						maxTrackableSpeed = 144;
					};
				};
			};
		};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 32;
		class CamShakeExplode
		{
			power = "(55 * 0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((4 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(60^0.25)";
			duration = "((round (60^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((60^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 3;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_M_9K116_1_Bastion_AT10_Stabber_AT: MissileBase
	{
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\AT1_Generic\CUP_AT1_fly.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\AT1_Generic\CUP_AT1.p3d";
		hit = 150;
		indirectHit = 25;
		indirectHitRange = 2.4;
		warheadName = "HE";
		submunitionAmmo = "CUP_P_9K116_1_Bastion_AT10_Stabber_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		cost = 10000;
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_1", 5.62341, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_2", 5.62341, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		maneuvrability = 8;
		simulationStep = 0.002;
		timeToLive = 26;
		sideAirFriction = 0.05;
		airFriction = 0.144;
		trackOversteer = 1.4;
		trackLead = 0.8;
		maxSpeed = 400;
		initTime = 1.5;
		thrustTime = 6;
		thrust = 300;
		manualControl = 1;
		lockType = 1;
		fuseDistance = 15;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxFogSeeThrough = 0.5;
						angleRangeHorizontal = 30;
						angleRangeVertical = 30;
						maxTrackableSpeed = 80;
					};
				};
			};
		};
		soundFly[] = {"CUP\Weapons\CUP_Weapons_Ammunition\data\sound\atgm_flyby_1", 6, 10, 500};
		whistleDist = 32;
	};
	class CUP_M_9M119M_Bastion_AT11_Sniper_AT: MissileBase
	{
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\AT1_Generic\CUP_AT1_fly.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\AT1_Generic\CUP_AT1.p3d";
		hit = 150;
		indirectHit = 15;
		indirectHitRange = 2;
		warheadName = "TandemHEAT";
		submunitionAmmo = "CUP_P_9M119M_Bastion_AT11_Sniper_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		cost = 15000;
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_1", 5.62341, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_2", 5.62341, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		maneuvrability = 6;
		simulationStep = 0.002;
		timeToLive = 17.6;
		sideAirFriction = 0.1;
		airFriction = 0.05;
		trackOversteer = 1;
		trackLead = 0.8;
		maxSpeed = 350;
		initTime = 1e-005;
		thrustTime = 6;
		thrust = 55;
		manualControl = 1;
		lockType = 1;
		fuseDistance = 15;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxFogSeeThrough = 0.5;
						angleRangeHorizontal = 30;
						angleRangeVertical = 30;
						maxTrackableSpeed = 80;
					};
				};
			};
		};
		soundFly[] = {"CUP\Weapons\CUP_Weapons_Ammunition\data\sound\atgm_flyby_1", 6, 10, 500};
		whistleDist = 32;
		maxControlRange = 5000;
	};
	class CUP_M_9K115_2_AT13_Saxhorn_2_AT: M_Titan_AT
	{
		aiAmmoUsageFlags = "128 + 512";
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		model = "\A3\Weapons_F_Tank\Launchers\Vorona\Vorona_missile_heat_fly.p3d";
		hit = 150;
		indirectHit = 25;
		indirectHitRange = 3.5;
		explosive = 0.8;
		warheadName = "TandemHEAT";
		submunitionAmmo = "CUP_P_9K115_2_AT13_Saxhorn_2_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		lockType = 1;
		cost = 500;
		manualControl = 1;
		manualControlOffset = 80;
		missileManualControlCone = 60;
		maxControlRange = 2000;
		trackOversteer = 1;
		trackLead = 1;
		maneuvrability = 6;
		timeToLive = 30;
		simulationStep = 0.002;
		sideAirFriction = 0.09;
		airFriction = 0.06;
		maxSpeed = 200;
		initTime = 0.05;
		thrustTime = 1.45;
		thrust = 70;
		deflecting = 0;
		fuseDistance = 50;
		soundFly[] = {"CUP\Weapons\CUP_Weapons_Ammunition\data\sound\atgm_flyby_1", 6, 10, 500};
		whistleDist = 4;
		weaponLockSystem = 0;
		class CamShakeExplode
		{
			power = "(55 * 0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((4 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(60^0.25)";
			duration = "((round (60^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((60^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 3;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_M_9K121_Vikhr_AT16_Scallion_AT: MissileBase
	{
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\AT1_Generic\CUP_AT1_fly.p3d";
		proxyShape = "";
		hit = 150;
		indirectHit = 25;
		indirectHitRange = 3;
		warheadName = "TandemHEAT";
		submunitionAmmo = "CUP_P_9K121_Vikhr_AT16_Scallion_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		cost = 10000;
		airLock = 0;
		manualControl = 1;
		lockType = 1;
		maxControlRange = 8000;
		missileLockCone = 90;
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_1", 5.62341, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_2", 5.62341, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		initTime = 0;
		trackOversteer = 1;
		trackLead = 1;
		timeToLive = 23;
		maneuvrability = 11;
		simulationStep = 0.002;
		sideAirFriction = 0.09;
		maxSpeed = 600;
		thrustTime = 4;
		thrust = 366;
		fuseDistance = 50;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 32;
		cameraViewAvailable = 1;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxFogSeeThrough = 0.5;
						angleRangeHorizontal = 30;
						angleRangeVertical = 30;
						maxTrackableSpeed = 80;
					};
				};
			};
		};
		weaponLockSystem = "16 + 4";
		cmImmunity = 0.95;
	};
	class CUP_M_KH29L_AT: M_Scalpel_AT
	{
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\Kh29\cup_kh29fly";
		proxyshape = "\CUP\Weapons\CUP_Weapons_Ammunition\Kh29\cup_kh29_proxy";
		hit = 1500;
		indirectHit = 125;
		indirectHitRange = 15;
		warheadName = "HE";
		maxSpeed = 408;
		submunitionAmmo = "CUP_P_KH29L_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		cmImmunity = 0.95;
	};
	class CUP_M_AGM_114K_Hellfire_II_AT: MissileBase
	{
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\AGM_114K_Hellfire_II\CUP_AGM_114K_Hellfire_II_fly.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\AGM_114K_Hellfire_II\CUP_AGM_114K_Hellfire_II.p3d";
		hit = 100;
		indirectHit = 71;
		indirectHitRange = 4.5;
		warheadName = "TandemHEAT";
		submunitionAmmo = "CUP_P_AGM_114K_Hellfire_II_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		flightProfiles[] = {"Direct", "TopDown"};
		class Direct
		{
		};
		class TopDown
		{
			ascendHeight = 400;
			descendDistance = 800;
			minDistance = 800;
			ascendAngle = 20;
		};
		cost = 10000;
		maxSpeed = 425;
		airLock = 0;
		irLock = 1;
		laserLock = 1;
		maxControlRange = 8000;
		trackOversteer = 1;
		trackLead = 1;
		maneuvrability = 12;
		simulationStep = 0.01;
		sideAirFriction = 0.175;
		initTime = 0;
		thrust = 180;
		thrustTime = 3.25;
		fuseDistance = 50;
		missileKeepLockedCone = 180;
		missileLockCone = 180;
		missileLockMaxDistance = 8000;
		missileLockMinDistance = 100;
		missileLockMaxSpeed = 80;
		effectsMissile = "missile2";
		effectsMissileInit = "MissileDAR1";
		muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 32;
		timeToLive = 30;
		weaponLockSystem = "16 + 4 ";
		cmImmunity = 0.8;
	};
	class CUP_M_AGM_114L_Hellfire_II_AT: MissileBase
	{
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\AGM_114K_Hellfire_II\CUP_AGM_114K_Hellfire_II_fly.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\AGM_114K_Hellfire_II\CUP_AGM_114K_Hellfire_II.p3d";
		hit = 100;
		indirectHit = 71;
		indirectHitRange = 4.5;
		warheadName = "TandemHEAT";
		submunitionAmmo = "CUP_P_AGM_114L_Hellfire_II_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		autoSeekTarget = 1;
		flightProfiles[] = {"Direct", "TopDown"};
		class Direct
		{
		};
		class TopDown
		{
			ascendHeight = 400;
			descendDistance = 800;
			minDistance = 800;
			ascendAngle = 20;
		};
		cost = 10000;
		maxSpeed = 425;
		irLock = 0;
		laserLock = 0;
		maxControlRange = 8000;
		trackOversteer = 1;
		trackLead = 1;
		maneuvrability = 12;
		simulationStep = 0.01;
		sideAirFriction = 0.175;
		initTime = 0;
		thrust = 180;
		thrustTime = 3.25;
		fuseDistance = 50;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxFogSeeThrough = 1;
						maxGroundNoiseDistance = 2;
						groundNoiseDistanceCoef = 0.1;
						angleRangeHorizontal = 30;
						angleRangeVertical = 30;
						maxTrackableSpeed = 350;
					};
				};
			};
		};
		effectsMissile = "missile2";
		effectsMissileInit = "MissileDAR1";
		muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 32;
		timeToLive = 30;
		weaponLockSystem = "4 + 8 + 16";
		cmImmunity = 0.8;
	};
	class CUP_M_AIM_9L_Sidewinder_AA: MissileBase
	{
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\AIM9x_Sidewinder\CUP_AIM9X_Sidewinder_fly";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\AIM9x_Sidewinder\CUP_AIM9X_Sidewinder";
		hit = 130;
		indirectHit = 85;
		indirectHitRange = 10;
		warheadName = "HE";
		proximityExplosionDistance = 20;
		fuseDistance = 100;
		maneuvrability = 42;
		airFriction = 0.14;
		sideAirFriction = 0.23;
		trackOversteer = 1.6;
		trackLead = 0.9;
		initTime = 0;
		timeToLive = 20;
		thrustTime = 5;
		thrust = 250;
		maxSpeed = 828;
		simulationStep = 0.002;
		airLock = 2;
		lockType = 0;
		irLock = 1;
		laserLock = 0;
		nvLock = 0;
		maverickWeaponIndexOffset = 0;
		cmImmunity = 0.8;
		weaponLockSystem = "2 + 16";
		missileLockCone = 180;
		missileKeepLockedCone = 180;
		missileLockMaxDistance = 5000;
		missileLockMinDistance = 250;
		missileLockMaxSpeed = 600;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						maxTrackableSpeed = 600;
						minTrackableATL = 3;
					};
				};
			};
		};
		cost = 1000;
		whistleDist = 20;
		aiAmmoUsageFlags = 256;
		manualControl = 0;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
		effectsMissile = "missile3";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		class Hiteffects
		{
			hitWater = "ImpactEffectsSmall";
		};
	};
	class CUP_M_AIM_9L_Sidewinder_AA_INTERNAL: CUP_M_AIM_9L_Sidewinder_AA
	{
		proxyShape = "\a3\weapons_f\empty";
	};
	class CUP_M_Stinger_AA: MissileBase
	{
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\Stinger\CUP_Stinger_Rocket.p3d";
		hit = 80;
		indirectHit = 60;
		indirectHitRange = 8;
		proximityExplosionDistance = 10;
		warheadName = "HE";
		maneuvrability = 14;
		simulationStep = 0.0012;
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_1", 5.62341, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_2", 5.62341, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		irLock = 1;
		airLock = 2;
		cost = 10000;
		timeToLive = 15;
		sideAirFriction = 0.75;
		trackOversteer = 0.85;
		trackLead = 0.95;
		maxSpeed = 750;
		initTime = 0.25;
		thrustTime = 2;
		thrust = 1050;
		fuseDistance = 50;
		effectsMissile = "missile2";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 32;
		weaponLockSystem = "2 + 16";
		manualControl = 0;
		cmImmunity = 0.95;
		missileKeepLockedCone = 90;
		missileLockCone = 12;
		missileLockMaxDistance = 7600;
		missileLockMinDistance = 100;
		missileLockMaxSpeed = 200;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						groundNoiseDistanceCoef = 0.1;
						maxFogSeeThrough = 0.7;
						angleRangeHorizontal = 16.5;
						angleRangeVertical = 16.5;
						maxTrackableSpeed = 350;
						minTrackableATL = 20;
					};
				};
			};
		};
		class CamShakeExplode
		{
			power = "(55 * 0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((4 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(60^0.25)";
			duration = "((round (60^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((60^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 3;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_M_RBS70_AA: MissileBase
	{
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\Stinger\CUP_Stinger_Rocket.p3d";
		hit = 70;
		indirectHit = 50;
		indirectHitRange = 8;
		warheadName = "HE";
		maneuvrability = 14;
		simulationStep = 0.0012;
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_1", 5.62341, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_2", 5.62341, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		irLock = 1;
		airLock = 2;
		cost = 10000;
		timeToLive = 15;
		sideAirFriction = 0.75;
		trackOversteer = 0.85;
		trackLead = 0;
		maxSpeed = 750;
		initTime = 0.25;
		thrustTime = 2;
		thrust = 1050;
		fuseDistance = 50;
		effectsMissile = "missile2";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 32;
		weaponLockSystem = "2 + 16";
		manualControl = 0;
		cmImmunity = 0.8;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxFogSeeThrough = 0.5;
						angleRangeHorizontal = 30;
						angleRangeVertical = 30;
						maxTrackableSpeed = 80;
						minTrackableATL = 3;
					};
				};
			};
		};
		class CamShakeExplode
		{
			power = "(55 * 0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((4 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(60^0.25)";
			duration = "((round (60^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((60^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 3;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_AGM65pod_AT: MissileBase
	{
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		model = "\A3\Weapons_F_EPC\Ammo\Missile_AGM_02_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Missile_AGM_02_F.p3d";
		hit = 1100;
		indirectHit = 85;
		indirectHitRange = 8;
		warheadName = "HE";
		submunitionAmmo = "CUP_P_AGM_65D_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		cost = 10000;
		maxSpeed = 300;
		irLock = 1;
		maxControlRange = 27000;
		trackOversteer = 1;
		trackLead = 1;
		maneuvrability = 8;
		simulationStep = 0.01;
		sideAirFriction = 0.2;
		initTime = 0.15;
		thrust = 141;
		thrustTime = 2;
		fuseDistance = 5;
		effectsMissile = "missile2";
		effectsMissileInit = "MissileDAR1";
		muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 32;
		timeToLive = 120;
		cameraViewAvailable = 1;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxFogSeeThrough = 0.995;
						maxGroundNoiseDistance = 40;
						angleRangeHorizontal = 30;
						angleRangeVertical = 30;
						maxTrackableSpeed = 100;
					};
				};
			};
		};
		weaponLockSystem = "2 + 16";
		cmImmunity = 0.95;
	};
	class CUP_AGM65_AT: CUP_AGM65pod_AT
	{
		proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\AGM65\CUP_AGM65.p3d";
	};
	class CUP_AGM84_AT: MissileBase
	{
		soundSetExplosion[] = {"BombsHeavy_Exp_SoundSet", "BombsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		model = "\A3\Weapons_F\Ammo\Missile_AA_02_fly_F.p3d";
		proxyShape = "";
		hit = 1500;
		indirectHit = 125;
		indirectHitRange = 15;
		warheadName = "HE";
		submunitionAmmo = "CUP_P_AGM_84_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		cost = 5000;
		maxSpeed = 240;
		irLock = 1;
		trackOversteer = 1;
		trackLead = 1;
		maneuvrability = 25;
		simulationStep = 0.002;
		sideAirFriction = 0.02;
		initTime = 0;
		thrust = 35;
		thrustTime = 180;
		fuseDistance = 100;
		craterEffects = "HeavyBombCrater";
		explosionEffects = "HeavyBombExplosion";
		effectsMissile = "CruiseMissile";
		effectsMissileInit = "RocketBackEffectsRPG";
		muzzleEffect = "BIS_fnc_effectFiredCruiseMissile";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 1000};
		whistleDist = 32;
		timeToLive = 180;
		weaponLockSystem = 8;
		cmImmunity = 0.95;
		autoSeekTarget = 0;
		lockSeekRadius = 1500;
		missileLockCone = 360;
		missileKeepLockedCone = 360;
		missileLockMaxSpeed = 28;
		missileLockMaxDistance = 16000;
		missileLockMinDistance = 50;
		flightProfiles[] = {"Cruise"};
		class Cruise
		{
			preferredFlightAltitude = 15;
			lockDistanceToTarget = 3000;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 16000;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 16000;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 15000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = 0;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
						class AirTarget
						{
							minRange = 16000;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 16000;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 200;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
					};
				};
			};
		};
		class CamShakeExplode
		{
			power = 46;
			duration = 3;
			frequency = 20;
			distance = 361.326;
		};
		class CamShakeHit
		{
			power = 230;
			duration = 0.8;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.89432;
			duration = 3;
			frequency = 20;
			distance = 121.326;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_M_RIM7_Frigate: MissileBase
	{
		warheadName = "HE";
		simulationStep = 0.002;
		aiAmmoUsageFlags = 256;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissileInit = "";
		effectsMissile = "missile3";
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 1900};
		multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
		airLock = 2;
		class CamShakeExplode
		{
			power = 22;
			duration = 2;
			frequency = 20;
			distance = 147.905;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.9907;
			duration = 1.8;
			frequency = 20;
			distance = 71.5542;
		};
		class CamShakePlayerFire
		{
			power = 4;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		proxyShape = "\A3\Weapons_F\Ammo\Missile_AA_02_F.p3d";
		model = "\A3\Weapons_F\Ammo\Missile_AA_02_fly_F.p3d";
		airFriction = 0.078;
		sideAirFriction = 0.18;
		maneuvrability = 22;
		hit = 170;
		indirectHit = 115;
		indirectHitRange = 12;
		proximityExplosionDistance = 25;
		timeToLive = 45;
		muzzleEffect = "";
		thrustTime = 7;
		thrust = 200;
		initTime = 0;
		maxSpeed = 850;
		fuseDistance = 500;
		cost = 1500;
		trackOversteer = 1.1;
		trackLead = 1.05;
		activeSensorAlwaysOn = 0;
		missileLockCone = 360;
		missileKeepLockedCone = 360;
		missileLockMaxDistance = 16000;
		missileLockMinDistance = 500;
		missileLockMaxSpeed = 835;
		weaponLockSystem = "8 + 16";
		cmImmunity = 0.94;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 0.562341, 1.1, 700};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class RadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 16000;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
					};
				};
			};
		};
	};
	class CUP_R_PG7V_AT: RocketBase
	{
		aiAmmoUsageFlags = "128 + 256 + 512";
		SoundSetExplosion[] = {"RocketsMedium_Exp_SoundSet", "RocketsMedium_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		hit = 90;
		indirectHit = 13;
		indirectHitRange = 3;
		warheadName = "HEAT";
		submunitionAmmo = "CUP_P_PG7V_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\PG7V\CUP_PG7V_fly.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\PG7V\CUP_PG7V.p3d";
		cost = 100;
		initTime = 0.1;
		thrust = 467;
		thrustTime = 0.5;
		maxSpeed = 294;
		sideAirFriction = 0.001;
		airFriction = 0.5;
		timeToLive = 5;
		fuseDistance = 5;
		visibleFire = 28;
		audibleFire = 16;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissile = "missile2";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 32;
		class CamShakeExplode
		{
			power = "(55 * 0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_R_PG7VM_AT: RocketBase
	{
		aiAmmoUsageFlags = "128 + 256 + 512";
		SoundSetExplosion[] = {"RocketsMedium_Exp_SoundSet", "RocketsMedium_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		hit = 90;
		indirectHit = 13;
		indirectHitRange = 3;
		warheadName = "HEAT";
		submunitionAmmo = "CUP_P_PG7VM_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\PG7VM\CUP_PG7VM_fly.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\PG7VM\CUP_PG7VM.p3d";
		cost = 100;
		initTime = 0.1;
		thrust = 467;
		thrustTime = 0.5;
		maxSpeed = 294;
		sideAirFriction = 0.001;
		airFriction = 0.5;
		timeToLive = 5;
		fuseDistance = 5;
		visibleFire = 28;
		audibleFire = 16;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissile = "missile2";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 32;
		class CamShakeExplode
		{
			power = "(55 * 0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_R_PG7VL_AT: RocketBase
	{
		aiAmmoUsageFlags = "128 + 256 + 512";
		SoundSetExplosion[] = {"RocketsMedium_Exp_SoundSet", "RocketsMedium_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		hit = 90;
		indirectHit = 13;
		indirectHitRange = 3;
		warheadName = "HEAT";
		submunitionAmmo = "CUP_P_PG7VL_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\PG7VL\CUP_PG7VL_Fly.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\PG7VL\CUP_PG7VL.p3d";
		cost = 200;
		initTime = 0.1;
		thrust = 180;
		thrustTime = 0.5;
		maxSpeed = 294;
		sideAirFriction = 0.1;
		airFriction = 0.6;
		timeToLive = 5;
		fuseDistance = 5;
		visibleFire = 28;
		audibleFire = 16;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissile = "missile2";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 32;
		class CamShakeExplode
		{
			power = "(55 * 0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_R_PG7VR_AT: RocketBase
	{
		aiAmmoUsageFlags = "128 + 256 + 512";
		SoundSetExplosion[] = {"RocketsMedium_Exp_SoundSet", "RocketsMedium_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		hit = 115;
		indirectHit = 16;
		indirectHitRange = 3;
		warheadName = "TandemHEAT";
		submunitionAmmo = "CUP_P_PG7VR_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\PG7VR\CUP_PG7VR_Fly.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\PG7VR\CUP_PG7VR.p3d";
		cost = 300;
		initTime = 0.15;
		thrust = 120;
		thrustTime = 0.5;
		maxSpeed = 110;
		airFriction = 1;
		sideAirFriction = 0.09;
		timeToLive = 5;
		fuseDistance = 5;
		visibleFire = 28;
		audibleFire = 16;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissile = "missile2";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 32;
		class CamShakeExplode
		{
			power = "(55 * 0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_R_TBG7V_AT: RocketBase
	{
		aiAmmoUsageFlags = "64 + 128";
		SoundSetExplosion[] = {"RocketsMedium_Exp_SoundSet", "RocketsMedium_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		hit = 95;
		indirectHit = 70;
		indirectHitRange = 8;
		warheadName = "HE";
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\TBG7V\CUP_TBG7V_Fly.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\TBG7V\CUP_TBG7V.p3d";
		cost = 300;
		initTime = 0.15;
		thrust = 120;
		thrustTime = 0.5;
		maxSpeed = 110;
		airFriction = 1;
		sideAirFriction = 0.09;
		timeToLive = 5;
		fuseDistance = 5;
		visibleFire = 28;
		audibleFire = 16;
		CraterEffects = "ArtyShellCrater";
		explosionEffects = "BombExplosion";
		effectsMissile = "missile2";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 32;
		allowAgainstInfantry = 1;
		class CamShakeExplode
		{
			power = "(55 * 0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_R_OG7_AT: RocketBase
	{
		aiAmmoUsageFlags = "64 + 128";
		SoundSetExplosion[] = {"RocketsMedium_Exp_SoundSet", "RocketsMedium_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		hit = 75;
		indirectHit = 50;
		indirectHitRange = 6;
		warheadName = "HE";
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\OG7V\CUP_OG7V_Fly.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\OG7V\CUP_OG7V.p3d";
		cost = 100;
		initTime = 0;
		thrust = 0;
		thrustTime = 0.05;
		maxSpeed = 294;
		airFriction = 0.2;
		sideAirFriction = 0.1;
		timeToLive = 5;
		fuseDistance = 5;
		visibleFire = 28;
		audibleFire = 16;
		CraterEffects = "GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
		effectsMissile = "missile2";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 32;
		allowAgainstInfantry = 1;
		class CamShakeExplode
		{
			power = "(55 * 0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_R_70mm_Hydra_HE: RocketBase
	{
		SoundSetExplosion[] = {"RocketsLight_Exp_SoundSet", "RocketsLight_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\CUP_70mmRocket.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\CUP_70mmRocket.p3d";
		hit = 150;
		indirectHit = 40;
		indirectHitRange = 8;
		warheadName = "HE";
		cost = 200;
		maxSpeed = 720;
		thrustTime = 1.07;
		thrust = 900;
		sideAirFriction = 0.1;
		timeToLive = 20;
		fuseDistance = 40;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 32;
	};
	class CUP_R_CRV7_C18_HE: CUP_R_70mm_Hydra_HE
	{
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\CUP_70mmRocket.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\CUP_70mmRocket.p3d";
		timeToLive = 20;
		initTime = 0.05;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 20;
		cost = 2000;
		deflecting = 5;
		hit = 200;
		indirectHit = 50;
		indirectHitRange = 10;
		warheadName = "HE";
		maxSpeed = 944;
		thrustTime = 0.96;
		thrust = 1143;
		sideAirFriction = 0.1;
		fuseDistance = 40;
		whistleDist = 24;
	};
	class CUP_R_CRV7_C15_HE: CUP_R_CRV7_C18_HE
	{
		maxSpeed = 1034;
		thrustTime = 1.72;
		thrust = 1311;
	};
	class CUP_R_CRV7_C18_KEP: CUP_R_CRV7_C18_HE
	{
		explosive = 0;
		caliber = 16;
		typicalSpeed = 700;
		hit = 430;
		indirectHit = 10;
		indirectHitRange = 1;
		warheadName = "AP";
	};
	class CUP_R_CRV7_C15_KEP: CUP_R_CRV7_C18_KEP
	{
		hit = 450;
		maxSpeed = 1034;
		thrustTime = 1.72;
		thrust = 1311;
	};
	class CUP_R_CRV7_FAT: CUP_R_CRV7_C18_HE
	{
		hit = 550;
		indirectHit = 100;
		indirectHitRange = 10;
	};
	class CUP_R_TOW_AT: M_Titan_AT
	{
		model = "\CUP\Weapons\CUP_Weapons_StaticWeapons\tow.p3d";
		hit = 90;
		indirectHit = 14;
		indirectHitRange = 2;
		warheadName = "HE";
		submunitionAmmo = "CUP_P_TOW_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		cost = 8000;
		irLock = 1;
		manualControl = 1;
		locktype = 1;
		trackOversteer = 1;
		trackLead = 1;
		timeToLive = 9;
		maneuvrability = 25;
		simulationStep = 0.001;
		sideAirFriction = 0.9;
		maxControlRange = 3750;
		maxSpeed = 296;
		initTime = 0.151;
		thrustTime = 1.45;
		thrust = 300;
		deflecting = 0;
		fuseDistance = 5;
		effectsMissile = "missile2";
		soundFly[] = {"CUP\Weapons\CUP_Weapons_Ammunition\data\sound\atgm_flyby_1", 6, 10, 500};
		whistleDist = 32;
		class Components
		{
		};
	};
	class CUP_R_TOW2_AT: CUP_R_TOW_AT
	{
		hit = 115;
		indirectHit = 20;
		indirectHitRange = 2.4;
		warheadName = "HE";
		submunitionAmmo = "CUP_P_TOW2_AT";
		maxSpeed = 329;
		thrust = 334;
	};
	class CUP_R_SMAW_HEDP: RocketBase
	{
		SoundSetExplosion[] = {"RocketsLight_Exp_SoundSet", "RocketsLight_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		audiblefire = 16;
		airFriction = 0.01;
		airlock = 0;
		allowAgainstInfantry = 1;
		cost = 200;
		cratereffects = "ATMissileCrater";
		effectsmissile = "EmptyEffect";
		effectsmissileinit = "CUP_smaw_backblast";
		explosioneffects = "ATMissileExplosion";
		explosive = 0.65;
		fusedistance = 15;
		hit = 90;
		indirecthit = 40;
		indirecthitrange = 7;
		warheadName = "HE";
		inittime = 0.02;
		irlock = 0;
		maneuvrability = 0;
		maxSpeed = 220;
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\SMAW\CUP_smaw_rocket_inflight.p3d";
		sideAirFriction = 0;
		simulationstep = 0.02;
		thrust = 0;
		thrusttime = 10;
		timetolive = 25;
		visiblefire = 28;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 32;
		submunitionAmmo = "CUP_P_SMAW_HEDP";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		class CamShakeExplode
		{
			distance = "((5 + 55^0.5)*8)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			power = "(55 * 0.2)";
		};
		class CamShakeHit
		{
			distance = 1;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			power = 110;
		};
		class CamShakeFire
		{
			distance = "((20^0.5)*8)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			power = "(20^0.25)";
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 1;
		};
	};
	class CUP_R_SMAW_HEAA: CUP_R_SMAW_HEDP
	{
		cost = 500;
		cratereffects = "ATRocketCrater";
		explosioneffects = "ATRocketExplosion";
		hit = 105;
		indirectHit = 12;
		indirectHitRange = 1.5;
		allowAgainstInfantry = 0;
		warheadName = "HEAT";
		submunitionAmmo = "CUP_P_SMAW_HEAA";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class CUP_R_SMAW_NE: RocketBase
	{
		SoundSetExplosion[] = {"RocketsLight_Exp_SoundSet", "RocketsLight_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		audiblefire = 16;
		airFriction = 0.01;
		airlock = 0;
		allowAgainstInfantry = 1;
		cost = 200;
		cratereffects = "ATMissileCrater";
		effectsmissile = "EmptyEffect";
		effectsmissileinit = "CUP_smaw_backblast";
		explosioneffects = "ATMissileExplosion";
		explosive = 0.65;
		fusedistance = 15;
		hit = 50;
		indirecthit = 60;
		indirecthitrange = 10;
		warheadName = "HE";
		inittime = 0.02;
		irlock = 0;
		maneuvrability = 0;
		maxSpeed = 220;
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\SMAW\CUP_smaw_rocket_inflight.p3d";
		sideAirFriction = 0;
		simulationstep = 0.02;
		thrust = 0;
		thrusttime = 10;
		timetolive = 25;
		visiblefire = 28;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 32;
		class CamShakeExplode
		{
			distance = "((5 + 55^0.5)*8)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			power = "(55 * 0.2)";
		};
		class CamShakeHit
		{
			distance = 1;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			power = 110;
		};
		class CamShakeFire
		{
			distance = "((20^0.5)*8)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			power = "(20^0.25)";
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 1;
		};
	};
	class CUP_M_Javelin_AT: MissileBase
	{
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		author = "Community Upgrade Project";
		dlc = "CommunityUpgradeProject";
		model = "\CUP\Weapons\CUP_Weapons_Javelin\CUP_javelin_rocket.p3d";
		hit = 110;
		indirectHit = 20;
		indirectHitRange = 2;
		warheadName = "TandemHEAT";
		submunitionAmmo = "CUP_P_Javelin_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		maneuvrability = 32;
		simulationStep = 0.001;
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_1", 5.62341, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_2", 5.62341, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		irLock = 1;
		airLock = 0;
		laserLock = 1;
		cost = 10000;
		timeToLive = 60;
		sideAirFriction = 0.35;
		trackOversteer = 1.5;
		trackLead = 1;
		maxSpeed = 430;
		maxControlRange = 4750;
		initTime = 0.3;
		thrustTime = 4.2;
		thrust = 75;
		fuseDistance = 30;
		effectsMissile = "missile2";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 4;
		weaponLockSystem = "2 + 16";
		manualControl = 0;
		afMax = 200;
		aiAmmoUsageFlags = "128 + 512";
		airFriction = 0.2;
		allowAgainstInfantry = 0;
		cmImmunity = 0.9;
		deflecting = 0;
		missileLockCone = 4.5;
		missileKeepLockedCone = 160;
		missileLockMaxDistance = 4750;
		missileLockMinDistance = 50;
		missileLockMaxSpeed = 35;
		flightProfiles[] = {"Direct", "TopDown"};
		class Direct
		{
		};
		class TopDown
		{
			ascendHeight = 150;
			descendDistance = 180;
			minDistance = 180;
			ascendAngle = 30;
		};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 2000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 2000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxFogSeeThrough = 0.995;
						angleRangeHorizontal = 30;
						angleRangeVertical = 30;
						maxTrackableSpeed = 350;
					};
				};
			};
		};
		class ace_missileguidance
		{
			enabled = 1;
			minDeflection = 5e-005;
			maxDeflection = 0.025;
			incDeflection = 5e-005;
			canVanillaLock = 0;
			defaultSeekerType = "Optic";
			seekerTypes[] = {"Optic"};
			defaultSeekerLockMode = "LOBL";
			seekerLockModes[] = {"LOBL"};
			seekerAngle = 180;
			seekerAccuracy = 1;
			seekerMinRange = 0;
			seekerMaxRange = 2500;
			seekLastTargetPos = 1;
			defaultAttackProfile = "JAV_TOP";
			attackProfiles[] = {"JAV_TOP", "JAV_DIR"};
			useModeForAttackProfile = 1;
		};
		class CamShakeExplode
		{
			power = "(55 * 0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((4 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(60^0.25)";
			duration = "((round (60^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((60^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 3;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_R_M136_AT: RocketBase
	{
		SoundSetExplosion[] = {"RocketsLight_Exp_SoundSet", "RocketsLight_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		author = "Community Upgrade Project";
		dlc = "CommunityUpgradeProject";
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_1", 5.62341, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_2", 5.62341, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		model = "\CUP\Weapons\CUP_Weapons_M136\CUP_AT4_rocket.p3d";
		hit = 90;
		indirectHit = 10;
		indirectHitRange = 2;
		warheadName = "HE";
		submunitionAmmo = "CUP_P_M136_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		cost = 200;
		initTime = 0.001;
		thrust = 0;
		thrustTime = 0;
		maxSpeed = 320;
		sideAirFriction = 0.01;
		airfriction = 0;
		timeToLive = 6;
		fuseDistance = 5;
		visibleFire = 24;
		audibleFire = 16;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissile = "missile2";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 32;
		airLock = 0;
		irLock = 0;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		initSpeed = 320;
		class CamShakeExplode
		{
			power = "(55 * 0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_M_47_AT_EP1: MissileBase
	{
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		author = "Community Upgrade Project";
		dlc = "CommunityUpgradeProject";
		model = "\CUP\Weapons\CUP_Weapons_M47\CUP_TOW";
		hit = 110;
		indirectHit = 18;
		indirectHitRange = 2.4;
		warheadName = "HE";
		submunitionAmmo = "CUP_P_M47_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		cost = 1000;
		airFriction = 0.084;
		simulationStep = 0.001;
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_1", 5.62341, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_2", 5.62341, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		trackOversteer = 0.95;
		trackLead = 0.9;
		timeToLive = 20;
		maneuvrability = 5;
		sideAirFriction = 0.1;
		maxSpeed = 100;
		thrustTime = 1.5;
		thrust = 62.75;
		maxControlRange = 1500;
		irLock = 2;
		airLock = 0;
		laserLock = 1;
		lockType = 1;
		manualControl = 1;
		initTime = 0.151;
		initSpeed = 200;
		fuseDistance = 5;
		effectsMissile = "missile2";
		soundFly[] = {"CUP\Weapons\CUP_Weapons_Ammunition\data\sound\dragon_flyby_1", 6, 5, 500};
		whistleDist = 32;
		class CamShakeExplode
		{
			power = "(55 * 0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((4 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(60^0.25)";
			duration = "((round (60^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((60^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 3;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_R_MEEWS_HEDP: RocketBase
	{
		SoundSetExplosion[] = {"RocketsMedium_Exp_SoundSet", "RocketsMedium_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		author = "Community Upgrade Project";
		dlc = "CommunityUpgradeProject";
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_1", 5.62341, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_2", 5.62341, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		model = "\CUP\Weapons\CUP_Weapons_MAAWS\CUP_projectile_maaws.p3d";
		hit = 200;
		indirectHit = 40;
		indirectHitRange = 10;
		warheadName = "HE";
		cost = 200;
		initTime = 0.2;
		thrust = 280;
		thrustTime = 0.1;
		maxSpeed = 350;
		maneuvrability = 0;
		sideAirFriction = 0;
		timeToLive = 25;
		fuseDistance = 15;
		visibleFire = 24;
		audibleFire = 16;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissile = "missile2";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 32;
		airLock = 0;
		airFriction = 0.05;
		irLock = 0;
		allowAgainstInfantry = 1;
		initSpeed = 350;
		submunitionAmmo = "CUP_P_MEEWS_HEDP";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		class CamShakeExplode
		{
			power = "(55 * 0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_R_MEEWS_HEAT: CUP_R_MEEWS_HEDP
	{
		author = "Community Upgrade Project";
		dlc = "CommunityUpgradeProject";
		hit = 150;
		indirectHit = 14;
		indirectHitRange = 2;
		warheadName = "HE";
		submunitionAmmo = "CUP_P_MEEWS_HEAT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		cost = 500;
		initSpeed = 240;
		allowAgainstInfantry = 0;
		aiAmmoUsageFlags = "128 + 512";
	};
	class CUP_M_NLAW_AT: MissileBase
	{
		aiAmmoUsageFlags = "128 + 512";
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		author = "Community Upgrade Project";
		dlc = "CommunityUpgradeProject";
		model = "\A3\weapons_f\launchers\nlaw\nlaw_rocket";
		hit = 130;
		indirectHit = 25;
		indirectHitRange = 2.4;
		proximityExplosionDistance = 5;
		explosive = 0.5;
		warheadName = "HE";
		submunitionAmmo = "CUP_P_NLAW_AT";
		submunitionDirectionType = "SubmunitionTargetDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.5};
		triggerOnImpact = 1;
		triggerDistance = 2.5;
		deleteParentWhenTriggered = 0;
		maneuvrability = 2;
		simulationStep = 0.001;
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_1", 5.62341, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_2", 5.62341, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "";
		weaponLockSystem = "1 + 16";
		irLock = 1;
		airLock = 1;
		cost = 10000;
		timeToLive = 5;
		airFriction = 0.09;
		sideAirFriction = 0.5;
		trackOversteer = 0.8;
		trackLead = 1;
		maxControlRange = 800;
		maxSpeed = 200;
		initTime = 0.2;
		thrustTime = 2;
		thrust = 200;
		fuseDistance = 20;
		effectsMissile = "missile3";
		soundFly[] = {"CUP\Weapons\CUP_Weapons_Ammunition\data\sound\atgm_flyby_1", 6, 10, 500};
		whistleDist = 16;
		manualControl = 0;
		allowAgainstInfantry = 0;
		flightProfiles[] = {"Direct", "Overfly"};
		class Direct
		{
		};
		class Overfly: Direct
		{
			overflyElevation = 2.5;
		};
		missileLockCone = 5;
		missileKeepLockedCone = 300;
		missileLockMaxDistance = 800;
		missileLockMinDistance = 20;
		missileLockMaxSpeed = 35;
		cmImmunity = 0.2;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 800;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 800;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 10;
						angleRangeVertical = 10;
						maxTrackableSpeed = 35;
						nightRangeCoef = 0.8;
						maxTrackableATL = 20;
					};
				};
			};
		};
		class ace_missileguidance
		{
			enabled = 1;
			minDeflection = 0.0005;
			maxDeflection = 0.01;
			incDeflection = 0.0005;
			canVanillaLock = 0;
			defaultSeekerType = "ace_nlaw_seeker";
			seekerTypes[] = {"ace_nlaw_seeker"};
			defaultSeekerLockMode = "LOBL";
			seekerLockModes[] = {"LOBL"};
			seekLastTargetPos = 0;
			seekerAngle = 45;
			seekerAccuracy = 1;
			seekerMinRange = 0;
			seekerMaxRange = 10;
			defaultAttackProfile = "ace_nlaw_directAttack";
			attackProfiles[] = {"ace_nlaw_directAttack", "ace_nlaw_overflyTopAttack"};
			useModeForAttackProfile = 1;
			showHintOnCycle = 1;
			onFired = "ace_nlaw_fnc_onFired";
		};
		class CamShakeExplode
		{
			power = "(55 * 0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((4 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(60^0.25)";
			duration = "((round (60^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((60^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 3;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_R_RPG18_AT: RocketBase
	{
		SoundSetExplosion[] = {"RocketsLight_Exp_SoundSet", "RocketsLight_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		dlc = "CommunityUpgradeProject";
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\PG7VM\CUP_PG7VM_fly.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\PG7VM\CUP_PG7VM.p3d";
		hit = 90;
		indirectHit = 10;
		indirectHitRange = 2;
		warheadName = "HEAT";
		submunitionAmmo = "CUP_P_RPG18_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		cost = 200;
		timeToLive = 6;
		initTime = 0;
		thrust = 10;
		thrustTime = 0.15;
		maxSpeed = 115;
		airFriction = 0.7;
		sideAirFriction = 0.01;
		simulationStep = 0.01;
		fuseDistance = 5;
		visibleFire = 24;
		audibleFire = 16;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissile = "missile2";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 32;
		class CamShakeExplode
		{
			power = "(55 * 0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_R_SMAW_Spotting: RocketBase
	{
		author = "Community Upgrade Project";
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		warheadName = "AP";
		audiblefire = 3;
		airfriction = 0.075;
		airlock = 0;
		allowagainstinfantry = 0;
		caliber = 0.01;
		cost = 200;
		CraterEffects = "ATMissileCrater";
		effectsmissile = "EmptyEffect";
		effectsMissileInit = "CUP_SMAW_cartridgeEffect";
		explosionEffects = "EmptyEffect";
		explosionSoundEffect = "EmptyEffect";
		soundHit[] = {"\a3\sounds_f\weapons\hits\plastic_4.wss", "db-3", 1, 20};
		explosive = 0;
		muzzleEffect = "";
		fusedistance = 15;
		inittime = 0.02;
		irlock = 0;
		maneuvrability = 0;
		maxSpeed = 220;
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\SMAW\CUP_smaw_spotting_inflight.p3d";
		sideAirFriction = 0;
		simulationstep = 0.02;
		thrust = 1;
		thrusttime = 1;
		timetolive = 25;
		tracerColor[] = {0.8, 0.8, 0.1, 0.04};
		tracerColorR[] = {0.8, 0.8, 0.1, 0.04};
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		visiblefire = 28;
		whistledist = 0;
		whistleOnFire = 0;
		cartridge = "FxCartridge";
		class CamShakeExplode
		{
			power = 2.82843;
			duration = 0.6;
			frequency = 20;
			distance = 8.48528;
		};
		class CamShakeHit
		{
			power = 5;
			duration = 0.2;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(5^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakePlayerFire
		{
			power = 0.1;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};
		class HitEffects
		{
			Hit_Foliage = "ImpactLeaves";
			Hit_Glass = "ImpactGlass";
			Hit_Glass_Thin = "ImpactGlassThin";
			Hit_Wood = "ImpactWood";
			Hit_Metal = "ImpactMetal";
			Hit_Plaster = "ImpactPlaster";
			Hit_Rubber = "ImpactRubber";
			Hit_Concrete = "ImpactConcrete";
			Hit_Blood = "ImpactBlood";
		};
	};
	class CUP_R_SMAW_HEDP_N: RocketBase
	{
		SoundSetExplosion[] = {"RocketsMedium_Exp_SoundSet", "RocketsMedium_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		audiblefire = 16;
		airfriction = 0;
		airlock = 0;
		allowagainstinfantry = 0;
		cost = 200;
		cratereffects = "ATMissileCrater";
		effectsmissile = "EmptyEffect";
		effectsmissileinit = "";
		explosioneffects = "ATMissileExplosion";
		fusedistance = 15;
		hit = 250;
		indirecthit = 40;
		indirecthitrange = 10;
		warheadName = "HE";
		irlock = 0;
		maneuvrability = 0;
		maxSpeed = 220;
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\SMAW\CUP_smaw_rocket_inflight.p3d";
		sideAirFriction = 0;
		simulationstep = 0.02;
		thrust = 0;
		thrusttime = 0.1;
		timetolive = 6;
		visiblefire = 28;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 32;
		class CamShakeExplode
		{
			distance = "((5 + 55^0.5)*8)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			power = "(55 * 0.2)";
		};
		class CamShakeHit
		{
			distance = 1;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			power = 110;
		};
		class CamShakeFire
		{
			distance = "((20^0.5)*8)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			power = "(20^0.25)";
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 1;
		};
	};
	class CUP_R_SMAW_HEAA_N: CUP_R_SMAW_HEDP_N
	{
		cost = 500;
		cratereffects = "ATRocketCrater";
		explosioneffects = "ATRocketExplosion";
		hit = 560;
		indirectHit = 25;
		indirectHitRange = 3;
		warheadName = "HEAT";
	};
	class CUP_R_M72A6_AT: RocketBase
	{
		SoundSetExplosion[] = {"RocketsLight_Exp_SoundSet", "RocketsLight_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		dlc = "CommunityUpgradeProject";
		hit = 90;
		indirectHit = 10;
		indirectHitRange = 2;
		warheadName = "HE";
		submunitionAmmo = "CUP_P_M72A6_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		explosive = 0.8;
		cost = 200;
		airFriction = 0.085;
		sideAirFriction = 0.085;
		maxSpeed = 150;
		initTime = 0.1;
		thrust = 0;
		thrusttime = 0.1;
		fuseDistance = 10;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissileInit = "";
		effectsMissile = "EmptyEffect";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 5;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 32;
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\PG7VM\CUP_PG7VM_fly.p3d";
		class CamShakeExplode
		{
			power = "(55 * 0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_R_MLRS_DPICM: R_230mm_HE
	{
		submunitionAmmo = "CUP_R_MLRS_DPICM_fly";
		triggerDistance = 300;
		submunitionConeType[] = {"randomcenter", 400};
		submunitionConeAngle = 20;
		model = "\A3\Weapons_F\Ammo\Missile_AA_02_fly_F.p3d";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 100;
	};
	class CUP_R_MLRS_DPICM_fly: ShellBase
	{
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		model = "\A3\Weapons_F\explosives\mine_AP_bouncing_i.p3d";
		hit = 550;
		indirectHit = 50;
		indirectHitRange = 4;
		warheadName = "HE";
		timeToLive = 30;
		initTime = 0.025;
		effectFly = "emptyEffect";
		explosionSoundEffect = "DefaultExplosion";
		CraterWaterEffects = "ImpactEffectsWaterExplosion";
		CraterEffects = "GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 100;
		class HitEffects
		{
			hitMetal = "ImpactMetalSabotBig";
			hitMetalPlate = "ImpactMetalSabotBig";
			hitBuilding = "ImpactMetalSabotBig";
			hitConcrete = "ImpactMetalSabotBig";
			hitGroundSoft = "ImpactMetalSabotBig";
			hitGroundHard = "ImpactMetalSabotBig";
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactMetalSabotBig";
			hitPlastic = "ImpactMetalSabotBig";
			hitRubber = "ImpactMetalSabotBig";
			hitMan = "ImpactMetalSabotBig";
			hitWater = "ImpactEffectsWater";
			default_mat = "ImpactMetalSabotBig";
		};
	};
	class CUP_R_MLRS_HE: R_230mm_fly
	{
		model = "\A3\Weapons_F\Ammo\Missile_AA_02_fly_F.p3d";
		hit = 1200;
		indirectHit = 800;
		indirectHitRange = 30;
		warheadName = "HE";
		effectFly = "Missile0";
		CraterEffects = "BombCrater";
		explosionEffects = "BombExplosion";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 100;
	};
	class CUP_R_GRAD_HE: R_230mm_HE
	{
		model = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
		hit = 0;
		indirectHit = 600;
		indirectHitRange = 20;
		warheadName = "HE";
		effectFly = "Missile0";
		CraterEffects = "BombCrater";
		explosionEffects = "BombExplosion";
		submunitionAmmo = "CUP_R_GRAD_FLY";
		ace_frag_enabled = 0;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 100;
		class CamShakeExplode
		{
			power = "(122*0.2)";
			duration = "((round (122^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((30 + 122^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 122;
			duration = "((round (122^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(122^0.25)";
			duration = "((round (122^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((122^0.5)*8)";
		};
	};
	class CUP_R_GRAD_FLY: R_230mm_fly
	{
		model = "\A3\Weapons_F\Ammo\Rocket_02_F";
		hit = 800;
		indirectHit = 600;
		indirectHitRange = 20;
		warheadName = "HE";
		effectFly = "Missile0";
		CraterEffects = "BombCrater";
		explosionEffects = "BombExplosion";
		ace_frag_enabled = 0;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 100;
		class CamShakeExplode
		{
			power = "(122*0.2)";
			duration = "((round (122^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((30 + 122^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 122;
			duration = "((round (122^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(122^0.25)";
			duration = "((round (122^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((122^0.5)*8)";
		};
	};
	class CUP_Sh_PG9_AT: BulletBase
	{
		SoundSetExplosion[] = {"RocketsMedium_Exp_SoundSet", "RocketsMedium_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		manueuvrability = 30;
		airFriction = -0.00045;
		effectsmissileinit = "";
		hit = 75;
		indirectHit = 16;
		indirectHitRange = 2;
		warheadName = "HEAT";
		submunitionAmmo = "CUP_P_PG9_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		typicalSpeed = 700;
		maxSpeed = 720;
		simulationstep = 0.05;
		thrustTime = 0.5;
		thrust = 500;
		cost = 1000;
		timeToLive = 15;
		whistleOnFire = 1;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 32;
		tracerScale = 1;
		tracerStartTime = 0.1;
		tracerEndTime = 15;
		explosive = 0.9;
		scope = 1;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		deflecting = 0;
		allowAgainstInfantry = 1;
	};
	class CUP_Sh_OG9_HE: CUP_Sh_PG9_AT
	{
		thrustTime = 0.5;
		hit = 150;
		indirectHit = 44;
		indirectHitRange = 9;
		warheadName = "HE";
		submunitionAmmo = "";
		submunitionDirectionType = "";
		submunitionInitSpeed = 0;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, 0};
		triggerOnImpact = 0;
		typicalSpeed = 700;
		explosive = 0.8;
		cost = 300;
		airFriction = -0.00045;
		timeToLive = 15;
		scope = 1;
	};
	class CUP_Sh_PG15V: ShellBase
	{
		SoundSetExplosion[] = {"RocketsMedium_Exp_SoundSet", "RocketsMedium_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		airFriction = -0.00045;
		hit = 75;
		indirectHit = 16;
		indirectHitRange = 2;
		warheadName = "HEAT";
		submunitionAmmo = "CUP_P_PG15V_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		typicalSpeed = 700;
		cost = 1000;
		timeToLive = 15;
		whistleOnFire = 1;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 32;
		tracerScale = 1;
		tracerStartTime = 0.1;
		tracerEndTime = 15;
		explosive = 0.9;
		scope = 1;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
		deflecting = 0;
		allowAgainstInfantry = 1;
	};
	class CUP_Sh_OG15V: CUP_Sh_PG15V
	{
		thrustTime = 0.5;
		hit = 150;
		indirectHit = 35;
		indirectHitRange = 7;
		warheadName = "HE";
		submunitionAmmo = "";
		submunitionDirectionType = "";
		submunitionInitSpeed = 0;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, 0};
		triggerOnImpact = 0;
		typicalSpeed = 700;
		explosive = 0.8;
		cost = 300;
		airFriction = -0.00045;
		timeToLive = 15;
		scope = 1;
	};
	class CUP_Sh_3UBK9_HEAT: ShellBase
	{
		SoundSetExplosion[] = {"Shell105mm130mm_Exp_SoundSet", "Shell105mm130mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		airFriction = -0.00045;
		hit = 100;
		indirectHit = 30;
		indirectHitRange = 2.5;
		warheadName = "HEAT";
		submunitionAmmo = "CUP_P_3UBK9_HEAT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		typicalSpeed = 1075;
		simulationstep = 0.05;
		thrustTime = 0.5;
		cost = 500;
		timeToLive = 15;
		whistleOnFire = 1;
		soundFly[] = {"CUP\Weapons\CUP_Weapons_Ammunition\data\sound\shorter.wss", 2, 1, 500};
		whistleDist = 32;
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 10;
		explosive = 0.9;
		scope = 1;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
		allowAgainstInfantry = 1;
	};
	class CUP_Sh_UBK367_HEAT: CUP_Sh_3UBK9_HEAT
	{
		hit = 100;
		typicalSpeed = 792;
		indirectHit = 20;
		indirectHitRange = 2;
		warheadName = "HEAT";
		submunitionAmmo = "CUP_P_UBK367_HEAT";
	};
	class CUP_Sh_3UOF10_HEFRAG: CUP_Sh_3UBK9_HEAT
	{
		hit = 300;
		indirectHit = 60;
		indirectHitRange = 12.5;
		warheadName = "HE";
		submunitionAmmo = "";
		submunitionDirectionType = "";
		submunitionInitSpeed = 0;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, 0};
		triggerOnImpact = 0;
		typicalSpeed = 900;
		scope = 1;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
		explosionEffects = "HEShellExplosion";
		CraterEffects = "GrenadeCrater";
	};
	class CUP_Sh_UO367_HEFRAG: CUP_Sh_3UOF10_HEFRAG
	{
		hit = 250;
		indirectHit = 50;
		indirectHitRange = 12;
		warheadName = "HE";
		typicalSpeed = 792;
	};
	class CUP_Sh_120_HE: ShellBase
	{
		SoundSetExplosion[] = {"Shell105mm130mm_Exp_SoundSet", "Shell105mm130mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		hit = 650;
		indirectHit = 50;
		indirectHitRange = 12;
		warheadName = "HE";
		typicalSpeed = 1300;
		explosive = 0.8;
		cost = 300;
		airFriction = -0.00045;
		caliber = 10;
		timeToLive = 15;
		soundFly[] = {"CUP\Weapons\CUP_Weapons_Ammunition\data\sound\shorter.wss", 2, 1, 500};
		whistleDist = 32;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
		allowAgainstInfantry = 1;
		class CamShakeFire
		{
			power = 30;
			duration = 0.5;
			frequency = 20;
			distance = 30;
		};
		class CamShakePlayerFire
		{
			power = 0.06;
			duration = 0.5;
			frequency = 20;
		};
		class CamShakeHit
		{
			power = 100;
			duration = 1;
			frequency = 20;
		};
	};
	class CUP_Sh_120_SABOT: ShellBase
	{
		SoundSetExplosion[] = {"Shell105mm130mm_Exp_SoundSet", "Shell105mm130mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		hit = 1000;
		indirectHit = 10;
		indirectHitRange = 1;
		warheadName = "AP";
		typicalSpeed = 1900;
		cost = 1000;
		deflecting = 15;
		airFriction = -4e-005;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		caliber = 33.33;
		timeToLive = 15;
		whistleOnFire = 1;
		soundFly[] = {"CUP\Weapons\CUP_Weapons_Ammunition\data\sound\shorter.wss", 2, 1, 500};
		whistleDist = 32;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
		class CamShakeFire
		{
			power = 30;
			duration = 0.5;
			frequency = 20;
			distance = 30;
		};
		class CamShakePlayerFire
		{
			power = 0.06;
			duration = 0.5;
			frequency = 20;
		};
		class CamShakeHit
		{
			power = 100;
			duration = 1;
			frequency = 20;
		};
	};
	class CUP_Sh_120mm_HESH_Tracer_Red: Sh_120mm_HE_Tracer_Red
	{
		hit = 100;
		indirectHit = 55;
		warheadName = "HE";
		typicalSpeed = 670;
		submunitionAmmo = "CUP_P_120mm_HESH";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionConeType[] = {"poissondisccenter", 10};
		submunitionConeAngle = 20;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		soundFly[] = {"CUP\Weapons\CUP_Weapons_Ammunition\data\sound\shorter.wss", 2, 1, 500};
		whistleDist = 32;
	};
	class CUP_Sh_122_HE: Sh_155mm_AMOS
	{
		cost = 100;
		artilleryLock = 1;
		hit = 300;
		indirectHit = 105;
		indirectHitRange = 28;
		warheadName = "HE";
		soundFly[] = {"CUP\Weapons\CUP_Weapons_Ammunition\data\sound\shorter.wss", 2, 1, 500};
		whistleDist = 32;
	};
	class CUP_Sh_122_WP: CUP_Sh_122_HE
	{
		hit = 60;
		indirectHit = 50;
		indirectHitRange = 30;
		warheadName = "HE";
		explosive = 0.8;
		ExplosionEffects = "WPExplosion";
		CraterEffects = "ExploAmmoCrater";
	};
	class CUP_Sh_122_LASER: Sh_155mm_AMOS_LG
	{
	};
	class CUP_Sh_122_ILLUM: Flare_82mm_AMOS_White
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		ExplosionEffects = "";
		soundHit[] = {"", 0, 1};
		CraterEffects = "";
		whistleDist = 0;
	};
	class CUP_Sh_122_SMOKE: Smoke_120mm_AMOS_White
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0.1;
		ExplosionEffects = "";
		soundHit[] = {"", 0, 1};
		CraterEffects = "";
		whistleDist = 0;
	};
	class CUP_Sh_122_AT: Sh_120mm_APFSDS
	{
		allowAgainstInfantry = 1;
		airfriction = "-3.96e-005";
		hit = 350;
		warheadName = "AP";
		caliber = "(530/((15*740)/1000))";
		typicalspeed = 740;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
		soundFly[] = {"CUP\Weapons\CUP_Weapons_Ammunition\data\sound\shorter.wss", 2, 1, 500};
		whistleDist = 32;
	};
	class CUP_Sh_105_HE: Sh_155mm_AMOS
	{
		artilleryLock = 1;
		hit = 260;
		indirectHit = 85;
		indirectHitRange = 12;
		warheadName = "HE";
	};
	class CUP_Sh_105_WP: CUP_Sh_105_HE
	{
		hit = 60;
		indirectHit = 50;
		indirectHitRange = 30;
		explosive = 0.8;
		ExplosionEffects = "WPExplosion";
		CraterEffects = "ExploAmmoCrater";
	};
	class CUP_Sh_105_LASER: Sh_155mm_AMOS_LG
	{
	};
	class CUP_Sh_105_ILLUM: Flare_82mm_AMOS_White
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		ExplosionEffects = "";
		soundHit[] = {"", 0, 1};
		CraterEffects = "";
		whistleDist = 0;
	};
	class CUP_Sh_105_SMOKE: Smoke_120mm_AMOS_White
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0.1;
		ExplosionEffects = "";
		soundHit[] = {"", 0, 1};
		CraterEffects = "";
		whistleDist = 0;
	};
	class CUP_Sh_127_HE: CUP_Sh_122_HE
	{
		airLock = 0;
		artilleryLock = 1;
		hit = 320;
		indirectHit = 115;
		indirectHitRange = 25;
		warheadName = "HE";
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 30;
	};
	class CUP_Sh_127_ILLUM: CUP_Sh_122_ILLUM
	{
		hit = 10;
	};
	class CUP_B_20mm_AP_Tracer_Red: BulletBase
	{
		SoundSetExplosion[] = {"Shell19mm25mm_Exp_SoundSet"};
		hit = 40;
		indirectHit = 10;
		indirectHitRange = 2;
		warheadName = "AP";
		visibleFire = 28;
		audibleFire = 28;
		visibleFireTime = 3;
		cost = 25;
		airLock = 1;
		explosive = 0.6;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		model = "\a3\weapons_f\data\bullettracer\tracer_red";
		tracerScale = 1.8;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction = -0.00077;
		muzzleEffect = "";
		caliber = 2.33;
	};
	class CUP_B_20mm_AP_Tracer_Green: CUP_B_20mm_AP_Tracer_Red
	{
		model = "\a3\weapons_f\data\bullettracer\tracer_green";
	};
	class CUP_B_20mm_AP_Tracer_Yellow: CUP_B_20mm_AP_Tracer_Red
	{
		model = "\a3\weapons_f\data\bullettracer\tracer_yellow";
	};
	class CUP_B_20mm_APHE_Tracer_Red: BulletBase
	{
		SoundSetExplosion[] = {"Shell19mm25mm_Exp_SoundSet"};
		hit = 47;
		indirectHit = 30;
		indirectHitRange = 1.4;
		warheadName = "AP";
		caliber = 2.33;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 4;
		explosive = 0.6;
		airLock = 1;
		cost = 25;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		model = "\a3\weapons_f\data\bullettracer\tracer_red";
		tracerScale = 1.8;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction = -0.00077;
		muzzleEffect = "";
		whistleDist = 12;
	};
	class CUP_B_20mm_APHE_Tracer_Green: CUP_B_20mm_APHE_Tracer_Red
	{
		model = "\a3\weapons_f\data\bullettracer\tracer_green";
	};
	class CUP_B_20mm_APHE_Tracer_Yellow: CUP_B_20mm_APHE_Tracer_Red
	{
		model = "\a3\weapons_f\data\bullettracer\tracer_yellow";
	};
	class CUP_B_20mm_API_Tracer_Red: BulletBase
	{
		SoundSetExplosion[] = {"Shell19mm25mm_Exp_SoundSet"};
		airLock = 1;
		hit = 60;
		indirectHit = 36;
		indirectHitRange = 1;
		warheadName = "AP";
		caliber = 2.8;
		explosive = 0.6;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 4;
		cost = 40;
		airFriction = -0.00086;
		whistleDist = 12;
		model = "\a3\weapons_f\data\bullettracer\tracer_red";
		tracerScale = 2;
		tracerStartTime = 0.075;
		tracerEndTime = 4;
		muzzleEffect = "";
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
	};
	class CUP_B_20mm_API_Tracer_Green: CUP_B_20mm_API_Tracer_Red
	{
		model = "\a3\weapons_f\data\bullettracer\tracer_green";
	};
	class CUP_B_20mm_API_Tracer_Yellow: CUP_B_20mm_API_Tracer_Red
	{
		model = "\a3\weapons_f\data\bullettracer\tracer_yellow";
	};
	class CUP_B_20mm_AA: BulletBase
	{
		SoundSetExplosion[] = {"Shell19mm25mm_Exp_SoundSet"};
		hit = 57;
		indirectHit = 20;
		indirectHitRange = 0.4;
		warheadName = "HE";
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 4;
		soundHit[] = {"CUP\Weapons\CUP_Weapons_Ammunition\data\sound\AZP85_explosion1", "db25", 1, 1500};
		explosive = 0.6;
		airLock = 1;
		cost = 25;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		model = "\a3\weapons_f\data\bullettracer\tracer_red";
		tracerScale = 1.8;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction = -0.00077;
		muzzleEffect = "";
		caliber = 2.33;
	};
	class CUP_B_23mm_APHE_Tracer_Green: BulletBase
	{
		SoundSetExplosion[] = {"Shell19mm25mm_Exp_SoundSet"};
		hit = 120;
		indirectHit = 80;
		indirectHitRange = 2;
		warheadName = "AP";
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 4;
		soundHit[] = {"CUP\Weapons\CUP_Weapons_Ammunition\23mm_AA\data\sounds\AZP85_explosion1", "db10", 1, 1500};
		explosive = 0.5;
		airLock = 0;
		cost = 150;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		model = "\a3\weapons_f\data\bullettracer\tracer_green";
		tracerScale = 1.85;
		tracerStartTime = 0.05;
		tracerEndTime = 2;
		airFriction = -0.000824;
		muzzleEffect = "";
		caliber = 3;
	};
	class CUP_B_23mm_APHE_Tracer_Yellow: CUP_B_23mm_APHE_Tracer_Green
	{
		model = "\a3\weapons_f\data\bullettracer\tracer_yellow";
	};
	class CUP_B_23mm_APHE_Tracer_Red: CUP_B_23mm_APHE_Tracer_Green
	{
		model = "\a3\weapons_f\data\bullettracer\tracer_red";
	};
	class CUP_B_23mm_AA: BulletBase
	{
		SoundSetExplosion[] = {"Shell19mm25mm_Exp_SoundSet"};
		hit = 84;
		indirectHit = 50;
		indirectHitRange = 1;
		warheadName = "HE";
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 4;
		soundHit[] = {"CUP\Weapons\CUP_Weapons_Ammunition\23mm_AA\data\sounds\AZP85_explosion1", "db10", 1, 1500};
		explosive = 0.6;
		airLock = 1;
		cost = 150;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		model = "\a3\weapons_f\data\bullettracer\tracer_green";
		tracerScale = 1.85;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction = -0.000824;
		muzzleEffect = "";
		caliber = 1.11;
		class CamShakeExplode
		{
			power = "(18*0.2)";
			duration = "((round (18^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((1 + 18^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 18;
			duration = "((round (18^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 10;
			duration = 4;
			frequency = 50;
			distance = 3;
		};
		class CamShakePlayerFire
		{
			power = 10;
			duration = 4;
			frequency = 50;
		};
	};
	class CUP_B_23mm_HE: CUP_B_23mm_AA
	{
		hit = 42;
		indirectHit = 15;
		indirectHitRange = 0.3;
		warheadName = "HE";
		cost = 75;
	};
	class CUP_B_23mm_AP: CUP_B_23mm_AA
	{
		hit = 108;
		indirectHit = 0;
		indirectHitRange = 0;
		warheadName = "AP";
		explosive = 0;
		cost = 75;
		airFriction = -0.000612;
		caliber = 3.33;
	};
	class CUP_B_23mm_APHE_No_Tracer: BulletBase
	{
		SoundSetExplosion[] = {"Shell19mm25mm_Exp_SoundSet"};
		hit = 45;
		indirectHit = 10;
		indirectHitRange = 0.2;
		warheadName = "AP";
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 4;
		soundHit[] = {"CUP\Weapons\CUP_Weapons_Ammunition\23mm_APHE\data\sounds\AZP85_explosion1", "db10", 1, 1500};
		explosive = 0.5;
		airLock = 1;
		cost = 35;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 0;
		tracerStartTime = 0;
		tracerEndTime = 0;
		airFriction = -0.000824;
		muzzleEffect = "";
		caliber = 1.11;
	};
	class CUP_B_23mm_APHE_Green_Tracer: BulletBase
	{
		SoundSetExplosion[] = {"Shell19mm25mm_Exp_SoundSet"};
		hit = 45;
		indirectHit = 10;
		indirectHitRange = 0.2;
		warheadName = "AP";
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 4;
		soundHit[] = {"CUP\Weapons\CUP_Weapons_Ammunition\23mm_APHE\data\sounds\AZP85_explosion1", "db10", 1, 1500};
		explosive = 0.5;
		airLock = 1;
		cost = 35;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		model = "\a3\weapons_f\data\bullettracer\tracer_green";
		tracerScale = 1.85;
		tracerStartTime = 0.05;
		tracerEndTime = 2;
		airFriction = -0.000824;
		muzzleEffect = "";
		caliber = 1.11;
	};
	class CUP_B_23mm_APHE_Yellow_Tracer: CUP_B_23mm_APHE_Green_Tracer
	{
		model = "\a3\weapons_f\data\bullettracer\tracer_yellow";
	};
	class CUP_B_30x113mm_M789_HEDP_Red_Tracer: BulletBase
	{
		SoundSetExplosion[] = {"Shell30mm40mm_Exp_SoundSet", "Shell30mm40mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		FCSMaxLeadSpeed = 30.5556;
		FCSZeroingDelay = 0.5;
		trackLead = 1;
		hit = 90;
		indirectHit = 15;
		indirectHitRange = 4;
		warheadName = "HE";
		visibleFire = 28;
		audibleFire = 28;
		visibleFireTime = 3;
		cost = 25;
		airLock = 1;
		explosive = 0.3;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		model = "\a3\weapons_f\data\bullettracer\tracer_red";
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
		airFriction = -0.00078;
		muzzleEffect = "";
		caliber = 2.5;
	};
	class CUP_B_30x113mm_M789_HEDP_Green_Tracer: CUP_B_30x113mm_M789_HEDP_Red_Tracer
	{
		model = "a3\weapons_f\data\bullettracer\tracer_green";
	};
	class CUP_B_30x113mm_M789_HEDP_Yellow_Tracer: CUP_B_30x113mm_M789_HEDP_Red_Tracer
	{
		model = "a3\weapons_f\data\bullettracer\tracer_yellow";
	};
	class CUP_B_30x113mm_M789_HEDP_White_Tracer: CUP_B_30x113mm_M789_HEDP_Red_Tracer
	{
		model = "a3\weapons_f\data\bullettracer\tracer_white";
	};
	class CUP_B_30mm_HE_Red_Tracer: B_30mm_HE
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class CUP_B_30mm_HE_Green_Tracer: B_30mm_HE
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class CUP_B_30mm_HE_Yellow_Tracer: B_30mm_HE
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class CUP_B_30mm_HE_White_Tracer: B_30mm_HE
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
	};
	class CUP_B_30mm_AP_Red_Tracer: B_30mm_AP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class CUP_B_30mm_AP_Green_Tracer: B_30mm_AP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class CUP_B_30mm_AP_Yellow_Tracer: B_30mm_AP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class CUP_B_30mm_AP_White_Tracer: B_30mm_AP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
	};
	class CUP_G_40mm_HE: G_40mm_HE
	{
		simulation = "shotBullet";
	};
	class CUP_G_30mm_HE: CUP_G_40mm_HE
	{
		hit = 13;
		indirectHit = 10;
		indirectHitRange = 5.5;
		visibleFire = 18;
		audibleFire = 18;
		visibleFireTime = 3;
		explosive = 1;
		cost = 10;
		deflecting = 5;
		airFriction = -0.001064;
		fuseDistance = 15;
		whistleDist = 5.5;
	};
	class CUP_B_30mm_CAS_Red_Tracer: BulletBase
	{
		SoundSetExplosion[] = {"Shell30mm40mm_Exp_SoundSet", "Shell30mm40mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		hit = 90;
		indirectHit = 9;
		indirectHitRange = 4;
		warheadName = "AP";
		explosive = 0.1;
		caliber = 2.5;
		cost = 20;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 2.5;
		tracerStartTime = 0.1;
		tracerEndTime = 4;
		nvgOnly = 0;
		typicalSpeed = 1030;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 4;
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_1", 3.16228, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_2", 3.16228, 1, 1800};
		soundHit3[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_3", 3.16228, 1, 1800};
		soundHit4[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_4", 3.16228, 1, 1800};
		soundHit5[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_5", 3.16228, 1, 1800};
		soundHit6[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_6", 3.16228, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.2, "soundHit2", 0.2, "soundHit3", 0.2, "soundHit4", 0.1, "soundHit5", 0.15, "soundHit6", 0.15};
		explosionSoundEffect = "DefaultExplosion";
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		airFriction = -0.00076;
		muzzleEffect = "";
		class CamShakeExplode
		{
			power = "(25 * 0.2)";
			duration = "((round (25^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((2 + 25^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 25;
			duration = "((round (25^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(25^0.25)";
			duration = "((round (25^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((25^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_B_25mm_CAS_Red_Tracer: CUP_B_30mm_CAS_Red_Tracer
	{
		SoundSetExplosion[] = {"Shell19mm25mm_Exp_SoundSet"};
		hit = 80;
		indirectHit = 8;
		indirectHitRange = 3;
		class CamShakeExplode
		{
			power = "(25 * 0.2)";
			duration = "((round (25^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((2 + 25^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 25;
			duration = "((round (25^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(25^0.25)";
			duration = "((round (25^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((25^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_B_25mm_HE_White_Tracer: BulletBase
	{
		SoundSetExplosion[] = {"Shell19mm25mm_Exp_SoundSet"};
		hit = 30;
		indirectHit = 8;
		indirectHitRange = 3;
		warheadName = "HE";
		explosive = 0.8;
		caliber = 1.4;
		cost = 20;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 2.5;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		nvgOnly = 0;
		typicalSpeed = 1030;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 4;
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_1", 3.16228, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_2", 3.16228, 1, 1800};
		soundHit3[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_3", 3.16228, 1, 1800};
		soundHit4[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_4", 3.16228, 1, 1800};
		soundHit5[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_5", 3.16228, 1, 1800};
		soundHit6[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_6", 3.16228, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.2, "soundHit2", 0.2, "soundHit3", 0.2, "soundHit4", 0.1, "soundHit5", 0.15, "soundHit6", 0.15};
		explosionSoundEffect = "DefaultExplosion";
		airLock = 1;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		airFriction = -0.00076;
		muzzleEffect = "";
		class CamShakeExplode
		{
			power = "(25 * 0.2)";
			duration = "((round (25^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((2 + 25^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 25;
			duration = "((round (25^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(25^0.25)";
			duration = "((round (25^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((25^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_B_25mm_HE_Red_Tracer: CUP_B_25mm_HE_White_Tracer
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class CUP_B_25mm_HE_Green_Tracer: CUP_B_25mm_HE_White_Tracer
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class CUP_B_25mm_HE_Yellow_Tracer: CUP_B_25mm_HE_White_Tracer
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class CUP_B_25mm_APFSDS_White_Tracer: BulletBase
	{
		SoundSetExplosion[] = {"Shell19mm25mm_Exp_SoundSet"};
		hit = 120;
		indirectHit = 8;
		indirectHitRange = 0.2;
		warheadName = "AP";
		caliber = 6;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 3;
		cost = 50;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 2.5;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction = -0.0001;
		muzzleEffect = "";
		deflecting = 10;
		typicalSpeed = 1320;
		irLock = 1;
		class HitEffects
		{
			hitMetal = "ImpactMetalSabotSmall";
			hitMetalPlate = "ImpactMetalSabotSmall";
			hitBuilding = "ImpactConcreteSabotSmall";
			hitConcrete = "ImpactConcreteSabotSmall";
			hitGroundSoft = "ImpactEffectsGroundSabot";
			hitGroundHard = "ImpactEffectsGroundSabot";
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitMan = "ImpactEffectsBlood";
			hitWater = "ImpactEffectsWater";
			default_mat = "ImpactEffectsGroundSabot";
		};
		class CamShakeExplode
		{
			power = "(45^0.5)";
			duration = "((round (45^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((45^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 45;
			duration = "((round (45^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(30^0.25)";
			duration = "((round (30^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((30^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_B_25mm_APFSDS_Red_Tracer: CUP_B_25mm_APFSDS_White_Tracer
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class CUP_B_25mm_APFSDS_Green_Tracer: CUP_B_25mm_APFSDS_White_Tracer
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class CUP_B_25mm_APFSDS_Yellow_Tracer: CUP_B_25mm_APFSDS_White_Tracer
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class CUP_B_127x108_AP_Green_Tracer: B_127x108_Ball
	{
		hit = 35;
		indirectHit = 1.5;
		indirectHitRange = 1.5;
		warheadName = "AP";
		fuseDistance = 12;
		deflecting = 30;
		caliber = 3.2;
		soundSetSonicCrack[] = {"BulletSonicCrack_Gatling_SoundSet"};
		tracerEndTime = 4;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class CUP_Bo_GBU12_LGB: Bo_GBU12_LGB
	{
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\GBU_12\CUP_GBU_12_fly.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\GBU_12\CUP_GBU_12.p3d";
	};
	class CUP_Bo_KAB250_LGB: Bo_GBU12_LGB
	{
		model = "\a3\weapons_f_epc\Ammo\Bomb_03_F.p3d";
		proxyShape = "\a3\weapons_f_epc\Ammo\Bomb_03_F.p3d";
	};
	class CUP_Triple_Bomb_Rack_Dummy: Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\Mk_82_Rack\CUP_mk82_rack.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\Mk_82_Rack\CUP_mk82_rack.p3d";
	};
	class CUP_Dual_Bomb_Rack_Dummy: Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\BRU-55\CUP_bru-55.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\BRU-55\CUP_bru-55.p3d";
	};
	class CUP_AGM_Rack_Dummy: Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\AGM114HellfirePod\CUP_AGM114HellfirePod.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\AGM114HellfirePod\CUP_AGM114HellfirePod.p3d";
	};
	class CUP_AGM_Dual_Rack_Dummy: Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\AGM114HellfirePod\CUP_AGM114HellfirePod2.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\AGM114HellfirePod\CUP_AGM114HellfirePod2.p3d";
	};
	class CUP_Hydra_Pod_7_Dummy: Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\Hydra_70\CUP_70mmRocketPad7_nomount.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\Hydra_70\CUP_70mmRocketPad7_nomount.p3d";
	};
	class CUP_Hydra_Pod_19_Dummy: Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\Hydra_70\CUP_70mmRocketPad19_nomount.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\Hydra_70\CUP_70mmRocketPad19_nomount.p3d";
	};
	class CUP_Hydra_Pod_7_Dummy_Full: Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\Hydra_70\CUP_70mmRocketPad7_full.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\Hydra_70\CUP_70mmRocketPad7_full.p3d";
	};
	class CUP_Hydra_Pod_19_Dummy_Full: Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\Hydra_70\CUP_70mmRocketPad19_full.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\Hydra_70\CUP_70mmRocketPad19_full.p3d";
	};
	class CUP_Hydra_Pod_7_Dummy_Mount: Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\Hydra_70\CUP_70mmRocketPad7.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\Hydra_70\CUP_70mmRocketPad7.p3d";
	};
	class CUP_Hydra_Pod_19_Dummy_Mount: Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\Hydra_70\CUP_70mmRocketPad19.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\Hydra_70\CUP_70mmRocketPad19.p3d";
	};
	class CUP_CRV7_Pod_12_Dummy: Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\Hydra_70\CUP_CRV7x12pod.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\Hydra_70\CUP_CRV7x12pod.p3d";
	};
	class CUP_CRV7_Pod_19_Dummy: Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\Hydra_70\CUP_CRV7x19pod.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\Hydra_70\CUP_CRV7x19pod.p3d";
	};
	class CUP_AT2_Rack_Dummy: Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\AT2\CUP_AT2_Rack.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\AT2\CUP_AT2_Rack.p3d";
	};
	class CUP_AT6_Tube_Dummy: Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\AT6\CUP_AT6_Tube.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\AT6\CUP_AT6_Tube.p3d";
	};
	class CUP_AT6_Rackcomplete_Dummy: Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\AT6\CUP_AT6_Rackcomplete.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\AT6\CUP_AT6_Rackcomplete.p3d";
	};
	class CUP_Ataka_Tube_Dummy: Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\AT9\CUP_AT9_Tube.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\AT9\CUP_AT9_Tube.p3d";
	};
	class CUP_Ataka_Rackcomplete_Dummy: Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\AT9\CUP_AT9_Rackcomplete.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\AT9\CUP_AT9_Rackcomplete.p3d";
	};
	class CUP_S5_Pod_Small_Dummy: Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\UB16\CUP_UB16.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\UB16\CUP_UB16.p3d";
	};
	class CUP_S5_Pod_Big_Dummy: Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\UB32\CUP_UB32.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\UB32\CUP_UB32.p3d";
	};
	class CUP_S8_Pod_Heli_Dummy: Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\S8\CUP_S8_Launcher.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\S8\CUP_S8_Launcher.p3d";
	};
	class CUP_S8_Pod_Air_Dummy: Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\S8\CUP_S8_Launcher_Aircraft.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\S8\CUP_S8_Launcher_Aircraft.p3d";
	};
	class CUP_Igla_Rack_Twin_Dummy: Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\Igla_pod\CUP_igla_rack_twin.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\Igla_pod\CUP_igla_rack_twin.p3d";
	};
	class CUP_Vikhr_Rack_6rnd_Dummy: Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\vikhr_pod\CUP_vikhr_6rnd_rack.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\vikhr_pod\CUP_vikhr_6rnd_rack.p3d";
	};
	class CUP_Sidewinder_Rack_2Rnd_Dummy: Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\LAU2\CUP_LAU2.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\LAU2\CUP_LAU2.p3d";
	};
	class CUP_Mk_82: Bo_Mk82
	{
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\Mk_82\CUP_Mk82.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\Mk_82\CUP_Mk82.p3d";
		maverickweapon = 1;
	};
	class CUP_FAB250: Bo_Mk82
	{
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\FAB250\CUP_FAB250.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\FAB250\CUP_FAB250.p3d";
		maverickweapon = 1;
	};
	class CUP_Litening: MissileBase
	{
		model = "\CUP\Weapons\CUP_Weapons_Pods\litening\av8b_litening.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\litening\av8b_litening.p3d";
		hit = 10;
		indirectHit = 1;
		indirectHitRange = 1;
		cost = 100000;
		maxSpeed = 0;
		thrustTime = 0;
		thrust = 0;
		effectsMissile = "";
	};
	class CUP_ALQ131: MissileBase
	{
		model = "\CUP\Weapons\CUP_Weapons_Pods\alq131\cup_alq_131.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\alq131\cup_alq_131.p3d";
		hit = 10;
		indirectHit = 1;
		indirectHitRange = 1;
		cost = 100000;
		maxSpeed = 0;
		thrustTime = 0;
		thrust = 0;
		effectsMissile = "";
	};
	class CUP_R_57mm_HE: RocketBase
	{
		SoundSetExplosion[] = {"RocketsLight_Exp_SoundSet", "RocketsLight_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\CUP_70mmRocket.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\CUP_70mmRocket.p3d";
		hit = 150;
		indirectHit = 40;
		indirectHitRange = 12;
		warheadName = "HE";
		cost = 200;
		maxSpeed = 580;
		thrustTime = 1.1;
		thrust = 450;
		sideAirFriction = 0.15;
		fuseDistance = 40;
		timeToLive = 20;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 1, 500};
		whistleDist = 32;
	};
	class CUP_pylonblank: MissileBase
	{
		model = "\a3\weapons_f\empty";
		proxyShape = "\a3\weapons_f\empty";
		hit = 10;
		indirectHit = 1;
		indirectHitRange = 1;
		cost = 100000;
		maxSpeed = 0;
		thrustTime = 0;
		thrust = 0;
		effectsMissile = "";
	};
	class CUP_fake_ammo: Default
	{
		airLock = 0;
		hit = 1;
		indirectHit = 1;
		indirectHitRange = 1;
		typicalSpeed = 10;
		maxSpeed = 10;
		cost = 100;
		displayName = "";
		effectsMissile = "NoEffect";
		muzzleEffect = "NoEffect";
		CraterEffects = "NoEffect";
		explosionEffects = "NoEffect";
		explosive = 0;
		deflecting = 1;
		model = "";
		proxyShape = "";
	};
	class CUP_GSH23_gunpod_Dummy: Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\GSH23\CUP_GSH23_gunpod.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\GSH23\CUP_GSH23_gunpod.p3d";
	};
	class CUP_M621_gunpod_Dummy: Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\M621\CUP_M621.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\M621\CUP_M621.p3d";
	};
	class CUP_S13_Pod_Heli_Dummy: Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\S13\CUP_S13_Launcher.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\S13\CUP_S13_Launcher.p3d";
	};
	class CUP_F_40mm_Star_White: F_40mm_White
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0.5, 0.5, 0.5, 0.5};
		useFlare = 1;
		deflecting = 30;
		smokeColor[] = {1, 1, 1, 0.5};
		effectFlare = "CounterMeasureFlare";
		brightness = 50;
		intensity = 4e+006;
		size = 1;
		triggerTime = 3;
		triggerSpeedCoef = 1;
		timeToLive = 43;
	};
	class CUP_F_40mm_Star_Green: CUP_F_40mm_Star_White
	{
		lightColor[] = {0.2, 0.5, 0.2, 0.5};
		smokeColor[] = {1, 1, 1, 0.5};
	};
	class CUP_F_40mm_Star_Red: CUP_F_40mm_Star_White
	{
		lightColor[] = {0.5, 0.2, 0.2, 0.5};
		smokeColor[] = {1, 1, 1, 0.5};
	};
	class CUP_F_40mm_StarCluster_White: CUP_F_40mm_Star_White
	{
		lightColor[] = {0.5, 0.5, 0.5, 0.5};
		smokeColor[] = {1, 1, 1, 0.5};
		size = 1;
		triggerTime = 0.5;
		triggerSpeedCoef = 1;
		timeToLive = 7.5;
	};
	class CUP_F_40mm_StarCluster_Green: CUP_F_40mm_Star_White
	{
		lightColor[] = {0.2, 0.5, 0.2, 0.5};
		smokeColor[] = {1, 1, 1, 0.5};
		size = 1;
		triggerTime = 0.5;
		triggerSpeedCoef = 1;
		timeToLive = 7.8;
	};
	class CUP_F_40mm_StarCluster_Red: CUP_F_40mm_Star_White
	{
		lightColor[] = {0.5, 0.2, 0.2, 0.5};
		smokeColor[] = {1, 1, 1, 0.5};
		size = 1;
		triggerTime = 0.5;
		triggerSpeedCoef = 1;
		timeToLive = 7.5;
	};
	class CUP_Sub_F_40mm_StarCluster_White: F_40mm_White
	{
		simulation = "shotSubmunitions";
		hit = 0;
		submunitionAmmo = "CUP_F_40mm_StarCluster_White";
		triggerTime = 3;
		submunitionConeType[] = {"poissondisccenter", 10};
		submunitionConeAngle = 35;
		airFriction = -0.0216;
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		tracerStartTime = 0.1;
		tracerScale = 5;
	};
	class CUP_Sub_F_40mm_StarCluster_Red: F_40mm_White
	{
		simulation = "shotSubmunitions";
		hit = 0;
		submunitionAmmo = "CUP_F_40mm_StarCluster_Red";
		triggerTime = 3;
		submunitionConeType[] = {"poissondisccenter", 10};
		submunitionConeAngle = 35;
		airFriction = -0.0216;
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		tracerStartTime = 0.1;
		tracerScale = 5;
	};
	class CUP_Sub_F_40mm_StarCluster_Green: F_40mm_White
	{
		simulation = "shotSubmunitions";
		hit = 0;
		submunitionAmmo = "CUP_F_40mm_StarCluster_Green";
		triggerTime = 3;
		submunitionConeType[] = {"poissondisccenter", 10};
		submunitionConeAngle = 35;
		airFriction = -0.0216;
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		tracerStartTime = 0.1;
		tracerScale = 5;
	};
	class CUP_P_3M11_AT2_Falanga_AT: ammo_Penetrator_Base
	{
		caliber = 33.3333;
		warheadName = "HEAT";
		hit = 300;
	};
	class CUP_P_9K11_AT3_Sagger_AT: ammo_Penetrator_Base
	{
		caliber = 28.6667;
		warheadName = "HEAT";
		hit = 375;
	};
	class CUP_P_9M113_AT5_Spandrel_AT: ammo_Penetrator_Base
	{
		caliber = 40;
		warheadName = "HEAT";
		hit = 400;
	};
	class CUP_P_Shturm_9K114_AT6_Spiral_AT: ammo_Penetrator_Base
	{
		caliber = 37.3333;
		warheadName = "HEAT";
		hit = 400;
	};
	class CUP_P_Ataka_V_9M120_AT9_Spiral_2_AT: ammo_Penetrator_Base
	{
		caliber = 53.3333;
		warheadName = "TandemHEAT";
		hit = 500;
	};
	class CUP_P_9K116_1_Bastion_AT10_Stabber_AT: ammo_Penetrator_Base
	{
		caliber = 36.6666;
		warheadName = "HEAT";
		hit = 400;
	};
	class CUP_P_9M119M_Bastion_AT11_Sniper_AT: ammo_Penetrator_Base
	{
		caliber = 46.6666;
		warheadName = "TandemHEAT";
		hit = 400;
	};
	class CUP_P_9K115_2_AT13_Saxhorn_2_AT: ammo_Penetrator_Base
	{
		caliber = 60;
		warheadName = "TandemHEAT";
		hit = 720;
	};
	class CUP_P_9K121_Vikhr_AT16_Scallion_AT: ammo_Penetrator_Base
	{
		caliber = 66.6667;
		warheadName = "TandemHEAT";
		hit = 800;
	};
	class CUP_P_KH29L_AT: ammo_Penetrator_Base
	{
		caliber = 66.6667;
		warheadName = "HE";
		hit = 1800;
		indirectHit = 125;
		indirectHitRange = 15;
		explosive = 0.65;
	};
	class CUP_P_PG7V_AT: ammo_Penetrator_Base
	{
		caliber = 17.3333;
		warheadName = "HEAT";
		hit = 390;
	};
	class CUP_P_PG7VM_AT: ammo_Penetrator_Base
	{
		caliber = 20;
		warheadName = "HEAT";
		hit = 390;
	};
	class CUP_P_PG7VL_AT: ammo_Penetrator_Base
	{
		caliber = 33.3333;
		warheadName = "HEAT";
		hit = 390;
	};
	class CUP_P_PG7VR_AT: ammo_Penetrator_Base
	{
		caliber = 40;
		warheadName = "TandemHEAT";
		hit = 390;
	};
	class CUP_P_RPG18_AT: ammo_Penetrator_Base
	{
		caliber = 20;
		warheadName = "HEAT";
		hit = 347;
	};
	class CUP_P_PG9_AT: ammo_Penetrator_Base
	{
		caliber = 26.6667;
		warheadName = "HEAT";
		hit = 396.3;
	};
	class CUP_P_PG15V_AT: ammo_Penetrator_Base
	{
		caliber = 26.6667;
		warheadName = "HEAT";
		hit = 396.3;
	};
	class CUP_P_3UBK9_HEAT: ammo_Penetrator_Base
	{
		caliber = 25.3333;
		warheadName = "HEAT";
		hit = 350;
	};
	class CUP_P_UBK367_HEAT: ammo_Penetrator_Base
	{
		caliber = 18.6667;
		warheadName = "HEAT";
		hit = 300;
	};
	class CUP_P_AGM_114K_Hellfire_II_AT: ammo_Penetrator_Base
	{
		caliber = 53.3333;
		warheadName = "TandemHEAT";
		hit = 660;
	};
	class CUP_P_AGM_114L_Hellfire_II_AT: ammo_Penetrator_Base
	{
		caliber = 53.3333;
		warheadName = "TandemHEAT";
		hit = 660;
	};
	class CUP_P_AGM_65D_AT: ammo_Penetrator_Base
	{
		caliber = 66.6667;
		warheadName = "HE";
		indirectHit = 85;
		indirectHitRange = 8;
		explosive = 0.65;
		hit = 1321;
	};
	class CUP_P_AGM_84_AT: ammo_Penetrator_Base
	{
		caliber = 66.6667;
		warheadName = "HE";
		hit = 1800;
		indirectHit = 125;
		indirectHitRange = 15;
		explosive = 0.65;
	};
	class CUP_P_TOW_AT: ammo_Penetrator_Base
	{
		caliber = 28.6667;
		warheadName = "HEAT";
		hit = 450;
	};
	class CUP_P_TOW2_AT: ammo_Penetrator_Base
	{
		caliber = 42;
		warheadName = "HEAT";
		hit = 500;
	};
	class CUP_P_Javelin_AT: ammo_Penetrator_Base
	{
		caliber = 53.3333;
		warheadName = "TandemHEAT";
		hit = 780;
	};
	class CUP_P_M47_AT: ammo_Penetrator_Base
	{
		caliber = 33.3333;
		warheadName = "HEAT";
		hit = 560;
	};
	class CUP_P_SMAW_HEAA: ammo_Penetrator_Base
	{
		caliber = 40;
		warheadName = "HEAT";
		hit = 456;
	};
	class CUP_P_SMAW_HEDP: ammo_Penetrator_Base
	{
		caliber = 17.3333;
		warheadName = "HEAT";
		hit = 400;
	};
	class CUP_P_M136_AT: ammo_Penetrator_Base
	{
		caliber = 28;
		warheadName = "HEAT";
		hit = 372;
	};
	class CUP_P_MEEWS_HEAT: ammo_Penetrator_Base
	{
		caliber = 33.3333;
		warheadName = "TandemHEAT";
		hit = 495;
	};
	class CUP_P_MEEWS_HEDP: ammo_Penetrator_Base
	{
		caliber = 17.3333;
		warheadName = "HEAT";
		hit = 435.93;
	};
	class CUP_P_NLAW_AT: ammo_Penetrator_Base
	{
		caliber = 26.6667;
		warheadName = "AP";
		typicalSpeed = 1000;
		hit = 525;
	};
	class CUP_P_M72A6_AT: ammo_Penetrator_Base
	{
		caliber = 20;
		warheadName = "HEAT";
		hit = 347;
	};
	class CUP_P_120mm_HESH: ammo_Penetrator_Base
	{
		warheadName = "HEAT";
		hit = 30;
	};
	class CUP_GrenadeHand_RGD5: GrenadeHand
	{
		author = "Community Upgrade Project";
		dlc = "CUP_Weapons";
		model = "CUP\Weapons\CUP_Weapons_Grenades\CUP_frag_rgd5.p3d";
	};
	class CUP_GrenadeHand_RGO: GrenadeHand
	{
		author = "Community Upgrade Project";
		dlc = "CUP_Weapons";
		model = "CUP\Weapons\CUP_Weapons_Grenades\CUP_frag_rgd5.p3d";
	};
	class CUP_GrenadeHand_M67: GrenadeHand
	{
		author = "Community Upgrade Project";
		dlc = "CUP_Weapons";
		model = "CUP\Weapons\CUP_Weapons_Grenades\CUP_M67.p3d";
	};
	class CUP_GrenadeHand_L109A1_HE: GrenadeHand
	{
		author = "Community Upgrade Project";
		dlc = "CUP_Weapons";
		model = "CUP\Weapons\CUP_Weapons_Grenades\CUP_M67.p3d";
	};
	class CUP_GrenadeHand_L109A2_HE: GrenadeHand
	{
		author = "Community Upgrade Project";
		dlc = "CUP_Weapons";
		model = "CUP\Weapons\CUP_Weapons_Grenades\CUP_M67.p3d";
	};
	class CUP_TimeBomb_Ammo: PipeBombBase
	{
		SoundSetExplosion[] = {"ExplosiveCharge_Exp_SoundSet", "ExplosiveCharge_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		author = "Community Upgrade Project";
		dlc = "CUP_Weapons";
		hit = 3000;
		indirectHit = 3000;
		indirectHitRange = 4;
		model = "\CUP\Weapons\CUP_Weapons_Put\CUP_Satchel.p3d";
		whistleDist = 10;
		soundHit[] = {"A3\Sounds_F\weapons\Mines\mine_debris_2", 3.16228, 1, 1500};
		ExplosionEffects = "MineNondirectionalExplosion";
		CraterEffects = "MineNondirectionalCrater";
		mineInconspicuousness = 3;
		mineTrigger = "TimeTrigger";
		triggerWhenDestroyed = 2;
		defaultMagazine = "CUP_PipeBomb_M";
	};
	class CUP_PipeBomb_Ammo: PipeBombBase
	{
		SoundSetExplosion[] = {"ExplosiveCharge_Exp_SoundSet", "ExplosiveCharge_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		author = "Community Upgrade Project";
		dlc = "CUP_Weapons";
		simulation = "shotPipeBomb";
		hit = 3000;
		indirectHit = 3000;
		indirectHitRange = 4;
		model = "\CUP\Weapons\CUP_Weapons_Put\CUP_Satchel.p3d";
		whistleDist = 10;
		soundHit[] = {"A3\Sounds_F\weapons\Mines\mine_debris_2", 3.16228, 1, 1500};
		ExplosionEffects = "MineNondirectionalExplosion";
		CraterEffects = "MineNondirectionalCrater";
		mineInconspicuousness = 3;
		mineTrigger = "RemoteTrigger";
		triggerWhenDestroyed = 2;
		defaultMagazine = "CUP_PipeBomb_M";
	};
	class CUP_Mine_Ammo: MineBase
	{
		SoundSetExplosion[] = {"ATmine_Exp_SoundSet", "ATmine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		author = "Community Upgrade Project";
		dlc = "CUP_Weapons";
		hit = 3000;
		indirectHit = 3000;
		indirectHitRange = 2;
		model = "\CUP\Weapons\CUP_Weapons_Put\CUP_AT15.p3d";
		soundHit[] = {"A3\Sounds_F\weapons\mines\mine_debris_2", 3.16228, 1, 2000};
		explosionEffects = "ATMineExplosion";
		CraterEffects = "ATMineCrater";
		whistleDist = 8;
		mineInconspicuousness = 40;
		mineTrigger = "TankTriggerMagnetic";
		defaultMagazine = "CUP_Mine_M";
	};
	class CUP_MineE_Ammo: CUP_Mine_Ammo
	{
		SoundSetExplosion[] = {"ATmine_Exp_SoundSet", "ATmine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		author = "Community Upgrade Project";
		dlc = "CUP_Weapons";
		model = "\CUP\Weapons\CUP_Weapons_Put\CUP_TM46.p3d";
		defaultMagazine = "CUP_MineE_M";
	};
	class CUP_IED_V1_Ammo: CUP_Mine_Ammo
	{
		SoundSetExplosion[] = {"BigIED_Exp_SoundSet", "BigIED_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		author = "Community Upgrade Project";
		dlc = "CUP_Weapons";
		hit = 20;
		indirectHit = 18;
		indirectHitRange = 7;
		model = "\CUP\Weapons\CUP_Weapons_Put\CUP_IED_V1.p3d";
		defaultMagazine = "CUP_IED_V1_M";
		whistleDist = 8;
		mineTrigger = "RemoteTrigger";
		soundHit[] = {"A3\Sounds_F\weapons\Mines\mine_debris_2", 3.16228, 1, 1500};
	};
	class CUP_IED_V2_Ammo: CUP_IED_V1_Ammo
	{
		author = "Community Upgrade Project";
		dlc = "CUP_Weapons";
		hit = 3000;
		indirectHit = 3000;
		indirectHitRange = 4;
		whistleDist = 15;
		model = "\CUP\Weapons\CUP_Weapons_Put\CUP_IED_V2.p3d";
		defaultMagazine = "CUP_IED_V2_M";
		soundHit[] = {"A3\Sounds_F\weapons\Mines\mine_debris_2", 3.16228, 1, 1500};
	};
	class CUP_IED_V3_Ammo: CUP_IED_V1_Ammo
	{
		author = "Community Upgrade Project";
		dlc = "CUP_Weapons";
		hit = 20;
		indirectHit = 18;
		indirectHitRange = 7;
		whistleDist = 15;
		model = "\CUP\Weapons\CUP_Weapons_Put\CUP_IED_V3.p3d";
		defaultMagazine = "CUP_IED_V3_M";
		soundHit[] = {"A3\Sounds_F\weapons\Mines\mine_debris_2", 3.16228, 1, 1500};
	};
	class CUP_IED_V4_Ammo: CUP_IED_V1_Ammo
	{
		author = "Community Upgrade Project";
		dlc = "CUP_Weapons";
		hit = 3000;
		indirectHit = 3000;
		indirectHitRange = 4;
		whistleDist = 15;
		model = "\CUP\Weapons\CUP_Weapons_Put\CUP_IED_V4.p3d";
		defaultMagazine = "CUP_IED_V4_M";
		soundHit[] = {"A3\Sounds_F\weapons\Mines\mine_debris_2", 3.16228, 1, 1500};
	};
	class B_338_Ball: BulletBase
	{
		hit = 16;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_338_Ball";
		audibleFire = 80;
		visibleFireTime = 3;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 14;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 10;
		cost = 6;
		airLock = 1;
		caliber = 2;
		typicalSpeed = 890;
		timeToLive = 10;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		tracerEndTime = 1;
		airFriction = -0.00061;
		class CamShakeExplode
		{
			power = 3.16228;
			duration = 0.6;
			frequency = 20;
			distance = 9.48683;
		};
		class CamShakeHit
		{
			power = 10;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
	};
	class B_338_NM_Ball: BulletBase
	{
		hit = 14;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_338_NM_Ball";
		audibleFire = 60;
		visibleFireTime = 3;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 14;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 10;
		cost = 6;
		airLock = 1;
		caliber = 1.8;
		typicalSpeed = 760;
		timeToLive = 10;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		tracerEndTime = 1;
		airFriction = -0.00061;
		class CamShakeExplode
		{
			power = 3.16228;
			duration = 0.6;
			frequency = 20;
			distance = 9.48683;
		};
		class CamShakeHit
		{
			power = 10;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
	};
	class B_127x54_Ball: BulletBase
	{
		hit = 20;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_127x54_APDS";
		visibleFire = 1;
		audibleFire = 5;
		visibleFireTime = 3;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 14;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 10;
		cost = 15;
		airLock = 1;
		caliber = 4.6;
		typicalSpeed = 270;
		timeToLive = 6;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 1.5;
		tracerStartTime = 0.075;
		tracerEndTime = 1;
		airFriction = -0.0014;
		class CamShakeExplode
		{
			power = 2.23607;
			duration = 0.4;
			frequency = 20;
			distance = 6.7082;
		};
		class CamShakeHit
		{
			power = 15;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
	};
	class B_570x28_Ball: BulletBase
	{
		caliber = 0.559441;
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalSpeed = 715;
		airFriction = -0.001412;
		deflecting = 20;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 1;
		audibleFire = 25;
		visibleFire = 3;
		visibleFireTime = 5;
		dangerRadiusBulletClose = 8;
		suppressionRadiusBulletClose = 6;
		dangerRadiusHit = 12;
		suppressionRadiusHit = 8;
	};
	class B_580x42_Ball_F: BulletBase
	{
		airLock = 1;
		hit = 9.4;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalSpeed = 870;
		airFriction = -0.0011;
		caliber = 0.9;
		deflecting = 20;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 0;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
	};
	class B_50BW_Ball_F: BulletBase
	{
		airLock = 1;
		hit = 22;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalSpeed = 550;
		airFriction = -0.002;
		caliber = 4.2;
		cartridge = "";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 0;
		dangerRadiusBulletClose = 12;
		dangerRadiusHit = 16;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 12;
	};
	class B_762x39_Ball_F: BulletBase
	{
		airLock = 1;
		hit = 11;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalSpeed = 730;
		airFriction = -0.0016;
		caliber = 1.2;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 0;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		cartridge = "FxCartridge_762x39";
	};
	class B_762x39_Ball_Green_F: B_762x39_Ball_F
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_545x39_Ball_F: BulletBase
	{
		airLock = 1;
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalSpeed = 880;
		airFriction = -0.0013;
		caliber = 0.6;
		deflecting = 20;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 0;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
	};
	class B_545x39_Ball_Green_F: B_545x39_Ball_F
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class R_PG7_F: RocketBase
	{
		model = "\A3\Weapons_F_Exp\Launchers\RPG7\rocket_rpg7.p3d";
		submunitionAmmo = "ammo_Penetrator_PG7";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 95;
		indirectHit = 13;
		indirectHitRange = 3.6;
		warheadName = "HE";
		explosive = 0.8;
		cost = 200;
		airFriction = 0.65;
		sideAirFriction = 0.15;
		maxSpeed = 300;
		initTime = 0.1;
		thrustTime = 0.05;
		thrust = 4000;
		fuseDistance = 5;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "";
		effectsMissile = "EmptyEffect";
		simulationStep = 0.02;
		airLock = 0;
		aiAmmoUsageFlags = "128 + 512";
		irLock = 0;
		timeToLive = 6.1;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Fly_RPG32", 0.316228, 1.5, 900};
		class CamShakeExplode
		{
			power = 7;
			duration = 1.2;
			frequency = 20;
			distance = 79.3286;
		};
		class CamShakeHit
		{
			power = 85;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 1.96799;
			duration = 0.8;
			frequency = 20;
			distance = 30.9839;
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class M_Jian_AT: Missile_AGM_01_F
	{
		model = "\A3\Weapons_F_Exp\Ammo\Missile_AT_04_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_Exp\Ammo\Missile_AT_04_F.p3d";
		maverickWeaponIndexOffset = 0;
		initSpeed = 40;
		initTime = 0.2;
		submunitionAmmo = "ammo_Penetrator_Jian";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 150;
		indirectHit = 70;
		indirectHitRange = 5;
		warheadName = "TandemHEAT";
		airLock = 0;
		irLock = 1;
		laserLock = 1;
		nvLock = 1;
		missileLockCone = 30;
		missileKeepLockedCone = 30;
		missileLockMaxDistance = 8000;
		missileLockMinDistance = 350;
		missileLockMaxSpeed = 35;
		weaponLockSystem = "2 + 4 + 16";
		cmImmunity = 0.45;
		manualControl = 1;
		maxControlRange = 8000;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 35;
						angleRangeHorizontal = 30;
						angleRangeVertical = 30;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 6000;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 6000;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 35;
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
					};
				};
			};
		};
	};
	class ammo_Missile_MediumRangeAABase: MissileBase
	{
		model = "\A3\weapons_f\empty";
		proxyShape = "\A3\weapons_f\empty";
		hit = 200;
		indirectHit = 125;
		indirectHitRange = 13;
		warheadName = "HE";
		proximityExplosionDistance = 30;
		fuseDistance = 750;
		maneuvrability = 23;
		airFriction = 0.07;
		sideAirFriction = 0.18;
		trackOversteer = 1.1;
		trackLead = 1.06;
		initTime = 0.6;
		timeToLive = 35;
		thrustTime = 7;
		thrust = 210;
		maxSpeed = 900;
		simulationStep = 0.002;
		activeSensorAlwaysOn = 0;
		airLock = 2;
		lockType = 0;
		cmimmunity = 0.95;
		weaponLockSystem = "8 + 16";
		missileLockCone = 70;
		missileKeepLockedCone = 90;
		missileLockMaxDistance = 12000;
		missileLockMinDistance = 800;
		missileLockMaxSpeed = 777.778;
		autoSeekTarget = 1;
		flightProfiles[] = {"LoalDistance"};
		class LoalDistance
		{
			lockSeekDistanceFromParent = 2000;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 12000;
							maxRange = 12000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 50;
						angleRangeVertical = 50;
						groundNoiseDistanceCoef = 0.2;
						minSpeedThreshold = 30;
						maxSpeedThreshold = 40;
						maxTrackableSpeed = 777.778;
						minTrackableATL = 10;
					};
					class DataLinkSensorComponent: ActiveRadarSensorComponent
					{
						componentType = "DataLinkSensorComponent";
					};
				};
			};
		};
		cost = 1500;
		aiAmmoUsageFlags = 256;
		missileFireAnim = "rocket_fire_hide";
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissile = "FX_Missile_AA";
		muzzleEffect = "";
	};
	class ammo_Missile_ShortRangeAABase: MissileBase
	{
		model = "\A3\weapons_f\empty";
		proxyShape = "\A3\weapons_f\empty";
		hit = 130;
		indirectHit = 85;
		indirectHitRange = 10;
		warheadName = "HE";
		proximityExplosionDistance = 20;
		fuseDistance = 100;
		maneuvrability = 42;
		airFriction = 0.14;
		sideAirFriction = 0.23;
		trackOversteer = 1.6;
		trackLead = 0.9;
		initTime = 0;
		timeToLive = 20;
		thrustTime = 5;
		thrust = 250;
		maxSpeed = 700;
		simulationStep = 0.002;
		airLock = 2;
		lockType = 0;
		cmimmunity = 0.92;
		weaponLockSystem = "2 + 16";
		missileLockCone = 180;
		missileKeepLockedCone = 180;
		missileLockMaxDistance = 5000;
		missileLockMinDistance = 250;
		missileLockMaxSpeed = 600;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						maxTrackableSpeed = 600;
						minTrackableATL = 3;
					};
				};
			};
		};
		cost = 1000;
		whistleDist = 20;
		aiAmmoUsageFlags = 256;
		missileFireAnim = "rocket_fire_hide";
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissile = "FX_Missile_AA";
		muzzleEffect = "B01_fnc_effectFiredJetMissile";
	};
	class ammo_Gun20mmAABase: BulletBase
	{
		hit = 60;
		indirectHit = 6;
		indirectHitRange = 0.4;
		warheadName = "AP";
		explosive = 0;
		caliber = 3.4;
		cost = 30;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 2;
		tracerStartTime = 0.05;
		tracerEndTime = 2;
		nvgOnly = 0;
		typicalSpeed = 1030;
		visibleFire = 32;
		audibleFire = 200;
		visibleFireTime = 4;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		aiAmmoUsageFlags = 256;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01", 1.77828, 1, 1300};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02", 1.77828, 1, 1300};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03", 1.77828, 1, 1300};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04", 1.77828, 1, 1300};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		explosionSoundEffect = "DefaultExplosion";
		airLock = 1;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		airFriction = -0.00078;
		muzzleEffect = "";
		class CamShakeExplode
		{
			power = 4;
			duration = 0.8;
			frequency = 20;
			distance = 43.7771;
		};
		class CamShakeHit
		{
			power = 20;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.11474;
			duration = 0.8;
			frequency = 20;
			distance = 35.7771;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class ammo_Gun30mmAABase: BulletBase
	{
		hit = 70;
		indirectHit = 6;
		indirectHitRange = 1;
		warheadName = "AP";
		explosive = 0;
		caliber = 4.5;
		cost = 30;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		nvgOnly = 0;
		typicalSpeed = 980;
		visibleFire = 32;
		audibleFire = 200;
		visibleFireTime = 4;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		aiAmmoUsageFlags = 256;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01", 1.77828, 1, 1300};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02", 1.77828, 1, 1300};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03", 1.77828, 1, 1300};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04", 1.77828, 1, 1300};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		explosionSoundEffect = "DefaultExplosion";
		airLock = 1;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		airFriction = -0.0005;
		muzzleEffect = "";
		class CamShakeExplode
		{
			power = 4;
			duration = 0.8;
			frequency = 20;
			distance = 43.7771;
		};
		class CamShakeHit
		{
			power = 20;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.11474;
			duration = 0.8;
			frequency = 20;
			distance = 35.7771;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class ammo_Gun35mmAABase: BulletBase
	{
		hit = 72;
		indirectHit = 6;
		indirectHitRange = 1;
		warheadName = "AP";
		visibleFire = 38;
		audibleFire = 200;
		visibleFireTime = 5;
		dangerRadiusBulletClose = 20;
		dangerRadiusHit = 60;
		suppressionRadiusBulletClose = 12;
		suppressionRadiusHit = 24;
		aiAmmoUsageFlags = 256;
		deflecting = 0;
		explosive = 0;
		airLock = 1;
		cost = 42;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		explosionSoundEffect = "DefaultExplosion";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction = -0.00035;
		muzzleEffect = "";
		caliber = 4.5;
		typicalSpeed = 950;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		class CamShakeExplode
		{
			power = 3.6;
			duration = 0.8;
			frequency = 20;
			distance = 41.9411;
		};
		class CamShakeHit
		{
			power = 18;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 1.49535;
			duration = 0.4;
			frequency = 20;
			distance = 17.8885;
		};
		class CamShakePlayerFire
		{
			power = 0.001;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class ammo_AAA_Gun35mm_AA: ammo_Gun35mmAABase
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 2;
		tracerStartTime = 0.05;
		tracerEndTime = 2;
		shotDistractionAI = -0.5;
	};
	class ammo_Missile_rim116: ammo_Missile_ShortRangeAABase
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_SAM_01_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_Jets\Ammo\Missile_SAM_01_fly_F.p3d";
		airFriction = 0.16;
		thrustTime = 4;
		thrust = 300;
		maxSpeed = 800;
		missileLockMaxDistance = 4000;
	};
	class ammo_Missile_rim162: ammo_Missile_MediumRangeAABase
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_SAM_02_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_Jets\Ammo\Missile_SAM_02_fly_F.p3d";
		hit = 200;
		indirectHit = 200;
		maneuvrability = 24;
		trackOversteer = 2;
		airFriction = 0.09;
		sideAirFriction = 0.16;
		initTime = 0;
		thrust = 230;
		missileLockCone = 170;
		missileKeepLockedCone = 170;
		missileLockMaxSpeed = 888.889;
		class Components: Components
		{
			class SensorsManagerComponent: SensorsManagerComponent
			{
				class Components: Components
				{
					class ActiveRadarSensorComponent: ActiveRadarSensorComponent
					{
						class AirTarget
						{
							minRange = 12000;
							maxRange = 12000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
						maxTrackableSpeed = 888.889;
					};
					class DataLinkSensorComponent: ActiveRadarSensorComponent
					{
						componentType = "DataLinkSensorComponent";
					};
				};
			};
		};
	};
	class ammo_Fighter01_Gun20mm_AA: ammo_Gun20mmAABase
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 2;
		tracerStartTime = 0.05;
		tracerEndTime = 2;
	};
	class ammo_Fighter04_Gun20mm_AA: ammo_Gun20mmAABase
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 2;
		tracerStartTime = 0.05;
		tracerEndTime = 2;
	};
	class ammo_Missile_AMRAAM_C: ammo_Missile_MediumRangeAABase
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_10_fly_F";
		proxyShape = "\A3\Weapons_F_Jets\Ammo\Missile_AA_10_F";
	};
	class ammo_Missile_AMRAAM_D: ammo_Missile_MediumRangeAABase
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_06_fly_F";
		proxyShape = "\A3\Weapons_F_Jets\Ammo\Missile_AA_06_F";
		airFriction = 0.065;
		thrustTime = 7.5;
		cmimmunity = 0.96;
		missileLockCone = 140;
		missileKeepLockedCone = 140;
		missileLockMaxDistance = 13000;
		class Components: Components
		{
			class SensorsManagerComponent: SensorsManagerComponent
			{
				class Components: Components
				{
					class ActiveRadarSensorComponent: ActiveRadarSensorComponent
					{
						class AirTarget
						{
							minRange = 13000;
							maxRange = 13000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 9000;
							maxRange = 9000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 100;
						angleRangeVertical = 100;
					};
					class DataLinkSensorComponent: ActiveRadarSensorComponent
					{
						componentType = "DataLinkSensorComponent";
					};
				};
			};
		};
	};
	class ammo_Missile_BIM9X: ammo_Missile_ShortRangeAABase
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_08_fly_F";
		proxyShape = "\A3\Weapons_F_Jets\Ammo\Missile_AA_08_F";
	};
	class ammo_Fighter02_Gun30mm_AA: ammo_Gun30mmAABase
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 2;
		tracerStartTime = 0.05;
		tracerEndTime = 2;
	};
	class ammo_Missile_AA_R77: ammo_Missile_MediumRangeAABase
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_05_fly_F";
		proxyShape = "\A3\Weapons_F_Jets\Ammo\Missile_AA_05_F";
		maneuvrability = 30;
		airFriction = 0.08;
		sideAirFriction = 0.16;
		thrust = 240;
		missileLockCone = 90;
		class Components: Components
		{
			class SensorsManagerComponent: SensorsManagerComponent
			{
				class Components: Components
				{
					class ActiveRadarSensorComponent: ActiveRadarSensorComponent
					{
						angleRangeHorizontal = 65;
						angleRangeVertical = 65;
					};
					class DataLinkSensorComponent: ActiveRadarSensorComponent
					{
						componentType = "DataLinkSensorComponent";
					};
				};
			};
		};
	};
	class ammo_Missile_AA_R73: ammo_Missile_ShortRangeAABase
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_07_fly_F";
		proxyShape = "\A3\Weapons_F_Jets\Ammo\Missile_AA_07_F";
		hit = 140;
		indirectHit = 95;
		maneuvrability = 38;
		airFriction = 0.16;
		sideAirFriction = 0.25;
		cmimmunity = 0.92;
		missileLockMinDistance = 75;
		missileLockMaxDistance = 6000;
		missileLockCone = 150;
		missileKeepLockedCone = 150;
		timeToLive = 25;
		thrustTime = 6;
		class Components: Components
		{
			class SensorsManagerComponent: SensorsManagerComponent
			{
				class Components: Components
				{
					class IRSensorComponent: IRSensorComponent
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 150;
						angleRangeVertical = 150;
					};
				};
			};
		};
	};
	class BombDemine_01_Ammo_F: BombCore
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombDemine_01_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombDemine_01_F";
		simulation = "shotMissile";
		effectsMissile = "DeminingExplosiveTrials";
		explosionEffects = "DeminingExplosiveExplosion";
		craterEffects = "DeminingExplosiveCrater";
		thrustTime = 10;
		cost = 10;
		triggerDistance = 1;
		triggerSpeedCoef[] = {0.1, 0.1};
		submunitionConeAngle = 0;
		submunitionConeType[] = {"custom", {{0, 0}}};
		submunitionAmmo = "BombDemine_01_SubAmmo_F";
		hit = 1;
		indirectHit = 35;
		indirectHitRange = 11;
		craterShape = "\a3\Data_f_orange\data\krater_maly";
		soundFly[] = {"A3\Sounds_F_Orange\Vehicles\Air\UAV_06\UAV_6_DemineDrone_Bomb_Whistle", 1, 1, 100};
	};
	class BombDemine_01_DummyAmmo_F: BombDemine_01_Ammo_F
	{
		hit = 1;
		indirectHit = 1;
		indirectHitRange = 1;
		effectsMissile = "DeminingExplosiveTrials_Dummy";
		explosionEffects = "";
		CraterEffects = "";
		model = "\a3\Weapons_F_Orange\Ammo\BombDemine_01_Dummy_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombDemine_01_Dummy_F";
		submunitionAmmo = "BombDemine_01_DummySubAmmo_F";
		SoundSetExplosion[] = {"UAV_6_DemineDrone_DummyBomb_Exp_SoundSet", "UAV_6_DemineDrone_DummyBomb_Report_SoundSet", "UAV_6_DemineDrone_Bomb_Exp_SoundSet"};
	};
	class BombDemine_01_SubAmmo_F: ShellBase
	{
		simulation = "shotShell";
		model = "\a3\Weapons_F_Orange\Ammo\BombDemine_01_ground_F";
		hit = 1;
		indirectHit = 35;
		indirectHitRange = 11;
		explosionTime = 1;
		thrust = 0;
		thrustTime = 0;
		typicalSpeed = 1;
		craterShape = "\a3\Data_f_orange\data\krater_maly";
		effectsMissile = "DeminingExplosiveTrials";
		explosionEffects = "DeminingExplosiveExplosion";
		craterEffects = "DeminingExplosiveCrater";
		SoundSetExplosion[] = {"UAV_6_DemineDrone_Bomb_Exp_SoundSet", "Shell30mm40mm_Tail_SoundSet", "Explosion_Debris_SoundSet", "UXO_Debris_Dust_Cloud_SoundSet"};
	};
	class BombDemine_01_DummySubAmmo_F: BombDemine_01_SubAmmo_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombDemine_01_Dummy_ground_F";
		indirectHit = 1;
		indirectHitRange = 1;
		explosionEffects = "";
		craterShape = "\a3\Weapons_F_Orange\Ammo\BombDemine_01_Dummy_F";
		craterEffects = "DeminingExplosiveCrater_Dummy";
		SoundSetExplosion[] = {"UAV_6_DemineDrone_DummyBomb_Exp_SoundSet", "UAV_6_DemineDrone_DummyBomb_Report_SoundSet"};
	};
	class Bo_Leaflets: BombCore
	{
		CraterEffects = "";
		CraterWaterEffects = "";
		ExplosionEffects = "";
		effectFly = "";
		timeToLive = 0;
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
	};
	class BombCluster_01_Ammo_F: Bomb_04_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_F";
		simulation = "shotMissile";
		triggerDistance = 250;
		triggerSpeedCoef[] = {0.8, 1};
		submunitionAmmo[] = {"Mo_cluster_Bomb_01_F", 0.93, "BombCluster_01_UXO_deploy", 0.07};
		submunitionConeAngle = 10;
		submunitionConeType[] = {"randomcenter", 85};
	};
	class BombCluster_02_Ammo_F: BombCluster_01_Ammo_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_F";
		maverickWeaponIndexOffset = 6;
		submunitionAmmo[] = {"Mo_cluster_Bomb_02_F", 0.93, "BombCluster_02_UXO_deploy", 0.07};
		submunitionConeType[] = {"randomcenter", 45};
	};
	class BombCluster_02_Cap_Ammo_F: BombCluster_02_Ammo_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_cap_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_cap_F";
	};
	class BombCluster_03_Ammo_F: BombCluster_01_Ammo_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_F";
		submunitionAmmo[] = {"Mo_cluster_Bomb_03_F", 0.93, "BombCluster_03_UXO_deploy", 0.07};
		submunitionConeType[] = {"randomcenter", 50};
	};
	class Mo_cluster_Bomb_01_F: Mo_cluster_AP
	{
		thrust = 0;
		thrustTime = 0;
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_sub_F";
		hit = 70;
		indirectHit = 15;
		indirectHitRange = 6;
		soundFakeFall0[] = {"", 1, 1, 1};
		soundFakeFall[] = {"soundFakeFall0", 1};
		soundFly[] = {"A3\Sounds_F_Orange\arsenal\explosives\clusterbomb\Cluster_Trajectory", 1, 1, 50};
		SoundSetExplosion[] = {"ClusterBomb_Exp_SoundSet", "ClusterBomb_Debris_SoundSet"};
	};
	class Mo_cluster_Bomb_02_F: Mo_cluster_Bomb_01_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_sub_F";
		hit = 30;
		indirectHit = 25;
		indirectHitRange = 9;
	};
	class Mo_cluster_Bomb_03_F: Mo_cluster_Bomb_01_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_sub_F";
		hit = 70;
		indirectHit = 12;
		indirectHitRange = 6;
	};
	class UXO_deploy_base_f: SubmunitionBase
	{
		triggerDistance = 1000;
		submunitionConeAngle = 0;
		submunitionConeType[] = {"randomcenter", 1};
		triggerSpeedCoef = 0.25;
		hit = 35;
		indirectHit = 25;
		indirectHitRange = 8;
		CraterEffects = "ClusterCraterEffects";
		CraterWaterEffects = "ClusterCraterWaterEffects";
		EffectFly = "ClusterEffectFly";
		ExplosionEffects = "ClusterExplosionEffects";
		soundFly[] = {"A3\Sounds_F_Orange\arsenal\explosives\clusterbomb\Cluster_Trajectory", 1, 1, 50};
		SoundSetExplosion[] = {"ClusterBomb_Exp_SoundSet", "ClusterBomb_Debris_SoundSet"};
	};
	class Mo_cluster_AP_UXO_deploy: UXO_deploy_base_f
	{
		submunitionAmmo[] = {"Mo_cluster_AP_UXO1_deployMine", 0.25, "Mo_cluster_AP_UXO2_deployMine", 0.25, "Mo_cluster_AP_UXO3_deployMine", 0.25, "Mo_cluster_AP_UXO4_deployMine", 0.25};
	};
	class UXO_deploy_BombCluster_base_F: UXO_deploy_base_f
	{
		triggerSpeedCoef = 0.75;
	};
	class BombCluster_01_UXO_deploy: UXO_deploy_BombCluster_base_F
	{
		submunitionAmmo[] = {"BombCluster_01_UXO1_deployMine", 0.25, "BombCluster_01_UXO2_deployMine", 0.25, "BombCluster_01_UXO3_deployMine", 0.25, "BombCluster_01_UXO4_deployMine", 0.25};
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_sub_F";
	};
	class BombCluster_02_UXO_deploy: UXO_deploy_BombCluster_base_F
	{
		submunitionAmmo[] = {"BombCluster_02_UXO1_deployMine", 0.25, "BombCluster_02_UXO2_deployMine", 0.25, "BombCluster_02_UXO3_deployMine", 0.25, "BombCluster_02_UXO4_deployMine", 0.25};
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_sub_F";
	};
	class BombCluster_03_UXO_deploy: UXO_deploy_BombCluster_base_F
	{
		submunitionAmmo[] = {"BombCluster_03_UXO1_deployMine", 0.25, "BombCluster_03_UXO2_deployMine", 0.25, "BombCluster_03_UXO3_deployMine", 0.25, "BombCluster_03_UXO4_deployMine", 0.25};
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_sub_F";
	};
	class UXO_deployMine_base_F: ShotDeployBase
	{
		airFriction = 0;
		EffectFly = "ClusterEffectFly";
		hit = 300;
	};
	class Mo_cluster_AP_UXO1_deployMine: UXO_deployMine_base_F
	{
		submunitionAmmo = "Mo_cluster_AP_UXO1_Ammo_F";
	};
	class Mo_cluster_AP_UXO2_deployMine: UXO_deployMine_base_F
	{
		submunitionAmmo = "Mo_cluster_AP_UXO2_Ammo_F";
	};
	class Mo_cluster_AP_UXO3_deployMine: UXO_deployMine_base_F
	{
		submunitionAmmo = "Mo_cluster_AP_UXO3_Ammo_F";
	};
	class Mo_cluster_AP_UXO4_deployMine: UXO_deployMine_base_F
	{
		submunitionAmmo = "Mo_cluster_AP_UXO4_Ammo_F";
	};
	class BombCluster_01_UXO1_deployMine: UXO_deployMine_base_F
	{
		submunitionAmmo = "BombCluster_01_UXO1_Ammo_F";
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_sub_F";
	};
	class BombCluster_01_UXO2_deployMine: UXO_deployMine_base_F
	{
		submunitionAmmo = "BombCluster_01_UXO2_Ammo_F";
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_sub_F";
	};
	class BombCluster_01_UXO3_deployMine: UXO_deployMine_base_F
	{
		submunitionAmmo = "BombCluster_01_UXO3_Ammo_F";
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_sub_F";
	};
	class BombCluster_01_UXO4_deployMine: UXO_deployMine_base_F
	{
		submunitionAmmo = "BombCluster_01_UXO4_Ammo_F";
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_sub_F";
	};
	class BombCluster_02_UXO1_deployMine: UXO_deployMine_base_F
	{
		submunitionAmmo = "BombCluster_02_UXO1_Ammo_F";
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_sub_F";
	};
	class BombCluster_02_UXO2_deployMine: UXO_deployMine_base_F
	{
		submunitionAmmo = "BombCluster_02_UXO2_Ammo_F";
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_sub_F";
	};
	class BombCluster_02_UXO3_deployMine: UXO_deployMine_base_F
	{
		submunitionAmmo = "BombCluster_02_UXO3_Ammo_F";
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_sub_F";
	};
	class BombCluster_02_UXO4_deployMine: UXO_deployMine_base_F
	{
		submunitionAmmo = "BombCluster_02_UXO4_Ammo_F";
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_sub_F";
	};
	class BombCluster_03_UXO1_deployMine: UXO_deployMine_base_F
	{
		submunitionAmmo = "BombCluster_03_UXO1_Ammo_F";
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_sub_F";
	};
	class BombCluster_03_UXO2_deployMine: UXO_deployMine_base_F
	{
		submunitionAmmo = "BombCluster_03_UXO2_Ammo_F";
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_sub_F";
	};
	class BombCluster_03_UXO3_deployMine: UXO_deployMine_base_F
	{
		submunitionAmmo = "BombCluster_03_UXO3_Ammo_F";
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_sub_F";
	};
	class BombCluster_03_UXO4_deployMine: UXO_deployMine_base_F
	{
		submunitionAmmo = "BombCluster_03_UXO4_Ammo_F";
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_sub_F";
	};
	class APERSMineDispenser_Ammo: PipeBombBase
	{
		defaultMagazine = "APERSMineDispenser_Mag";
		explosionEffects = "EffectMOPMS";
		craterEffects = "";
		directionalExplosion = 1;
		hit = 1;
		indirectHit = 1;
		indirectHitRange = 1;
		triggerWhenDestroyed = 0;
		model = "\A3\Weapons_F_Orange\Explosives\APERSmineDispenser";
		mineModelDisabled = "\A3\Weapons_F_Orange\Explosives\APERSmineDispenser";
		soundTrigger[] = {""};
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\MineDispenser\MineDispenser_Placement_01", 1.41254, 1, 35};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\MineDispenser\MineDispenser_Deactivation_01", 1.99526, 1, 35};
		soundHit1[] = {"A3\Sounds_F_Orange\arsenal\explosives\MineDispenser\MineDispenser_Launch_01", 1, 1, 100};
		soundHit2[] = {"A3\Sounds_F_Orange\arsenal\explosives\MineDispenser\MineDispenser_Launch_02", 1, 1, 100};
		soundHit3[] = {"A3\Sounds_F_Orange\arsenal\explosives\MineDispenser\MineDispenser_Launch_03", 1, 1, 100};
		soundHit4[] = {"A3\Sounds_F_Orange\arsenal\explosives\MineDispenser\MineDispenser_Launch_04", 1, 1, 100};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		submunitionAmmo[] = {"APERSMineDispenser_Deploy", 1};
		submunitionConeAngle[] = {70, 100};
		submunitionConeAngleHorizontal = 135;
		submunitionAutoleveling = 1;
		submunitionConeType[] = {"randomupcone", 14};
		submunitionInitSpeed = 13;
		triggerSpeedCoef[] = {0.5, 1.2};
	};
	class APERSMineDispenser_Ammo_Scripted: APERSMineDispenser_Ammo
	{
		triggerWhenDestroyed = 1;
	};
	class APERSMineDispenser_Deploy: ShotDeployBase
	{
		submunitionAmmo = "APERSMineDispenser_Mine_Ammo";
		model = "\A3\Weapons_F_Orange\Explosives\APERSmineDispenser_ap_f";
		mineFloating = 1000;
	};
	class APERSMineDispenser_Mine_Ammo: APERSMine_Range_Ammo
	{
		model = "\A3\Weapons_F_Orange\Explosives\APERSmineDispenser_AP";
		mineModelDisabled = "\A3\Weapons_F\empty.p3d";
		defaultMagazine = "";
		hit = 7;
		indirectHit = 7;
		indirectHitRange = 3;
		suppressionRadiusHit = 16;
		mineInconspicuousness = 60;
		mineCanBeReactivated = 0;
		mineFloating = 1000;
		submunitionYRandomizationAngle = 180;
		soundImpactSoft1[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_01", 0.354813, 1, 45};
		soundImpactSoft2[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_02", 0.354813, 1, 45};
		soundImpactSoft3[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_03", 0.354813, 1, 45};
		soundImpactSoft4[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_04", 0.354813, 1, 45};
		soundImpactSoft5[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_05", 0.354813, 1, 45};
		soundImpactSoft6[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_06", 0.354813, 1, 45};
		soundImpactSoft7[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_07", 0.354813, 1, 45};
		soundImpactSoft8[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_08", 0.354813, 1, 45};
		soundImpactSoft9[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_09", 0.354813, 1, 45};
		soundImpactSoft10[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_10", 0.354813, 1, 45};
		soundImpactHard1[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_01", 0.354813, 1, 65};
		soundImpactHard2[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_02", 0.354813, 1, 65};
		soundImpactHard3[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_03", 0.354813, 1, 65};
		soundImpactHard4[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_04", 0.354813, 1, 65};
		soundImpactHard5[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_05", 0.354813, 1, 65};
		soundImpactHard6[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_06", 0.354813, 1, 65};
		soundImpactHard7[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_07", 0.354813, 1, 65};
		soundImpactHard8[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_08", 0.354813, 1, 65};
		soundImpactHard9[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_09", 0.354813, 1, 65};
		soundImpactHard10[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_10", 0.354813, 1, 65};
		soundImpactIron1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_1", 0.354813, 1, 65};
		soundImpactIron2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_2", 0.354813, 1, 65};
		soundImpactIron3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_3", 0.354813, 1, 65};
		soundImpactIron4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_4", 0.354813, 1, 65};
		soundImpactIron5[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_5", 0.354813, 1, 65};
		soundImpactWoodExt1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_1", 0.354813, 1, 65};
		soundImpactWoodExt2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_2", 0.354813, 1, 65};
		soundImpactWoodExt3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_3", 0.354813, 1, 65};
		soundImpactWoodExt4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_4", 0.354813, 1, 65};
		soundImpactWater1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_1", 0.354813, 1, 65};
		soundImpactWater2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_2", 0.354813, 1, 65};
		soundImpactWater3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_3", 0.354813, 1, 65};
		soundImpactWater4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_3", 0.354813, 1, 65};
		impactGroundSoft[] = {"soundImpactSoft1", 0.1, "soundImpactSoft2", 0.1, "soundImpactSoft3", 0.1, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1, "soundImpactSoft8", 0.1, "soundImpactSoft9", 0.1, "soundImpactSoft10", 0.1};
		impactConcrete[] = {"soundImpactHard1", 0.1, "soundImpactHard2", 0.1, "soundImpactHard3", 0.1, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1, "soundImpactHard8", 0.1, "soundImpactHard9", 0.1, "soundImpactHard10", 0.1};
		impactGroundHard[] = {"soundImpactHard1", 0.1, "soundImpactHard2", 0.1, "soundImpactHard3", 0.1, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1, "soundImpactHard8", 0.1, "soundImpactHard9", 0.1, "soundImpactHard10", 0.1};
		impactFoliage[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.2, "soundImpactSoft5", 0.2};
		impactGlass[] = {"soundImpactHard1", 0.1, "soundImpactHard2", 0.1, "soundImpactHard3", 0.1, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1, "soundImpactHard8", 0.1, "soundImpactHard9", 0.1, "soundImpactHard10", 0.1};
		impactGlassArmored[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.2, "soundImpactHard5", 0.2};
		impactTyre[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.2, "soundImpactSoft5", 0.2};
		impactRubber[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.2, "soundImpactSoft5", 0.2};
		impactPlastic[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.2, "soundImpactSoft5", 0.2};
		impactDefault[] = {"soundImpactHard1", 0.1, "soundImpactHard2", 0.1, "soundImpactHard3", 0.1, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1, "soundImpactHard8", 0.1, "soundImpactHard9", 0.1, "soundImpactHard10", 0.1};
		impactWater[] = {"soundImpactWater1", 0.25, "soundImpactWater2", 0.25, "soundImpactWater3", 0.25, "soundImpactWater4", 0.25};
		impactIron[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
		impactMetal[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
		impactMetalplate[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
		impactArmor[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
		impactWood[] = {"soundImpactWoodExt1", 0.25, "soundImpactWoodExt2", 0.25, "soundImpactWoodExt3", 0.25, "soundImpactWoodExt4", 0.25};
		impactBuilding[] = {"soundImpactHard1", 0.1, "soundImpactHard2", 0.1, "soundImpactHard3", 0.1, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1, "soundImpactHard8", 0.1, "soundImpactHard9", 0.1, "soundImpactHard10", 0.1};
		soundActivation[] = {""};
		soundTrigger[] = {"A3\Sounds_F_Orange\arsenal\explosives\MineDispenser\MineDispenser_Mine_Trigger_01", 1.99526, 1, 20};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\MineDispenser\MineDispenser_Mine_Deactivate_01", 1.99526, 1, 20};
		SoundSetExplosion[] = {"MineDispenser_Mines_Exp_SoundSet"};
	};
	class APERSMineDispenser_Mine_Ammo_Scripted: APERSMineDispenser_Mine_Ammo
	{
		triggerWhenDestroyed = 1;
	};
	class TrainingMine_Ammo: APERSMine_Range_Ammo
	{
		model = "\A3\Weapons_F_Orange\Explosives\TrainingMine_F";
		mineModelDisabled = "\A3\Weapons_F\empty.p3d";
		defaultMagazine = "TrainingMine_Mag";
		hit = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		suppressionRadiusHit = 0;
		mineInconspicuousness = 30;
		mineCanBeReactivated = 0;
		minDamageForCamShakeHit = 1.55;
		explosionEffects = "TrainingMineEffect";
		CraterEffects = "IEDMineSmallLandCrater";
		class CamShakeExplode
		{
			power = 0;
			duration = 0.2;
			frequency = 20;
			distance = 0;
		};
		class CamShakeHit
		{
			power = 0;
			duration = 0.2;
			frequency = 20;
			distance = 1;
		};
		soundTrigger[] = {""};
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\TrainingMine\TrainingMine_Placement_01", 1.99526, 1, 20};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\TrainingMine\TrainingMine_Deactivate_01", 1.99526, 1, 20};
		SoundSetExplosion[] = {"TrainingMine_Exp_SoundSet", "TrainingMine_Flag_SoundSet"};
	};
	class UXO1_Ammo_Base_F: APERSMine_Range_Ammo
	{
		mineTrigger = "UXOTrigger1";
		hit = 7;
		indirectHit = 7;
		indirectHitRange = 1;
		mineInconspicuousness = 40;
		mineCanBeReactivated = 0;
		mineModelDisabled = "\A3\Weapons_F\empty.p3d";
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_01_UXO1_F";
		submunitionYRandomizationAngle = 60;
		icon = "iconExplosiveUXO";
		explosionType = "explosive";
		defaultMagazine = "";
		CraterEffects = "ClusterCraterEffects";
		ExplosionEffects = "ClusterExplosionEffects";
		soundActivation[] = {};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\clusterbomb\Uxo_Deactivate_01", 1.99526, 1, 20};
		soundTrigger[] = {"", 1, 1, 15};
		SoundSetExplosion[] = {"UXO_Exp_SoundSet", "UXO_Tail_SoundSet", "UXO_Debris_SoundSet", "UXO_Debris_Dust_Cloud_SoundSet"};
	};
	class UXO2_Ammo_Base_F: UXO1_Ammo_Base_F
	{
		mineTrigger = "UXOTrigger2";
		hit = 7;
		indirectHit = 7;
		indirectHitRange = 3;
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_01_UXO2_F";
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\clusterbomb\Uxo_Deactivate_01", 1.99526, 1, 20};
		soundTrigger[] = {"", 1, 1, 15};
	};
	class UXO3_Ammo_Base_F: UXO1_Ammo_Base_F
	{
		mineTrigger = "UXOTrigger3";
		hit = 35;
		indirectHit = 25;
		indirectHitRange = 8;
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_01_UXO3_F";
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\clusterbomb\Uxo_Deactivate_02", 1.99526, 1, 20};
		soundTrigger[] = {"", 1, 1, 15};
	};
	class UXO4_Ammo_Base_F: UXO1_Ammo_Base_F
	{
		mineTrigger = "UXOTrigger4";
		hit = 35;
		indirectHit = 25;
		indirectHitRange = 8;
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_01_UXO4_F";
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\clusterbomb\Uxo_Deactivate_03", 1.99526, 1, 20};
		soundTrigger[] = {"", 1, 1, 15};
	};
	class Mo_cluster_AP_UXO1_Ammo_F: UXO1_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_01_UXO1_F";
	};
	class Mo_cluster_AP_UXO2_Ammo_F: UXO2_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_01_UXO1_F";
	};
	class Mo_cluster_AP_UXO3_Ammo_F: UXO3_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_01_UXO1_F";
	};
	class Mo_cluster_AP_UXO4_Ammo_F: UXO4_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_01_UXO1_F";
	};
	class BombCluster_01_UXO1_Ammo_F: UXO1_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_01_UXO1_F";
	};
	class BombCluster_01_UXO2_Ammo_F: UXO2_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_01_UXO2_F";
	};
	class BombCluster_01_UXO3_Ammo_F: UXO3_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_01_UXO3_F";
	};
	class BombCluster_01_UXO4_Ammo_F: UXO4_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_01_UXO4_F";
	};
	class BombCluster_02_UXO1_Ammo_F: UXO1_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_02_UXO1_F";
	};
	class BombCluster_02_UXO2_Ammo_F: UXO2_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_02_UXO2_F";
	};
	class BombCluster_02_UXO3_Ammo_F: UXO3_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_02_UXO3_F";
	};
	class BombCluster_02_UXO4_Ammo_F: UXO4_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_02_UXO4_F";
	};
	class BombCluster_03_UXO1_Ammo_F: UXO1_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_03_UXO1_F";
	};
	class BombCluster_03_UXO2_Ammo_F: UXO2_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_03_UXO2_F";
	};
	class BombCluster_03_UXO3_Ammo_F: UXO3_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_03_UXO3_F";
	};
	class BombCluster_03_UXO4_Ammo_F: UXO4_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_03_UXO4_F";
	};
	class M_125mm_cannon_ATGM: ammo_Missile_CannonLaunchedBase
	{
		model = "\A3\Weapons_F_Tank\Launchers\Vorona\Vorona_missile_heat_fly";
		submunitionAmmo = "ammo_Penetrator_125mm_missile";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		warheadName = "TandemHEAT";
		hit = 150;
		indirectHit = 20;
		timeToLive = 20;
		thrustTime = 5;
		thrust = 60;
		maxSpeed = 350;
	};
	class M_120mm_cannon_ATGM: ammo_Missile_CannonLaunchedBase
	{
		model = "\A3\Weapons_F_Tank\Ammo\Missile_ATGM_01_fly_F";
		warheadName = "TandemHEAT";
		submunitionAmmo = "ammo_Penetrator_120mm_missile";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 150;
	};
	class M_120mm_cannon_ATGM_LG: M_120mm_cannon_ATGM
	{
		thrustTime = 6;
		thrust = 40;
		lockType = 0;
		autoSeekTarget = 1;
		lockSeekRadius = 100;
		manualControl = 0;
		missileLockCone = 180;
		missileKeepLockedCone = 180;
		missileLockMaxDistance = 8000;
		missileLockMinDistance = 100;
		missileLockMaxSpeed = 35;
		weaponLockSystem = "4 + 16";
		flightProfiles[] = {"TopDown"};
		class TopDown
		{
			ascendHeight = 250;
			descendDistance = 400;
			minDistance = 400;
			ascendAngle = 25;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 35;
						angleRangeHorizontal = 40;
						angleRangeVertical = 25;
					};
				};
			};
		};
	};
	class M_Vorona_HE: M_Vorona_HEAT
	{
		model = "\A3\Weapons_F_Tank\Launchers\Vorona\Vorona_missile_he_fly";
		warheadName = "HE";
		submunitionAmmo = "";
		submunitionDirectionType = "";
		submunitionInitSpeed = 0;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, 0};
		triggerOnImpact = 0;
		hit = 220;
		indirectHit = 45;
		indirectHitRange = 8;
		explosive = 0.8;
		cost = 30;
	};
	class M_SPG9_HEAT: RocketBase
	{
		model = "\a3\Weapons_F_Tank\Ammo\rocket_spg9.p3d";
		warheadName = "HE";
		submunitionAmmo = "ammo_Penetrator_SPG9";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 95;
		indirectHit = 16;
		indirectHitRange = 3.5;
		explosive = 0.8;
		cost = 30;
		aiAmmoUsageFlags = "128 + 512";
		allowAgainstInfantry = 0;
		simulationStep = 0.02;
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		timeToLive = 8;
		airfriction = 0.45;
		sideAirFriction = 0.01;
		maxSpeed = 700;
		typicalspeed = 700;
		initTime = 0.03;
		thrustTime = 0.45;
		thrust = 1050;
		fuseDistance = 50;
		effectsMissile = "missile2";
		whistleDist = 4;
		class CamShakeExplode
		{
			power = 11;
			duration = 1.4;
			frequency = 20;
			distance = 91.3296;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.78316;
			duration = 1.6;
			frequency = 20;
			distance = 61.9677;
		};
		class CamShakePlayerFire
		{
			power = 3;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class M_SPG9_HE: M_SPG9_HEAT
	{
		model = "\a3\Weapons_F_Tank\Ammo\rocket_spg9.p3d";
		warheadName = "HE";
		submunitionAmmo = "";
		submunitionDirectionType = "";
		submunitionInitSpeed = 0;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, 0};
		triggerOnImpact = 0;
		aiAmmoUsageFlags = "64 + 128";
		allowAgainstInfantry = 1;
		hit = 100;
		indirectHit = 100;
		indirectHitRange = 3.5;
		explosive = 0.8;
		cost = 30;
	};
	class M_127mm_Firefist_AT: MissileBase
	{
		model = "\A3\Weapons_F_Tank\Ammo\Missile_Firefist_AT_01_fly_F.p3d";
		warheadName = "TandemHEAT";
		submunitionAmmo = "ammo_Penetrator_Firefist";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 150;
		indirectHit = 25;
		indirectHitRange = 4;
		explosive = 0.8;
		cost = 500;
		aiAmmoUsageFlags = "128 + 512";
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "PylonBackEffects";
		muzzleEffect = "";
		initTime = 0.05;
		trackOversteer = 2;
		trackLead = 0.8;
		timeToLive = 35;
		maneuvrability = 10;
		simulationStep = 0.002;
		airFriction = 0.05;
		sideAirFriction = 0.8;
		maxSpeed = 200;
		typicalSpeed = 170;
		thrustTime = 6;
		thrust = 40;
		fuseDistance = 50;
		effectsMissile = "missile2";
		whistleDist = 4;
		airLock = 1;
		missileLockCone = 4;
		missileKeepLockedCone = 90;
		missileLockMaxDistance = 4500;
		missileLockMinDistance = 65;
		missileLockMaxSpeed = 41.6667;
		weaponLockSystem = "2 + 16";
		cmImmunity = 0.3;
		manualControl = 0;
		maxControlRange = 4500;
		flightProfiles[] = {"Direct", "TopDown"};
		class Direct
		{
		};
		class TopDown
		{
			ascendHeight = 160;
			descendDistance = 160;
			minDistance = 150;
			ascendAngle = 30;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 4500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 4500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 41.6667;
						angleRangeHorizontal = 3.3;
						angleRangeVertical = 2;
						maxTrackableATL = 50;
					};
				};
			};
		};
		class CamShakeExplode
		{
			power = 11;
			duration = 1.4;
			frequency = 20;
			distance = 91.3296;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.78316;
			duration = 1.6;
			frequency = 20;
			distance = 61.9677;
		};
		class CamShakePlayerFire
		{
			power = 3;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class M_70mm_SAAMI: MissileBase
	{
		model = "\A3\Weapons_F_Tank\Ammo\Missile_SAAMI_AA_01_fly_F.p3d";
		warheadName = "HE";
		hit = 80;
		indirectHit = 60;
		indirectHitRange = 6;
		proximityExplosionDistance = 10;
		maneuvrability = 15;
		simulationStep = 0.002;
		trackOversteer = 1;
		trackLead = 0.95;
		aiAmmoUsageFlags = 256;
		irLock = 1;
		cost = 1000;
		timeToLive = 15;
		airFriction = 0.145;
		sideAirFriction = 0.1;
		maxSpeed = 850;
		initTime = 0.25;
		thrustTime = 2.25;
		thrust = 380;
		fuseDistance = 50;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "missile3";
		airLock = 2;
		missileLockCone = 4;
		missileKeepLockedCone = 75;
		missileLockMaxDistance = 8000;
		missileLockMinDistance = 200;
		missileLockMaxSpeed = 250;
		weaponLockSystem = "2 + 16";
		cmImmunity = 0.9;
		class CamShakeExplode
		{
			power = 22;
			duration = 2;
			frequency = 20;
			distance = 147.905;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.78316;
			duration = 1.6;
			frequency = 20;
			distance = 61.9677;
		};
		class CamShakePlayerFire
		{
			power = 3;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class R_MRAAWS_HEAT_F: RocketBase
	{
		model = "\A3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HEAT_F.p3d";
		warheadName = "TandemHEAT";
		submunitionAmmo = "ammo_Penetrator_MRAAWS";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 150;
		indirectHit = 14;
		indirectHitRange = 3;
		explosive = 0.8;
		cost = 100;
		airFriction = 0.05;
		sideAirFriction = 0;
		maxSpeed = 350;
		initTime = 0;
		thrustTime = 0.1;
		thrust = 0.1;
		fuseDistance = 15;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "";
		effectsMissile = "EmptyEffect";
		simulationStep = 0.02;
		airLock = 0;
		aiAmmoUsageFlags = "128 + 512";
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 1;
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
		class CamShakeExplode
		{
			power = 11;
			duration = 1.4;
			frequency = 20;
			distance = 99.3296;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.11474;
			duration = 0.8;
			frequency = 20;
			distance = 35.7771;
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class R_MRAAWS_HE_F: R_MRAAWS_HEAT_F
	{
		warheadName = "HE";
		submunitionAmmo = "";
		submunitionDirectionType = "";
		submunitionInitSpeed = 0;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, 0};
		triggerOnImpact = 0;
		hit = 200;
		indirectHit = 50;
		indirectHitRange = 6;
		explosive = 1;
		model = "\A3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HE_F.p3d";
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "MortarExplosion";
		allowAgainstInfantry = 1;
		class CamShakeExplode
		{
			power = 22;
			duration = 2;
			frequency = 20;
			distance = 123.905;
		};
	};
	class R_MRAAWS_HEAT55_F: R_MRAAWS_HEAT_F
	{
		warheadName = "HEAT";
		submunitionAmmo = "ammo_Penetrator_MRAAWS_HEAT55";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 95;
		model = "\A3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HEAT55_F.p3d";
	};
	class B_20mm_AP: BulletBase
	{
		weaponType = "cannon";
		warheadName = "AP";
		hit = 60;
		indirectHit = 8;
		indirectHitRange = 0.2;
		caliber = 3.4;
		visibleFire = 32;
		audibleFire = 200;
		visibleFireTime = 3;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		cost = 35;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 2.5;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction = -0.00042;
		muzzleEffect = "";
		deflecting = 15;
		typicalSpeed = 1120;
		airlock = 1;
		aiAmmoUsageFlags = "128 + 512";
		allowAgainstInfantry = 1;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		class CamShakeExplode
		{
			power = 5;
			duration = 1;
			frequency = 20;
			distance = 56;
		};
		class CamShakeHit
		{
			power = 50;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.23607;
			duration = 1;
			frequency = 20;
			distance = 40;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class ammo_ShipCannon_120mm_HE: Sh_155mm_AMOS
	{
	};
	class ammo_ShipCannon_120mm_HE_guided: Sh_155mm_AMOS_guided
	{
	};
	class ammo_ShipCannon_120mm_HE_LG: Sh_155mm_AMOS_LG
	{
	};
	class ammo_ShipCannon_120mm_HE_cluster: Cluster_155mm_AMOS
	{
	};
	class ammo_ShipCannon_120mm_mine: Mine_155mm_AMOS_range
	{
	};
	class ammo_ShipCannon_120mm_smoke: Smoke_120mm_AMOS_White
	{
	};
	class ammo_ShipCannon_120mm_AT_mine: AT_Mine_155mm_AMOS_range
	{
	};
	class ammo_Missile_Cruise_01: ammo_Missile_CruiseBase
	{
		cameraViewAvailable = 1;
		model = "\A3\Weapons_F_Destroyer\Ammo\Missile_Cruise_01_Fly_F";
		proxyShape = "\A3\Weapons_F_Destroyer\Ammo\Missile_Cruise_01_Fly_F";
	};
	class ammo_Missile_Cruise_01_Cluster: ammo_Missile_Cruise_01
	{
		cameraViewAvailable = 1;
		model = "\A3\Weapons_F_Destroyer\Ammo\Missile_Cruise_01_Fly_F";
		proxyShape = "\A3\Weapons_F_Destroyer\Ammo\Missile_Cruise_01_Fly_F";
		triggerDistance = 250;
		triggerSpeedCoef[] = {0.5, 1};
		submunitionConeAngle = 19;
		submunitionConeType[] = {"randomcenter", 50};
		submunitionAmmo[] = {"Mo_cluster_AP", 0.93, "Mo_cluster_AP_UXO_deploy", 0.07};
	};
	class ammo_Missile_LongRangeAABase: MissileBase
	{
		model = "\A3\weapons_f\empty";
		proxyShape = "\A3\weapons_f\empty";
		hit = 400;
		indirectHit = 90;
		indirectHitRange = 25;
		warheadName = "HE";
		proximityExplosionDistance = 35;
		fuseDistance = 100;
		maneuvrability = 25;
		airFriction = 0.09;
		sideAirFriction = 0.18;
		trackOversteer = 0.7;
		trackLead = 1.06;
		timeToLive = 55;
		initTime = 0.1;
		thrustTime = 20;
		thrust = 450;
		maxSpeed = 850;
		simulationStep = 0.001;
		activeSensorAlwaysOn = 0;
		airLock = 2;
		lockType = 0;
		cmimmunity = 0.95;
		weaponLockSystem = "8 + 16";
		maxcontrolRange = 16000;
		missileLockCone = 70;
		missileKeepLockedCone = 90;
		missileLockMaxDistance = 16000;
		missileLockMinDistance = 1000;
		missileLockMaxSpeed = 777.778;
		autoSeekTarget = 1;
		flightProfiles[] = {"LoalDistance"};
		class LoalDistance
		{
			lockSeekDistanceFromParent = 2000;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 16000;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						groundNoiseDistanceCoef = 0.2;
						maxGroundNoiseDistance = 50;
						minSpeedThreshold = 30;
						maxSpeedThreshold = 40;
						minTrackableATL = 10;
						maxTrackableATL = 1e+010;
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 777.778;
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
					};
					class DataLinkSensorComponent: ActiveRadarSensorComponent
					{
						componentType = "DataLinkSensorComponent";
					};
				};
			};
		};
		cost = 500;
		aiAmmoUsageFlags = 256;
		effectsFire = "CannonFire";
		missileFireAnim = "rocket_fire_hide";
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissile = "FX_Missile_SAM_LongRange";
		muzzleEffect = "";
		lockedTargetSound[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan", 0.562341, 2.5};
		lockingTargetSound[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan", 0.562341, 1};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher", 0.891251, 1, 10};
		sounds[] = {"StandardSound"};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly", 1, 1.1, 700};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Titan", 1.41254, 1, 1100};
			soundBegin[] = {"begin1", 1};
			soundSetShot[] = {"Static_Launcher_Titan_ATAA_Shot_SoundSet", "Static_Launcher_Titan_ATAA_Tail_SoundSet"};
		};
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 1900};
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
		supersonicCrackFar[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_50meters", 0.316228, 1, 50};
		supersonicCrackNear[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_close", 0.398107, 1, 20};
	};
	class ammo_Missile_AntiRadiationBase: MissileBase
	{
		model = "\A3\weapons_f\empty";
		proxyShape = "\A3\weapons_f\empty";
		cost = 1500;
		aiAmmoUsageFlags = "128 + 512";
		hit = 2100;
		indirectHit = 85;
		indirectHitRange = 8;
		warheadName = "HE";
		airLock = 0;
		missileLockCone = 120;
		missileKeepLockedCone = 120;
		missileLockMaxDistance = 16000;
		missileLockMinDistance = 1000;
		missileLockMaxSpeed = 55;
		weaponLockSystem = 16;
		cmImmunity = 0.5;
		manualControl = 0;
		maxControlRange = 16000;
		autoSeekTarget = 1;
		lockSeekRadius = 0;
		flightProfiles[] = {"LoalDistance"};
		class LoalDistance
		{
			lockSeekDistanceFromParent = 1000;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class AntiRadiationSensorComponent: SensorTemplateAntiRadiation
					{
						class AirTarget
						{
							minRange = 16000;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 16000;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableATL = 100;
						maxTrackableSpeed = 60;
						angleRangeHorizontal = 60;
						angleRangeVertical = 180;
					};
				};
			};
		};
		initTime = 0;
		thrust = 240;
		thrustTime = 5;
		airFriction = 0.05;
		sideAirFriction = 0.1;
		maxSpeed = 828;
		maneuvrability = 27;
		simulationStep = 0.002;
		fuseDistance = 500;
		timeToLive = 40;
		trackLead = 1;
		trackOversteer = 1;
		whistleDist = 20;
		cameraViewAvailable = 0;
		craterEffects = "AAMissileCrater";
		effectsMissile = "missile3";
		explosionEffects = "AAMissileExplosion";
		effectsMissileInit = "PylonBackEffects";
		muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
		class CamShakeExplode
		{
			power = 22;
			duration = 2;
			frequency = 20;
			distance = 163.905;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.9907;
			duration = 1.8;
			frequency = 20;
			distance = 71.5542;
		};
		class CamShakePlayerFire
		{
			power = 4;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class ammo_Bomb_SmallDiameterBase: ammo_Bomb_LaserGuidedBase
	{
		hit = 1800;
		indirectHit = 85;
		indirectHitRange = 3;
		dangerRadiusHit = 1500;
		suppressionRadiusHit = 200;
		explosionSoundEffect = "DefaultExplosion";
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\expl_big_1", 2.51189, 1, 2400};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\expl_big_2", 2.51189, 1, 2400};
		soundHit3[] = {"A3\Sounds_F\weapons\Explosion\expl_big_3", 2.51189, 1, 2400};
		soundHit4[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_1", 2.51189, 1, 2400};
		soundHit5[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_2", 2.51189, 1, 2400};
		multiSoundHit[] = {"soundHit1", 0.2, "soundHit2", 0.2, "soundHit3", 0.2, "soundHit4", 0.2, "soundHit5", 0.2};
		craterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		model = "\A3\weapons_f\empty";
		proxyShape = "\A3\weapons_f\empty";
		cost = 1200;
		trackOversteer = 1;
		trackLead = 0.95;
		maneuvrability = 20;
		explosionTime = 2;
		fuseDistance = 35;
		whistleDist = 24;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class NVSensorComponent: SensorTemplateNV
					{
						class AirTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 30;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 30;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 55;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
				};
			};
		};
	};
	class ammo_Missile_mim145: ammo_Missile_LongRangeAABase
	{
		model = "\A3\Weapons_F_Sams\Ammo\Missile_SAM_03_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_Sams\Ammo\Missile_SAM_03_fly_F.p3d";
		missileLockCone = 120;
		missileKeepLockedCone = 120;
		class Components: Components
		{
			class SensorsManagerComponent: SensorsManagerComponent
			{
				class Components: Components
				{
					class ActiveRadarSensorComponent: ActiveRadarSensorComponent
					{
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
					};
				};
			};
		};
	};
	class ammo_Missile_s750: ammo_Missile_mim145
	{
		model = "\A3\Weapons_F_Sams\Ammo\Missile_SAM_04_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_Sams\Ammo\Missile_SAM_04_fly_F.p3d";
	};
	class ammo_Missile_HARM: ammo_Missile_AntiRadiationBase
	{
		model = "\A3\Weapons_F_Sams\Ammo\Missile_AR_01_F_fly.p3d";
		proxyShape = "\A3\Weapons_F_Sams\Ammo\Missile_AR_01_F.p3d";
	};
	class ammo_Bomb_SDB: ammo_Bomb_SmallDiameterBase
	{
		model = "\A3\Weapons_F_Sams\Ammo\Bomb_05_F_fly.p3d";
		proxyShape = "\A3\Weapons_F_Sams\Ammo\Bomb_05_F.p3d";
	};
	class ammo_Missile_KH58: ammo_Missile_AntiRadiationBase
	{
		model = "\A3\Weapons_F_Sams\Ammo\Missile_AR_02_F_fly.p3d";
		proxyShape = "\A3\Weapons_F_Sams\Ammo\Missile_AR_02_F.p3d";
	};
	class B_12Gauge_Pellets_Submunition_Deploy: BulletBase
	{
		soundSetBulletFly[] = {"bulletFlyBy_SoundSet"};
		soundSetSonicCrack[] = {"bulletSonicCrack_SoundSet", "bulletSonicCrackTail_SoundSet"};
		soundImpactDefault1[] = {"A3\Sounds_F\weapons\Grenades\Grenade_Roll", 2.51189, 1, 200};
		impactGroundSoft[] = {"soundImpactDefault1", 1};
		impactGroundHard[] = {"soundImpactDefault1", 1};
		impactMan[] = {"soundImpactDefault1", 1};
		impactIron[] = {"soundImpactDefault1", 1};
		impactArmor[] = {"soundImpactDefault1", 1};
		impactBuilding[] = {"soundImpactDefault1", 1};
		impactFoliage[] = {"soundImpactDefault1", 1};
		impactWood[] = {"soundImpactDefault1", 1};
		impactGlass[] = {"soundImpactDefault1", 1};
		impactGlassArmored[] = {"soundImpactDefault1", 1};
		impactConcrete[] = {"soundImpactDefault1", 1};
		impactTyre[] = {"soundImpactDefault1", 1};
		impactRubber[] = {"soundImpactDefault1", 1};
		impactPlastic[] = {"soundImpactDefault1", 1};
		impactDefault[] = {"soundImpactDefault1", 1};
		impactMetal[] = {"soundImpactDefault1", 1};
		impactMetalplate[] = {"soundImpactDefault1", 1};
		impactWater[] = {"soundImpactDefault1", 1};
		soundDefault1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01", 1.5, 1, 100};
		soundDefault2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_02", 1.5, 1, 100};
		soundDefault3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_03", 1.5, 1, 100};
		soundDefault4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_04", 1.5, 1, 100};
		soundDefault5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_05", 1.5, 1, 100};
		soundDefault6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_06", 1.5, 1, 100};
		soundDefault7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_07", 1.5, 1, 100};
		soundDefault8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_08", 1.5, 1, 100};
		soundGroundSoft1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_01", 1.5, 1, 100};
		soundGroundSoft2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_02", 1.5, 1, 100};
		soundGroundSoft3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_03", 1.5, 1, 100};
		soundGroundSoft4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_04", 1.5, 1, 100};
		soundGroundSoft5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_05", 1.5, 1, 100};
		soundGroundSoft6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_06", 1.5, 1, 100};
		soundGroundSoft7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_07", 1.5, 1, 100};
		soundGroundSoft8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_08", 1.5, 1, 100};
		soundGroundHard1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_01", 1.5, 1, 100};
		soundGroundHard2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_02", 1.5, 1, 100};
		soundGroundHard3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_03", 1.5, 1, 100};
		soundGroundHard4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_04", 1.5, 1, 100};
		soundGroundHard5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_05", 1.5, 1, 100};
		soundGroundHard6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_06", 1.5, 1, 100};
		soundGroundHard7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_07", 1.5, 1, 100};
		soundGroundHard8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_08", 1.5, 1, 100};
		soundGlass1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_01", 0.25, 1, 100};
		soundGlass2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_02", 0.25, 1, 100};
		soundGlass3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_03", 0.25, 1, 100};
		soundGlass4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_04", 0.25, 1, 100};
		soundGlass5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_05", 0.25, 1, 100};
		soundGlass6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_06", 0.25, 1, 100};
		soundGlass7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_07", 0.25, 1, 100};
		soundGlass8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_08", 0.25, 1, 100};
		soundGlassArmored1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_01", 0.25, 1, 100};
		soundGlassArmored2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_02", 0.25, 1, 100};
		soundGlassArmored3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_03", 0.25, 1, 100};
		soundGlassArmored4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_04", 0.25, 1, 100};
		soundGlassArmored5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_05", 0.25, 1, 100};
		soundGlassArmored6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_06", 0.25, 1, 100};
		soundGlassArmored7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_07", 0.25, 1, 100};
		soundGlassArmored8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_08", 0.25, 1, 100};
		soundMetal1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_01", 1.5, 1, 100};
		soundMetal2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_02", 1.5, 1, 100};
		soundMetal3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_03", 1.5, 1, 100};
		soundMetal4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_04", 1.5, 1, 100};
		soundMetal5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_05", 1.5, 1, 100};
		soundMetal6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_06", 1.5, 1, 100};
		soundMetal7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_07", 1.5, 1, 100};
		soundMetal8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_08", 1.5, 1, 100};
		soundVehiclePlate1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_01", 1, 1, 100};
		soundVehiclePlate2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_02", 1, 1, 100};
		soundVehiclePlate3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_03", 1, 1, 100};
		soundVehiclePlate4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_04", 1, 1, 100};
		soundVehiclePlate5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_05", 1, 1, 100};
		soundVehiclePlate6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_06", 1, 1, 100};
		soundVehiclePlate7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_07", 1, 1, 100};
		soundVehiclePlate8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_08", 1, 1, 100};
		soundWood1[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_01", 1.8, 1, 100};
		soundWood2[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_02", 1.8, 1, 100};
		soundWood3[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_03", 1.8, 1, 100};
		soundWood4[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_04", 1.8, 1, 100};
		soundWood5[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_05", 1.8, 1, 100};
		soundWood6[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_06", 1.8, 1, 100};
		soundWood7[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_07", 1.8, 1, 100};
		soundWood8[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_08", 1.8, 1, 100};
		soundWood9[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_09", 1.8, 0.9, 100};
		soundWood10[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_10", 1.8, 0.9, 100};
		soundWood11[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_11", 1.8, 0.9, 100};
		soundWood12[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_12", 1.8, 0.9, 100};
		soundWood13[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_13", 1.8, 0.9, 100};
		soundWood14[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_14", 1.8, 0.9, 100};
		soundWood15[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_15", 1.8, 0.9, 100};
		soundWood16[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_16", 1.8, 0.9, 100};
		soundHitBody1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_01", 1.5, 1, 100};
		soundHitBody2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_02", 1.5, 1, 100};
		soundHitBody3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_03", 1.5, 1, 100};
		soundHitBody4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_04", 1.5, 1, 100};
		soundHitBody5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_05", 1.5, 1, 100};
		soundHitBody6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_06", 1.5, 1, 100};
		soundHitBody7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_07", 1.5, 1, 100};
		soundHitBody8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_08", 1.5, 1, 100};
		soundHitBuilding1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_01", 1.5, 1, 100};
		soundHitBuilding2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_02", 1.5, 1, 100};
		soundHitBuilding3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_03", 1.5, 1, 100};
		soundHitBuilding4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_04", 1.5, 1, 100};
		soundHitBuilding5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_05", 1.5, 1, 100};
		soundHitBuilding6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_06", 1.5, 1, 100};
		soundHitBuilding7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_07", 1.5, 1, 100};
		soundHitBuilding8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_08", 1.5, 1, 100};
		soundHitFoliage1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_01", 1.3, 1, 100};
		soundHitFoliage2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_02", 1.3, 1, 100};
		soundHitFoliage3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_03", 1.3, 1, 100};
		soundHitFoliage4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_04", 1.3, 1, 100};
		soundHitFoliage5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_05", 1.3, 1, 100};
		soundHitFoliage6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_06", 1.3, 1, 100};
		soundHitFoliage7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_07", 1.3, 1, 100};
		soundHitFoliage8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_08", 1.3, 1, 100};
		soundPlastic1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_01", 1.2, 1, 100};
		soundPlastic2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_02", 1.2, 1, 100};
		soundPlastic3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_03", 1.2, 1, 100};
		soundPlastic4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_04", 1.2, 1, 100};
		soundPlastic5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_05", 1.2, 1, 100};
		soundPlastic6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_06", 1.2, 1, 100};
		soundPlastic7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_07", 1.2, 1, 100};
		soundPlastic8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_08", 1.2, 1, 100};
		soundConcrete1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01", 1.8, 1, 100};
		soundConcrete2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_02", 1.8, 1, 100};
		soundConcrete3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_03", 1.8, 1, 100};
		soundConcrete4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_04", 1.8, 1, 100};
		soundConcrete5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_05", 1.8, 1, 100};
		soundConcrete6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_06", 1.8, 1, 100};
		soundConcrete7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_07", 1.8, 1, 100};
		soundConcrete8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_08", 1.8, 1, 100};
		soundTyre1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_01", 1.5, 1, 100};
		soundTyre2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_02", 1.5, 1, 100};
		soundTyre3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_03", 1.5, 1, 100};
		soundTyre4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_04", 1.5, 1, 100};
		soundTyre5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_05", 1.5, 1, 100};
		soundTyre6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_06", 1.5, 1, 100};
		soundTyre7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_07", 1.5, 1, 100};
		soundTyre8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_08", 1.5, 1, 100};
		soundRubber1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_01", 1.2, 1, 100};
		soundRubber2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_02", 1.2, 1, 100};
		soundRubber3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_03", 1.2, 1, 100};
		soundRubber4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_04", 1.2, 1, 100};
		soundRubber5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_05", 1.2, 1, 100};
		soundRubber6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_06", 1.2, 1, 100};
		soundWater1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_01", 1.3, 1, 100};
		soundWater2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_02", 1.3, 1, 100};
		soundWater3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_03", 1.3, 1, 100};
		soundWater4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_04", 1.3, 1, 100};
		soundWater5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_05", 1.3, 1, 100};
		soundWater6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_06", 1.3, 1, 100};
		soundWater7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_07", 1.3, 1, 100};
		soundWater8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_08", 1.3, 1, 100};
		soundMetalInt1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_01", 1, 1, 100};
		soundMetalInt2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_02", 1, 1, 100};
		soundMetalInt3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_03", 1, 1, 100};
		soundMetalInt4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_04", 1, 1, 100};
		soundMetalInt5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_05", 1, 1, 100};
		soundMetalInt6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_06", 1, 1, 100};
		soundVehiclePlateInt1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_01", 1, 1, 100};
		soundVehiclePlateInt2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_02", 1, 1, 100};
		soundVehiclePlateInt3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_03", 1, 1, 100};
		soundVehiclePlateInt4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_04", 1, 1, 100};
		soundVehiclePlateInt5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_05", 1, 1, 100};
		soundVehiclePlateInt6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_06", 1, 1, 100};
		soundVehiclePlateInt7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_07", 1, 1, 100};
		soundVehiclePlateInt8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_08", 1, 1, 100};
		soundVehiclePlateInt9[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_09", 1, 1, 100};
		soundVehiclePlateInt10[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_10", 1, 1, 100};
		soundVehiclePlateInt11[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_11", 1, 1, 100};
		soundVehiclePlateInt12[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_12", 1, 1, 100};
		soundVehiclePlateInt13[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_13", 1, 1, 100};
		soundVehiclePlateInt14[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_14", 1, 1, 100};
		soundVehiclePlateInt15[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_15", 1, 1, 100};
		hitArmorInt[] = {"soundVehiclePlateInt1", 0.066, "soundVehiclePlateInt2", 0.066, "soundVehiclePlateInt3", 0.066, "soundVehiclePlateInt4", 0.066, "soundVehiclePlateInt5", 0.066, "soundVehiclePlateInt6", 0.066, "soundVehiclePlateInt7", 0.066, "soundVehiclePlateInt8", 0.066, "soundVehiclePlateInt9", 0.066, "soundVehiclePlateInt10", 0.066, "soundVehiclePlateInt11", 0.066, "soundVehiclePlateInt12", 0.066, "soundVehiclePlateInt13", 0.066, "soundVehiclePlateInt14", 0.066, "soundVehiclePlateInt15", 0.066};
		hitMetalInt[] = {"soundMetalInt1", 0.166, "soundMetalInt2", 0.166, "soundMetalInt3", 0.166, "soundMetalInt4", 0.166, "soundMetalInt5", 0.166, "soundMetalInt6", 0.166};
		hitGroundSoft[] = {"soundGroundSoft1", 0.2, "soundGroundSoft2", 0.2, "soundGroundSoft3", 0.1, "soundGroundSoft4", 0.1, "soundGroundSoft5", 0.1, "soundGroundSoft6", 0.1, "soundGroundSoft7", 0.1, "soundGroundSoft8", 0.1};
		hitGroundHard[] = {"soundGroundHard1", 0.2, "soundGroundHard2", 0.2, "soundGroundHard3", 0.1, "soundGroundHard4", 0.1, "soundGroundHard5", 0.1, "soundGroundHard6", 0.1, "soundGroundHard7", 0.1, "soundGroundHard8", 0.1};
		hitMan[] = {"soundHitBody1", 0.125, "soundHitBody2", 0.125, "soundHitBody3", 0.125, "soundHitBody4", 0.125, "soundHitBody5", 0.125, "soundHitBody6", 0.125, "soundHitBody7", 0.125, "soundHitBody8", 0.125};
		hitArmor[] = {"soundVehiclePlate1", 0.125, "soundVehiclePlate2", 0.125, "soundVehiclePlate3", 0.125, "soundVehiclePlate4", 0.125, "soundVehiclePlate5", 0.125, "soundVehiclePlate6", 0.125, "soundVehiclePlate7", 0.125, "soundVehiclePlate8", 0.125};
		hitBuilding[] = {"soundHitBuilding1", 0.2, "soundHitBuilding2", 0.2, "soundHitBuilding3", 0.1, "soundHitBuilding4", 0.1, "soundHitBuilding5", 0.1, "soundHitBuilding6", 0.1, "soundHitBuilding7", 0.1, "soundHitBuilding8", 0.1};
		hitFoliage[] = {"soundHitFoliage1", 0.125, "soundHitFoliage2", 0.125, "soundHitFoliage3", 0.125, "soundHitFoliage4", 0.125, "soundHitFoliage5", 0.125, "soundHitFoliage6", 0.125, "soundHitFoliage7", 0.125, "soundHitFoliage8", 0.125};
		hitWood[] = {"soundWood1", 0.0625, "soundWood2", 0.0625, "soundWood3", 0.0625, "soundWood4", 0.0625, "soundWood5", 0.0625, "soundWood6", 0.0625, "soundWood7", 0.0625, "soundWood8", 0.0625, "soundWood9", 0.0625, "soundWood10", 0.0625, "soundWood11", 0.0625, "soundWood12", 0.0625, "soundWood13", 0.0625, "soundWood14", 0.0625, "soundWood15", 0.0625, "soundWood16", 0.0625};
		hitGlass[] = {"soundGlass1", 0.125, "soundGlass2", 0.125, "soundGlass3", 0.125, "soundGlass4", 0.125, "soundGlass5", 0.125, "soundGlass6", 0.125, "soundGlass7", 0.125, "soundGlass8", 0.125};
		hitGlassArmored[] = {"soundGlassArmored1", 0.125, "soundGlassArmored2", 0.125, "soundGlassArmored3", 0.125, "soundGlassArmored4", 0.125, "soundGlassArmored5", 0.125, "soundGlassArmored6", 0.125, "soundGlassArmored7", 0.125, "soundGlassArmored8", 0.125};
		hitConcrete[] = {"soundConcrete1", 0.125, "soundConcrete2", 0.125, "soundConcrete3", 0.125, "soundConcrete4", 0.125, "soundConcrete5", 0.125, "soundConcrete6", 0.125, "soundConcrete7", 0.125, "soundConcrete8", 0.125};
		hitTyre[] = {"soundTyre1", 0.125, "soundTyre2", 0.125, "soundTyre3", 0.125, "soundTyre4", 0.125, "soundTyre5", 0.125, "soundTyre6", 0.125, "soundTyre7", 0.125, "soundTyre8", 0.125};
		hitRubber[] = {"soundRubber1", 0.125, "soundRubber2", 0.125, "soundRubber3", 0.125, "soundRubber4", 0.125, "soundRubber5", 0.125, "soundRubber6", 0.125};
		hitPlastic[] = {"soundPlastic1", 0.125, "soundPlastic2", 0.125, "soundPlastic3", 0.125, "soundPlastic4", 0.125, "soundPlastic5", 0.125, "soundPlastic6", 0.125, "soundPlastic7", 0.125, "soundPlastic8", 0.125};
		hitDefault[] = {"soundDefault1", 0.2, "soundDefault2", 0.2, "soundDefault3", 0.1, "soundDefault4", 0.1, "soundDefault5", 0.1, "soundDefault6", 0.1, "soundDefault7", 0.1, "soundDefault8", 0.1};
		hitMetal[] = {"soundMetal1", 0.125, "soundMetal2", 0.125, "soundMetal3", 0.125, "soundMetal4", 0.125, "soundMetal5", 0.125, "soundMetal6", 0.125, "soundMetal7", 0.125, "soundMetal8", 0.125};
		hitMetalplate[] = {"soundVehiclePlate1", 0.125, "soundVehiclePlate2", 0.125, "soundVehiclePlate3", 0.125, "soundVehiclePlate4", 0.125, "soundVehiclePlate5", 0.125, "soundVehiclePlate6", 0.125, "soundVehiclePlate7", 0.125, "soundVehiclePlate8", 0.125};
		hitWater[] = {"soundWater1", 0.125, "soundWater2", 0.125, "soundWater3", 0.125, "soundWater4", 0.125, "soundWater5", 0.125, "soundWater6", 0.125, "soundWater7", 0.125, "soundWater8", 0.125};
		bulletFly1[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby01", 1.9, 1, 100};
		bulletFly2[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby02", 1.9, 1, 100};
		bulletFly3[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby03", 1.9, 1, 100};
		bulletFly4[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby04", 1.9, 1, 100};
		bulletFly5[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby05", 1.9, 1, 100};
		bulletFly6[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby06", 1.9, 1, 100};
		bulletFly7[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby07", 1.9, 1, 100};
		bulletFly8[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby08", 1.9, 1, 100};
		bulletFly9[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby09", 1.9, 1, 100};
		bulletFly10[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby10", 1.9, 1, 100};
		bulletFly11[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby11", 1.9, 1, 100};
		bulletFly12[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby12", 1.9, 1, 100};
		bulletFly[] = {"bulletFly1", 0.083, "bulletFly2", 0.083, "bulletFly3", 0.083, "bulletFly4", 0.083, "bulletFly5", 0.083, "bulletFly6", 0.083, "bulletFly7", 0.083, "bulletFly8", 0.083, "bulletFly9", 0.083, "bulletFly10", 0.083, "bulletFly11", 0.083, "bulletFly12", 0.083};
		airFriction = -0.0067;
		hit = 6;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalSpeed = 360;
		deflecting = 35;
	};
	class B_12Gauge_Slug_NoCartridge: B_12Gauge_Slug
	{
		model = "\A3\weapons_f\empty";
		cartridge = "";
		simulation = "shotSubmunitions";
	};
	class B_12Gauge_HD_Pellets_Submunition: B_12Gauge_Pellets_Submunition
	{
		submunitionConeAngle = 1.3;
	};
	class ProbingBeam_01_F: BulletBase
	{
		weaponType = "cannon";
		hit = 0;
		indirectHit = 0;
		timeToLive = 0.15;
		simulationStep = 0.001;
		caliber = 0;
		class CamShakeHit
		{
			power = 0;
			duration = 0.2;
			frequency = 20;
			distance = 1;
		};
		class HitEffects
		{
			Hit_Foliage_green = "ProbingBeam_Foliage_green";
			Hit_Foliage_Dead = "ProbingBeam_Foliage_Dead";
			Hit_Foliage_Green_big = "ProbingBeam_Foliage_Green_big";
			Hit_Foliage_Palm = "ProbingBeam_Foliage_Palm";
			Hit_Foliage_Pine = "ProbingBeam_Foliage_Pine";
			hitFoliage = "ProbingBeam_Foliage";
			hitGlass = "ProbingBeam_Glass";
			hitGlassArmored = "ProbingBeam_GlassArmored";
			hitWood = "ProbingBeam_Wood";
			hitHay = "ProbingBeam_Wood";
			hitMetal = "ProbingBeam_Metal";
			hitMetalPlate = "ProbingBeam_MetalPlate";
			hitBuilding = "ProbingBeam_Building";
			hitPlastic = "ProbingBeam_Plastic";
			hitRubber = "ProbingBeam_Rubber";
			hitTyre = "ProbingBeam_Tyre";
			hitConcrete = "ProbingBeam_Concrete";
			hitMan = "ProbingBeam_Man";
			hitGround = "ProbingBeam_GroundSoft";
			hitGroundSoft = "ProbingBeam_GroundSoft";
			hitGroundRed = "ProbingBeam_GroundRed";
			hitGroundHard = "ProbingBeam_GroundHard";
			hitWater = "ProbingBeam_Water";
			hitVirtual = "ProbingBeam_Virtual";
			hitAlienArmour = "ProbingBeam_AlienArmour";
			hitAlienWeakPoint_01 = "ProbingBeam_AlienWeakPoint";
			hitAlienMatterBall_01 = "ProbingBeam_AlienArmour";
			hitProbeCoreShell = "ProbingBeam_AlienWeakPoint";
			hitProbeTipShell = "ProbingBeam_AlienWeakPoint";
			hitProbeTipCore = "ProbingBeam_AlienWeakPoint";
		};
		craterEffects = "";
		craterWaterEffects = "";
		explosionEffects = "";
		soundSetBulletFly[] = {};
		soundSetSonicCrack[] = {};
		soundFakeFall[] = {};
		hitGroundSoft[] = {};
		hitGroundHard[] = {};
		hitMan[] = {};
		hitArmor[] = {};
		hitIron[] = {};
		hitBuilding[] = {};
		hitFoliage[] = {};
		hitWood[] = {};
		hitGlass[] = {};
		hitGlassArmored[] = {};
		hitConcrete[] = {};
		hitRubber[] = {};
		hitPlastic[] = {};
		hitDefault[] = {};
		hitMetal[] = {};
		hitMetalplate[] = {};
		hitBell[] = {};
		hitTyre[] = {};
		hitWater[] = {};
		impactGroundSoft[] = {};
		impactGroundHard[] = {};
		impactMan[] = {};
		impactIron[] = {};
		impactArmor[] = {};
		impactBuilding[] = {};
		impactFoliage[] = {};
		impactWood[] = {};
		impactGlass[] = {};
		impactGlassArmored[] = {};
		impactConcrete[] = {};
		impactRubber[] = {};
		impactPlastic[] = {};
		impactDefault[] = {};
		impactMetal[] = {};
		impactMetalplate[] = {};
		impactTyre[] = {};
		impactWater[] = {};
		hitArmorInt[] = {};
		hitMetalInt[] = {};
		hitMetalplateInt[] = {};
	};
	class ProbingBeam_02_F: ProbingBeam_01_F
	{
		weaponType = "mgun";
		hit = 4;
		indirectHit = 0;
		timeToLive = 0.007;
		simulationStep = 0.001;
		class HitEffects
		{
			Hit_Foliage_green = "ProbingBeam_Foliage_green";
			Hit_Foliage_Dead = "ProbingBeam_Foliage_Dead";
			Hit_Foliage_Green_big = "ProbingBeam_Foliage_Green_big";
			Hit_Foliage_Palm = "ProbingBeam_Foliage_Palm";
			Hit_Foliage_Pine = "ProbingBeam_Foliage_Pine";
			hitFoliage = "ProbingBeam_Foliage";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitHay = "ImpactHay";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitPlastic = "ProbingBeam_Plastic";
			hitRubber = "ProbingBeam_Rubber";
			hitTyre = "ProbingBeam_Tyre";
			hitConcrete = "ImpactConcrete";
			hitMan = "ProbingBeam_Man";
			hitGround = "ProbingBeam_GroundSoft";
			hitGroundSoft = "ImpactEffectsSmall";
			hitGroundRed = "ImpactEffectsRed";
			hitGroundHard = "ImpactEffectsHardGround";
			hitWater = "ProbingBeam_Water";
			hitVirtual = "ProbingBeam_Virtual";
			hitProbeTipShell = "ImpactMetal";
			hitAlienArmour = "ProbingBeam_AlienArmour";
			hitAlienWeakPoint_01 = "ProbingBeam_AlienWeakPoint";
			hitAlienMatterBall_01 = "ProbingBeam_AlienArmour";
			hitProbeCoreShell = "ProbingBeam_AlienWeakPoint";
			hitProbeTipCore = "ProbingBeam_AlienWeakPoint";
		};
		hitArmorInt[] = {"soundhitMetal1", 0.25, "soundhitMetal2", 0.25, "soundhitMetal3", 0.25, "soundhitMetal4", 0.25};
		hitMetalInt[] = {"soundhitMetal1", 0.25, "soundhitMetal2", 0.25, "soundhitMetal3", 0.25, "soundhitMetal4", 0.25};
		hitGroundSoft[] = {"soundhitGroundSoft1", 0.25, "soundhitGroundSoft2", 0.25, "soundhitGroundSoft3", 0.25, "soundhitGroundSoft4", 0.25};
		hitGroundHard[] = {"soundhitGroundHard1", 0.25, "soundhitGroundHard2", 0.25, "soundhitGroundHard3", 0.25, "soundhitGroundHard4", 0.25};
		hitArmor[] = {"soundhitGroundHard1", 0.25, "soundhitGroundHard2", 0.25, "soundhitGroundHard3", 0.25, "soundhitGroundHard4", 0.25};
		hitBuilding[] = {"soundhitGroundHard1", 0.25, "soundhitGroundHard2", 0.25, "soundhitGroundHard3", 0.25, "soundhitGroundHard4", 0.25};
		hitWood[] = {"soundhitGroundHard1", 0.25, "soundhitGroundHard2", 0.25, "soundhitGroundHard3", 0.25, "soundhitGroundHard4", 0.25};
		hitGlass[] = {"soundhitGlass1", 0.25, "soundhitGlass2", 0.25, "soundhitGlass3", 0.25, "soundhitGlass4", 0.25};
		hitGlassArmored[] = {"soundhitGlass1", 0.25, "soundhitGlass2", 0.25, "soundhitGlass3", 0.25, "soundhitGlass4", 0.25};
		hitConcrete[] = {"soundhitGroundHard1", 0.25, "soundhitGroundHard2", 0.25, "soundhitGroundHard3", 0.25, "soundhitGroundHard4", 0.25};
		hitTyre[] = {"soundhitRubber1", 0.25, "soundhitRubber2", 0.25, "soundhitRubber3", 0.25, "soundhitRubber4", 0.25};
		hitRubber[] = {"soundhitRubber1", 0.25, "soundhitRubber2", 0.25, "soundhitRubber3", 0.25, "soundhitRubber4", 0.25};
		hitPlastic[] = {"soundhitPlastic1", 0.25, "soundhitPlastic2", 0.25, "soundhitPlastic3", 0.25, "soundhitPlastic4", 0.25};
		hitDefault[] = {"soundDefault1", 0.2, "soundDefault2", 0.2, "soundDefault3", 0.1, "soundDefault4", 0.1, "soundDefault5", 0.1, "soundDefault6", 0.1, "soundDefault7", 0.1, "soundDefault8", 0.1};
		hitMetal[] = {"soundhitGroundHard1", 0.25, "soundhitGroundHard2", 0.25, "soundhitGroundHard3", 0.25, "soundhitGroundHard4", 0.25};
		hitMetalplate[] = {"soundhitMetal1", 0.25, "soundhitMetal2", 0.25, "soundhitMetal3", 0.25, "soundhitMetal4", 0.25};
		hitWater[] = {"soundWater1", 0.125, "soundWater2", 0.125, "soundWater3", 0.125, "soundWater4", 0.125, "soundWater5", 0.125, "soundWater6", 0.125, "soundWater7", 0.125, "soundWater8", 0.125};
		hitMan[] = {"soundhitMan1", 0.2, "soundhitMan2", 0.2, "soundhitMan3", 0.2, "soundhitMan4", 0.2, "soundhitMan5", 0.2};
		soundhitMan1[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Organic_01", 1.9, 1, 30};
		soundhitMan2[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Organic_02", 1.9, 1, 30};
		soundhitMan3[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Organic_03", 1.9, 1, 30};
		soundhitMan4[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Organic_04", 1.9, 1, 30};
		soundhitMan5[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Organic_05", 1.9, 1, 30};
		soundhitGroundHard1[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Hard_01", 1.5, 1, 30};
		soundhitGroundHard2[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Hard_02", 1.5, 1, 30};
		soundhitGroundHard3[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Hard_03", 1.5, 1, 30};
		soundhitGroundHard4[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Hard_04", 1.5, 1, 30};
		soundhitGroundSoft1[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Soft_01", 1, 1, 30};
		soundhitGroundSoft2[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Soft_02", 1, 1, 30};
		soundhitGroundSoft3[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Soft_03", 1, 1, 30};
		soundhitGroundSoft4[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Soft_03", 1, 0.8, 30};
		soundhitGlass1[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Glass_01", 1.5, 1, 30};
		soundhitGlass2[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Glass_02", 1.5, 1, 30};
		soundhitGlass3[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Glass_03", 1.5, 1, 30};
		soundhitGlass4[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Glass_04", 1.5, 1, 30};
		soundhitRubber1[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Rubber_01", 1.5, 1, 30};
		soundhitRubber2[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Rubber_02", 1.5, 1, 30};
		soundhitRubber3[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Rubber_03", 1.5, 1, 30};
		soundhitRubber4[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Rubber_04", 1.5, 1, 30};
		soundhitMetal1[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Metal_01", 1.5, 1, 30};
		soundhitMetal2[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Metal_02", 1.5, 1, 30};
		soundhitMetal3[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Metal_03", 1.5, 1, 30};
		soundhitMetal4[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Metal_04", 1.5, 1, 30};
		soundhitPlastic1[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Plastic_01", 1.5, 1, 30};
		soundhitPlastic2[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Plastic_02", 1.5, 1, 30};
		soundhitPlastic3[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Plastic_03", 1.5, 1, 30};
		soundhitPlastic4[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Plastic_04", 1.5, 1, 30};
	};
	class rhs_ammo_recoil: SubmunitionBullet
	{
		model = "\A3\Weapons_f\empty";
		tracerScale = 0;
		tracerStartTime = 0;
		tracerEndTime = 0;
		muzzleEffect = "";
		explosive = 0;
		caliber = 0;
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalspeed = 1000;
		submunitionAmmo = "";
		triggerTime = 0.001;
		timeToLive = 0.1;
		class HitEffects
		{
		};
	};
	class rhs_ammo_902a: SmokeLauncherAmmo
	{
	};
	class rhs_ammo_3d17: SmokeLauncherAmmo
	{
		rhs_smokeShell = "rhs_ammo_3d17_shell";
		muzzleEffect = "";
		weaponLockSystem = "1 + 2 + 4";
		simulation = "shotCM";
		AIAmmoUsageFlags = "4 + 8";
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		class EventHandlers
		{
			class RHS_CM
			{
				fired = "_this call RHS_fnc_effectFiredSmokeLauncher";
			};
		};
	};
	class rhs_ammo_3d17_902B: rhs_ammo_3d17
	{
		rhs_smokeShell = "rhs_ammo_3d17_shell_902B";
	};
	class rhs_ammo_smokegen: SmokeLauncherAmmo
	{
		class EventHandlers
		{
			class RHS_CM
			{
				fired = "_this call RHS_fnc_effectFiredSmokeGenerator";
			};
		};
		muzzleEffect = "";
		weaponLockSystem = "2";
		simulation = "shotCM";
		AIAmmoUsageFlags = "4";
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
	};
	class rhs_ammo_dazzler: rhs_ammo_smokegen
	{
		muzzleEffect = "";
		class EventHandlers
		{
			class RHS_CM
			{
				fired = "_this call RHS_fnc_effectFiredDazzler";
			};
		};
	};
	class rhs_ammo_3d17_shell: Grenade
	{
		simulation = "shotShell";
		AIAmmoUsageFlags = "4";
		hit = 3;
		indirectHit = 3;
		indirectHitRange = 3;
		suppressionRadiusHit = 60;
		typicalspeed = 50;
		airFriction = -0.012;
		deflecting = 30;
		model = "\rhsafrf\addons\rhs_heavyweapons\3d17\rhs_smokecan";
		visibleFire = 0.5;
		audibleFire = 0.05;
		visibleFireTime = 1;
		fuseDistance = 0;
		explosionEffects = "RHS_3D17Effect";
		CraterEffects = "";
		explosionTime = 0.7;
		timeToLive = 1;
		coefGravity = 2.5;
	};
	class rhs_ammo_3d17_shell_902B: rhs_ammo_3d17_shell
	{
		explosionEffects = "RHS_3D17Effect_902B";
	};
	class RHS_Ammo_DIRCM_Vitebsk: BulletBase
	{
		cost = 1;
		visibleFire = 0;
		audibleFire = 0;
		hit = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		timeToLive = 2.1;
		thrustTime = 2;
		airFriction = -0.01;
		simulation = "shotCM";
		weaponLockSystem = "2 + 8";
		model = "\A3\weapons_f\empty";
		maxControlRange = -1;
		initTime = 0;
		aiAmmoUsageFlags = 8;
		soundFly[] = {"A3\sounds_f\dummysound", 0.1, 1};
		supersonicCrackNear[] = {"A3\sounds_f\dummysound", 0, 1, 0};
		supersonicCrackFar[] = {"A3\sounds_f\dummysound", 0, 1, 0};
		effectsSmoke = "EmptyEffect";
	};
	class rhs_CMflare_Ammo: CMflareAmmo
	{
		effectsSmoke = "rhs_CounterMeasureFlare";
	};
	class rhs_Laserbeam: Laserbeam
	{
		hit = 0;
		cost = 1e+006;
	};
	class rhs_laserbeam_fcs: BulletBase
	{
		simulation = "shotSubmunitions";
		hit = 145;
		indirectHit = 1;
		indirectHitRange = 0;
		cost = 1;
		airFriction = -1e-008;
		triggerTime = 0.001;
		triggerSpeedCoef = 0.001;
		submunitionConeAngle = 0;
		submunitionCount = 1;
		submunitionAmmo = "BulletBase";
		airLock = 1;
		aiAmmoUsageFlags = "64+32+128+256+512";
	};
	class rhs_fakeAmmo: BulletBase
	{
		model = "\A3\Weapons_f\empty";
		tracerScale = 0;
		tracerStartTime = 0;
		tracerEndTime = 0;
		whistleOnFire = 0;
		whistleDist = 0;
		muzzleEffect = "";
		explosive = 0;
		caliber = 0;
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalspeed = 1;
		timeToLive = 0.002;
		simulationStep = 0.001;
	};
	class rhs_ammo_spall: BulletBase
	{
		caliber = 10;
		hit = 20;
		indirectHit = 0;
		indirectHitRange = 0.15;
		typicalSpeed = 50;
		airfriction = -1e-005;
		deflecting = 90;
		deflectionSlowDown = 2;
		deflectionDirDistribution = 1;
		penetrationDirDistribution = 1;
		timeToLive = 0.5;
	};
	class rhs_ammo_thermobaric_wave: rhs_ammo_spall
	{
		caliber = 6.66667;
		hit = 10;
		indirectHit = 20;
		indirectHitRange = 2.15;
		explosive = 0.8;
		timeToLive = 0.3;
	};
	class rhs_ammo_he_fragments: BulletBase
	{
		caliber = 0.888889;
		hit = 20;
		indirectHit = 0;
		indirectHitRange = 0.15;
		typicalSpeed = 1500;
		deflecting = 9;
		timeToLive = 0.5;
	};
	class rhs_ammo_br_base: Sh_125mm_APFSDS
	{
		hit = 320;
		indirectHit = 20;
		indirectHitRange = 1;
		typicalSpeed = 895;
		cost = 500;
		deflecting = 15;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class rhs_ammo_br412: rhs_ammo_br_base
	{
	};
	class rhs_ammo_bm_base: Sh_125mm_APFSDS
	{
		cost = 500;
		hit = 250;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalspeed = 1430;
		explosive = 0;
		deflecting = 10;
		caliber = 33.33;
		timeToLive = 15;
		whistleOnFire = 1;
		whistleDist = 14;
		muzzleEffect = "";
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class rhs_ammo_3bm_base: rhs_ammo_bm_base
	{
		indirectHit = 40;
		indirectHitRange = 0.5;
		typicalSpeed = 1700;
		simulationStep = 0.01;
		effectFly = "RHS_125mm_Sabot_Eject";
	};
	class rhs_ammo_base_penetrator: rhs_ammo_3bm_base
	{
		caliber = 6.66667;
		warheadName = "HEAT";
		hit = 290;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		typicalSpeed = 1000;
		deflecting = 0;
		deflectionDirDistribution = 0;
		penetrationDirDistribution = 0;
		timeToLive = 0.01;
		simulationStep = 0.0005;
		airFriction = -0.5;
		whistleOnFire = 0;
		whistleDist = 0;
		effectFly = "";
		submunitionConeType[] = {"randomcenter", 30};
		submunitionAmmo = "rhs_ammo_spall";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.4};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 200;
		deleteParentWhenTriggered = 0;
		triggerTime = 0.003;
		model = "\A3\Weapons_f\empty";
	};
	class rhs_ammo_cluster_penetrator: Sh_125mm_APFSDS
	{
		submunitionConeType[] = {"randomcenter", 4};
		submunitionInitialOffset[] = {0, 0, -0.4};
		caliber = 6.66667;
		warheadName = "HEAT";
		hit = 150;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		deflecting = 0;
		typicalSpeed = 1000;
		simulationStep = 0.0005;
		airFriction = -0.5;
		whistleOnFire = 0;
		whistleDist = 0;
		submunitionAmmo = "rhs_ammo_spall";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 200;
		deleteParentWhenTriggered = 0;
		triggerTime = 0.003;
		model = "\A3\Weapons_f\empty";
	};
	class rhs_ammo_ap_penetrator: Sh_125mm_APFSDS
	{
		submunitionConeType[] = {"randomcenter", 30};
		submunitionInitialOffset[] = {0, 0, -0.4};
		soundVehiclePlateInt1[] = {"rhsusf\addons\rhsusf_c_heavyweapons\sounds\Inhit.wav", 4.23872, 1, 100};
		hitArmorInt[] = {"soundVehiclePlateInt1", 1};
		hitDefaultInt[] = {"soundVehiclePlateInt1", 1};
		hitMetalInt[] = {"soundVehiclePlateInt1", 1};
		hitMetalPlateInt[] = {"soundVehiclePlateInt1", 1};
		multiSoundHitInt[] = {"soundVehiclePlateInt1", 1};
		SoundSetExplosion[] = {};
		warheadName = "AP";
		model = "\A3\Weapons_f\empty";
		indirectHit = 11;
		indirectHitRange = 0.35;
		timetolive = 5;
		simulationStep = 0.0005;
		airFriction = -0.08;
		submunitionAmmo = "rhs_ammo_spall";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 200;
		deleteParentWhenTriggered = 0;
		triggerTime = 0.002;
	};
	class rhs_ammo_bm25: rhs_ammo_bm_base
	{
		hit = 520;
		typicalspeed = 1425;
		caliber = 16.317;
	};
	class rhs_ammo_bm8: rhs_ammo_bm_base
	{
		hit = 470;
		typicalspeed = 1425;
		caliber = 12.2497;
	};
	class rhs_ammo_bm4: rhs_ammo_bm_base
	{
		hit = 520;
		typicalspeed = 1650;
		caliber = 10.8761;
	};
	class rhs_ammo_bm23: rhs_ammo_bm_base
	{
		hit = 645;
		typicalspeed = 1650;
		caliber = 12.1212;
	};
	class rhs_ammo_3bm9: rhs_ammo_3bm_base
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_3bm9_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bm9_penetrator: rhs_ammo_ap_penetrator
	{
		hit = 190;
		typicalSpeed = 1800;
		caliber = 9.07407;
	};
	class rhs_ammo_3bm12: rhs_ammo_3bm_base
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_3bm12_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bm12_penetrator: rhs_ammo_ap_penetrator
	{
		hit = 215;
		typicalSpeed = 1800;
		caliber = 10.3704;
	};
	class rhs_ammo_3bm15: rhs_ammo_3bm_base
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_3bm15_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bm15_penetrator: rhs_ammo_ap_penetrator
	{
		hit = 240;
		typicalSpeed = 1780;
		caliber = 11.6105;
	};
	class rhs_ammo_3bm17: rhs_ammo_3bm_base
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_3bm17_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bm17_penetrator: rhs_ammo_ap_penetrator
	{
		hit = 230;
		typicalSpeed = 1760;
		caliber = 10.9848;
	};
	class rhs_ammo_3bm22: rhs_ammo_3bm_base
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_3bm22_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bm22_penetrator: rhs_ammo_ap_penetrator
	{
		hit = 200;
		typicalSpeed = 1760;
		caliber = 14.3939;
	};
	class rhs_ammo_3bm26: rhs_ammo_3bm_base
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_3bm26_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bm26_penetrator: rhs_ammo_ap_penetrator
	{
		hit = 230;
		typicalSpeed = 1720;
		caliber = 15.8915;
	};
	class rhs_ammo_3bm29: rhs_ammo_3bm_base
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_3bm29_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bm29_penetrator: rhs_ammo_ap_penetrator
	{
		hit = 230;
		caliber = 16.8627;
	};
	class rhs_ammo_3bm32: rhs_ammo_3bm_base
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_3bm32_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bm32_penetrator: rhs_ammo_ap_penetrator
	{
		hit = 230;
		caliber = 21.1765;
	};
	class rhs_ammo_3bm42: rhs_ammo_3bm_base
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_3bm42_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bm42_penetrator: rhs_ammo_ap_penetrator
	{
		hit = 250;
		caliber = 19.2157;
	};
	class rhs_ammo_3bm42m: rhs_ammo_3bm_base
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_3bm42m_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bm42m_penetrator: rhs_ammo_ap_penetrator
	{
		hit = 270;
		typicalSpeed = 1750;
		caliber = 24.7619;
		airFriction = -2.5e-005;
	};
	class rhs_ammo_3bm46: rhs_ammo_3bm_base
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_3bm46_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bm46_penetrator: rhs_ammo_ap_penetrator
	{
		hit = 300;
		typicalSpeed = 1700;
		caliber = 26.7059;
		airFriction = -3.2e-005;
	};
	class rhs_ammo_3bm59: rhs_ammo_3bm_base
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_3bm59_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bm59_penetrator: rhs_ammo_ap_penetrator
	{
		hit = 300;
		typicalSpeed = 1700;
		caliber = 30.5882;
		airFriction = -3.2e-005;
	};
	class rhs_ammo_3bm60: rhs_ammo_3bm_base
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_3bm60_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bm60_penetrator: rhs_ammo_ap_penetrator
	{
		hit = 300;
		typicalSpeed = 1700;
		caliber = 27.0588;
		airFriction = -3.2e-005;
	};
	class rhs_ammo_3bm69: rhs_ammo_3bm_base
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_3bm69_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bm69_penetrator: rhs_ammo_ap_penetrator
	{
		hit = 300;
		typicalSpeed = 2050;
		caliber = 33.6842;
		airFriction = -3.2e-005;
	};
	class rhs_ammo_3bm70: rhs_ammo_3bm_base
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_3bm70_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bm70_penetrator: rhs_ammo_ap_penetrator
	{
		hit = 300;
		typicalSpeed = 2050;
		caliber = 31.2281;
		airFriction = -3.2e-005;
	};
	class rhs_ammo_bk_base: rhs_ammo_bm_base
	{
		rhs_ce_round = 1;
		explosive = 0.4;
		caliber = 0.5;
		cost = 260;
		hit = 200;
		indirectHit = 15;
		indirectHitRange = 2;
		typicalspeed = 900;
		airLock = 1;
	};
	class rhs_ammo_bk4: rhs_ammo_bk_base
	{
		typicalspeed = 1000;
	};
	class rhs_ammo_bk5: rhs_ammo_bk_base
	{
		submunitionAmmo = "rhs_ammo_bk5_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_bk5_penetrator: rhs_ammo_base_penetrator
	{
		caliber = 25.3333;
	};
	class rhs_ammo_bk6m: rhs_ammo_bk_base
	{
		submunitionAmmo = "rhs_ammo_bk6m_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_bk6m_penetrator: rhs_ammo_base_penetrator
	{
		caliber = 30.6667;
	};
	class rhs_ammo_bk13: rhs_ammo_bk_base
	{
		typicalspeed = 1060;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		submunitionAmmo = "rhs_ammo_bk13_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_bk13_penetrator: rhs_ammo_base_penetrator
	{
		caliber = 33.3333;
	};
	class rhs_ammo_bk15: rhs_ammo_bk_base
	{
		typicalspeed = 1060;
		submunitionAmmo = "rhs_ammo_3bk12_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_bk15_penetrator: rhs_ammo_base_penetrator
	{
		caliber = 28;
	};
	class rhs_ammo_bk17: rhs_ammo_bk_base
	{
		submunitionAmmo = "rhs_ammo_bk17_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_bk17_penetrator: rhs_ammo_base_penetrator
	{
		caliber = 41.3333;
	};
	class rhs_ammo_3bk_base: rhs_ammo_bk_base
	{
		warheadName = "HEAT";
		indirectHit = 20;
		indirectHitRange = 1.2;
		typicalSpeed = 905;
		deflecting = 7;
	};
	class rhs_ammo_3bk12: rhs_ammo_3bk_base
	{
		hit = 200;
		submunitionAmmo = "rhs_ammo_3bk12_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bk12_penetrator: rhs_ammo_base_penetrator
	{
		caliber = 28;
	};
	class rhs_ammo_3bk14: rhs_ammo_3bk_base
	{
		hit = 210;
		submunitionAmmo = "rhs_ammo_3bk14_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bk14_penetrator: rhs_ammo_3bk12_penetrator
	{
		caliber = 30;
	};
	class rhs_ammo_3bk18: rhs_ammo_3bk_base
	{
		hit = 210;
		submunitionAmmo = "rhs_ammo_3bk18_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bk18_penetrator: rhs_ammo_3bk12_penetrator
	{
		caliber = 33.3333;
	};
	class rhs_ammo_3bk18M: rhs_ammo_3bk_base
	{
		hit = 215;
		submunitionAmmo = "rhs_ammo_3bk18m_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bk18m_penetrator: rhs_ammo_3bk12_penetrator
	{
		caliber = 36.6667;
	};
	class rhs_ammo_3bk21: rhs_ammo_3bk_base
	{
		hit = 220;
		submunitionAmmo = "rhs_ammo_3bk21_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bk21_penetrator: rhs_ammo_3bk12_penetrator
	{
		caliber = 36.6667;
	};
	class rhs_ammo_3bk29: rhs_ammo_3bk_base
	{
		hit = 230;
		typicalSpeed = 915;
		warheadName = "TandemHEAT";
		submunitionAmmo = "rhs_ammo_3bk29_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bk29_penetrator: rhs_ammo_3bk12_penetrator
	{
		caliber = 53.3333;
	};
	class rhs_ammo_3bk31: rhs_ammo_3bk_base
	{
		hit = 235;
		typicalSpeed = 915;
		warheadName = "TandemHEAT";
		submunitionAmmo = "rhs_ammo_3bk31_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bk31_penetrator: rhs_ammo_3bk12_penetrator
	{
		warheadName = "TandemHEAT";
		caliber = 56.6667;
	};
	class rhs_ammo_of_base: Sh_125mm_HE
	{
		explosive = 0.7;
		hit = 150;
		indirectHit = 40;
		indirectHitRange = 8;
		typicalspeed = 750;
		deflecting = 1;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		cost = 300;
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "ArtyShellExplosion";
	};
	class rhs_ammo_of412: rhs_ammo_of_base
	{
	};
	class rhs_ammo_of11: rhs_ammo_of_base
	{
		hit = 170;
		indirectHit = 55;
	};
	class rhs_ammo_of28: rhs_ammo_of_base
	{
		hit = 180;
		indirectHit = 60;
		typicalspeed = 800;
	};
	class rhs_ammo_of29: rhs_ammo_of_base
	{
		hit = 180;
		indirectHit = 60;
		typicalspeed = 800;
	};
	class rhs_ammo_3of_base: rhs_ammo_of_base
	{
		hit = 200;
		indirectHit = 100;
		indirectHitRange = 15;
		typicalSpeed = 850;
		caliber = 5;
		whistleDist = 60;
		rhs_ammo_airburst = "rhs_ammo_3of_airburst";
	};
	class rhs_ammo_3of_airburst: ShellBase
	{
		explosive = 1;
		typicalSpeed = 100;
		hit = 200;
		indirectHit = 100;
		indirectHitRange = 45;
		explosionEffects = "RHS_Airburst_Explosion";
		explosionSoundEffect = "DefaultExplosion";
		CraterEffects = "";
		CraterWaterEffects = "";
		model = "\A3\Weapons_f\empty";
		timeToLive = 1;
		explosionTime = 0.001;
		soundFly[] = {"", 1, 1};
		soundEngine[] = {"", 1, 4};
		airFriction = 0;
	};
	class rhs_ammo_3of11: rhs_ammo_3of_base
	{
		airFriction = -0.0002;
		indirectHit = 70;
		indirectHitRange = 14;
	};
	class rhs_ammo_3of26: rhs_ammo_3of_base
	{
		airFriction = -0.0002;
	};
	class rhs_ammo_9m41: ShellBase
	{
		hit = 5;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		ExplosionEffects = "";
		soundHit[] = {"", 0, 1};
		CraterEffects = "";
		whistleDist = 0;
	};
	class rhs_ammo_3UOF17: rhs_ammo_3of_base
	{
		hit = 210;
		indirectHit = 50;
		indirectHitRange = 12;
		typicalSpeed = 250;
		explosive = 0.8;
		cost = 300;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		airFriction = -1e-005;
		simulationStep = 0.01;
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "ArtyShellExplosion";
		caliber = 6;
		whistleDist = 40;
		timeToLive = 35;
	};
	class rhs_ammo_3UOF19: rhs_ammo_3UOF17
	{
		hit = 180;
		indirectHit = 40;
		indirectHitRange = 20;
		typicalSpeed = 355;
		explosive = 1.2;
		timeToLive = 35;
	};
	class rhs_ammo_3UOF191: rhs_ammo_3UOF19
	{
		simulation = "shotSubmunitions";
		submunitionAmmo = "rhs_ammo_3UOF191_airburst";
		submunitionConeType[] = {"poissondisc", 1};
		submunitionConeAngle = 1;
		triggerDistance = 15;
		weaponType = "cannon";
	};
	class rhs_ammo_3UOF191_airburst: rhs_ammo_3UOF19
	{
		indirectHitRange = 34;
		model = "\A3\Weapons_f\empty";
		timeToLive = 1;
		explosionTime = 0.001;
		simulationStep = 0.0005;
		airFriction = 0;
	};
	class rhs_ammo_VOG30: G_40mm_HE
	{
		hit = 40;
		indirectHit = 7;
		indirectHitRange = 4.174;
		dangerRadiusHit = 50;
		suppressionRadiusHit = 20;
		class CamShakeExplode
		{
			power = "(30*0.2)";
			duration = "((round (30^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((3 + 30^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 20;
			duration = "((round (30^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(0^0.25)";
			duration = "((round (0^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((0^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class rhs_ammo_GPD30: rhs_ammo_VOG30
	{
		hit = 50;
		indirectHit = 7;
		airFriction = -0.00079;
		indirectHitRange = 5.192;
	};
	class rhs_ammo_VOG17m: rhs_ammo_VOG30
	{
		hit = 35;
		indirectHit = 4;
		indirectHitRange = 3.328;
	};
	class rhs_ammo_3WOF27: Sh_155mm_AMOS
	{
		cost = 100;
		artilleryLock = 1;
		hit = 300;
		indirectHit = 105;
		indirectHitRange = 28;
		timetolive = 220;
	};
	class rhs_ammo_3WB3: rhs_ammo_3WOF27
	{
		cost = 100;
		artilleryLock = 1;
		simulation = "shotSubmunitions";
		submunitionAmmo = "rhs_ammo_3WB3_submunition";
		submunitionConeType[] = {"poissondisc", 1};
		submunitionConeAngle = 1;
		simulationStep = 0.01;
		triggerDistance = 15;
		aimAboveTarget[] = {10};
		aimAboveDefault = 0;
	};
	class rhs_ammo_3WB3_submunition: rhs_ammo_3WOF27
	{
		hit = 3000;
		indirectHit = 3000;
		indirectHitRange = 500;
		explosionTime = 0.01;
		ExplosionEffects = "RHS_NukeExplosion5";
		CraterEffects = "";
		SoundSetExplosion[] = {"rhs_nuke_explosion_soundset", "Shell155mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		class CamShakeExplode
		{
			power = 100;
			duration = 4.4;
			frequency = 20;
			distance = 13098.9;
		};
		class CamShakeHit
		{
			power = 500;
			duration = 1;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 4.72871;
			duration = 4.4;
			frequency = 20;
			distance = 178.885;
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class rhs_ammo_152_WP: rhs_ammo_3WOF27
	{
		hit = 60;
		indirectHit = 50;
		indirectHitRange = 30;
		explosive = 0.8;
		ExplosionEffects = "WPExplosion";
		CraterEffects = "ExploAmmoCrater";
	};
	class rhs_ammo_3WOF93: Sh_155mm_AMOS_LG
	{
	};
	class rhs_ammo_3WS23: Flare_82mm_AMOS_White
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		ExplosionEffects = "";
		soundHit[] = {"", 0, 1};
		CraterEffects = "";
		whistleDist = 0;
		intensity = "10000 * 7";
		timeToLive = 90;
	};
	class rhs_ammo_53WD546U: Smoke_120mm_AMOS_White
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0.1;
		ExplosionEffects = "";
		soundHit[] = {"", 0, 1};
		CraterEffects = "";
		whistleDist = 0;
	};
	class rhs_ammo_of462: Sh_155mm_AMOS
	{
		cost = 10;
		artilleryLock = 1;
		hit = 150;
		indirectHit = 105;
		indirectHitRange = 28;
		timetolive = 220;
		class CamShakeExplode
		{
			power = "(122*0.2)*10";
			duration = "((round (122^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((30 + 122^0.5))";
		};
		class CamShakeHit
		{
			power = "122 * 10";
			duration = "((round (122^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(122^0.25)*10";
			duration = "((round (122^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((122^0.5))";
		};
		aiAmmoUsageFlags = "64+32+128+256";
	};
	class rhs_ammo_3of56: rhs_ammo_of462
	{
		hit = 160;
		indirectHit = 50;
		indirectHitRange = 30;
	};
	class rhs_ammo_3of69m: Sh_155mm_AMOS_LG
	{
	};
	class rhs_ammo_s463: Flare_82mm_AMOS_White
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		ExplosionEffects = "";
		soundHit[] = {"", 0, 1};
		CraterEffects = "";
		whistleDist = 0;
		intensity = "10000 * 6";
		timeToLive = 90;
	};
	class rhs_ammo_d462: Smoke_120mm_AMOS_White
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0.1;
		ExplosionEffects = "";
		soundHit[] = {"", 0, 1};
		CraterEffects = "";
		whistleDist = 0;
	};
	class rhs_ammo_3vo18: Sh_82mm_AMOS
	{
		hit = 145;
		indirectHit = 42;
		indirectHitRange = 18;
	};
	class rhs_ammo_3vs25m: Flare_82mm_AMOS_White
	{
		intensity = "10000 * 5";
		timeToLive = 90;
	};
	class rhs_ammo_d832du: Smoke_120mm_AMOS_White
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0.1;
		ExplosionEffects = "";
		soundHit[] = {"", 0, 1};
		CraterEffects = "";
		whistleDist = 0;
	};
	class rhs_ammo_atgmCore_base: M_Titan_AT
	{
		scope = 2;
		model = "rhsafrf\addons\rhs_heavyweapons\atgm\rhs_atgm_base";
		hit = 240;
		indirectHit = 20;
		indirectHitRange = 2;
		missileManualControlCone = 50;
		canLock = 0;
		manualControl = 1;
		maxControlRange = 4500;
		trackOversteer = 0.3;
		trackLead = 0.2;
		weaponLockSystem = 1;
		maneuvrability = 8;
		timeToLive = 25;
		simulationStep = 0.005;
		sideAirFriction = 0.05;
		maxSpeed = 200;
		initTime = 0;
		thrustTime = 1.5;
		thrust = 250;
		deflecting = 0;
		fuseDistance = 50;
		whistleDist = 2;
		flightProfiles[] = {"Direct"};
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissileInit = "RocketBackEffectsNLAW";
		effectsMissile = "missile2";
		textureType = "semi";
		lockType = 0;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2", 1, 1, 800};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 5000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 35;
						nightRangeCoef = 0.8;
						angleRangeHorizontal = 5;
						angleRangeVertical = 5;
					};
				};
			};
		};
	};
	class rhs_ammo_atgmBase_base: M_Titan_AT
	{
		model = "rhsafrf\addons\rhs_heavyweapons\atgm\rhs_atgm_base";
		flightProfiles[] = {"Direct"};
		hit = 240;
		indirectHit = 20;
		indirectHitRange = 1.2;
		cost = 800;
		maxSpeed = 115;
		canlock = 0;
		lockType = 0;
		irLock = 1;
		weaponLockSystem = 1;
		trackOversteer = 0.3;
		trackLead = 0.85;
		manualControl = 1;
		maxControlRange = 3000;
		initTime = 0;
		missileManualControlCone = 50;
		airfriction = -2e-005;
		sideairfriction = 0.14;
		thrustTime = 2.5;
		thrust = 100;
		maneuvrability = 4;
		typicalSpeed = 115;
		fuseDistance = 100;
		effectsMissileInit = "RocketBackEffectsNLAW";
		timeToLive = 26;
		textureType = "semi";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2", 1, 1, 800};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 5000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 35;
						nightRangeCoef = 0.8;
						angleRangeHorizontal = 5;
						angleRangeVertical = 5;
					};
				};
			};
		};
	};
	class rhs_ammo_9m14: rhs_ammo_atgmBase_base
	{
		submunitionAmmo = "rhs_ammo_9m14m_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		model = "rhsafrf\addons\rhs_heavyweapons\atgm\rhs_9m14_fly";
		proxyShape = "rhsafrf\addons\rhs_heavyweapons\atgm\rhs_9m14";
		thrustTime = 1.5;
		thrust = 80;
		manualControl = 0;
		missileManualControlCone = 30;
		lockType = 0;
		class EventHandlers: EventHandlers
		{
			class RHS_Guidance
			{
				fired = "_this call RHS_fnc_mclosGuide";
			};
		};
	};
	class rhs_ammo_9m14m: rhs_ammo_9m14
	{
		thrustTime = 2.5;
		thrust = 100;
		submunitionAmmo = "rhs_ammo_9m14m_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_9m14m_penetrator: rhs_ammo_base_penetrator
	{
		caliber = 26.6667;
	};
	class rhs_ammo_mclos_training: rhs_ammo_9m14m
	{
		hit = 24;
		submunitionAmmo = "rhs_ammo_mclos_training_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_mclos_training_penetrator: rhs_ammo_base_penetrator
	{
		caliber = 0.666667;
	};
	class rhs_ammo_9m17: rhs_ammo_atgmBase_base
	{
		submunitionAmmo = "rhs_ammo_9m17_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		model = "rhsafrf\addons\rhs_a2port_air\data\rhs_m_9m17_fly";
		proxyShape = "rhsafrf\addons\rhs_a2port_air\data\rhs_m_9m17";
		typicalSpeed = 115;
		thrustTime = 2.5;
		thrust = 150;
		maxSpeed = 125;
		manualControl = 0;
		lockType = 0;
		maverickWeaponIndexOffset = 40;
		class EventHandlers: EventHandlers
		{
			class RHS_Guidance
			{
				fired = "_this call RHS_fnc_mclosGuide";
			};
		};
	};
	class rhs_ammo_9m17_penetrator: rhs_ammo_base_penetrator
	{
		caliber = 33.3333;
	};
	class rhs_ammo_9m17p: rhs_ammo_9m17
	{
		submunitionAmmo = "rhs_ammo_9m17p_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		maxControlRange = 4000;
		missileManualControlCone = 120;
		maxSpeed = 175;
		thrust = 170;
		rhs_saclos = 1;
		rhs_ballisticMode = 1;
		rhs_guideMode = "WIRE";
		class EventHandlers: EventHandlers
		{
			class RHS_Guidance
			{
				fired = "_this call RHS_fnc_saclosGuide";
			};
		};
	};
	class rhs_ammo_9m17p_penetrator: rhs_ammo_base_penetrator
	{
		caliber = 36.6667;
	};
	class rhs_ammo_9m112: rhs_ammo_atgmCore_base
	{
		warheadName = "TandemHEAT";
		submunitionAmmo = "rhs_ammo_9m112_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		manualcontrol = 0;
		airLock = 1;
		trackLead = 0;
		effectsMissileInit = "RHS_ATGM_Pusher_Eject";
		rhs_saclos = 1;
		rhs_ballisticMode = 1;
		rhs_guideMode = "RADIO";
		class EventHandlers: EventHandlers
		{
			class RHS_Guidance
			{
				fired = "_this call RHS_fnc_saclosGuide";
			};
		};
	};
	class rhs_ammo_9m112m: rhs_ammo_9m112
	{
		submunitionAmmo = "rhs_ammo_9m112m_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		inittime = 0;
		irlock = 1;
		laserlock = 0;
		maneuvrability = 9;
		sideairfriction = 0.1;
		maxcontrolrange = 4000;
		maxspeed = 500;
		thrust = 112;
		thrusttime = 6;
		timetolive = 30;
	};
	class rhs_ammo_9m112m2: rhs_ammo_9m112m
	{
		submunitionAmmo = "rhs_ammo_9m112m_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_9m124: rhs_ammo_9m112m
	{
		submunitionAmmo = "rhs_ammo_9m124_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_9m112_penetrator: rhs_ammo_base_penetrator
	{
		warheadName = "TandemHEAT";
		caliber = 40;
	};
	class rhs_ammo_9m112m_penetrator: rhs_ammo_9m112_penetrator
	{
		caliber = 48;
	};
	class rhs_ammo_9m112m2_penetrator: rhs_ammo_9m112_penetrator
	{
		caliber = 56;
	};
	class rhs_ammo_9m124_penetrator: rhs_ammo_9m112_penetrator
	{
		caliber = 62.6667;
	};
	class rhs_ammo_9m128: rhs_ammo_atgmCore_base
	{
		submunitionAmmo = "rhs_ammo_9m128_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		maxControlRange = 5000;
	};
	class rhs_ammo_9m128_penetrator: rhs_ammo_9m112_penetrator
	{
		warheadName = "TandemHEAT";
		hit = 250;
		caliber = 50;
	};
	class rhs_ammo_9m111: rhs_ammo_atgmBase_base
	{
		model = "rhsafrf\addons\rhs_heavyweapons\atgm\rhs_9m113";
		submunitionAmmo = "rhs_ammo_9m111_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		indirectHit = 20;
		indirectHitRange = 1.2;
		initTime = 0.25;
		maneuvrability = 8;
		trackOversteer = 0.3;
		trackLead = 0;
		sideairfriction = 0.05;
		simulationstep = 0.001;
		thrustTime = 1.5;
		thrust = 200;
		typicalSpeed = 900;
		fuseDistance = 70;
		timeToLive = 20;
		maxSpeed = 186;
		manualControl = 0;
		missileManualControlCone = 60;
		maxControlRange = 2000;
		rhs_saclos = 1;
		rhs_ballisticMode = 0;
		rhs_guideMode = "WIRE";
		class EventHandlers: EventHandlers
		{
			class RHS_Guidance
			{
				fired = "_this call RHS_fnc_saclosGuide";
			};
		};
	};
	class rhs_ammo_9m111m: rhs_ammo_9m111
	{
		submunitionAmmo = "rhs_ammo_9m111m_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		maxControlRange = 2500;
	};
	class rhs_ammo_9m111_penetrator: rhs_ammo_9m112_penetrator
	{
		caliber = 26.6667;
	};
	class rhs_ammo_9m111m_penetrator: rhs_ammo_9m112_penetrator
	{
		caliber = 40;
	};
	class rhs_ammo_9m113: rhs_ammo_atgmBase_base
	{
		model = "rhsafrf\addons\rhs_heavyweapons\atgm\rhs_9m113";
		submunitionAmmo = "rhs_ammo_9m113_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		indirectHit = 20;
		indirectHitRange = 1.2;
		initTime = 0.25;
		maneuvrability = 14;
		trackOversteer = 0.6;
		trackLead = 0.6;
		sideairfriction = 0.05;
		simulationstep = 0.001;
		thrustTime = 1.5;
		thrust = 200;
		typicalSpeed = 900;
		fuseDistance = 70;
		timeToLive = 20;
		maxSpeed = 200;
		manualControl = 0;
		missileManualControlCone = 60;
		maxControlRange = 4000;
		rhs_saclos = 1;
		rhs_ballisticMode = 0;
		rhs_guideMode = "WIRE";
		class EventHandlers: EventHandlers
		{
			class RHS_Guidance
			{
				fired = "_this call RHS_fnc_saclosGuide";
			};
		};
	};
	class rhs_ammo_9m113m: rhs_ammo_9m113
	{
		submunitionAmmo = "rhs_ammo_9m113m_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_9m113_penetrator: rhs_ammo_9m112_penetrator
	{
		caliber = 40;
	};
	class rhs_ammo_9m113m_penetrator: rhs_ammo_9m112_penetrator
	{
		warheadName = "TandemHEAT";
		caliber = 50;
	};
	class rhs_ammo_9m117: rhs_ammo_atgmCore_base
	{
		submunitionAmmo = "rhs_ammo_9m117_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		model = "rhsafrf\addons\rhs_heavyweapons\atgm\rhs_atgm_base";
		indirectHitRange = 1.2;
		cost = 100;
		canlock = 1;
		irlock = 1;
		airLock = 1;
		laserlock = 0;
		manualControl = 0;
		missileManualControlCone = 20;
		maxcontrolrange = 5000;
		weaponLockSystem = "1+4";
		maxSpeed = 300;
		typicalSpeed = 120;
		inittime = 0;
		thrust = 112;
		thrusttime = 6;
		timetolive = 30;
		sideairfriction = 0.1;
		trackOversteer = 0.3;
		trackLead = 1;
		maneuvrability = 17;
		rhs_saclos = 1;
		rhs_ballisticMode = 1;
		rhs_guideMode = "BEAMRIDER";
		class EventHandlers: EventHandlers
		{
			class RHS_Guidance
			{
				fired = "_this call RHS_fnc_saclosGuide";
			};
		};
	};
	class rhs_ammo_9m117_penetrator: rhs_ammo_9m112_penetrator
	{
		caliber = 40;
	};
	class rhs_ammo_9m117m: rhs_ammo_9m117
	{
		warheadName = "TandemHEAT";
		submunitionAmmo = "rhs_ammo_9m117m_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_9m117m_penetrator: rhs_ammo_9m112_penetrator
	{
		warheadName = "TandemHEAT";
		caliber = 43.3333;
	};
	class rhs_ammo_9m117m1: rhs_ammo_9m117
	{
		warheadName = "TandemHEAT";
		submunitionAmmo = "rhs_ammo_9m117m1_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		maxcontrolrange = 5500;
	};
	class rhs_ammo_9m117m1_penetrator: rhs_ammo_9m112_penetrator
	{
		warheadName = "TandemHEAT";
		caliber = 50;
	};
	class rhs_ammo_9m118: rhs_ammo_9m117
	{
		submunitionAmmo = "rhs_ammo_9m118_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_9m118_penetrator: rhs_ammo_9m112_penetrator
	{
		caliber = 43.3333;
	};
	class rhs_ammo_9m119: rhs_ammo_atgmCore_base
	{
		submunitionAmmo = "rhs_ammo_9m119_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		maxControlRange = 5000;
		trackOversteer = 0.3;
		trackLead = 0.3;
		maneuvrability = 9;
		typicalSpeed = 120;
		maxSpeed = 420;
		inittime = 0.1;
		airLock = 1;
		irlock = 1;
		laserlock = 0;
		manualControl = 0;
		sideairfriction = 0.1;
		thrust = 112;
		thrusttime = 6;
		timetolive = 30;
		weaponLockSystem = "1+4";
		effectsMissileInit = "RHS_ATGM_Pusher_Eject";
		rhs_saclos = 1;
		rhs_guideMode = "BEAMRIDER";
		rhs_ballisticMode = 1;
		class EventHandlers: EventHandlers
		{
			class RHS_Guidance
			{
				fired = "_this call RHS_fnc_saclosGuide";
			};
		};
	};
	class rhs_ammo_9m119_penetrator: rhs_ammo_9m112_penetrator
	{
		hit = 250;
		caliber = 46.6667;
	};
	class rhs_ammo_9m119m: rhs_ammo_9m119
	{
		submunitionAmmo = "rhs_ammo_9m119m_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_9m119m_penetrator: rhs_ammo_9m112_penetrator
	{
		warheadName = "TandemHEAT";
		caliber = 56.6667;
	};
	class rhs_ammo_9m119f: rhs_ammo_9m119
	{
		AIAmmoUsageFlags = "64+128+256";
		submunitionAmmo[] = {};
		hit = 100;
		indirectHit = 70;
		indirectHitRange = 12;
		cost = 100;
		explosive = 1;
		allowAgainstInfantry = 1;
		CraterEffects = "ArtyShellCrater";
		explosionEffects = "RHS_FAE_Explosion";
		effectsMissile = "missile3";
		class CamShakeExplode
		{
			power = "(210*0.2)";
			duration = "((round (210^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 210^0.5)*8)";
		};
		class CamShakeFire
		{
			power = 10;
			duration = 0.5;
			frequency = 20;
			distance = 30;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
		};
	};
	class rhs_ammo_9m115: rhs_ammo_9m119
	{
		model = "\A3\Weapons_F_Tank\Launchers\Vorona\Vorona_missile_heat_fly";
		submunitionAmmo = "rhs_ammo_9m115_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		maxControlRange = 1000;
		initTime = 0.25;
		maxSpeed = 223;
		timetolive = 12;
		effectsMissileInit = "RocketBackEffectsStaticRPG";
		effectsMissile = "missile2";
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((4 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(60^0.25)";
			duration = "((round (60^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((60^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 3;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		rhs_saclos = 1;
		rhs_ballisticMode = 1;
		rhs_guideMode = "WIRE";
		class EventHandlers: EventHandlers
		{
			class RHS_Guidance
			{
				fired = "_this call RHS_fnc_saclosGuide";
			};
		};
	};
	class rhs_ammo_9m115_penetrator: rhs_ammo_9m112_penetrator
	{
		caliber = 36.6667;
	};
	class rhs_ammo_9m131: rhs_ammo_9m115
	{
		submunitionAmmo = "rhs_ammo_9m131_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		maxControlRange = 1500;
		airFriction = 0.14;
		thrusttime = 2;
	};
	class rhs_ammo_9m131_penetrator: rhs_ammo_9m112_penetrator
	{
		warheadName = "TandemHEAT";
		caliber = 56.6667;
	};
	class rhs_ammo_9m131m: rhs_ammo_9m131
	{
		submunitionAmmo = "rhs_ammo_9m131m_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		maxControlRange = 2000;
	};
	class rhs_ammo_9m131m_penetrator: rhs_ammo_9m112_penetrator
	{
		warheadName = "TandemHEAT";
		caliber = 63.3333;
	};
	class rhs_ammo_9m131f: rhs_ammo_9m131m
	{
		AIAmmoUsageFlags = "64+128+256";
		submunitionAmmo = "";
		hit = 120;
		indirectHit = 100;
		indirectHitRange = 12;
		cost = 100;
		explosive = 1;
		allowAgainstInfantry = 1;
		CraterEffects = "ArtyShellCrater";
		explosionEffects = "RHS_FAE_Explosion";
		effectsMissile = "missile3";
		class CamShakeExplode
		{
			power = "(210*0.2)";
			duration = "((round (210^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 210^0.5)*8)";
		};
		class CamShakeFire
		{
			power = 10;
			duration = 0.5;
			frequency = 20;
			distance = 30;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
		};
	};
	class rhs_ammo_9m133: rhs_ammo_atgmBase_base
	{
		model = "rhsafrf\addons\rhs_heavyweapons\atgm\rhs_9m133";
		submunitionAmmo = "rhs_ammo_9m133_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		indirectHit = 18;
		indirectHitRange = 1.5;
		whistleDist = 3;
		canlock = 1;
		irLock = 1;
		trackOversteer = 0.3;
		trackLead = 1;
		maneuvrability = 9;
		typicalSpeed = 120;
		maxSpeed = 300;
		inittime = 0.25;
		laserlock = 0;
		manualControl = 0;
		missileManualControlCone = 20;
		airFriction = 0.13;
		sideairfriction = 0.1;
		maxcontrolrange = 5000;
		thrust = 152;
		thrusttime = 3;
		timetolive = 30;
		rhs_saclos = 1;
		rhs_ballisticMode = 1;
		rhs_guideMode = "BEAMRIDER";
		class EventHandlers: EventHandlers
		{
			class RHS_Guidance
			{
				fired = "_this call RHS_fnc_saclosGuide";
			};
		};
	};
	class rhs_ammo_9m133_penetrator: rhs_ammo_9m112_penetrator
	{
		warheadName = "TandemHEAT";
		hit = 290;
		caliber = 66.6667;
	};
	class rhs_ammo_9m133f: rhs_ammo_9m131f
	{
		hit = 125;
		indirectHit = 100;
		indirectHitRange = 12;
	};
	class rhs_ammo_9m1331: rhs_ammo_9m133
	{
		submunitionAmmo = "rhs_ammo_9m1331_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_9m1331_penetrator: rhs_ammo_9m133_penetrator
	{
		warheadName = "TandemHEAT";
		caliber = 73.3333;
	};
	class rhs_ammo_9m133m2: rhs_ammo_9m133
	{
		submunitionAmmo = "rhs_ammo_9m133m2_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_9m133m2_penetrator: rhs_ammo_9m133_penetrator
	{
		warheadName = "TandemHEAT";
		caliber = 86.6667;
	};
	class rhs_ammo_3m7: rhs_ammo_atgmBase_base
	{
		submunitionAmmo = "rhs_ammo_9m7_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		indirectHit = 20;
		indirectHitRange = 1.2;
		whistleDist = 3;
		canlock = 1;
		irLock = 1;
		trackOversteer = 0.3;
		trackLead = 1;
		maneuvrability = 17;
		typicalSpeed = 120;
		maxSpeed = 781;
		inittime = 0;
		laserlock = 0;
		manualcontrol = 1;
		sideairfriction = 0.1;
		maxcontrolrange = 5000;
		thrust = 112;
		thrusttime = 2.5;
		timetolive = 30;
		proxyShape = "rhsafrf\addons\rhs_heavyweapons\atgm\rhs_3m7";
	};
	class rhs_ammo_9m7_penetrator: rhs_ammo_9m112_penetrator
	{
		hit = 250;
		caliber = 16.6667;
	};
	class rhs_proxy_ags30_mag: rhs_ammo_atgmBase_base
	{
		maverickWeaponIndexOffset = 0;
		proxyShape = "\rhsafrf\addons\rhs_heavyweapons\AGS30\AGS_magazine.p3d";
	};
	class rhs_proxy_pkm_mag: rhs_ammo_atgmBase_base
	{
		maverickWeaponIndexOffset = 19;
		proxyShape = "\rhsafrf\addons\rhs_tigr\sts_proxies\sts_pkm_mag_proxy.p3d";
	};
	class rhs_ammo_m21OF_HE: R_230mm_HE
	{
		submunitionAmmo = "rhs_m21OF_fly";
		model = "\rhsafrf\addons\rhs_heavyweapons\grad\rhs_r_m21OF";
		proxyShape = "\rhsafrf\addons\rhs_heavyweapons\grad\rhs_r_m21OF_in";
		class CamShakeExplode
		{
			power = 24.4;
			duration = 2.2;
			frequency = 20;
			distance = 328.363;
		};
		class CamShakeHit
		{
			power = 122;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.32346;
			duration = 2.2;
			frequency = 20;
			distance = 88.3629;
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class rhs_m21OF_fly: R_230mm_fly
	{
		model = "\rhsafrf\addons\rhs_heavyweapons\grad\rhs_r_m21OF_fly";
		hit = 900;
		indirectHit = 500;
		indirectHitRange = 25;
		audibleFire = 64;
		class CamShakeExplode
		{
			power = 24.4;
			duration = 2.2;
			frequency = 20;
			distance = 328.363;
		};
		class CamShakeHit
		{
			power = 122;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.32346;
			duration = 2.2;
			frequency = 20;
			distance = 88.3629;
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class rhs_ammo_9m28f: rhs_ammo_m21OF_HE
	{
		submunitionAmmo = "rhs_9m28f_fly";
	};
	class rhs_9m28f_fly: rhs_m21OF_fly
	{
		hit = 1100;
		indirectHit = 500;
		indirectHitRange = 45;
	};
	class rhs_ammo_9m28k: rhs_ammo_m21OF_HE
	{
		triggerDistance = 250;
		triggerSpeedCoef[] = {0.5, 1};
		submunitionConeAngle = 19;
		submunitionConeType[] = {"randomcenter", 3};
		submunitionAmmo[] = {"rhs_ammo_ptm3_deploy", 0.93, "Mo_cluster_AP_UXO_deploy", 0.07};
	};
	class rhs_ammo_9m218: rhs_ammo_m21OF_HE
	{
		triggerDistance = 250;
		triggerSpeedCoef[] = {0.5, 1};
		submunitionConeAngle = 19;
		submunitionConeType[] = {"randomcenter", 45};
		submunitionAmmo[] = {"rhs_ammo_9m218_submunition", 0.93, "Mo_cluster_AP_UXO_deploy", 0.07};
	};
	class rhs_ammo_9m218_submunition: Mo_cluster_AP
	{
		submunitionAmmo = "rhs_ammo_9m218_submunition_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ptab25m";
		hit = 50;
		indirectHitRange = 4;
	};
	class rhs_ammo_9m218_submunition_penetrator: rhs_ammo_cluster_penetrator
	{
		hit = 130;
		submunitionConeType[] = {"randomcenter", 5};
		caliber = 8;
	};
	class rhs_ammo_9m521: rhs_ammo_m21OF_HE
	{
		submunitionAmmo = "rhs_9m521_fly";
	};
	class rhs_9m521_fly: rhs_m21OF_fly
	{
		hit = 1100;
		indirectHit = 500;
		indirectHitRange = 35;
	};
	class rhs_ammo_9m522: rhs_ammo_m21OF_HE
	{
		submunitionAmmo = "rhs_9m2522_fly";
	};
	class rhs_9m2522_fly: rhs_m21OF_fly
	{
		hit = 1400;
		indirectHit = 800;
		indirectHitRange = 45;
	};
	class rhs_ammo_rpgShell_base: RocketBase
	{
		model = "\rhsafrf\addons\rhs_heavyweapons\SPG9\og9_projectile";
		hit = 85;
		indirectHit = 45;
		indirectHitRange = 6;
		cost = 250;
		typicalspeed = 700;
		explosive = 0.8;
		maxSpeed = 700;
		airfriction = 0.45;
		sideAirFriction = 0.01;
		initTime = 0.15;
		fuseDistance = 12;
		thrustTime = 0.35;
		thrust = 1400;
		timeToLive = 8;
		whistleOnFire = 1;
		whistleDist = 14;
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
		effectsmissileinit = "";
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly", 1.1, 0.7, 250};
	};
	class rhs_ammo_og9v: rhs_ammo_rpgShell_base
	{
		AIAmmoUsageFlags = "64+128+256";
		thrustTime = 0;
		thrust = 0;
		airfriction = 0.074;
		sideAirFriction = 0.5;
		smokeTrail = 2;
		whistleDist = 2;
		effectsMissile = "missile3";
		effectsmissileinit = "RocketBackEffectsStaticRPG";
		warheadName = "HE";
	};
	class rhs_ammo_og9vm: rhs_ammo_og9v
	{
		hit = 95;
		indirectHit = 55;
	};
	class rhs_ammo_pg9v: rhs_ammo_rpgShell_base
	{
		model = "\rhsafrf\addons\rhs_heavyweapons\SPG9\pg9_projectile";
		hit = 205;
		indirectHit = 20;
		indirectHitRange = 1.2;
		cost = 200;
		aiAmmoUsageFlags = "128+512";
		smokeTrail = 2;
		whistleDist = 2;
		effectsMissile = "missile3";
		effectsmissileinit = "RocketBackEffectsStaticRPG";
		warheadName = "HEAT";
		submunitionAmmo = "rhs_ammo_pg9v_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_pg9v_penetrator: rhs_ammo_base_penetrator
	{
		hit = 220;
		caliber = 20;
	};
	class rhs_ammo_pg9n: rhs_ammo_pg9v
	{
		warheadName = "TandemHEAT";
		submunitionAmmo = "rhs_ammo_pg9n_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_pg9n_penetrator: rhs_ammo_base_penetrator
	{
		hit = 230;
		caliber = 26.6667;
	};
	class rhs_ammo_pg9vnt: rhs_ammo_pg9v
	{
		warheadName = "TandemHEAT";
		submunitionAmmo = "rhs_ammo_pg9n_penetrator";
	};
	class rhs_ammo_pg9vnt_penetrator: rhs_ammo_base_penetrator
	{
		hit = 280;
		caliber = 36.6667;
	};
	class rhs_ammo_rpg15Shell_base: ShellBase
	{
		simulation = "shotShell";
		hit = 85;
		indirectHit = 45;
		indirectHitRange = 5;
		typicalspeed = 350;
		explosive = 0.8;
		deflecting = 2;
		cost = 250;
		tracerScale = 1;
		tracerStartTime = 0.001;
		tracerEndTime = 12;
		initTime = -1;
		model = "\rhsafrf\addons\rhs_heavyweapons\SPG9\pg9_shell";
		airfriction = -0.00017;
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly", 1.1, 0.7, 250};
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01", 1.77828, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02", 1.77828, 1, 1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03", 1.77828, 1, 1800};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04", 1.77828, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
	};
	class rhs_ammo_og15v: rhs_ammo_rpg15Shell_base
	{
		AIAmmoUsageFlags = "64+128+256";
		airfriction = -0.00011934;
		model = "\rhsafrf\addons\rhs_heavyweapons\SPG9\og9_shell";
		warheadName = "HE";
	};
	class rhs_ammo_og15v_rocket: rhs_ammo_og9v
	{
		effectsmissileinit = "";
	};
	class rhs_ammo_pg15v: rhs_ammo_rpg15Shell_base
	{
		hit = 205;
		indirectHit = 20;
		indirectHitRange = 1.2;
		airfriction = -0.00084;
		warheadName = "HEAT";
		submunitionAmmo = "rhs_ammo_pg15v_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_pg15v_rocket: rhs_ammo_pg9v
	{
		hit = 205;
		indirectHit = 20;
		indirectHitRange = 1.2;
		typicalspeed = 800;
		cost = 500;
		effectsmissileinit = "";
	};
	class rhs_ammo_pg15v_penetrator: rhs_ammo_base_penetrator
	{
		hit = 230;
		caliber = 26.6667;
	};
	class rhs_ammo_30x165mm_base: B_30mm_AP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		hit = 72;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 3;
		cost = 55;
		irLock = 1;
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 3.5;
		airFriction = -0.000855;
		muzzleEffect = "";
		caliber = 4.17;
		airLock = 1;
		timeToLive = 25;
		weaponType = "special";
		missileLockMaxDistance = 1000;
		missileLockMinDistance = 80;
		aiAmmoUsageFlags = "128 + 512 + 256";
	};
	class rhs_ammo_3ubr6: rhs_ammo_30x165mm_base
	{
		hit = 60;
		displayName = "3UBR6";
		caliber = 3.78007;
		typicalspeed = 1120;
		airfriction = -0.00056;
	};
	class rhs_ammo_3ubr8: rhs_ammo_30x165mm_base
	{
		hit = 90;
		caliber = 3.92857;
		typicalspeed = 1120;
		airfriction = -0.00056;
		cost = 75;
		class HitEffects
		{
			hitMetal = "ImpactMetalSabotSmall";
			hitMetalPlate = "ImpactMetalSabotSmall";
			hitBuilding = "ImpactConcreteSabotSmall";
			hitConcrete = "ImpactConcreteSabotSmall";
			hitGroundSoft = "ImpactEffectsGroundSabot";
			hitGroundHard = "ImpactEffectsGroundSabot";
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitMan = "ImpactEffectsBlood";
			hitWater = "ImpactEffectsWater";
			default_mat = "ImpactEffectsGroundSabot";
		};
		class CamShakeExplode
		{
			power = "(45^0.5)";
			duration = "((round (45^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((45^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 45;
			duration = "((round (45^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(30^0.25)";
			duration = "((round (30^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((30^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class rhs_ammo_gsh30_bt: rhs_ammo_3ubr8
	{
		cost = 10;
		AIAmmoUsageFlags = "64 + 128 + 256";
		weaponType = "mgun";
	};
	class rhs_ammo_gsh30_mixed: SubmunitionBase
	{
		hit = 90;
		typicalspeed = 1120;
		airfriction = -0.00056;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 3;
		airLock = 1;
		AIAmmoUsageFlags = "64 + 128 + 256";
		cost = 10;
		model = "\A3\Weapons_f\empty";
		submunitionAmmo[] = {"rhs_ammo_3ubr8", 0.33, "rhs_ammo_3uof8", 0.33, "rhs_ammo_3uor6", 0.33};
		weaponType = "mgun";
		simulation = "shotSubmunitions";
		triggerTime = 0.01;
		missileLockMaxDistance = 1000;
		missileLockMinDistance = 80;
	};
	class rhs_ammo_3ubr11: rhs_ammo_3ubr8
	{
		hit = 95;
		caliber = 5.47619;
	};
	class rhs_ammo_3uor6: B_30mm_HE
	{
		hit = 45;
		indirectHit = 25;
		indirectHitRange = 4;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		cost = 20;
		explosive = 0.6;
		airfriction = -0.0002;
		caliber = 1.39;
		timeToLive = 15;
		displayName = "3UOR6";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 10;
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128 + 256";
		weaponType = "special";
		class CamShakeExplode
		{
			power = 6;
			duration = 1;
			frequency = 20;
			distance = 83.8178;
		};
		class CamShakeHit
		{
			power = 30;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.34035;
			duration = 1;
			frequency = 20;
			distance = 43.8178;
		};
		class CamShakePlayerFire
		{
			power = 30;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class rhs_ammo_3uof8: rhs_ammo_3uor6
	{
		hit = 50;
		indirectHit = 33;
		displayName = "3UOF8";
	};
	class rhs_ammo_127x107mm: B_127x108_Ball
	{
		hit = 25;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		timeToLive = 25;
		tracerEndTime = 3;
	};
	class rhs_ammo_127x108mm: rhs_ammo_127x107mm
	{
	};
	class rhs_ammo_127x108mm_notracer: rhs_ammo_127x108mm
	{
		model = "\A3\Weapons_f\empty";
	};
	class rhs_ammo_127x108mm_x5: SubmunitionBase
	{
		explosive = 0;
		allowAgainstInfantry = 1;
		airlock = 1;
		airfriction = -0.0009;
		audiblefire = 22;
		visiblefire = 22;
		visiblefiretime = 3;
		submunitionAmmo[] = {"rhs_ammo_127x108mm_notracer", 0.85, "rhs_ammo_127x108mm", 0.15};
		submunitionConeType[] = {"randomcenter", 5};
		cost = 10;
		submunitionConeAngle = 0.45;
		triggerTime = 0.01;
		triggerSpeedCoef[] = {0.8, 1};
		model = "\A3\Weapons_f\empty";
		cartridge = "FxCartridge_127";
		explosionEffects = "";
		CraterEffects = "";
		hit = 25;
		timeToLive = 15;
		class CamShakeExplode
		{
			power = 2.4;
			duration = 0.6;
			frequency = 20;
			distance = 51.7128;
		};
		class CamShakeHit
		{
			power = 12;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 1;
			duration = 0.2;
			frequency = 20;
			distance = 8;
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class rhs_ammo_127x108mm_1SLT: rhs_ammo_127x108mm_x5
	{
		submunitionConeType[] = {"randomcenter", 2};
		submunitionConeAngle = 0.207;
		weaponType = "mGun";
	};
	class rhs_ammo_127x108mm_1SLT_x5: rhs_ammo_127x108mm_x5
	{
		submunitionConeType[] = {"randomcenter", 10};
		submunitionConeAngle = 0.54;
	};
	class rhs_ammo_145x115mm: rhs_ammo_127x107mm
	{
		tracerEndTime = 2.35;
		typicalSpeed = 988;
		airFriction = -0.00052;
		caliber = 2.76653;
	};
	class rhs_ammo_BS32_145x115mm: rhs_ammo_145x115mm
	{
		caliber = 2.05803;
	};
	class RHS_ammo_23mm_AA: B_35mm_AA
	{
		hit = 60;
		indirectHit = 40;
		indirectHitRange = 1.8;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 4;
		explosive = 0.6;
		airLock = 1;
		cost = 15;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 1.85;
		tracerStartTime = 0.1;
		tracerEndTime = 5.5;
		airFriction = -0.000824;
		muzzleEffect = "";
		caliber = 1.11;
	};
	class RHS_ammo_23mm_AA_mixed: SubmunitionBase
	{
		airLock = 1;
		AIAmmoUsageFlags = "256+128+64";
		airFriction = -0.000824;
		cost = 10;
		model = "\A3\Weapons_f\empty";
		submunitionAmmo[] = {"rhs_ammo_bzt_23x115mm", 0.25, "rhs_ammo_ofz_23x115mm", 0.75};
		weaponType = "cannon";
		simulation = "shotSubmunitions";
		triggerTime = 0.01;
	};
	class rhs_ammo_ofz_23x115mm: RHS_ammo_23mm_AA
	{
		model = "\A3\Weapons_f\empty";
	};
	class rhs_ammo_ofzt_23x115mm: rhs_ammo_ofz_23x115mm
	{
		indirectHit = 30;
		indirectHitRange = 1.1;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class rhs_ammo_bzt_23x115mm: rhs_ammo_30x165mm_base
	{
		explosive = 0;
		hit = 80;
		indirectHit = 1;
		indirectHitRange = 0.3;
		tracerEndTime = 5.5;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		caliber = 3.65854;
	};
	class rhs_ammo_mixed_23x115mm: SubmunitionBase
	{
		hit = 60;
		indirectHit = 40;
		indirectHitRange = 1.8;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 4;
		airlock = 1;
		airFriction = -0.000824;
		typicalSpeed = 960;
		AIAmmoUsageFlags = "256+128+64";
		cost = 10;
		model = "\A3\Weapons_f\empty";
		submunitionAmmo[] = {"rhs_ammo_bzt_23x115mm", 0.8, "rhs_ammo_ofz_23x115mm", 0.2};
		weaponType = "cannon";
		simulation = "shotSubmunitions";
		triggerTime = 0.01;
	};
	class rhs_B_545x39_Ball: B_556x45_Ball
	{
		cartridge = "RHS_Cartridge_545x39";
		hit = 9;
		typicalSpeed = 915;
		airFriction = -0.0016564;
		caliber = 0.216216;
		deflecting = 18;
		visibleFire = 3;
		audibleFire = 7;
		nvgOnly = 0;
	};
	class rhs_B_545x39_7N6_Ball: rhs_B_545x39_Ball
	{
		hit = 9.3;
		typicalSpeed = 880;
		airFriction = -0.001139;
		caliber = 0.231884;
		deflecting = 20;
		visibleFire = 3;
		audibleFire = 6;
	};
	class rhs_B_545x39_7N10_Ball: rhs_B_545x39_Ball
	{
		hit = 9.5;
		typicalSpeed = 880;
		airFriction = -0.001139;
		caliber = 0.618357;
		deflecting = 20;
		visibleFire = 3;
		audibleFire = 6;
	};
	class rhs_B_545x39_7N22_Ball: rhs_B_545x39_Ball
	{
		hit = 9.8;
		typicalSpeed = 890;
		airFriction = -0.00085;
		caliber = 0.939794;
		deflecting = 20;
		visibleFire = 3;
		audibleFire = 7;
	};
	class rhs_B_545x39_7N24_Ball: rhs_B_545x39_Ball
	{
		hit = 8;
		typicalSpeed = 890;
		airFriction = -0.00085;
		caliber = 1.49;
		deflecting = 20;
		visibleFire = 3;
		audibleFire = 7;
	};
	class rhs_B_545x39_7U1_Ball: rhs_B_545x39_Ball
	{
		hit = 3.86;
		airFriction = -0.0006754;
		typicalSpeed = 303;
		visibleFire = 1.5;
		audibleFire = 3;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
	};
	class rhs_B_545x39_Ball_Tracer_Green: rhs_B_545x39_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerStartTime = 0.07;
		tracerEndTime = 1;
	};
	class rhs_B_762x54_Ball: B_762x51_Ball
	{
		cartridge = "RHS_Cartridge_762x54r";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		hit = 11.47;
		typicalSpeed = 828;
		airFriction = -0.0010922;
		caliber = 0.341151;
		deflecting = 15;
		visibleFire = 4;
		audibleFire = 7;
		tracerStartTime = 0.07;
		tracerEndTime = 3;
	};
	class rhs_B_762x54_Ball_Tracer_Green: rhs_B_762x54_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerStartTime = 0.07;
		tracerEndTime = 3;
	};
	class rhs_B_762x54_7N1_Ball: rhs_B_762x54_Ball
	{
		hit = 11.59;
		typicalSpeed = 823;
		airFriction = -0.000756;
		caliber = 0.9;
	};
	class rhs_B_762x54_7N13_Ball: rhs_B_762x54_Ball
	{
		caliber = 1.00251;
	};
	class rhs_B_762x54_7N14_Ball: rhs_B_762x54_Ball
	{
		hit = 13.61;
		typicalSpeed = 823;
		airFriction = -0.000756;
		caliber = 0.914634;
	};
	class rhs_B_762x54_7BZ3_Ball: rhs_B_762x54_Ball
	{
		hit = 15.47;
		typicalSpeed = 808;
		caliber = 1.02722;
	};
	class rhs_B_762x54_7N26_Ball: rhs_B_762x54_Ball
	{
		hit = 14.47;
		typicalSpeed = 835;
		caliber = 1.10926;
	};
	class rhs_B_762x39_Ball: B_762x51_Ball
	{
		cartridge = "FxCartridge_762x39";
		hit = 8.5;
		typicalSpeed = 718;
		airFriction = -0.0016519;
		caliber = 0.55;
		deflecting = 15;
		visibleFire = 3;
		audibleFire = 6;
	};
	class rhs_B_762x39_Ball_89: rhs_B_762x39_Ball
	{
		caliber = 0.928505;
	};
	class rhs_B_762x39_Tracer: rhs_B_762x39_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerStartTime = 0.05;
		tracerEndTime = 3;
	};
	class rhs_B_762x39_U_Ball: rhs_B_762x39_Ball
	{
		hit = 5.79;
		caliber = 0.455063;
		typicalSpeed = 293;
		airFriction = -0.0011528;
		visibleFire = 1.5;
		audibleFire = 3;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
	};
	class rhs_B_9x39_SP5: rhs_B_762x39_Ball
	{
		cartridge = "FxCartridge_9mm";
		hit = 9.5;
		typicalSpeed = 295;
		airFriction = -0.00052;
		visibleFire = 1.25;
		audibleFire = 2.5;
		suppressionRadiusBulletClose = 3;
		suppressionRadiusHit = 5;
		deflecting = 21;
		caliber = 0.222222;
	};
	class rhs_B_9x39_SP6: rhs_B_9x39_SP5
	{
		hit = 11.3;
		indirectHit = 0;
		indirectHitRange = 0;
		deflecting = 5;
		caliber = 0.952381;
	};
	class rhs_g_vog25: G_40mm_HE
	{
		model = "\rhsafrf\addons\rhs_weapons2\vogs\rhs_vog25";
		airfriction = -0.0012;
		typicalspeed = 76.5;
	};
	class rhs_g_vog25p: rhs_g_vog25
	{
		model = "\rhsafrf\addons\rhs_weapons2\vogs\rhs_vog25p";
		deflecting = 90;
		class HitEffects
		{
			hitMetal = "RHS_vog25p_hit";
			hitMetalPlate = "RHS_vog25p_hit";
			hitBuilding = "RHS_vog25p_hit";
			hitConcrete = "RHS_vog25p_hit";
			hitGroundSoft = "RHS_vog25p_hit";
			hitGroundHard = "RHS_vog25p_hit";
			default_mat = "RHS_vog25p_hit";
			hitFoliage = "RHS_vog25p_hit";
			hitGlass = "RHS_vog25p_hit";
			hitGlassArmored = "RHS_vog25p_hit";
			hitWood = "RHS_vog25p_hit";
			hitPlastic = "RHS_vog25p_hit";
			hitRubber = "RHS_vog25p_hit";
			hitMan = "RHS_vog25p_hit";
			hitWater = "RHS_vog25p_hit";
			hitVirtual = "RHS_vog25p_hit";
		};
		typicalspeed = 75;
	};
	class rhs_g_vg40tb: rhs_g_vog25
	{
		hit = 40;
		indirectHit = 45;
		indirectHitRange = 4;
		typicalspeed = 70;
		ExplosionEffects = "RHS_Thermobaric_Explosion";
		CraterEffects = "RHS_Thermobaric_Crater_Small";
		model = "\rhsafrf\addons\rhs_weapons2\vogs\rhs_vg40md";
		submunitionConeAngle[] = {120, 220};
		submunitionConeAngleHorizontal = 720;
		submunitionAutoleveling = 1;
		submunitionConeType[] = {"randomupcone", 10};
		submunitionAmmo = "rhs_ammo_thermobaric_wave";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0.2, -0.4};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 200;
		deleteParentWhenTriggered = 0;
		triggerTime = -1;
		triggerOnImpact = 1;
	};
	class rhs_g_vg40sz: rhs_g_vog25
	{
		hit = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalspeed = 70;
		fuseDistance = 2;
		explosionTime = 3;
		ExplosionEffects = "RHS_flashbang_10";
	};
	class rhs_g_gdm40: rhs_g_vog25
	{
		model = "\rhsafrf\addons\rhs_weapons2\vogs\rhs_gdm40";
		hit = 2;
		indirectHit = 12;
		indirectHitRange = 2;
		typicalspeed = 55;
		explosionEffects = "RHS_GDM40Effect";
		CraterEffects = "";
		soundHit1[] = {"rhsafrf\addons\rhs_sounds\smoke\GDM40_1.wss", 5, 1, 1500};
		soundHit2[] = {"rhsafrf\addons\rhs_sounds\smoke\GDM40_2.wss", 5, 1, 1500};
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		aiAmmoUsageFlags = 4;
		coefGravity = 1.6;
		fuseDistance = 0;
		explosionTime = 0.8;
		timeToLive = 1;
	};
	class rhs_g_vg40md: rhs_g_gdm40
	{
		model = "\rhsafrf\addons\rhs_weapons2\vogs\rhs_vg40md";
		explosionTime = -1;
		timeToLive = 25;
		coefGravity = 1;
	};
	class rhs_g_vg40md_white: rhs_g_vog25
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0.2;
		dangerRadiusHit = -1;
		suppressionRadiusHit = -1;
		typicalspeed = 70;
		cost = 100;
		simulation = "shotSmokeX";
		explosive = 0;
		deflecting = 8;
		explosionTime = 2;
		timeToLive = 30;
		fuseDistance = 0;
		soundHit[] = {"", 0, 1};
		SmokeShellSoundHit1[] = {"A3\Sounds_F\weapons\smokeshell\smoke_1", 1.25893, 1, 100};
		SmokeShellSoundHit2[] = {"A3\Sounds_F\weapons\smokeshell\smoke_2", 1.25893, 1, 100};
		SmokeShellSoundHit3[] = {"A3\Sounds_F\weapons\smokeshell\smoke_3", 1.25893, 1, 100};
		SmokeShellSoundLoop1[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop1", 0.125893, 1, 70};
		SmokeShellSoundLoop2[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop2", 0.125893, 1, 70};
		grenadeFireSound[] = {"SmokeShellSoundHit1", 0.25, "SmokeShellSoundHit2", 0.25, "SmokeShellSoundHit3", 0.5};
		grenadeBurningSound[] = {"SmokeShellSoundLoop1", 0.5, "SmokeShellSoundLoop2", 0.5};
		aiAmmoUsageFlags = "4 + 2";
		smokeColor[] = {1, 1, 1, 1};
		effectsSmoke = "SmokeShellWhiteEffect";
		whistleDist = 0;
		model = "\rhsafrf\addons\rhs_weapons2\vogs\rhs_vg40md";
	};
	class rhs_g_vg40md_green: rhs_g_vg40md_white
	{
		smokeColor[] = {0.2125, 0.6258, 0.4891, 1};
		effectsSmoke = "SmokeShellGreenEffect";
	};
	class rhs_g_vg40md_red: rhs_g_vg40md_white
	{
		smokeColor[] = {0.8438, 0.1383, 0.1353, 1};
		effectsSmoke = "SmokeShellRedEffect";
	};
	class rhs_mine_pmn2_ammo: MineBase
	{
		AIAmmoUsageFlags = "16";
		hit = 20;
		indirectHit = 25;
		indirectHitRange = 4;
		model = "\rhsafrf\addons\rhs_weapons\mines\rhs_pmn2";
		mineModelDisabled = "\rhsafrf\addons\rhs_weapons\mines\rhs_pmn2";
		icon = "iconExplosiveAP";
		defaultMagazine = "rhs_mine_pmn2_mag";
		soundHit[] = {"A3\Sounds_F\weapons\Mines\mine_debris_1", 3.16228, 1, 1500};
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\electron_trigger_1", 0.562341, 1, 50};
		soundActivation[] = {"A3\Sounds_F\weapons\mines\electron_activate_mine_1", 0.562341, 1, 50};
		explosionEffects = "MineExplosion";
		CraterEffects = "MineCrater";
		whistleDist = 8;
		cost = 200;
		mineInconspicuousness = 30;
		mineTrigger = "RangeTriggerShort";
	};
	class rhs_mine_tm62m_ammo: MineBase
	{
		AIAmmoUsageFlags = "16";
		hit = 2200;
		indirectHit = 1850;
		indirectHitRange = 2;
		model = "\rhsafrf\addons\rhs_weapons\mines\rhs_tm62m";
		mineModelDisabled = "\rhsafrf\addons\rhs_weapons\mines\rhs_tm62m";
		icon = "iconExplosiveAP";
		defaultMagazine = "rhs_mine_tm62m_mag";
		soundHit[] = {"A3\Sounds_F\weapons\mines\mine_debris_2", 3.16228, 1, 2000};
		explosionEffects = "ATMineExplosion";
		CraterEffects = "ATMineCrater";
		whistleDist = 8;
		cost = 200;
		mineInconspicuousness = 30;
		mineTrigger = "rhs_tm62Trigger";
	};
	class rhs_mine_msk40p_white_ammo: APERSMine_Range_Ammo
	{
		hit = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		minimumSafeZone = 0;
		minDamageForCamShakeHit = 1.55;
		mineInconspicuousness = 35;
		mineTrigger = "rhs_msk40p_trigger";
		CraterEffects = "IEDMineSmallLandCrater";
		explosionEffects = "rhs_msk40p_effect";
		rhs_flare_type = "rhs_mine_msk40p_white_flare";
		rhs_flare_used = "rhs_mine_msk40p_white_used";
		rhs_flare_offset[] = {0, 0, 0.35};
		class CamShakeExplode
		{
			power = 0;
			duration = 0.2;
			frequency = 20;
			distance = 0;
		};
		class CamShakeHit
		{
			power = 0;
			duration = 0.2;
			frequency = 20;
			distance = 1;
		};
		model = "\rhsafrf\addons\rhs_weapons\mines\rhs_msk40p_white_e";
		mineModelDisabled = "\rhsafrf\addons\rhs_weapons\mines\rhs_msk40p_white_d";
		defaultMagazine = "rhs_mine_msk40p_white_mag";
		soundHit[] = {"\A3\Sounds_F\arsenal\explosives\mines\Explosion_tripwire_landmine", 3.16228, 1, 1500};
		SoundSetExplosion[] = {"TrainingMine_Exp_SoundSet", "TrainingMine_Report_SoundSet"};
		whistleDist = 8;
		cost = 200;
		class Eventhandlers: EventHandlers
		{
			class RHS_FlareExplosion
			{
				AmmoHit = "_this remoteExec ['rhs_fnc_tripwireFlare_msk40p']";
			};
		};
	};
	class rhs_mine_msk40p_red_ammo: rhs_mine_msk40p_white_ammo
	{
		rhs_flare_type = "rhs_mine_msk40p_red_flare";
		rhs_flare_used = "rhs_mine_msk40p_red_used";
		model = "rhsafrf\addons\rhs_weapons\mines\rhs_msk40p_red_e";
		mineModelDisabled = "rhsafrf\addons\rhs_weapons\mines\rhs_msk40p_red_d";
		defaultMagazine = "rhs_mine_msk40p_red_mag";
	};
	class rhs_mine_msk40p_green_ammo: rhs_mine_msk40p_white_ammo
	{
		rhs_flare_type = "rhs_mine_msk40p_green_flare";
		rhs_flare_used = "rhs_mine_msk40p_green_used";
		model = "rhsafrf\addons\rhs_weapons\mines\rhs_msk40p_green_e";
		mineModelDisabled = "rhsafrf\addons\rhs_weapons\mines\rhs_msk40p_green_d";
		defaultMagazine = "rhs_mine_msk40p_green_mag";
	};
	class rhs_mine_msk40p_blue_ammo: rhs_mine_msk40p_white_ammo
	{
		rhs_flare_type = "rhs_mine_msk40p_blue_flare";
		rhs_flare_used = "rhs_mine_msk40p_blue_used";
		model = "rhsafrf\addons\rhs_weapons\mines\rhs_msk40p_blue_e";
		mineModelDisabled = "rhsafrf\addons\rhs_weapons\mines\rhs_msk40p_blue_d";
		defaultMagazine = "rhs_mine_msk40p_blue_mag";
	};
	class rhs_mine_sm320_white_ammo: rhs_mine_msk40p_white_ammo
	{
		mineInconspicuousness = 45;
		mineTrigger = "rhs_sm320_trigger";
		rhs_flare_type = "rhs_mine_sm320_white_flare";
		rhs_flare_used = "rhs_mine_sm320_white_used";
		rhs_flare_offset[] = {0, 0, 0.22};
		model = "rhsafrf\addons\rhs_weapons\mines\rhs_sm320_e";
		mineModelDisabled = "rhsafrf\addons\rhs_weapons\mines\rhs_sm320_white_d";
		defaultMagazine = "rhs_mine_sm320_white_mag";
	};
	class rhs_mine_sm320_red_ammo: rhs_mine_sm320_white_ammo
	{
		rhs_flare_type = "rhs_mine_sm320_red_flare";
		rhs_flare_used = "rhs_mine_sm320_red_used";
		mineModelDisabled = "rhsafrf\addons\rhs_weapons\mines\rhs_sm320_red_d";
		defaultMagazine = "rhs_mine_sm320_red_mag";
	};
	class rhs_mine_sm320_green_ammo: rhs_mine_sm320_white_ammo
	{
		rhs_flare_type = "rhs_mine_sm320_green_flare";
		rhs_flare_used = "rhs_mine_sm320_green_used";
		mineModelDisabled = "rhsafrf\addons\rhs_weapons\mines\rhs_sm320_green_d";
		defaultMagazine = "rhs_mine_sm320_green_mag";
	};
	class rhs_mine_msk40p_white_flare: F_40mm_White
	{
		effectFlare = "rhs_msk40p_flare_effect";
		brightness = 25;
		timeToLive = 5;
		triggerTime = 0;
		airFriction = -1e-005;
		flareAirFriction = -0.05;
		intensity = 50000;
	};
	class rhs_mine_msk40p_red_flare: rhs_mine_msk40p_white_flare
	{
		lightColor[] = {0.5, 0.25, 0.25, 0};
	};
	class rhs_mine_msk40p_green_flare: rhs_mine_msk40p_white_flare
	{
		lightColor[] = {0.25, 0.5, 0.25, 0};
	};
	class rhs_mine_msk40p_blue_flare: rhs_mine_msk40p_white_flare
	{
		lightColor[] = {0.1183, 0.1867, 1, 0};
	};
	class rhs_mine_sm320_white_flare: rhs_mine_msk40p_white_flare
	{
		timeToLive = 3;
		flareAirFriction = -0.25;
	};
	class rhs_mine_sm320_red_flare: rhs_mine_sm320_white_flare
	{
		lightColor[] = {0.5, 0.25, 0.25, 0};
	};
	class rhs_mine_sm320_green_flare: rhs_mine_sm320_white_flare
	{
		lightColor[] = {0.25, 0.5, 0.25, 0};
	};
	class rhs_mine_ozm72_a_ammo: APERSMine_Range_Ammo
	{
		AIAmmoUsageFlags = "16";
		hit = 15;
		indirectHit = 15;
		indirectHitRange = 10;
		model = "\rhsafrf\addons\rhs_weapons\mines\rhs_ozm72_a_e";
		mineModelDisabled = "\rhsafrf\addons\rhs_weapons\mines\rhs_ozm72_a_d";
		icon = "iconExplosiveAP";
		defaultMagazine = "rhs_mine_ozm72_a_mag";
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_2", 3.16228, 1, 50};
		soundActivation[] = {"A3\Sounds_F\weapons\mines\mech_activate_mine_1", 0.562341, 1, 30};
		soundDeactivation[] = {"A3\Sounds_F\weapons\mines\deactivate_mine_3a", 0.562341, 1, 30};
		soundHit[] = {"\A3\Sounds_F\arsenal\explosives\mines\Explosion_tripwire_landmine", 3.16228, 1, 1500};
		explosionEffects = "";
		CraterEffects = "";
		deleteParentWhenTriggered = 1;
		submunitionAmmo[] = {"rhs_mine_ozm72_explo_ammo", 1};
		submunitionConeAngle[] = {0, 10};
		submunitionConeAngleHorizontal = 720;
		submunitionAutoleveling = 1;
		submunitionConeType[] = {"randomupcone", 1};
		submunitionInitSpeed = 60;
		whistleDist = 8;
		cost = 200;
		mineInconspicuousness = 30;
		mineTrigger = "rhs_ozm72_a_Trigger";
	};
	class rhs_mine_ozm72_b_ammo: rhs_mine_ozm72_a_ammo
	{
		model = "\rhsafrf\addons\rhs_weapons\mines\rhs_ozm72_b_e";
		mineModelDisabled = "\rhsafrf\addons\rhs_weapons\mines\rhs_ozm72_b_d";
		defaultMagazine = "rhs_mine_ozm72_b_mag";
		mineTrigger = "rhs_ozm72_b_Trigger";
	};
	class rhs_mine_ozm72_c_ammo: rhs_mine_ozm72_a_ammo
	{
		model = "\rhsafrf\addons\rhs_weapons\mines\rhs_ozm72_c_e";
		mineModelDisabled = "\rhsafrf\addons\rhs_weapons\mines\rhs_ozm72_c_d";
		icon = "iconExplosiveAPDirectional";
		defaultMagazine = "rhs_mine_ozm72_c_mag";
		cost = 400;
		mineTrigger = "RemoteTrigger";
	};
	class rhs_mine_ozm72_explo_ammo: ShellBase
	{
		explosionTime = 0.05;
		hit = 15;
		indirectHit = 15;
		indirectHitRange = 10;
	};
	class rhs_ec75_ammo: PipeBombBase
	{
		hit = 200;
		indirectHit = 200;
		indirectHitRange = 1;
		model = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec75_e";
		mineModelDisabled = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec75_d";
		soundHit[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosive_Charge", 3.16228, 1, 1500};
		soundDeactivation[] = {"A3\Sounds_F\weapons\Mines\deactivate_mine_3a", 1.41254, 1, 20};
		SoundSetExplosion[] = {"ExplosiveCharge_Exp_SoundSet", "ExplosiveCharge_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		defaultMagazine = "rhs_ec75_mag";
		ExplosionEffects = "MineNondirectionalExplosionSmall";
		CraterEffects = "MineNondirectionalCraterSmall";
		whistleDist = 32;
		mineInconspicuousness = 5;
		mineTrigger = "RemoteTrigger";
	};
	class rhs_ec75_sand_ammo: rhs_ec75_ammo
	{
		model = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec75_sand_e";
		mineModelDisabled = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec75_sand_d";
		defaultMagazine = "rhs_ec75_sand_mag";
	};
	class rhs_ec200_ammo: rhs_ec75_ammo
	{
		hit = 400;
		indirectHit = 400;
		indirectHitRange = 3;
		model = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec200_e";
		mineModelDisabled = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec200_d";
		defaultMagazine = "rhs_ec200_mag";
	};
	class rhs_ec200_sand_ammo: rhs_ec200_ammo
	{
		model = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec200_sand_e";
		mineModelDisabled = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec200_sand_d";
		defaultMagazine = "rhs_ec200_sand_mag";
	};
	class rhs_ec400_ammo: rhs_ec75_ammo
	{
		hit = 1000;
		indirectHit = 1000;
		indirectHitRange = 5;
		model = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec400_e";
		mineModelDisabled = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec400_d";
		defaultMagazine = "rhs_ec400_mag";
	};
	class rhs_ec400_sand_ammo: rhs_ec400_ammo
	{
		model = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec400_sand_e";
		mineModelDisabled = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec400_sand_d";
		defaultMagazine = "rhs_ec400_sand_mag";
	};
	class rhs_rpg26_rocket: R_PG32V_F
	{
		AIAmmoUsageFlags = "128+256+512";
		model = "\rhsafrf\addons\rhs_weapons\rpg26\rpg26_projectile";
		warheadName = "HEAT";
		submunitionAmmo = "rhs_rpg26_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 200;
		indirectHit = 10;
		indirectHitRange = 1;
		caliber = 0.8;
		cost = 200;
		airFriction = 0;
		sideAirFriction = 0.01;
		simulationStep = 0.01;
		maxSpeed = 144;
		initTime = 0.15;
		thrustTime = 0.5;
		thrust = 10;
		fuseDistance = 5;
		explosive = 0.35;
		visibleFire = 28;
		audibleFire = 16;
		whistleDist = 4;
		timeToLive = 12;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissileInit = "RocketBackEffectsNLAW";
		effectsMissile = "missile3";
		class CamShakeFire
		{
			power = 10;
			duration = 0.5;
			frequency = 20;
			distance = 30;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
		};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly", 1.1, 0.7, 250};
	};
	class rhs_rpg26_penetrator: rhs_ammo_base_penetrator
	{
		caliber = 29.3333;
	};
	class rhs_rpg18_rocket: rhs_rpg26_rocket
	{
		submunitionAmmo = "rhs_rpg18_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		airFriction = 0.7;
		hit = 180;
		maxSpeed = 115;
		timeToLive = 6;
	};
	class rhs_rpg18_penetrator: rhs_ammo_base_penetrator
	{
		caliber = 20;
	};
	class rhs_rpg7v2_pg7vl: rhs_rpg26_rocket
	{
		model = "\rhsafrf\addons\rhs_weapons\rpg7\projectiles\pg7vl";
		submunitionAmmo = "rhs_rpg7v2_pg7vl_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 220;
		indirectHit = 20;
		indirectHitRange = 2;
		cost = 200;
		airfriction = 0.6;
		sideAirFriction = 0.13;
		simulationStep = 0.01;
		maxSpeed = 295;
		initTime = 0.1;
		thrustTime = 0.5;
		thrust = 180;
		fuseDistance = 5;
		visibleFire = 28;
		audibleFire = 16;
		whistleDist = 4;
		timeToLive = 6;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "missile3";
		airLock = 1;
		class CamShakeFire
		{
			power = 10;
			duration = 0.5;
			frequency = 20;
			distance = 30;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
		};
	};
	class rhs_rpg7v2_pg7vl_penetrator: rhs_ammo_base_penetrator
	{
		caliber = 36;
	};
	class rhs_rpg7v2_pg7v: rhs_rpg7v2_pg7vl
	{
		model = "\rhsafrf\addons\rhs_weapons\rpg7\projectiles\pg7v";
		airfriction = 0.82;
		sideAirFriction = 0.2105;
		thrustTime = 0.69;
		thrust = 195;
		submunitionAmmo = "rhs_rpg7v2_pg7v_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_rpg7v2_pg7v_penetrator: rhs_ammo_base_penetrator
	{
		caliber = 17.3333;
	};
	class rhs_rpg7v2_pg7vm: rhs_rpg7v2_pg7v
	{
		airfriction = 0.87;
		sideAirFriction = 0.175;
		submunitionAmmo = "rhs_rpg7v2_pg7vm_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_rpg7v2_pg7vm_penetrator: rhs_ammo_base_penetrator
	{
		caliber = 20;
	};
	class rhs_rpg7v2_pg7vs: rhs_rpg7v2_pg7vm
	{
		submunitionAmmo = "rhs_rpg7v2_pg7vm_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_rpg7v2_pg7vs_penetrator: rhs_ammo_base_penetrator
	{
		caliber = 26.6667;
	};
	class rhs_rpg7v2_pg7vr: rhs_rpg7v2_pg7vl
	{
		AIAmmoUsageFlags = "128+512";
		model = "\rhsafrf\addons\rhs_weapons\rpg7\projectiles\pg7vr";
		warheadName = "TandemHEAT";
		submunitionAmmo = "rhs_rpg7v2_pg7vr_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 230;
		indirectHit = 20;
		indirectHitRange = 0.8;
		cost = 300;
		maxSpeed = 110;
		initTime = 0.15;
		airfriction = 0.9;
		sideAirFriction = 0.1;
		thrust = 120;
		fuseDistance = 5;
		timeToLive = 6;
		airLock = 1;
	};
	class rhs_rpg7v2_pg7vr_penetrator: rhs_ammo_base_penetrator
	{
		warheadName = "TandemHEAT";
		caliber = 41.3333;
	};
	class rhs_rpg7v2_tbg7v: rhs_rpg7v2_pg7vl
	{
		warheadName = "HE";
		AIAmmoUsageFlags = "64+128+256";
		model = "\rhsafrf\addons\rhs_weapons\rpg7\projectiles\tbg7v";
		hit = 120;
		indirectHit = 60;
		indirectHitRange = 12;
		cost = 100;
		maxSpeed = 110;
		initTime = 0.15;
		airfriction = 0.9;
		thrust = 120;
		explosive = 1;
		allowAgainstInfantry = 1;
		timeToLive = 60;
		CraterEffects = "ArtyShellCrater";
		explosionEffects = "RHS_FAE_Explosion";
		class CamShakeExplode
		{
			power = 22;
			duration = 2;
			frequency = 20;
			distance = 227.905;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.23853;
			duration = 2;
			frequency = 20;
			distance = 83.9047;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		submunitionConeAngle[] = {120, 220};
		submunitionConeAngleHorizontal = 720;
		submunitionAutoleveling = 1;
		submunitionConeType[] = {"randomupcone", 15};
		submunitionAmmo = "rhs_ammo_thermobaric_wave";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.4};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 200;
		deleteParentWhenTriggered = 0;
		triggerTime = -1;
		triggerOnImpact = 1;
	};
	class rhs_rpg7v2_og7v: rhs_rpg7v2_pg7vl
	{
		warheadName = "HE";
		AIAmmoUsageFlags = "64+128+256";
		model = "\rhsafrf\addons\rhs_weapons\rpg7\projectiles\og7v";
		submunitionAmmo = "";
		hit = 75;
		indirectHit = 20;
		indirectHitRange = 15;
		cost = 100;
		initTime = 0;
		thrust = 0;
		airfriction = 0.8;
		sideAirFriction = 0.09;
		fuseDistance = 5;
		explosive = 1;
		allowAgainstInfantry = 1;
		timeToLive = 60;
		CraterEffects = "HEShellCrater";
		CraterWaterEffects = "ImpactEffectsWaterHE";
		ExplosionEffects = "HEShellExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		class CamShakeExplode
		{
			power = 24;
			duration = 2.2;
			frequency = 20;
			distance = 231.636;
		};
		class CamShakeHit
		{
			power = 120;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.30975;
			duration = 2.2;
			frequency = 20;
			distance = 87.6356;
		};
		class CamShakePlayerFire
		{
			power = 3;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly", 1.1, 1.5, 25};
	};
	class rhs_rpg7v2_type63_airburst: rhs_rpg7v2_og7v
	{
		warheadName = "HE";
		model = "\rhsafrf\addons\rhs_weapons\rpg7\projectiles\Type69";
		hit = 55;
		indirectHit = 16;
		indirectHitRange = 12;
		cost = 100;
		airfriction = 0.6;
		sideAirFriction = 0.1;
		maxSpeed = 295;
		initTime = 0.1;
		thrustTime = 0.5;
		thrust = 180;
		timeToLive = 8;
		deflecting = 0.999999;
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly", 1.1, 0.7, 250};
		class EventHandlers: EventHandlers
		{
			class RHS_Airburst
			{
				fired = "_this call RHS_fnc_rpg_airburst";
			};
		};
	};
	class rhs_rshg2_rocket: rhs_rpg7v2_tbg7v
	{
		warheadName = "HE";
		AIAmmoUsageFlags = "64+128";
		hit = 80;
		indirectHit = 50;
		indirectHitRange = 10;
		caliber = 1;
		airFriction = 0.75;
		sideAirFriction = 0.01;
		simulationStep = 0.01;
		timeToLive = 20;
		effectsMissileInit = "RocketBackEffectsNLAW";
		maxSpeed = 144;
		initTime = 0.01;
		thrustTime = 0.1;
		thrust = 50;
		model = "\rhsafrf\addons\rhs_weapons\rpg26\rshg2_projectile";
		submunitionConeAngle[] = {120, 220};
		submunitionConeAngleHorizontal = 720;
		submunitionAutoleveling = 1;
		submunitionConeType[] = {"randomupcone", 15};
		submunitionAmmo = "rhs_ammo_thermobaric_wave";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.4};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 200;
		deleteParentWhenTriggered = 0;
		triggerTime = -1;
		triggerOnImpact = 1;
	};
	class rhs_ammo_9k32: M_Titan_AA
	{
		model = "\rhsafrf\addons\rhs_heavyweapons\igla\igla_fly";
		proxyShape = "\rhsafrf\addons\rhs_heavyweapons\igla\igla_missile";
		airlock = 2;
		cmimmunity = 0.8;
		cost = 750;
		fusedistance = 50;
		proximityExplosionDistance = 11;
		hit = 40;
		indirecthit = 31;
		indirecthitrange = 5;
		inittime = 0.25;
		irlock = 1;
		maneuvrability = 30;
		maxspeed = 580;
		simulationstep = 0.001;
		thrust = 220;
		thrusttime = 5.5;
		timetolive = 15;
		tracklead = 0.5;
		trackoversteer = 0.93;
		whistledist = 16;
		sideairfriction = 0.08;
		effectsMissile = "RHS_9k32_Fired";
		submunitionConeType[] = {"randomcenter", 30};
		submunitionConeAngle = 65;
		submunitionAmmo = "rhs_ammo_he_fragments";
		submunitionDirectionType = "SubmunitionTargetDirection";
		submunitionInitialOffset[] = {0, 0, 0};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1500;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		missileLockMaxDistance = 4000;
		missileLockMinDistance = 300;
		missileLockMaxSpeed = 333;
		missileLockCone = 15;
		missileKeepLockedCone = 60;
		weaponLockSystem = "2 + 16";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 1000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						typeRecognitionDistance = -1;
						angleRangeHorizontal = 35;
						angleRangeVertical = 35;
						groundNoiseDistanceCoef = 0.03;
						maxGroundNoiseDistance = 50;
						minSpeedThreshold = 0;
						maxSpeedThreshold = -1;
						maxFogSeeThrough = 0.8;
						minTrackableSpeed = 0;
						maxTrackableSpeed = 180;
						minTrackableATL = 25;
						maxTrackableATL = 4100;
						aimDown = 10;
					};
				};
			};
		};
	};
	class rhs_ammo_9k38: rhs_ammo_9k32
	{
		cmimmunity = 0.9;
		maxspeed = 800;
		maneuvrability = 34;
		trackoversteer = 0.95;
		sideairfriction = 0.072;
		trackLead = 0.56;
		missileLockMaxDistance = 4800;
		missileLockMinDistance = 300;
		missileLockMaxSpeed = 333;
		missileLockCone = 12;
		missileKeepLockedCone = 70;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 4800;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 1000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						typeRecognitionDistance = -1;
						angleRangeHorizontal = 35;
						angleRangeVertical = 35;
						groundNoiseDistanceCoef = 0.02;
						maxGroundNoiseDistance = 40;
						minSpeedThreshold = 0;
						maxSpeedThreshold = -1;
						maxFogSeeThrough = 0.8;
						minTrackableSpeed = 0;
						maxTrackableSpeed = 333;
						minTrackableATL = 20;
						maxTrackableATL = 3900;
					};
				};
			};
		};
	};
	class rhs_B_9x19_7N21: B_9x21_Ball
	{
		hit = 5.97;
		typicalSpeed = 393.192;
		airFriction = -0.00176715;
		caliber = 0.838;
		deflecting = 37;
		visibleFire = 2.8;
		audibleFire = 5.65;
	};
	class rhs_B_9x19_7N31: rhs_B_9x19_7N21
	{
		hit = 8.97;
		typicalSpeed = 600;
		airFriction = -0.00176715;
		caliber = 0.952;
		deflecting = 17;
	};
	class rhs_B_9x18_57N181S: B_9x21_Ball
	{
		hit = 5.07;
		typicalSpeed = 272;
		airFriction = -0.00176715;
		caliber = 0.838;
		deflecting = 37;
		visibleFire = 2.8;
		audibleFire = 5.65;
	};
	class rhs_B_9x21_7N28: B_9x21_Ball
	{
		hit = 7.07;
		typicalSpeed = 410;
		airFriction = -0.00176715;
		deflecting = 17;
		visibleFire = 2.8;
		audibleFire = 5.65;
	};
	class rhs_B_9x21_7N29: B_9x21_Ball
	{
		hit = 9.47;
		typicalSpeed = 410;
		airFriction = -0.00176715;
		deflecting = 37;
		visibleFire = 2.8;
		audibleFire = 5.65;
	};
	class rhs_B_9x21_7BT3: B_9x21_Ball
	{
		hit = 9.07;
		typicalSpeed = 410;
		airFriction = -0.00176715;
		deflecting = 37;
		visibleFire = 2.8;
		audibleFire = 5.65;
	};
	class rhs_40mm_white: F_40mm_White
	{
		brightness = 25;
		timeToLive = 60;
		intensity = 100000;
	};
	class rhs_40mm_red: F_40mm_Red
	{
		brightness = 25;
		timeToLive = 60;
		intensity = 100000;
	};
	class rhs_40mm_green: F_40mm_Green
	{
		brightness = 25;
		timeToLive = 60;
		intensity = 100000;
	};
	class rhs_ammo_rgd5: GrenadeHand
	{
		model = "\rhsafrf\addons\rhs_weapons\grenades\throw\frag_rgd5";
		explosionTime = 4;
	};
	class rhs_ammo_rgn: rhs_ammo_rgd5
	{
		model = "\rhsafrf\addons\rhs_weapons2\rgno\rgn_thrown";
		indirectHitRange = 4;
		timeToLive = 4;
		rhs_submunition = "rhs_ammo_rgn_impact";
		rhs_fuseTime[] = {1, 1.3, 1.8};
		rhs_selfDestructTime[] = {3.2, 3.6, 4.2};
	};
	class rhs_ammo_rgn_impact: rhs_ammo_rgn
	{
		rhs_submunition = "rhs_ammo_rgn_exp";
		explosionTime = -1;
	};
	class rhs_ammo_rgn_exp: rhs_ammo_rgn
	{
		simulation = "shotShell";
		explosionTime = 0.001;
	};
	class rhs_ammo_rgo: rhs_ammo_rgn
	{
		model = "\rhsafrf\addons\rhs_weapons2\rgno\rgo_thrown";
		rhs_submunition = "rhs_ammo_rgo_impact";
		indirectHitRange = 8;
	};
	class rhs_ammo_rgo_impact: rhs_ammo_rgo
	{
		rhs_submunition = "rhs_ammo_rgo_exp";
		explosionTime = -1;
	};
	class rhs_ammo_rgo_exp: rhs_ammo_rgo
	{
		simulation = "shotShell";
		explosionTime = 0.001;
	};
	class rhs_ammo_rdg2_white: SmokeShell
	{
		model = "\rhsafrf\addons\rhs_weapons\grenades\rdg2_white";
		effectsSmoke = "RHS_SmokeShell";
	};
	class rhs_ammo_rdg2_black: rhs_ammo_rdg2_white
	{
		smokeColor[] = {0, 0, 0, 1};
		model = "\rhsafrf\addons\rhs_weapons\grenades\rdg2_black";
		effectsSmoke = "RHS_SmokeShell";
	};
	class rhs_ammo_nspn_yellow: rhs_ammo_rdg2_white
	{
		AIAmmoUsageFlags = "1+4";
		smokeColor[] = {0.9883, 0.8606, 0.0719, 1};
		lightColor[] = {0.5, 0.5, 0.25, 0};
		effectsSmoke = "EmptyEffect";
		effectFlare = "CounterMeasureFlare";
		model = "\rhsafrf\addons\rhs_weapons\grenades\smk_nsp_n";
		useFlare = 1;
		size = 1;
		flareSize = 2;
		timeToLive = 35;
		intensity = 80000;
		brightness = 12;
		deflecting = 20;
		triggerTime = 3;
		triggerSpeedCoef = 1;
		simulation = "shotIlluminating";
	};
	class rhs_ammo_nspn_red: rhs_ammo_nspn_yellow
	{
		smokeColor[] = {0.8438, 0.1383, 0.1353, 1};
		lightColor[] = {0.5, 0.25, 0.25, 0};
	};
	class rhs_ammo_nspn_green: rhs_ammo_nspn_yellow
	{
		smokeColor[] = {0.2125, 0.6258, 0.4891, 1};
		lightColor[] = {0.25, 0.5, 0.25, 0};
	};
	class rhs_ammo_nspd: rhs_ammo_rdg2_white
	{
		smokeColor[] = {0.6697, 0.2275, 0.10053, 1};
		timeToLive = 35;
		model = "\rhsafrf\addons\rhs_weapons\grenades\smk_nsp_d";
	};
	class rhs_ammo_fakel: GrenadeHand
	{
		hit = 0.1;
		indirectHit = 1;
		indirectHitRange = 8;
		ExplosionEffects = "RHS_flashbang_20";
		craterEffects = "RHS_flashbang_Crater";
		explosionTime = 2.5;
		cost = 10;
		model = "\rhsafrf\addons\rhs_weapons\grenades\throw\acc_fakel_s";
	};
	class rhs_ammo_fakels: rhs_ammo_fakel
	{
		hit = 0.1;
		indirectHit = 0.1;
		indirectHitRange = 10;
		ExplosionEffects = "RHS_flashbang_10";
		explosionTime = 3;
		model = "\rhsafrf\addons\rhs_weapons\grenades\throw\acc_fakel";
	};
	class rhs_ammo_zarya2: rhs_ammo_fakels
	{
		ExplosionEffects = "RHS_flashbang_15";
		explosionTime = 4;
		model = "\rhsafrf\addons\rhs_weapons\grenades\throw\acc_zarya";
	};
	class rhs_ammo_plamyam: rhs_ammo_fakels
	{
		ExplosionEffects = "RHS_flashbang_15";
		explosionTime = 1.5;
		model = "\rhsafrf\addons\rhs_weapons\grenades\throw\acc_plamyaM";
	};
	class rhsusf_ammo_basic_penetrator: Sh_125mm_APFSDS
	{
		caliber = 6.66667;
		warheadName = "HEAT";
		hit = 290;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		typicalSpeed = 1000;
		deflecting = 0;
		deflectionDirDistribution = 0;
		penetrationDirDistribution = 0;
		timeToLive = 0.01;
		simulationStep = 0.0005;
		airFriction = -0.5;
		whistleOnFire = 0;
		whistleDist = 0;
		submunitionConeType[] = {"randomcenter", 30};
		submunitionAmmo = "rhs_ammo_spall";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.4};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 200;
		deleteParentWhenTriggered = 0;
		triggerTime = 0.003;
		model = "\A3\Weapons_f\empty";
	};
	class rhs_laserbeam_ai: Laserbeam
	{
		simulationStep = 0.1;
		cost = 5000;
		airFriction = -1e-008;
		timeToLive = 20;
		maxSpeed = 350;
		airLock = 1;
		irLock = 1;
		aiAmmoUsageFlags = "64+32+128+256+512";
	};
	class rhs_ammo_flechettes: BulletBase
	{
		hit = 4;
		indirectHit = 0;
		indirectHitRange = 0.15;
		typicalSpeed = 200;
		deflecting = 50;
	};
	class rhs_ammo_flechettes_m1028: rhs_ammo_flechettes
	{
		hit = 7;
		indirectHit = 4.2;
		indirectHitRange = 1.75;
		typicalSpeed = 1000;
		airFriction = -0.00045;
	};
	class rhs_ammo_M1069: Sh_120mm_HE
	{
		hit = 350;
		indirectHit = 45;
		indirectHitRange = 7;
		typicalSpeed = 1000;
		explosive = 0.8;
		cost = 200;
		airFriction = -0.00045;
		caliber = 12;
		timeToLive = 15;
		whistleDist = 14;
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class rhs_ammo_M1147: rhs_ammo_M1069
	{
	};
	class rhs_ammo_M416: rhs_ammo_M1069
	{
		caliber = 16.2963;
		airFriction = -4.5e-013;
	};
	class rhs_ammo_M1028: rhs_ammo_M1069
	{
		simulation = "shotSubmunitions";
		submunitionAmmo = "rhs_ammo_flechettes_m1028";
		submunitionConeType[] = {"randomcenter", 143};
		submunitionConeAngle = "0.009 * 120";
		triggerTime = 0.01;
	};
	class rhs_ammo_M829: Sh_120mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		deflecting = 6;
		airFriction = -4e-005;
		simulationStep = 0.01;
		timeToLive = 15;
		whistleOnFire = 1;
		whistleDist = 14;
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
		effectFly = "RHS_120mm_Sabot_Eject";
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_M829_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_M829_penetrator: rhs_ammo_ap_penetrator
	{
		hit = 250;
		typicalSpeed = 1670;
		deflecting = 6;
		caliber = 24.3912;
	};
	class rhs_ammo_M829A1: rhs_ammo_M829
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_M829A1_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_M829A1_penetrator: rhs_ammo_M829_penetrator
	{
		hit = 240;
		typicalSpeed = 1575;
		caliber = 27.3862;
	};
	class rhs_ammo_M829A2: rhs_ammo_M829
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_M829A2_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_M829A2_penetrator: rhs_ammo_M829_penetrator
	{
		hit = 240;
		typicalSpeed = 1680;
		caliber = 30.5159;
	};
	class rhs_ammo_M829A3: rhs_ammo_M829
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_M829A3_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_M829A3_penetrator: rhs_ammo_M829_penetrator
	{
		hit = 250;
		typicalSpeed = 1555;
		caliber = 34.8124;
	};
	class rhs_ammo_M830: Sh_120mm_APFSDS
	{
		warheadName = "HEAT";
		airLock = 1;
		explosive = 0.5;
		caliber = 0.5;
		cost = 1;
		hit = 250;
		indirectHit = 11;
		indirectHitRange = 1.15;
		typicalSpeed = 1140;
		tracerEndTime = 3.5;
		aiAmmoUsageFlags = "32+64+128+256+512";
		deflecting = 0;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		submunitionAmmo = "rhs_ammo_M830_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_M830_penetrator: rhsusf_ammo_basic_penetrator
	{
		caliber = 40;
	};
	class rhs_ammo_M830A1: rhs_ammo_M830
	{
		explosive = 0.8;
		indirectHit = 24;
		indirectHitRange = 3.15;
		submunitionAmmo = "rhs_ammo_M830A1_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_M830A1_penetrator: rhsusf_ammo_basic_penetrator
	{
		caliber = 30;
	};
	class RHS_ammo_M919_APFSDS: B_30mm_APFSDS_Tracer_Red
	{
		hit = 90;
		caliber = 4.46009;
		typicalspeed = 1385;
		maxSpeed = 1385;
		airfriction = -0.0002;
		tracerEndTime = 3.1;
	};
	class RHS_ammo_M792_HEI: B_30mm_HE
	{
		timeToLive = 7.5;
		airfriction = -0.00056;
		typicalspeed = 1100;
		maxSpeed = 1100;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class rhs_ammo_mk19m3_M384: G_40mm_HE
	{
		hit = 40;
		airFriction = -0.0008;
	};
	class rhs_ammo_mk19m3_M430I: rhs_ammo_mk19m3_M384
	{
		hit = 35;
		submunitionAmmo = "rhs_ammo_mk19m3_M430I_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_mk19m3_M430I_penetrator: rhsusf_ammo_basic_penetrator
	{
		hit = 90;
		caliber = 3.33333;
	};
	class rhs_ammo_mk19m3_M430A1: rhs_ammo_mk19m3_M430I
	{
		hit = 35;
		submunitionAmmo = "rhs_ammo_mk19m3_M430A1_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_mk19m3_M430A1_penetrator: rhs_ammo_mk19m3_M430I_penetrator
	{
		hit = 90;
		caliber = 5.06667;
	};
	class rhs_ammo_mk19m3_M1001: rhs_ammo_mk19m3_M384
	{
		simulation = "shotSubmunitions";
		submunitionAmmo = "rhs_ammo_flechettes";
		submunitionConeType[] = {"randomcenter", 56};
		submunitionConeAngle = "0.009 * 160";
		triggerTime = 0.01;
	};
	class rhs_ammo_m1_he: Sh_155mm_AMOS
	{
		cost = 100;
		artilleryLock = 1;
		hit = 110;
		indirectHit = 75;
		indirectHitRange = 21;
		timetolive = 220;
		class CamShakeExplode
		{
			power = "(105*0.2)*10";
			duration = "((round (105^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((30 + 105^0.5))";
		};
		class CamShakeHit
		{
			power = "105 * 10";
			duration = "((round (105^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(105^0.25)*10";
			duration = "((round (105^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((105^0.5))";
		};
	};
	class rhs_ammo_m314_ilum: Flare_82mm_AMOS_White
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		ExplosionEffects = "";
		soundHit[] = {"", 0, 1};
		CraterEffects = "";
		whistleDist = 0;
		intensity = "10000 * 6";
		timeToLive = 90;
	};
	class rhs_ammo_m60a2_smoke: Smoke_120mm_AMOS_White
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0.1;
		ExplosionEffects = "";
		soundHit[] = {"", 0, 1};
		CraterEffects = "";
		whistleDist = 0;
	};
	class rhs_m821_he: Sh_82mm_AMOS
	{
		model = "\rhsusf\addons\rhsusf_m252\rhs_m821_he";
	};
	class rhs_ammo_30x173mm_GAU8_mixed: SubmunitionBase
	{
		hit = 180;
		indirectHit = 4;
		indirectHitRange = 8;
		caliber = 5;
		explosive = 0.4;
		airlock = 1;
		deflecting = 5;
		airFriction = -0.00036;
		typicalSpeed = 960;
		visibleFire = 32;
		audibleFire = 250;
		visibleFireTime = 3;
		fuseDistance = 10;
		dangerRadiusBulletClose = 20;
		dangerRadiusHit = 60;
		suppressionRadiusBulletClose = 12;
		suppressionRadiusHit = 24;
		cost = 20;
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128 + 512";
		weaponType = "cannon";
		simulation = "shotSubmunitions";
		triggerTime = 0.01;
		submunitionAmmo[] = {"rhs_ammo_PGU14B_API", 0.8, "rhs_ammo_PGU13B_HE", 0.2};
		model = "\A3\Weapons_f\empty";
		class CamShakeExplode
		{
			power = 6;
			duration = 1;
			frequency = 20;
			distance = 83.8178;
		};
		class CamShakeHit
		{
			power = 30;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.34035;
			duration = 1;
			frequency = 20;
			distance = 43.8178;
		};
		class CamShakePlayerFire
		{
			power = 30;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class rhs_ammo_PGU13B_HE: Gatling_30mm_HE_Plane_CAS_01_F
	{
		hit = 80;
		explosive = 0.9;
		timeToLive = 10;
	};
	class rhs_ammo_PGU14B_API: B_30mm_APFSDS_Tracer_Red
	{
		hit = 120;
		explosive = 0;
		typicalSpeed = 860;
		airFriction = -0.00036;
		timeToLive = 10;
		caliber = 6;
		tracerEndTime = 10;
	};
	class rhs_ammo_30x113mm_M789_HEDP: B_30mm_HE
	{
		allowagainstinfantry = 1;
		hit = 37;
		indirectHit = 15;
		indirectHitRange = 3;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 4;
		explosive = 0.4;
		caliber = 2;
		airFriction = -0.00078;
		timeToLive = 12;
		submunitionAmmo = "rhs_ammo_30x113mm_M789_HEDP_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_30x113mm_M789_HEDP_laser: rhs_ammo_30x113mm_M789_HEDP
	{
		laserLock = 1;
	};
	class rhs_ammo_30x113mm_M789_HEDP_penetrator: rhsusf_ammo_basic_penetrator
	{
		hit = 90;
		submunitionConeType[] = {"randomcenter", 4};
		caliber = 1.66667;
	};
	class rhs_ammo_20mm_AP: B_20mm
	{
		hit = 45;
		indirectHit = 10;
		indirectHitRange = 2;
		visibleFire = 28;
		audibleFire = 28;
		visibleFireTime = 3;
		cost = 25;
		airLock = 1;
		explosive = 0.3;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1.8;
		tracerStartTime = 0.1;
		tracerEndTime = 3.5;
		airFriction = -0.00077;
		caliber = 2.33;
		timeToLive = 12;
	};
	class rhs_ammo_127x99_Ball: B_127x99_Ball
	{
		caliber = 2.34848;
		class CamShakeFire
		{
			power = 1;
			duration = 0.2;
			frequency = 20;
			distance = 8;
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class rhs_ammo_127x99_Ball_Tracer_Red: rhs_ammo_127x99_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerEndTime = 3;
	};
	class rhs_ammo_127x99_Ball_Tracer_Green: rhs_ammo_127x99_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerEndTime = 3;
	};
	class rhs_ammo_127x99_Ball_Tracer_Yellow: rhs_ammo_127x99_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerEndTime = 3;
	};
	class rhs_ammo_127x99_SLAP: B_127x99_SLAP
	{
		caliber = 2.80992;
		class CamShakeFire
		{
			power = 1;
			duration = 0.2;
			frequency = 20;
			distance = 8;
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class rhs_ammo_127x99_SLAP_Tracer_Red: rhs_ammo_127x99_SLAP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerEndTime = 3;
	};
	class rhs_ammo_127x99_SLAP_Tracer_Green: rhs_ammo_127x99_SLAP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerEndTime = 3;
	};
	class rhs_ammo_127x99_SLAP_Tracer_Yellow: rhs_ammo_127x99_SLAP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerEndTime = 3;
	};
	class rhs_ammo_127x99_Ball_Plane: rhs_ammo_127x99_Ball
	{
		class CamShakeFire
		{
			power = 1.56508;
			duration = 0.4;
			frequency = 20;
			distance = 19.5959;
		};
		class CamShakePlayerFire
		{
			power = 6;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class rhs_ammo_127x99_Ball_Tracer_Red_Plane: rhs_ammo_127x99_Ball_Tracer_Red
	{
		class CamShakeFire
		{
			power = 1.56508;
			duration = 0.4;
			frequency = 20;
			distance = 19.5959;
		};
		class CamShakePlayerFire
		{
			power = 6;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class rhs_ammo_127x99_SLAP_Plane: rhs_ammo_127x99_SLAP
	{
		class CamShakeFire
		{
			power = 1.56508;
			duration = 0.4;
			frequency = 20;
			distance = 19.5959;
		};
		class CamShakePlayerFire
		{
			power = 6;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class rhs_ammo_127x99_SLAP_Tracer_Red_Plane: rhs_ammo_127x99_SLAP_Tracer_Red
	{
		class CamShakeFire
		{
			power = 1.56508;
			duration = 0.4;
			frequency = 20;
			distance = 19.5959;
		};
		class CamShakePlayerFire
		{
			power = 6;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class rhs_ammo_127x99_Ball_AI: rhs_ammo_127x99_Ball
	{
		irLock = 1;
		laserLock = 1;
		airLock = 1;
		nvLock = 1;
		aiAmmoUsageFlags = 448;
	};
	class rhs_ammo_127x99_Ball_Tracer_Red_AI: rhs_ammo_127x99_Ball_Tracer_Red
	{
		irLock = 1;
		laserLock = 1;
		airLock = 1;
		nvLock = 1;
		aiAmmoUsageFlags = 448;
	};
	class rhs_ammo_127x99_SLAP_AI: rhs_ammo_127x99_SLAP
	{
		irLock = 1;
		laserLock = 1;
		airLock = 1;
		nvLock = 1;
		aiAmmoUsageFlags = 448;
	};
	class rhs_ammo_127x99_SLAP_Tracer_Red_AI: rhs_ammo_127x99_SLAP_Tracer_Red
	{
		irLock = 1;
		laserLock = 1;
		airLock = 1;
		nvLock = 1;
		aiAmmoUsageFlags = 448;
	};
	class rhs_ammo_TOW_AT: M_Titan_AT
	{
		submunitionAmmo = "rhs_ammo_TOW_AT_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 480;
		indirectHit = 12;
		indirectHitRange = 1.2;
		cost = 800;
		irLock = 1;
		trackOversteer = 0.8;
		trackLead = 0.9;
		timeToLive = 30;
		maneuvrability = 10;
		simulationStep = 0.005;
		airFriction = 0.14;
		sideAirFriction = 0.15;
		lockType = 0;
		manualControl = 1;
		maxControlRange = 3000;
		manualControlOffset = 150;
		missileManualControlCone = 45;
		initTime = 0.151;
		thrustTime = 1.45;
		thrust = 165;
		maxSpeed = 296;
		deflecting = 0;
		fuseDistance = 5;
		effectsMissile = "missile2";
		whistleDist = 2;
		weaponLockSystem = "1";
		rhs_saclos = 1;
		rhs_ballisticMode = 0;
		rhs_guideMode = "WIRE";
		flightProfiles[] = {"Direct"};
		class Direct
		{
		};
		model = "\rhsusf\addons\rhsusf_heavyweapons\atgm\TOW2BB";
		soundFly[] = {"rhsusf\addons\rhsusf_heavyweapons\Sounds\TOW", 1.1, 0.7, 550};
		class EventHandlers: EventHandlers
		{
			class RHS_Guidance
			{
				fired = "_this call RHS_fnc_saclosGuide";
			};
		};
	};
	class rhs_ammo_TOWB_AT: rhs_ammo_TOW_AT
	{
		submunitionAmmo = "rhs_ammo_TOW_AT_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		maxControlRange = 3750;
	};
	class rhs_ammo_TOW_AT_penetrator: rhsusf_ammo_basic_penetrator
	{
		caliber = 28.6667;
	};
	class rhs_ammo_ITOW_AT: rhs_ammo_TOWB_AT
	{
		submunitionAmmo = "rhs_ammo_ITOW_AT_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		model = "\rhsusf\addons\rhsusf_heavyweapons\atgm\TOW2A";
	};
	class rhs_ammo_ITOW_AT_penetrator: rhsusf_ammo_basic_penetrator
	{
		caliber = 42;
	};
	class rhs_ammo_TOW2_AT: rhs_ammo_TOWB_AT
	{
		submunitionAmmo = "rhs_ammo_TOW2_AT_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		model = "\rhsusf\addons\rhsusf_heavyweapons\atgm\TOW2A";
		hit = 450;
		indirectHit = 20;
		indirectHitRange = 2;
		maxSpeed = 329;
		thrust = 210;
		whistleDist = 4;
		rhs_ballisticMode = 0;
	};
	class rhs_ammo_TOW2_AT_static: rhs_ammo_TOW2_AT
	{
		initTime = 0.15;
	};
	class rhs_ammo_TOW2_AT_penetrator: rhsusf_ammo_basic_penetrator
	{
		caliber = 60;
	};
	class rhs_ammo_TOW2A_AT: rhs_ammo_TOW2_AT
	{
		warheadName = "TandemHEAT";
		submunitionAmmo = "rhs_ammo_TOW2A_AT_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_TOW2A_AT_penetrator: rhsusf_ammo_basic_penetrator
	{
		warheadName = "TandemHEAT";
		caliber = 60;
	};
	class rhs_ammo_TOW2B_AT: rhs_ammo_TOW2A_AT
	{
		submunitionAmmo = "rhs_ammo_TOW2B_AT_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		model = "\rhsusf\addons\rhsusf_heavyweapons\atgm\TOW2B";
		rhs_ballisticMode = 2;
	};
	class rhs_ammo_TOW2B_AERO_AT: rhs_ammo_TOW2B_AT
	{
		model = "\rhsusf\addons\rhsusf_heavyweapons\atgm\TOW2BAERO";
		maxControlRange = 4000;
	};
	class rhs_ammo_TOW2B_AT_penetrator: rhsusf_ammo_basic_penetrator
	{
		warheadName = "TandemHEAT";
		caliber = 20;
	};
	class rhs_ammo_TOW2_BB: rhs_ammo_TOW2_AT
	{
		AIAmmoUsageFlags = "64+128+256";
		submunitionAmmo = "rhs_ammo_TOW2_BB_penetrator";
		model = "\rhsusf\addons\rhsusf_heavyweapons\atgm\TOW2BB";
		hit = 120;
		indirectHit = 30;
		indirectHitRange = 6;
		cost = 100;
		explosive = 1;
		allowAgainstInfantry = 1;
		deleteParentWhenTriggered = 1;
	};
	class rhs_ammo_TOW2_BB_penetrator: rhsusf_ammo_basic_penetrator
	{
		caliber = 13.3333;
		simulationStep = 0.0001;
		timeToLive = 0.01;
		triggerTime = 0.0015;
		deleteParentWhenTriggered = 1;
		submunitionAmmo = "rhs_ammo_TOW2_BB_explosive";
		submunitionConeType[] = {"randomcenter", 1};
	};
	class rhs_ammo_TOW2_BB_explosive: rhs_ammo_TOW2_AT
	{
		hit = 120;
		indirectHit = 100;
		indirectHitRange = 12;
		explosive = 1;
		CraterEffects = "ArtyShellCrater";
		explosionEffects = "MortarExplosion";
		effectsMissile = "missile2";
		class CamShakeExplode
		{
			power = 22;
			duration = 2;
			frequency = 20;
			distance = 227.905;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.23853;
			duration = 2;
			frequency = 20;
			distance = 83.9047;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		submunitionConeType[] = {"randomcenter", 15};
		submunitionConeAngle = 120;
		submunitionAmmo = "rhs_ammo_thermobaric_wave";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.4};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 200;
		deleteParentWhenTriggered = 0;
		triggerTime = 0.003;
	};
	class rhs_ammo_m26_rocket: R_230mm_HE
	{
		model = "\rhsusf\addons\rhsusf_heavyweapons\rockets\rhs_M26_rocket_fly.p3d";
		triggerDistance = 250;
		triggerSpeedCoef[] = {0.5, 1};
		submunitionConeAngle = 19;
		submunitionConeType[] = {"randomcenter", 161};
		submunitionAmmo[] = {"rhs_ammo_m77_submunition", 0.93, "Mo_cluster_AP_UXO_deploy", 0.07};
	};
	class rhs_ammo_m26a1_rocket: rhs_ammo_m26_rocket
	{
		submunitionAmmo[] = {"rhs_ammo_m85_submunition", 0.93, "Mo_cluster_AP_UXO_deploy", 0.07};
		submunitionConeType[] = {"randomcenter", 130};
	};
	class rhs_ammo_m30_rocket: rhs_ammo_m26_rocket
	{
		model = "\rhsusf\addons\rhsusf_heavyweapons\rockets\rhs_M30_rocket_fly.p3d";
		submunitionAmmo[] = {"rhs_ammo_m85_submunition", 0.93, "Mo_cluster_AP_UXO_deploy", 0.07};
		submunitionConeType[] = {"randomcenter", 101};
	};
	class rhs_ammo_m31_rocket: R_230mm_HE
	{
		model = "\rhsusf\addons\rhsusf_heavyweapons\rockets\rhs_M30_rocket_fly.p3d";
		submunitionAmmo = "rhs_ammo_m31_rocket_deploy";
	};
	class rhs_ammo_m31_rocket_deploy: R_230mm_fly
	{
		model = "\rhsusf\addons\rhsusf_heavyweapons\rockets\rhs_M30_rocket.p3d";
	};
	class rhs_ammo_ATACMS_rocket_base: R_230mm_HE
	{
		model = "\rhsusf\addons\rhsusf_heavyweapons\rockets\rhs_MGM140_rocket.p3d";
	};
	class rhs_ammo_mgm140a_rocket: rhs_ammo_ATACMS_rocket_base
	{
		triggerDistance = 400;
		triggerSpeedCoef[] = {0.5, 1};
		submunitionConeAngle = 19;
		submunitionConeType[] = {"randomcenter", 234};
		submunitionAmmo[] = {"rhs_ammo_m74_submunition", 0.93, "rhs_ammo_m74_deploy", 0.07};
	};
	class rhs_ammo_mgm140b_rocket: rhs_ammo_ATACMS_rocket_base
	{
		triggerDistance = 250;
		submunitionConeType[] = {"randomcenter", 69};
	};
	class rhs_ammo_mgm164_block4_rocket: rhs_ammo_ATACMS_rocket_base
	{
		submunitionAmmo = "rhs_ammo_mgm164_block4_rocket_deploy";
	};
	class rhs_ammo_mgm164_block4_rocket_deploy: R_230mm_fly
	{
		hit = 5000;
		indirectHit = 1150;
		indirectHitRange = 12;
		explosionEffects = "BombExplosion";
		model = "\rhsusf\addons\rhsusf_heavyweapons\rockets\rhs_MGM140_rocket.p3d";
	};
	class rhs_ammo_m74_submunition: Mo_cluster_AP
	{
		hit = 8;
		indirectHit = 8;
		indirectHitRange = 6;
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_sub_F";
	};
	class rhs_ammo_m74_deploy: ShotDeployBase
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_sub_F";
		submunitionAmmo = "rhs_ammo_uxo_m74";
	};
	class rhs_ammo_uxo_m74: APERSMine_Range_Ammo
	{
		hit = 8;
		indirectHit = 8;
		indirectHitRange = 6;
		icon = "iconExplosiveUXO";
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_02_UXO1_F";
		mineModelDisabled = "\A3\Weapons_F\empty.p3d";
		defaultMagazine = "";
		mineTrigger = "RangeTriggerShort";
		mineCanBeReactivated = 0;
		mineFloating = 1e+007;
	};
	class rhs_ammo_m77_submunition: rhs_ammo_m74_submunition
	{
		hit = 35;
		indirectHit = 25;
		indirectHitRange = 8;
		model = "\A3\weapons_f\ammo\shell";
	};
	class rhs_ammo_m85_submunition: rhs_ammo_m77_submunition
	{
	};
	class rhs_ammo_BAT_submunition: rhs_ammo_m77_submunition
	{
	};
	class rhsusf_ammo_L8A3: SmokeLauncherAmmo
	{
		rhs_smokeShell = "rhsusf_ammo_L8A3_shell";
		muzzleEffect = "";
		weaponLockSystem = "1";
		simulation = "shotCM";
		AIAmmoUsageFlags = "4 + 8";
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		class EventHandlers
		{
			class RHS_CM
			{
				fired = "_this call RHSUSF_fnc_effectFiredSmokeLauncher";
			};
		};
	};
	class rhsusf_ammo_duke: SmokeLauncherAmmo
	{
		muzzleEffect = "";
		weaponLockSystem = "1";
		simulation = "shotCM";
		AIAmmoUsageFlags = "";
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		class EventHandlers
		{
			class RHS_CM
			{
				fired = "_this call RHSUSF_fnc_effectFiredDuke";
			};
		};
	};
	class rhs_ammo_LWIRCM: BulletBase
	{
		cost = 1;
		visibleFire = 0;
		audibleFire = 0;
		hit = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		timeToLive = 2.25;
		thrustTime = 3;
		airFriction = -0.01;
		simulation = "shotCM";
		weaponLockSystem = "2 + 8";
		model = "\A3\weapons_f\empty";
		maxControlRange = -1;
		initTime = 0;
		aiAmmoUsageFlags = 8;
		soundFly[] = {"A3\sounds_f\dummysound", 0.1, 1};
		supersonicCrackNear[] = {"A3\sounds_f\dummysound", 0, 1, 0};
		supersonicCrackFar[] = {"A3\sounds_f\dummysound", 0, 1, 0};
		effectsSmoke = "EmptyEffect";
	};
	class rhsusf_ammo_L8A3_shell: Grenade
	{
		simulation = "shotShell";
		AIAmmoUsageFlags = "4";
		hit = 3;
		indirectHit = 1;
		indirectHitRange = 2;
		suppressionRadiusHit = 15;
		typicalspeed = 50;
		airFriction = -0.012;
		model = "rhsusf\addons\rhsusf_heavyweapons\galix\galix_proj";
		visibleFireTime = 1;
		fuseDistance = 0;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_01", 1.5, 1, 750};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_02", 1.5, 1, 750};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_03", 1.5, 1, 750};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_04", 1.5, 1, 750};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		explosionEffects = "RHSUSF_CM_L8A3_Effect";
		CraterEffects = "EmptyEffect";
		explosionTime = 0.7;
		timeToLive = 1;
		coefGravity = 2.5;
	};
	class rhsusf_CMflare_Ammo: CMflareAmmo
	{
		effectsSmoke = "CounterMeasureFlare";
	};
	class rhsusf_B_300winmag: B_762x54_Ball
	{
		hit = 18.5;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 1;
		airFriction = -0.0007034;
		caliber = 0.79;
		cartridge = "";
		rhs_cartridge = "\A3\Weapons_F_Mark\Ammo\cartridge_338_LM";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		typicalSpeed = 869;
	};
	class rhsusf_ammo_127x99_M33_Ball: B_127x99_Ball
	{
		hit = 25.3075;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 1;
		airFriction = -0.000617;
		caliber = 1.02533;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 3;
		typicalSpeed = 838.2;
	};
	class rhsusf_ammo_127x99_mk211: rhsusf_ammo_127x99_M33_Ball
	{
		hit = 24.8085;
		indirectHit = 4;
		indirectHitRange = 2.76;
		explosive = 0.4;
		caliber = 2.05761;
		craterEffects = "ATMissileCrater";
		explosionEffects = "RHS_ExploSmallAmmoExplosion";
		explosionSoundEffect = "DefaultExplosion";
	};
	class rhs_ammo_556x45_M855A1_Ball: B_556x45_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		cartridge = "RHS_Cartridge_556x45_m855";
		hit = 9;
		typicalSpeed = 960;
		airFriction = -0.000772;
		caliber = 0.65;
		deflecting = 21;
		visibleFire = 3;
		audibleFire = 7;
	};
	class rhs_ammo_556x45_M855A1_Ball_Red: rhs_ammo_556x45_M855A1_Ball
	{
		nvgOnly = 0;
		tracerStartTime = 0.073;
		tracerEndTime = 1;
	};
	class rhs_ammo_556x45_M855A1_Ball_Green: rhs_ammo_556x45_M855A1_Ball_Red
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class rhs_ammo_556x45_M855A1_Ball_Yellow: rhs_ammo_556x45_M855A1_Ball_Red
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class rhs_ammo_556x45_M855A1_Ball_Orange: rhs_ammo_556x45_M855A1_Ball_Red
	{
		model = "\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";
	};
	class rhs_ammo_556x45_M855_Ball: B_556x45_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		cartridge = "RHS_Cartridge_556x45_m855";
		hit = 9;
		typicalSpeed = 920;
		airFriction = -0.00076;
		caliber = 0.44;
		deflecting = 21;
		visibleFire = 3;
		audibleFire = 7;
	};
	class rhs_ammo_556x45_M855_Ball_Red: rhs_ammo_556x45_M855_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		cartridge = "RHS_Cartridge_556x45_m855";
		nvgOnly = 0;
		tracerStartTime = 0.073;
		tracerEndTime = 1;
	};
	class rhs_ammo_556x45_M855_Ball_Green: rhs_ammo_556x45_M855_Ball_Red
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class rhs_ammo_556x45_M855_Ball_Yellow: rhs_ammo_556x45_M855_Ball_Red
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class rhs_ammo_556x45_M855_Ball_Orange: rhs_ammo_556x45_M855_Ball_Red
	{
		model = "\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";
	};
	class rhs_ammo_556x45_Mk318_Ball: B_556x45_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		hit = 9.55;
		typicalSpeed = 950;
		airFriction = -0.00076;
		caliber = 0.64;
		deflecting = 17;
		visibleFire = 3;
		audibleFire = 5.5;
		tracerStartTime = 0.073;
		tracerEndTime = 1;
	};
	class rhs_ammo_556x45_Mk262_Ball: B_556x45_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		hit = 10.3;
		typicalSpeed = 838.2;
		airFriction = -0.00066;
		caliber = 0.677;
		deflecting = 15;
		visibleFire = 2.5;
		audibleFire = 5;
		tracerStartTime = 0.073;
		tracerEndTime = 1.15;
	};
	class rhs_ammo_556x45_M193_Ball: B_556x45_Ball
	{
		hit = 8.7;
		typicalSpeed = 974;
		airFriction = -0.00077;
		caliber = 0.59;
		deflecting = 28;
		visibleFire = 3;
		audibleFire = 7;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class rhs_ammo_556x45_M196_Ball_Red: rhs_ammo_556x45_M193_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly = 0;
		tracerStartTime = 0.073;
		tracerEndTime = 1;
	};
	class rhs_ammo_556x45_blank: B_556x45_Ball
	{
		hit = 6;
		cost = 0.1;
		submunitionAmmo = "rhs_ammo_blank";
		submunitionDirectionType = "SubmunitionModelDirection";
		triggerTime = 0.001;
		simulationStep = 0.001;
		soundSetBulletFly[] = {};
		soundSetSonicCrack[] = {};
	};
	class rhs_ammo_blank: B_556x45_Ball
	{
		hit = 0;
		timeToLive = 0.01;
		simulationStep = 0.01;
		model = "\A3\weapons_f\empty";
	};
	class rhs_ammo_762x51_M80_Ball: BulletBase
	{
		hit = 11.55;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_762";
		visibleFire = 22;
		audibleFire = 18;
		visibleFireTime = 3;
		cost = 1.2;
		airLock = 1;
		caliber = 0.45;
		model = "\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";
		tracerScale = 1.2;
		tracerStartTime = 0.045;
		tracerEndTime = 1.5;
		airFriction = -0.0006814;
		typicalSpeed = 838;
	};
	class rhs_ammo_762x51_M61_AP: rhs_ammo_762x51_M80_Ball
	{
		hit = 12.55;
		caliber = 0.79;
	};
	class rhs_ammo_762x51_M62_tracer: rhs_ammo_762x51_M80_Ball
	{
		hit = 11;
	};
	class rhs_ammo_762x51_M80A1EPR_Ball: rhs_ammo_762x51_M80_Ball
	{
		hit = 10.5;
		caliber = 0.55;
		airFriction = -0.0007114;
		typicalSpeed = 803;
	};
	class rhs_ammo_762x51_M82_blank: rhs_ammo_556x45_blank
	{
		hit = 7;
	};
	class rhs_ammo_762x51_M118_Special_Ball: rhs_ammo_762x51_M80_Ball
	{
		caliber = 0.52;
		typicalSpeed = 805;
		airFriction = -0.0007474;
		cartridge = "";
		rhs_cartridge = "\A3\weapons_f\ammo\cartridge_762";
	};
	class rhs_ammo_762x51_M993_Ball: rhs_ammo_762x51_M80_Ball
	{
		caliber = 1.41176;
		typicalSpeed = 910;
		cartridge = "";
		rhs_cartridge = "\A3\weapons_f\ammo\cartridge_762";
	};
	class rhs_ammo_762x51_Mk316_Special_Ball: rhs_ammo_762x51_M118_Special_Ball
	{
		visibleFire = 16;
	};
	class rhs_ammo_m576_buckshot: B_12Gauge_Pellets
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0.6;
		cartridge = "";
		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitConcrete = "ImpactConcrete";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "ImpactEffectsSmall";
			hitGroundHard = "ImpactEffectsHardGround";
			hitWater = "ImpactEffectsWater";
			hitVirtual = "ImpactMetal";
		};
	};
	class rhs_ammo_12g_00buckshot: B_12Gauge_Pellets
	{
		hit = 20;
		simulation = "shotSubmunitions";
		simulationStep = 0.0001;
		triggerTime = 0.0001;
		triggerSpeedCoef[] = {0.84, 1};
		submunitionAmmo = "rhs_ammo_12g_00buckshot_pellet";
		submunitionConeType[] = {"poissondisccenter", 9};
		submunitionConeAngle = 0.95;
		cartridge = "";
		model = "\A3\weapons_f\empty";
		rhs_cartridge = "\rhsusf\addons\rhsusf_weapons\casings\rhs_casing_12ga_buckshot";
	};
	class rhs_ammo_12g_00buckshot_pellet: BulletBase
	{
		hit = 4.75;
		indirectHit = 0;
		indirectHitRange = 0;
		caliber = 0.24;
		typicalSpeed = 403.86;
		airFriction = -0.00634;
		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitConcrete = "ImpactConcrete";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "ImpactEffectsSmall";
			hitGroundHard = "ImpactEffectsHardGround";
			hitWater = "ImpactEffectsWater";
			hitVirtual = "ImpactMetal";
		};
	};
	class rhs_ammo_doomsday_buckshot: rhs_ammo_m576_buckshot
	{
		hit = 9;
		indirectHit = 9;
		indirectHitRange = 0.6;
	};
	class rhs_ammo_12g_slug: B_12Gauge_Slug
	{
		hit = 34.51;
		indirectHit = 0;
		indirectHitRange = 0;
		caliber = 0.3048;
		cartridge = "";
		rhs_cartridge = "\rhsusf\addons\rhsusf_weapons\casings\rhs_casing_12ga_slug";
		typicalSpeed = 475.49;
		airFriction = -0.002042;
	};
	class rhs_ammo_12g_FRAG: B_12Gauge_Slug
	{
		hit = 6;
		indirectHit = 1.143;
		indirectHitRange = 1.972;
		caliber = 0.2;
		cartridge = "";
		rhs_cartridge = "\rhsusf\addons\rhsusf_weapons\casings\rhs_casing_12ga_hefrag";
		typicalSpeed = 150;
		airFriction = -0.0069;
		timeToLive = 5;
		deflecting = 0;
		explosive = 1;
		explosionEffects = "RHSUSF_12gExplosion";
		CraterEffects = "";
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 15;
		suppressionRadiusHit = 14;
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_1", 1.6, 1, 1200};
		soundHit3[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_3", 1.6, 1, 1200};
		soundHit4[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_4", 1.6, 1, 1200};
		soundHit6[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_6", 1.6, 1, 1200};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit3", 0.25, "soundHit4", 0.25, "soundHit6", 0.25};
		explosionSoundEffect = "DefaultExplosion";
		class CamShakeExplode
		{
			power = "(9*0.2)";
			duration = "((round (9^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((1 + 9^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 9;
			duration = "((round (9^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};
	class rhs_ammo_12g_HE: rhs_ammo_12g_FRAG
	{
		submunitionAmmo = "rhs_ammo_12gHEAP_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 1.575;
		indirectHit = 1.143;
		indirectHitRange = 0.986;
		caliber = 0.1;
		rhs_cartridge = "\rhsusf\addons\rhsusf_weapons\casings\rhs_casing_12ga_heer";
		typicalSpeed = 150;
		airFriction = -0.0074;
		deflecting = 0;
	};
	class rhs_ammo_12gHEAP_penetrator: BulletBase
	{
		hit = 10;
		indirectHit = 0;
		deflecting = 0;
		typicalSpeed = 1000;
		caliber = 0.866667;
		cartridge = "";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		class HitEffects
		{
			hitMetal = "ImpactMetalSabotSmall";
			hitMetalPlate = "ImpactMetalSabotSmall";
			hitBuilding = "ImpactConcreteSabotSmall";
			hitConcrete = "ImpactConcreteSabotSmall";
			hitGroundSoft = "ImpactEffectsGroundSabot";
			hitGroundHard = "ImpactEffectsGroundSabot";
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitMan = "ImpactEffectsBlood";
			hitWater = "ImpactEffectsWater";
			default_mat = "ImpactEffectsGroundSabot";
		};
	};
	class rhs_ammo_45ACP_MHP: BulletBase
	{
		scope = 2;
		hit = 5.14686;
		indirectHit = 0;
		indirectHitRange = 0;
		suppressionRadiusBulletClose = 2;
		cartridge = "FxCartridge_9mm";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		caliber = 2.68097;
		deflecting = 30;
		visibleFire = 5;
		audibleFire = 9;
		typicalSpeed = 280;
		airFriction = -0.0018;
	};
	class rhs_ammo_45ACP_MHPT_Orange: rhs_ammo_45ACP_MHP
	{
		model = "\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
	};
	class rhs_ammo_9x19_FMJ: BulletBase
	{
		hit = 4.94578;
		indirectHit = 0;
		indirectHitRange = 0;
		suppressionRadiusBulletClose = 2;
		cartridge = "FxCartridge_9mm";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		caliber = 0.674;
		deflecting = 29;
		visibleFire = 1.5;
		audibleFire = 3;
		typicalSpeed = 390.1;
		airFriction = -0.0027667;
	};
	class rhs_ammo_9x19_JHP: BulletBase
	{
		hit = 6.94265;
		indirectHit = 0;
		indirectHitRange = 0;
		suppressionRadiusBulletClose = 2;
		cartridge = "FxCartridge_9mm";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		caliber = 0.415;
		deflecting = 25;
		visibleFire = 1;
		audibleFire = 2.5;
		cost = 1;
		typicalSpeed = 301.8;
		airFriction = -0.001095;
	};
	class rhs_ammo_46x30_FMJ: rhs_ammo_556x45_M855A1_Ball
	{
		hit = 4.4637;
		suppressionRadiusBulletClose = 2;
		cartridge = "FxCartridge_9mm";
		caliber = 0.649;
		visibleFire = 2;
		audibleFire = 5;
		typicalSpeed = 619.963;
		airFriction = -0.0027667;
		deflecting = 21;
	};
	class rhs_ammo_46x30_JHP: rhs_ammo_46x30_FMJ
	{
		caliber = 0.464;
		typicalSpeed = 699.821;
		airfriction = -0.00348301;
		hit = 7.39291;
		deflecting = 25;
	};
	class rhs_ammo_46x30_AP: rhs_ammo_46x30_FMJ
	{
		caliber = 0.927;
		typicalSpeed = 734.873;
		airfriction = -0.00266241;
		hit = 3.58301;
	};
	class rhs_ammo_M136_rocket: RocketBase
	{
		submunitionAmmo = "rhs_ammo_M136_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		model = "\rhsusf\addons\rhsusf_weapons2\M136\at4_rocket";
		hit = 235;
		indirectHit = 11;
		indirectHitRange = 1.1;
		cost = 200;
		explosive = 0.65;
		caliber = 0.8;
		airFriction = 0;
		sideAirFriction = 0.01;
		simulationStep = 0.01;
		maxSpeed = 219;
		initTime = 0.1;
		thrustTime = 0;
		thrust = 10;
		fuseDistance = 5;
		visibleFire = 28;
		audibleFire = 16;
		whistleDist = 4;
		timeToLive = 12;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "missile3";
		class CamShakeFire
		{
			power = 10;
			duration = 0.5;
			frequency = 20;
			distance = 30;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
		};
	};
	class rhs_ammo_M136_penetrator: rhsusf_ammo_basic_penetrator
	{
		caliber = 26.6667;
	};
	class rhs_ammo_M136_hp_rocket: rhs_ammo_M136_rocket
	{
		submunitionAmmo = "rhs_ammo_M136_hp_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 245;
	};
	class rhs_ammo_M136_hp_penetrator: rhs_ammo_M136_penetrator
	{
		caliber = 36.6667;
	};
	class rhs_ammo_M136_hedp_rocket: rhs_ammo_M136_rocket
	{
		submunitionAmmo = "rhs_ammo_M136_hedp_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 235;
		indirectHit = 31;
		indirectHitRange = 4.1;
		cost = 200;
		explosive = 0.65;
	};
	class rhs_ammo_M136_hedp_penetrator: rhs_ammo_M136_penetrator
	{
		hit = 235;
		caliber = 10;
	};
	class rhs_ammo_m72a7_rocket: rhs_ammo_M136_hedp_rocket
	{
		submunitionAmmo = "rhs_ammo_M136_hedp_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 145;
		indirectHit = 19;
	};
	class rhs_ammo_fim92_missile: M_Titan_AA
	{
		model = "\rhsusf\addons\rhsusf_weapons\FIM92\Stinger_Rocket";
		hit = 60;
		indirectHit = 55;
		indirectHitRange = 8;
		proximityExplosionDistance = 10;
		maneuvrability = 34;
		simulationStep = 0.001;
		trackOversteer = 0.95;
		trackLead = 0.6;
		airLock = 2;
		irLock = 1;
		cost = 1000;
		timeToLive = 15;
		sideairfriction = 0.08;
		maxSpeed = 750;
		initTime = 0.25;
		thrustTime = 4.9;
		thrust = 325;
		fuseDistance = 50;
		explosive = 1;
		audibleFire = 32;
		whistleDist = 16;
		cmImmunity = 0.95;
		maxcontrolrange = 7000;
		CraterEffects = "AAMissileCrater";
		effectsMissile = "RHS_FIM92_Fired";
		effectsMissileInit = "RocketBackEffectsRPG";
		submunitionConeType[] = {"randomcenter", 30};
		submunitionConeAngle = 65;
		submunitionAmmo = "rhs_ammo_he_fragments";
		submunitionDirectionType = "SubmunitionTargetDirection";
		submunitionInitialOffset[] = {0, 0, 0};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1500;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		missileLockMaxDistance = 6500;
		missileLockMinDistance = 300;
		missileLockMaxSpeed = 333;
		missileLockCone = 12;
		missileKeepLockedCone = 70;
		weaponLockSystem = "2 + 16";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 6500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 1000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						typeRecognitionDistance = -1;
						angleRangeHorizontal = 35;
						angleRangeVertical = 35;
						groundNoiseDistanceCoef = 0.02;
						maxGroundNoiseDistance = 40;
						minSpeedThreshold = 0;
						maxSpeedThreshold = -1;
						maxFogSeeThrough = 0.8;
						minTrackableSpeed = 0;
						maxTrackableSpeed = 330;
						minTrackableATL = 20;
						maxTrackableATL = 4000;
					};
				};
			};
		};
	};
	class rhs_ammo_fim92_ah64: rhs_ammo_fim92_missile
	{
		weaponType = "bomb";
	};
	class rhs_ammo_M_fgm148_AT: MissileBase
	{
		afMax = 200;
		aiAmmoUsageFlags = "128 + 512";
		audibleFire = 32;
		caliber = 1;
		warheadName = "TandemHEAT";
		submunitionAmmo = "rhs_ammo_M_fgm148_AT_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		model = "\rhsusf\addons\rhsusf_weapons\FGM148\fgm148_missile";
		hit = 350;
		indirectHit = 40;
		indirectHitRange = 4;
		explosive = 0.65;
		flightProfiles[] = {"Direct", "TopDown", "Cruise"};
		class Direct
		{
		};
		class TopDown
		{
			ascendHeight = 160;
			descendDistance = 200;
			minDistance = 150;
			ascendAngle = 45;
		};
		class Cruise
		{
			preferredFlightAltitude = 60;
			lockDistanceToTarget = 1000;
		};
		irLock = 1;
		laserLock = 1;
		nvLock = 0;
		airLock = 1;
		autoSeekTarget = 0;
		allowAgainstInfantry = 0;
		airFriction = 0.2;
		sideAirFriction = 0.35;
		trackOversteer = 1.4;
		trackLead = 1;
		maxSpeed = 460;
		maneuvrability = 32;
		manualControl = 0;
		maxControlRange = 4000;
		fuseDistance = 30;
		thrust = 75;
		thrustTime = 4.2;
		initTime = 0.5;
		timeToLive = 60;
		whistleDist = 4;
		deflecting = 0;
		simulationStep = 0.001;
		cmImmunity = 0.9;
		cost = 1000;
		effectsMissile = "missile2";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsSmoke = "SmokeShellWhite";
		missileLockMaxDistance = 3000;
		missileLockMinDistance = 200;
		missileLockMaxSpeed = 41;
		missileLockCone = 10;
		weaponLockSystem = "2 + 16";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = -1;
						angleRangeHorizontal = 20;
						angleRangeVertical = 20;
						groundNoiseDistanceCoef = 0;
						maxGroundNoiseDistance = 0;
						minTrackableSpeed = 0;
						maxTrackableSpeed = 37;
						minTrackableATL = 0;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 1;
						maxFogSeeThrough = 0.95;
						aimDown = 25;
					};
				};
			};
		};
	};
	class rhs_ammo_M_fgm148_AT_penetrator: rhsusf_ammo_basic_penetrator
	{
		warheadName = "TandemHEAT";
		hit = 380;
		caliber = 64.6667;
	};
	class rhs_ammo_M_fgm172a_AT: M_NLAW_AT_F
	{
		submunitionAmmo = "rhs_ammo_M_fgm148_AT_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		model = "\rhsusf\addons\rhsusf_weapons2\sraw\fgm-172a";
		maxSpeed = 260;
		thrustTime = 1;
		thrust = 320;
		initTime = 0.25;
		fuseDistance = 17;
		timeToLive = 15;
		airFriction = 0.6;
		sideAirFriction = 0.1;
		trackOversteer = 1;
		trackLead = 1;
		maneuvrability = 4;
		simulationStep = 0.002;
		irLock = 0;
		laserLock = 0;
		nvLock = 0;
		airLock = 0;
		aiAmmoUsageFlags = "128 + 512";
	};
	class rhs_ammo_M_fgm172b_MPV: rhs_ammo_M_fgm172a_AT
	{
		submunitionAmmo = "rhs_ammo_M_fgm148_AT_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		model = "\rhsusf\addons\rhsusf_weapons2\sraw\fgm-172b";
		fuseDistance = 25;
		aiAmmoUsageFlags = "64 + 128";
		hit = 200;
		indirectHit = 100;
		indirectHitRange = 10;
		explosive = 0.65;
		allowAgainstInfantry = 1;
		cost = 1000;
	};
	class rhs_ammo_smaw_HEAA: RocketBase
	{
		submunitionAmmo = "rhs_ammo_smaw_HEAA_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		EffectFly = "ArtilleryTrails";
		soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_04", 10, 1, 1200};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_6", 5.62341, 1, 35};
		model = "rhsusf\addons\rhsusf_weapons2\smaw\rocket_smaw.p3d";
		hit = 260;
		indirectHit = 11;
		indirectHitRange = 1.1;
		explosive = 0.65;
		cost = 800;
		airFriction = 0.01;
		sideAirFriction = 0;
		maxSpeed = 220;
		initTime = 0.01;
		thrustTime = 10;
		thrust = 0;
		fuseDistance = 15;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "RHSUSF_SMAW_backblast";
		effectsMissile = "RHSUSF_SMAW_MissileTrail";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.1;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};
	};
	class rhs_ammo_smaw_HEAA_penetrator: rhsusf_ammo_basic_penetrator
	{
		caliber = 39.3333;
	};
	class rhs_ammo_smaw_HEDP: RocketBase
	{
		submunitionAmmo = "rhs_ammo_smaw_HEDP_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		EffectFly = "ArtilleryTrails";
		soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_04", 10, 1, 1200};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_6", 5.62341, 1, 35};
		model = "rhsusf\addons\rhsusf_weapons2\smaw\rocket_smaw.p3d";
		hit = 150;
		indirectHit = 51;
		indirectHitRange = 6.7;
		explosive = 0.65;
		cost = 500;
		airFriction = 0.01;
		sideAirFriction = 0;
		maxSpeed = 220;
		initTime = 0.01;
		thrustTime = 10;
		thrust = 0;
		fuseDistance = 15;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "RHSUSF_SMAW_backblast";
		effectsMissile = "RHSUSF_SMAW_MissileTrail";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 1;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.1;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};
	};
	class rhs_ammo_smaw_HEDP_penetrator: rhs_ammo_M136_penetrator
	{
		hit = 235;
		caliber = 16.6667;
	};
	class rhs_ammo_smaw_SR: RocketBase
	{
		explosive = 0;
		soundHit[] = {"\a3\sounds_f\weapons\hits\plastic_4.wss", 0.707946, 1, 20};
		audibleFire = 3;
		caliber = 0.01;
		model = "rhsusf\addons\rhsusf_weapons2\smaw\tracer_smaw.p3d";
		hit = 5;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 500;
		airFriction = 0;
		sideAirFriction = 0.02;
		maxSpeed = 220;
		initTime = 0.5;
		thrustTime = 0;
		thrust = 0;
		fuseDistance = 15;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "RHSUSF_SMAW_cartrige";
		effectsMissile = "EmptyEffect";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 1;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(5^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.1;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};
	};
	class rhs_ammo_maaws_HEAT: RocketBase
	{
		submunitionAmmo = "rhs_ammo_maaws_HEAT_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		explosive = 0.65;
		EffectFly = "ArtilleryTrails";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01", 2.51189, 1, 1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02", 2.51189, 1, 1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03", 2.51189, 1, 1900};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04", 2.51189, 1, 1900};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly", 1.1, 1.1, 900};
		model = "rhsusf\addons\rhsusf_weapons2\m3maaws\ammo_m3maaws.p3d";
		hit = 270;
		indirectHit = 15;
		indirectHitRange = 2.1;
		caliber = 0.8;
		cost = 800;
		airFriction = 0.01;
		sideAirFriction = 0;
		maxSpeed = 290;
		initTime = 0;
		thrustTime = 0.1;
		thrust = 0.1;
		fuseDistance = 15;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "";
		effectsMissile = "RHSUSF_SMAW_MissileTrail";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 5;
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};
		visibleFire = 15;
		audibleFire = 20;
	};
	class rhs_ammo_maaws_HEAT_penetrator: rhsusf_ammo_basic_penetrator
	{
		caliber = 39.3333;
	};
	class rhs_ammo_maaws_HEDP: RocketBase
	{
		submunitionAmmo = "rhs_ammo_maaws_HEDP_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		explosive = 0.65;
		EffectFly = "ArtilleryTrails";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01", 2.51189, 1, 1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02", 2.51189, 1, 1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03", 2.51189, 1, 1900};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04", 2.51189, 1, 1900};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly", 1.1, 1.1, 900};
		model = "rhsusf\addons\rhsusf_weapons2\m3maaws\ammo_m3maaws.p3d";
		hit = 250;
		indirectHit = 45;
		indirectHitRange = 4.1;
		cost = 500;
		airFriction = 0.01;
		sideAirFriction = 0;
		maxSpeed = 230;
		initTime = 0;
		thrustTime = 0.1;
		thrust = 0.1;
		fuseDistance = 15;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "";
		effectsMissile = "RHSUSF_SMAW_MissileTrail";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 1;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 5;
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};
		visibleFire = 15;
		audibleFire = 20;
	};
	class rhs_ammo_maaws_HEDP_penetrator: rhs_ammo_M136_penetrator
	{
		caliber = 11.6667;
	};
	class rhs_ammo_maaws_HE: RocketBase
	{
		EffectFly = "ArtilleryTrails";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01", 2.51189, 1, 1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02", 2.51189, 1, 1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03", 2.51189, 1, 1900};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04", 2.51189, 1, 1900};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly", 1.1, 1.1, 900};
		model = "rhsusf\addons\rhsusf_weapons2\m3maaws\ammo_m3maaws.p3d";
		hit = 75;
		indirectHit = 65;
		indirectHitRange = 11;
		cost = 300;
		airFriction = 0.01;
		sideAirFriction = 0;
		maxSpeed = 255;
		initTime = 0;
		thrustTime = 0.1;
		thrust = 0.1;
		fuseDistance = 15;
		CraterEffects = "ArtyShellCrater";
		explosionEffects = "MortarExplosion";
		effectsMissileInit = "";
		effectsMissile = "RHSUSF_SMAW_MissileTrail";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 1;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 5;
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};
		visibleFire = 15;
		audibleFire = 20;
	};
	class rhs_ammo_maaws_SMOKE: RocketBase
	{
		EffectFly = "ArtilleryTrails";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01", 2.51189, 1, 1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02", 2.51189, 1, 1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03", 2.51189, 1, 1900};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04", 2.51189, 1, 1900};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly", 1.1, 1.1, 900};
		model = "rhsusf\addons\rhsusf_weapons2\m3maaws\ammo_m3maaws.p3d";
		hit = 30;
		indirectHit = 0;
		indirectHitRange = 2;
		cost = 300;
		airFriction = 0.01;
		sideAirFriction = 0;
		maxSpeed = 255;
		initTime = 0;
		thrustTime = 0.1;
		thrust = 0.1;
		fuseDistance = 0;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExplosionEffects";
		effectsSmoke = "SmokeShellWhite";
		effectsMissileInit = "";
		effectsMissile = "RHSUSF_SMAW_MissileTrail";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 5;
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};
		visibleFire = 15;
		audibleFire = 20;
	};
	class rhs_ammo_maaws_ILLUM: RocketBase
	{
		EffectFly = "ArtilleryTrails";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01", 2.51189, 1, 1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02", 2.51189, 1, 1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03", 2.51189, 1, 1900};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04", 2.51189, 1, 1900};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly", 1.1, 1.1, 900};
		model = "rhsusf\addons\rhsusf_weapons2\m3maaws\ammo_m3maaws.p3d";
		hit = 30;
		indirectHit = 0;
		indirectHitRange = 1;
		cost = 300;
		airFriction = 0.01;
		sideAirFriction = 0;
		maxSpeed = 255;
		initTime = 0;
		thrustTime = 0.1;
		thrust = 0.1;
		fuseDistance = 0;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExplosionEffects";
		effectFlare = "FlareShell";
		effectsMissileInit = "";
		effectsMissile = "RHSUSF_SMAW_MissileTrail";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 5;
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};
		visibleFire = 15;
		audibleFire = 20;
	};
	class rhsusf_m112_ammo: PipeBombBase
	{
		hit = 1000;
		indirectHit = 1000;
		indirectHitRange = 3;
		model = "\rhsusf\addons\rhsusf_weapons\explosives\rhsusf_m112x1_e";
		mineModelDisabled = "\rhsusf\addons\rhsusf_weapons\explosives\rhsusf_m112x1_d";
		soundHit[] = {"A3\Sounds_F\weapons\Mines\mine_debris_5", 3.16228, 1, 1500};
		defaultMagazine = "rhsusf_m112_mag";
		ExplosionEffects = "MineNondirectionalExplosionSmall";
		CraterEffects = "MineNondirectionalCraterSmall";
		whistleDist = 32;
		mineInconspicuousness = 5;
		mineTrigger = "RemoteTrigger";
	};
	class rhsusf_m112_ammo_scripted: rhsusf_m112_ammo
	{
	};
	class rhsusf_m112x4_ammo: PipeBombBase
	{
		hit = 3000;
		indirectHit = 3000;
		indirectHitRange = 5;
		model = "\rhsusf\addons\rhsusf_weapons\explosives\rhsusf_m112x4_e";
		mineModelDisabled = "\rhsusf\addons\rhsusf_weapons\explosives\rhsusf_m112x4_d";
		defaultMagazine = "rhsusf_m112x4_mag";
		soundHit[] = {"A3\Sounds_F\weapons\Mines\mine_debris_2", 3.16228, 1, 1500};
		ExplosionEffects = "MineNondirectionalExplosion";
		CraterEffects = "MineNondirectionalCrater";
		whistleDist = 32;
		mineInconspicuousness = 5;
		mineTrigger = "RemoteTrigger";
	};
	class rhsusf_m112x4_ammo_scripted: rhsusf_m112x4_ammo
	{
	};
	class rhsusf_mine_m19_ammo: MineBase
	{
		hit = 2200;
		indirectHit = 1850;
		indirectHitRange = 2;
		model = "\rhsusf\addons\rhsusf_weapons\mines\rhsusf_m19_e";
		mineModelDisabled = "\rhsusf\addons\rhsusf_weapons\mines\rhsusf_m19_e";
		icon = "iconExplosiveAP";
		defaultMagazine = "rhs_mine_M19_mag";
		soundHit[] = {"A3\Sounds_F\weapons\mines\mine_debris_2", 3.16228, 1, 2000};
		explosionEffects = "ATMineExplosion";
		CraterEffects = "ATMineCrater";
		whistleDist = 8;
		cost = 200;
		mineInconspicuousness = 30;
		mineTrigger = "rhs_M19_Trigger";
	};
	class rhsusf_mine_m14_ammo: MineBase
	{
		AIAmmoUsageFlags = "16";
		hit = 3;
		indirectHit = 30;
		indirectHitRange = 0.2;
		model = "\rhsusf\addons\rhsusf_weapons\mines\rhsusf_m14_e";
		mineModelDisabled = "\rhsusf\addons\rhsusf_weapons\mines\rhsusf_m14_d";
		icon = "iconExplosiveAP";
		defaultMagazine = "rhsusf_mine_m14_mag";
		soundHit[] = {"A3\Sounds_F\weapons\mines\mine_debris_2", 3.16228, 1, 2000};
		explosionEffects = "MineExplosion";
		CraterEffects = "MineCrater";
		whistleDist = 8;
		cost = 200;
		mineInconspicuousness = 3;
		mineTrigger = "RangeTriggerShort";
	};
	class rhsusf_mine_m49a1_3m_ammo: APERSMine_Range_Ammo
	{
		hit = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		minimumSafeZone = 0;
		minDamageForCamShakeHit = 1.55;
		mineInconspicuousness = 35;
		mineTrigger = "rhs_m49a1_3m_trigger";
		CraterEffects = "";
		explosionEffects = "";
		rhs_flare_used = "rhsusf_mine_m49a1_used";
		rhs_flare_offset[] = {0, 0, 0.3};
		class CamShakeExplode
		{
			power = 0;
			duration = 0.2;
			frequency = 20;
			distance = 0;
		};
		class CamShakeHit
		{
			power = 0;
			duration = 0.2;
			frequency = 20;
			distance = 1;
		};
		model = "\rhsusf\addons\rhsusf_weapons\mines\rhsusf_m49a1_a_e";
		mineModelDisabled = "\rhsusf\addons\rhsusf_weapons\mines\rhsusf_m49a1_d";
		defaultMagazine = "rhsusf_mine_m49a1_3m_mag";
		SmokeShellSoundHit1[] = {"A3\Sounds_F\weapons\smokeshell\smoke_1", 1.25893, 1, 100};
		SmokeShellSoundHit2[] = {"A3\Sounds_F\weapons\smokeshell\smoke_2", 1.25893, 1, 100};
		SmokeShellSoundHit3[] = {"A3\Sounds_F\weapons\smokeshell\smoke_3", 1.25893, 1, 100};
		multiSoundHit[] = {"SmokeShellSoundHit1", 0.25, "SmokeShellSoundHit2", 0.25, "SmokeShellSoundHit3", 0.5};
		SoundSetExplosion[] = {};
		whistleDist = 8;
		cost = 200;
		class Eventhandlers
		{
			class RHS_FlareExplosion
			{
				AmmoHit = "_this remoteExec ['rhs_fnc_tripwireFlare_m49a1']";
			};
		};
	};
	class rhsusf_mine_m49a1_6m_ammo: rhsusf_mine_m49a1_3m_ammo
	{
		model = "\rhsusf\addons\rhsusf_weapons\mines\rhsusf_m49a1_b_e";
		defaultMagazine = "rhsusf_mine_m49a1_6m_mag";
		mineTrigger = "rhs_m49a1_6m_trigger";
	};
	class rhsusf_mine_m49a1_10m_ammo: rhsusf_mine_m49a1_3m_ammo
	{
		model = "\rhsusf\addons\rhsusf_weapons\mines\rhsusf_m49a1_c_e";
		defaultMagazine = "rhsusf_mine_m49a1_10m_mag";
		mineTrigger = "rhs_m49a1_10m_trigger";
	};
	class rhsusf_40mm_HE: G_40mm_HE
	{
		hit = 20;
		indirectHit = 5;
		indirectHitRange = 10.7;
		model = "\A3\weapons_f\ammo\UGL_slug";
	};
	class rhsusf_40mm_HEDP: rhsusf_40mm_HE
	{
		hit = 20;
		indirectHit = 5;
		indirectHitRange = 3.6;
		model = "\A3\weapons_f\ammo\UGL_slug";
		submunitionAmmo = "rhs_ammo_40mmHEDP_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_40mmHEDP_penetrator: rhs_ammo_12gHEAP_penetrator
	{
		hit = 90;
		caliber = 3.33333;
	};
	class rhsusf_40mm_Practice: BulletBase
	{
		hit = 1;
		indirectHit = 0;
		explosive = 0;
		cost = 10;
		deflecting = 5;
		airFriction = -0.001;
		fuseDistance = 0;
		whistleDist = 16;
		typicalSpeed = 185;
		caliber = 0.5;
		CraterEffects = "";
		explosionEffects = "";
		explosionSoundEffect = "";
		simulation = "shotShell";
		model = "\A3\weapons_f\ammo\UGL_slug";
		class HitEffects
		{
			hitMetal = "RHSUSF_40mmPracticePuff";
			hitMetalPlate = "RHSUSF_40mmPracticePuff";
			hitBuilding = "RHSUSF_40mmPracticePuff";
			hitConcrete = "RHSUSF_40mmPracticePuff";
			hitGroundSoft = "RHSUSF_40mmPracticePuff";
			hitGroundHard = "RHSUSF_40mmPracticePuff";
			Hit_Foliage_green = "RHSUSF_40mmPracticePuff";
			Hit_Foliage_Dead = "RHSUSF_40mmPracticePuff";
			Hit_Foliage_Green_big = "RHSUSF_40mmPracticePuff";
			Hit_Foliage_Palm = "RHSUSF_40mmPracticePuff";
			Hit_Foliage_Pine = "RHSUSF_40mmPracticePuff";
			hitFoliage = "RHSUSF_40mmPracticePuff";
			hitGlass = "RHSUSF_40mmPracticePuff";
			hitGlassArmored = "RHSUSF_40mmPracticePuff";
			hitWood = "RHSUSF_40mmPracticePuff";
			hitPlastic = "RHSUSF_40mmPracticePuff";
			hitRubber = "RHSUSF_40mmPracticePuff";
			hitMan = "RHSUSF_40mmPracticePuff";
			hitWater = "ImpactEffectsWater";
		};
		class CamShakeHit
		{
			power = 20;
			duration = "((round (20^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(0^0.25)";
			duration = "((round (0^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((0^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class rhsusf_40mm_white: F_40mm_White
	{
		brightness = 25;
		timeToLive = 60;
		intensity = 100000;
		model = "\A3\weapons_f\ammo\UGL_slug";
	};
	class rhsusf_40mm_red: F_40mm_Red
	{
		brightness = 25;
		timeToLive = 60;
		intensity = 100000;
		model = "\A3\weapons_f\ammo\UGL_slug";
	};
	class rhsusf_40mm_green: F_40mm_Green
	{
		brightness = 25;
		timeToLive = 60;
		intensity = 100000;
		model = "\A3\weapons_f\ammo\UGL_slug";
	};
	class rhs_ammo_m397: rhsusf_40mm_HE
	{
		deflecting = 100;
		class HitEffects
		{
			hitMetal = "RHS_m397_hit";
			hitMetalPlate = "RHS_m397_hit";
			hitBuilding = "RHS_m397_hit";
			hitConcrete = "RHS_m397_hit";
			hitGroundSoft = "RHS_m397_hit";
			hitGroundHard = "RHS_m397_hit";
			default_mat = "RHS_m397_hit";
			hitFoliage = "RHS_m397_hit";
			hitGlass = "RHS_m397_hit";
			hitGlassArmored = "RHS_m397_hit";
			hitWood = "RHS_m397_hit";
			hitPlastic = "RHS_m397_hit";
			hitRubber = "RHS_m397_hit";
			hitMan = "RHS_m397_hit";
			hitWater = "RHS_m397_hit";
			hitVirtual = "RHS_m397_hit";
		};
		typicalspeed = 75;
	};
	class rhs_40mm_smoke_white: SmokeShell
	{
		model = "\A3\weapons_f\ammo\UGL_slug";
	};
	class rhs_40mm_smoke_red: SmokeShellRed
	{
		model = "\A3\weapons_f\ammo\UGL_slug";
	};
	class rhs_40mm_smoke_green: SmokeShellGreen
	{
		model = "\A3\weapons_f\ammo\UGL_slug";
	};
	class rhs_40mm_smoke_yellow: SmokeShellYellow
	{
		model = "\A3\weapons_f\ammo\UGL_slug";
	};
	class rhs_40mm_m714_white: SmokeShell
	{
		model = "\A3\weapons_f\ammo\UGL_slug";
		explosionTime = -1;
		timeToLive = 30;
	};
	class rhs_40mm_m713_red: SmokeShellRed
	{
		model = "\A3\weapons_f\ammo\UGL_slug";
		explosionTime = -1;
		timeToLive = 30;
	};
	class rhs_40mm_m715_green: SmokeShellGreen
	{
		model = "\A3\weapons_f\ammo\UGL_slug";
		explosionTime = -1;
		timeToLive = 30;
	};
	class rhs_40mm_m716_yellow: SmokeShellYellow
	{
		model = "\A3\weapons_f\ammo\UGL_slug";
		explosionTime = -1;
		timeToLive = 30;
	};
	class rhs_ammo_m67: GrenadeHand
	{
		model = "\rhsusf\addons\rhsusf_weapons\grenades_thrown\m67\m67_frag";
	};
	class rhs_ammo_m69: GrenadeHand_stone
	{
		model = "\rhsusf\addons\rhsusf_weapons\grenades_thrown\m69\m69_practice";
	};
	class rhs_ammo_m84: GrenadeHand
	{
		model = "\rhsusf\addons\rhsusf_weapons\grenades_thrown\m84\m84_flash";
		hit = 0.1;
		indirectHit = 0.1;
		indirectHitRange = 8;
		ExplosionEffects = "RHSUSF_flashbang_15";
		craterEffects = "RHSUSF_flashbang_Crater";
		explosionTime = 1.5;
		cost = 10;
	};
	class rhs_ammo_an_m14_th3: SmokeShell
	{
		CraterEffects = "NoCrater";
		explosionEffects = "NoExplosion";
		cost = 150;
		timeToLive = 25;
		effectsSmoke = "RHS_Incendenary_Grenade";
		model = "\rhsusf\addons\rhsusf_weapons\grenades_thrown\an-m14_th3\an-m14_th3";
		SmokeShellSoundLoop1[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop1", 0.125893, 1, 16.5};
		SmokeShellSoundLoop2[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop2", 0.125893, 1, 16.5};
		grenadeBurningSound[] = {"SmokeShellSoundLoop1", 0.5, "SmokeShellSoundLoop2", 0.5};
		aiAmmoUsageFlags = "1 + 2 + 64";
	};
	class rhs_ammo_an_m14_th3_droplet: rhs_ammo_12gHEAP_penetrator
	{
		hit = 80;
		indirectHit = 20;
		indirectHitRange = 0.4;
		explosive = 0.5;
		deflecting = 0;
		caliber = 0.846667;
		CraterEffects = "";
		explosionEffects = "";
		soundHit[] = {"", 1, 1};
		hitArmorInt[] = {};
		hitMetalInt[] = {};
		hitGroundSoft[] = {};
		hitGroundHard[] = {};
		hitMan[] = {};
		hitArmor[] = {};
		hitBuilding[] = {};
		hitFoliage[] = {};
		hitWood[] = {};
		hitGlass[] = {};
		hitGlassArmored[] = {};
		hitConcrete[] = {};
		hitRubber[] = {};
		hitPlastic[] = {};
		hitDefault[] = {};
		hitMetal[] = {};
		hitMetalplate[] = {};
		hitWater[] = {};
		bulletFly[] = {};
		class HitEffects
		{
			hitMetal = "";
			hitMetalPlate = "";
			hitBuilding = "";
			hitConcrete = "";
			hitGroundSoft = "";
			hitGroundHard = "";
			Hit_Foliage_green = "";
			Hit_Foliage_Dead = "";
			Hit_Foliage_Green_big = "";
			Hit_Foliage_Palm = "";
			Hit_Foliage_Pine = "";
			hitFoliage = "";
			hitGlass = "";
			hitGlassArmored = "";
			hitWood = "";
			hitPlastic = "";
			hitRubber = "";
			hitMan = "";
			hitWater = "";
			default_mat = "";
		};
	};
	class rhs_ammo_m7a3_cs: GrenadeHand
	{
		hit = 0.1;
		indirectHit = 0.1;
		indirectHitRange = 8;
		ExplosionEffects = "RHSUSF_flashbang_15";
		explosionTime = 1.5;
		cost = 10;
		model = "\rhsusf\addons\rhsusf_weapons\grenades_thrown\m7a3_cs\m7a3_cs";
	};
	class rhs_ammo_mk3a2: GrenadeHand
	{
		model = "\rhsusf\addons\rhsusf_weapons\grenades_thrown\mk3a2\mk3a2";
	};
	class rhs_ammo_an_m8hc: SmokeShell
	{
		model = "\rhsusf\addons\rhsusf_weapons\grenades_thrown\an-m8hc\an-m8hc";
	};
	class rhs_ammo_m18_green: SmokeShell
	{
		smokeColor[] = {0.2125, 0.6258, 0.4891, 1};
		model = "rhsusf\addons\rhsusf_weapons\grenades_thrown\m18\m18_smoke";
	};
	class rhs_ammo_m18_purple: rhs_ammo_m18_green
	{
		smokeColor[] = {0.4341, 0.1388, 0.4144, 1};
		model = "rhsusf\addons\rhsusf_weapons\grenades_thrown\m18\m18_smoke_purple";
	};
	class rhs_ammo_m18_red: rhs_ammo_m18_green
	{
		smokeColor[] = {0.8438, 0.1383, 0.1353, 1};
		model = "rhsusf\addons\rhsusf_weapons\grenades_thrown\m18\m18_smoke_red";
	};
	class rhs_ammo_m18_yellow: rhs_ammo_m18_green
	{
		smokeColor[] = {0.9883, 0.8606, 0.0719, 1};
		model = "rhsusf\addons\rhsusf_weapons\grenades_thrown\m18\m18_smoke_yellow";
	};
	class rhs_ammo_s8: R_80mm_HE
	{
		AIAmmoUsageFlags = "64+128+512";
		cost = 100;
		initTime = 0.02;
		sideAirFriction = 0.003;
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_F.p3d";
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_fly_F.p3d";
		effectsMissile = "RHS_Rocket_Fired";
		effectsMissileInit = "RHS_Rocket_Init";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2", 1, 1.5, 700};
		submunitionAmmo = "rhs_ammo_s8_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		missileLockMaxDistance = 4000;
		missileLockMinDistance = 700;
	};
	class rhs_ammo_s8_penetrator: rhs_ammo_base_penetrator
	{
		submunitionConeType[] = {"randomcenter", 5};
		caliber = 26.6667;
	};
	class rhs_ammo_s8DF: rhs_ammo_s8
	{
		AIAmmoUsageFlags = "64+128";
		cost = 100;
		submunitionAmmo = "";
		hit = 210;
		indirectHit = 85;
		indirectHitRange = 20;
		explosive = 1;
		allowAgainstInfantry = 1;
		class CamShakeExplode
		{
			power = 22;
			duration = 2;
			frequency = 20;
			distance = 123.905;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		explosionEffects = "RHS_FAE_Explosion";
	};
	class rhs_ammo_s8t: rhs_ammo_s8
	{
		AIAmmoUsageFlags = "64+128+512";
		submunitionAmmo = "rhs_ammo_s8t_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		indirectHit = 40;
		indirectHitRange = 7;
		craterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
	};
	class rhs_ammo_s8t_penetrator: rhs_ammo_base_penetrator
	{
		warheadName = "TandemHEAT";
		submunitionConeType[] = {"randomcenter", 5};
		caliber = 26.6667;
	};
	class rhs_ammo_s13b: rhs_ammo_s8
	{
		proxyShape = "\rhsafrf\addons\rhs_airweapons\s13_rockets\rhs_r_s13_gasket";
		model = "\rhsafrf\addons\rhs_airweapons\s13_rockets\rhs_r_s13b_fly";
		hit = 470;
		indirectHit = 240;
		indirectHitRange = 10;
		dangerRadiusHit = 1250;
		suppressionRadiusHit = 120;
		sideAirFriction = 0.001;
		thrusttime = 0.6;
		class CamShakeExplode
		{
			power = 24.4;
			duration = 2.2;
			frequency = 20;
			distance = 208.363;
		};
		class CamShakeHit
		{
			power = 122;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.32346;
			duration = 2.2;
			frequency = 20;
			distance = 88.3629;
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class rhs_ammo_s13of: rhs_ammo_s13b
	{
		submunitionAmmo = "";
		model = "\rhsafrf\addons\rhs_airweapons\s13_rockets\rhs_r_s13of_fly";
		hit = 270;
		indirectHit = 120;
		indirectHitRange = 25;
	};
	class rhs_ammo_s13D: rhs_ammo_s13b
	{
		model = "\rhsafrf\addons\rhs_airweapons\s13_rockets\rhs_r_s13d_fly";
		AIAmmoUsageFlags = "64+128";
		cost = 100;
		submunitionAmmo = "";
		hit = 210;
		indirectHit = 175;
		indirectHitRange = 15;
		explosive = 1;
		allowAgainstInfantry = 1;
		class CamShakeExplode
		{
			power = 22;
			duration = 2;
			frequency = 20;
			distance = 123.905;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		explosionEffects = "RHS_FAE_Explosion";
	};
	class rhs_ammo_s13DF: rhs_ammo_s13D
	{
		model = "\rhsafrf\addons\rhs_airweapons\s13_rockets\rhs_r_s13df_fly";
		hit = 260;
		indirectHit = 205;
		indirectHitRange = 20;
	};
	class rhs_ammo_s13t: rhs_ammo_s13b
	{
		AIAmmoUsageFlags = "64+128+512";
		submunitionAmmo = "rhs_ammo_s13t_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		model = "\rhsafrf\addons\rhs_airweapons\s13_rockets\rhs_r_s13t_fly";
		indirectHit = 30;
		indirectHitRange = 7;
		craterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
	};
	class rhs_ammo_s13t_penetrator: rhs_ammo_base_penetrator
	{
		warheadName = "TandemHEAT";
		submunitionConeType[] = {"randomcenter", 5};
		caliber = 40;
	};
	class rhs_ammo_s5: rhs_ammo_s8
	{
		submunitionAmmo = "";
		proxyShape = "\rhsafrf\addons\rhs_airweapons\s5_rockets\rhs_r_s5m1";
		model = "\rhsafrf\addons\rhs_airweapons\s5_rockets\rhs_r_s5m1_fly";
		hit = 220;
		indirectHit = 20;
		indirectHitRange = 9;
		initTime = 0.02;
		thrusttime = 0.675;
		timetolive = 12.5;
		sideAirFriction = 0.004;
		missileLockMaxDistance = 1800;
		class CamShakeExplode
		{
			power = 11.4;
			duration = 1.6;
			frequency = 20;
			distance = 140.399;
		};
		class CamShakeHit
		{
			power = 57;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.7477;
			duration = 1.6;
			frequency = 20;
			distance = 60.3987;
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class rhs_ammo_s5m1: rhs_ammo_s5
	{
		hit = 200;
		indirectHit = 40;
		indirectHitRange = 12;
	};
	class rhs_ammo_s5k1: rhs_ammo_s5
	{
		AIAmmoUsageFlags = "64+128+512";
		submunitionAmmo = "rhs_ammo_s5k1_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		indirectHit = 40;
		indirectHitRange = 7;
		craterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
	};
	class rhs_ammo_s5k1_penetrator: rhs_ammo_base_penetrator
	{
		submunitionConeType[] = {"randomcenter", 5};
		caliber = 8.66667;
	};
	class rhs_ammo_s5ko: rhs_ammo_s5
	{
		AIAmmoUsageFlags = "64+128+512";
		submunitionAmmo = "rhs_ammo_s5ko_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_s5ko_penetrator: rhs_ammo_base_penetrator
	{
		submunitionConeType[] = {"randomcenter", 5};
		caliber = 11.4667;
	};
	class rhs_ammo_s5_ub16: rhs_ammo_s5
	{
	};
	class rhs_ammo_s5_ub32: rhs_ammo_s5_ub16
	{
	};
	class rhs_ammo_s24_base: rhs_ammo_s13b
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_s24_fly";
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_s24";
		hit = 700;
		indirectHit = 140;
		indirectHitRange = 30;
		dangerRadiusHit = 1250;
		suppressionRadiusHit = 150;
		sideAirFriction = 0.055;
		maxspeed = 430;
		class CamShakeExplode
		{
			power = 48;
			duration = 3;
			frequency = 20;
			distance = 523.935;
		};
		class CamShakeHit
		{
			power = 240;
			duration = 0.8;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.93598;
			duration = 3;
			frequency = 20;
			distance = 123.935;
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		SoundSetExplosion[] = {"BombsHeavy_Exp_SoundSet", "BombsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class rhs_ammo_s24: rhs_ammo_s24_base
	{
		effectsMissile = "RHS_Rocket_Fired";
	};
	class rhs_ammo_s24b: rhs_ammo_s24_base
	{
	};
	class rhs_ammo_s25_base: rhs_ammo_s24_base
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_s25of_fly";
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_s25of";
		hit = 700;
		indirectHit = 160;
		indirectHitRange = 30;
		sideAirFriction = 0.045;
		maxspeed = 700;
		class CamShakeExplode
		{
			power = 68;
			duration = 3.6;
			frequency = 20;
			distance = 707.513;
		};
		class CamShakeHit
		{
			power = 340;
			duration = 0.8;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 4.29408;
			duration = 3.6;
			frequency = 20;
			distance = 147.513;
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class rhs_ammo_s25o: rhs_ammo_s25_base
	{
		proximityExplosionDistance = 10;
	};
	class rhs_ammo_s25of: rhs_ammo_s25_base
	{
		hit = 650;
		indirectHit = 150;
		indirectHitRange = 35;
	};
	class rhs_ammo_s25l: rhs_ammo_s25_base
	{
		maxControlRange = 7000;
		missileLockMaxDistance = 7000;
		missileLockMinDistance = 1000;
		weaponLockSystem = "4 + 16";
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 7000;
							maxRange = 7000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 7000;
							maxRange = 7000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 30;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
				};
			};
		};
	};
	class rhs_ammo_s25ld: rhs_ammo_s25l
	{
		maxControlRange = 10000;
		missileLockMaxDistance = 10000;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 10000;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 10000;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 30;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
				};
			};
		};
	};
	class rhs_ammo_9m114: rhs_ammo_atgmBase_base
	{
		submunitionAmmo = "rhs_ammo_9m114_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		lockType = 0;
		cost = 100;
		hit = 400;
		indirecthit = 26;
		indirecthitrange = 2.6;
		maneuvrability = 13;
		manualcontrol = 1;
		maxcontrolrange = 5000;
		maxspeed = 345;
		sideairfriction = 0.3;
		thrust = 172;
		thrusttime = 3.5;
		timetolive = 15;
		tracklead = 0.95;
		trackoversteer = 0.95;
		whistledist = 3;
		model = "\A3\Weapons_F\Ammo\Missile_AT_03_fly_F";
		proxyShape = "\rhsafrf\addons\rhs_a2port_air\data\rhs_m_9m114";
		maverickWeaponIndexOffset = 30;
		rhs_saclos = 2;
		rhs_ballisticMode = 1;
		rhs_guideMode = "RADIO";
		class EventHandlers: EventHandlers
		{
			class RHS_Guidance
			{
				fired = "_this call RHS_fnc_saclosGuide";
			};
		};
	};
	class rhs_ammo_9m114_penetrator: rhs_ammo_base_penetrator
	{
		hit = 300;
		caliber = 37.3333;
	};
	class rhs_ammo_9m114m: rhs_ammo_9m114
	{
	};
	class rhs_ammo_9m114f: rhs_ammo_9m114
	{
		AIAmmoUsageFlags = "64+128";
		allowAgainstInfantry = 1;
		cost = 100;
		submunitionAmmo = "";
		hit = 210;
		indirectHit = 175;
		indirectHitRange = 15;
		explosive = 1;
		class CamShakeExplode
		{
			power = 22;
			duration = 2;
			frequency = 20;
			distance = 403.905;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		explosionEffects = "RHS_FAE_Explosion";
	};
	class rhs_ammo_9m114m1: rhs_ammo_9m114
	{
		maxcontrolrange = 6000;
	};
	class rhs_ammo_9m114m2: rhs_ammo_9m114
	{
		maxcontrolrange = 7000;
	};
	class rhs_ammo_9m120: rhs_ammo_atgmBase_base
	{
		submunitionAmmo = "rhs_ammo_9m120_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		lockType = 0;
		cost = 180;
		indirecthit = 26;
		indirecthitrange = 3.6;
		maneuvrability = 13;
		manualcontrol = 1;
		maxcontrolrange = 6000;
		maxspeed = 550;
		sideairfriction = 0.3;
		thrust = 172;
		thrusttime = 3.5;
		timetolive = 25;
		tracklead = 0;
		trackoversteer = 1;
		whistledist = 3;
		model = "\A3\Weapons_F\Ammo\Missile_AT_03_fly_F";
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_9m120";
		maverickWeaponIndexOffset = 30;
		rhs_saclos = 2;
		rhs_ballisticMode = 0;
		rhs_guideMode = "RADIO";
		class EventHandlers: EventHandlers
		{
			class RHS_Guidance
			{
				fired = "_this call RHS_fnc_saclosGuide";
			};
		};
	};
	class rhs_ammo_9m120_penetrator: rhs_ammo_base_penetrator
	{
		warheadName = "TandemHEAT";
		caliber = 53.3333;
	};
	class rhs_ammo_9m120m: rhs_ammo_9m120
	{
		submunitionAmmo = "rhs_ammo_9m120m_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		maxcontrolrange = 8000;
	};
	class rhs_ammo_9m120m_penetrator: rhs_ammo_base_penetrator
	{
		warheadName = "TandemHEAT";
		hit = 290;
		caliber = 63.3333;
	};
	class rhs_ammo_9m120f: rhs_ammo_9m120
	{
		AIAmmoUsageFlags = "64+128";
		allowAgainstInfantry = 1;
		cost = 100;
		submunitionAmmo = "";
		hit = 210;
		indirectHit = 175;
		indirectHitRange = 15;
		explosive = 1;
		class CamShakeExplode
		{
			power = 22;
			duration = 2;
			frequency = 20;
			distance = 403.905;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		explosionEffects = "RHS_FAE_Explosion";
	};
	class rhs_ammo_9m120o: rhs_ammo_9m120
	{
		AIAmmoUsageFlags = "64+128";
		allowAgainstInfantry = 1;
		cost = 100;
		hit = 210;
		indirectHit = 175;
		indirectHitRange = 15;
		explosive = 1;
		proximityExplosionDistance = 12;
		simulation = "shotMissile";
		triggerDistance = 5;
		submunitionAmmo = "rhs_ammo_spall";
		submunitionConeType[] = {"poissondisc", 100};
		submunitionConeAngle = 360;
	};
	class rhs_ammo_9m127: rhs_ammo_9m120
	{
	};
	class rhs_ammo_9m127m: rhs_ammo_9m127
	{
		indirecthit = 86;
		indirecthitrange = 9.6;
		cmImmunity = 0.9;
		proxyShape = "\rhsafrf\addons\rhs_a2port_air\data\rhs_m_9m127";
		maverickWeaponIndexOffset = 0;
		airlock = 1;
		trackoversteer = 1;
		trackLead = 1;
		lockType = 0;
		manualcontrol = 0;
		maneuvrability = 14;
		weaponLockSystem = "1 + 4";
	};
	class rhs_ammo_r27_base: Missile_AA_04_F
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_r27r_fly";
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_r27r";
		hit = 180;
		indirecthit = 170;
		indirecthitrange = 19;
		proximityExplosionDistance = 29;
		submunitionConeType[] = {"randomcenter", 30};
		submunitionConeAngle = 65;
		submunitionAmmo = "rhs_ammo_he_fragments";
		submunitionDirectionType = "SubmunitionTargetDirection";
		submunitionInitialOffset[] = {0, 0, 0};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1500;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		irlock = 1;
		maxspeed = 850;
		maxcontrolrange = 20000;
		maneuvrability = 14;
		airFriction = 0.014;
		sideAirFriction = 0.18;
		simulationstep = 0.001;
		initTime = 0.1;
		thrust = 340;
		thrusttime = 5;
		timetolive = 120;
	};
	class rhs_ammo_r27r: rhs_ammo_r27_base
	{
		cmimmunity = 0.885;
		weaponLockSystem = "8 + 16";
		missileLockCone = 60;
		missileLockMaxDistance = 16000;
		missileLockMinDistance = 2000;
		missileLockMaxSpeed = 972;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 16000;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 14000;
							maxRange = 14000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = -1;
						angleRangeHorizontal = 45;
						angleRangeVertical = 45;
						groundNoiseDistanceCoef = 0.1;
						aimDown = 0;
						minSpeedThreshold = 30;
						maxSpeedThreshold = 40;
					};
				};
			};
		};
	};
	class rhs_ammo_r27er: rhs_ammo_r27r
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_r27er_fly";
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_r27er";
		missileLockMaxDistance = 20000;
		timetolive = 80;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 20000;
							maxRange = 20000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 14000;
							maxRange = 14000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = -1;
						angleRangeHorizontal = 45;
						angleRangeVertical = 45;
						groundNoiseDistanceCoef = 0.1;
						aimDown = 0;
						minSpeedThreshold = 30;
						maxSpeedThreshold = 40;
					};
				};
			};
		};
	};
	class rhs_ammo_r27t: rhs_ammo_r27_base
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_r27t_fly";
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_r27t";
		weaponLockSystem = "2 + 16";
		missileLockCone = 15;
		missileLockMaxDistance = 22000;
		missileLockMinDistance = 1700;
		missileLockMaxSpeed = 700;
		timetolive = 55;
		autoSeekTarget = 1;
		lockSeekRadius = 1000;
		trackLead = 0.5;
		flightProfiles[] = {"Direct", "LoalDistance"};
		class Direct
		{
		};
		class LoalDistance
		{
			lockSeekDistanceFromParent = 2000;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						typeRecognitionDistance = -1;
						angleRangeHorizontal = 15;
						angleRangeVertical = 15;
						maxTrackableSpeed = 1200;
						aimDown = 0;
					};
				};
			};
		};
	};
	class rhs_ammo_r27et: rhs_ammo_r27t
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_r27et_fly";
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_r27et";
		timetolive = 70;
		missileLockMaxDistance = 26000;
	};
	class rhs_ammo_r60_base: Missile_AA_04_F
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_r60_fly";
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_r60";
		hit = 180;
		indirecthit = 50;
		indirecthitrange = 9;
		proximityExplosionDistance = 12;
		submunitionConeType[] = {"randomcenter", 30};
		submunitionConeAngle = 65;
		submunitionAmmo = "rhs_ammo_he_fragments";
		submunitionDirectionType = "SubmunitionTargetDirection";
		submunitionInitialOffset[] = {0, 0, 0};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1500;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		irlock = 1;
		maxspeed = 850;
		maxcontrolrange = 7000;
		maneuvrability = 34;
		sideAirFriction = 0.18;
		simulationstep = 0.001;
		initTime = 0.1;
		thrust = 340;
		thrusttime = 3;
		timetolive = 18;
		weaponLockSystem = "2 + 16";
	};
	class rhs_ammo_r60: rhs_ammo_r60_base
	{
		missileLockCone = 24;
		missileKeepLockedCone = 40;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 4500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 24;
						angleRangeVertical = 24;
						maxTrackableSpeed = 835;
						aimDown = 0;
					};
				};
			};
		};
	};
	class rhs_ammo_r60m: rhs_ammo_r60_base
	{
		hit = 180;
		indirecthit = 80;
		indirecthitrange = 9;
		maxcontrolrange = 10000;
		missileLockCone = 40;
		missileKeepLockedCone = 60;
		timetolive = 23;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 8500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 40;
						angleRangeVertical = 40;
						maxTrackableSpeed = 835;
						aimDown = 0;
					};
				};
			};
		};
	};
	class rhs_ammo_r73: Missile_AA_04_F
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_r73_fly";
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_r73";
		cost = 800;
		effectsmissile = "missile3";
		cratereffects = "AAMissileCrater";
		explosioneffects = "AAMissileExplosion";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2", 1, 1.5, 700};
		hit = 150;
		indirecthit = 90;
		indirecthitrange = 9;
		initTime = 0.1;
		irlock = 1;
		maneuvrability = 28;
		maxcontrolrange = 20000;
		maxspeed = 850;
		sideAirFriction = 0.18;
		simulationstep = 0.001;
		thrust = 340;
		thrusttime = 5;
		timetolive = 20;
		submunitionConeType[] = {"randomcenter", 30};
		submunitionConeAngle = 65;
		submunitionAmmo = "rhs_ammo_he_fragments";
		submunitionDirectionType = "SubmunitionTargetDirection";
		submunitionInitialOffset[] = {0, 0, 0};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1500;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		weaponLockSystem = "1 + 2 + 16";
		missileLockCone = 50;
		missileKeepLockedCone = 90;
		missileLockMaxDistance = 8000;
		missileLockMinDistance = 300;
		missileLockMaxSpeed = 700;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 4500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 90;
						angleRangeVertical = 90;
						maxTrackableSpeed = 835;
						aimDown = 0;
					};
				};
			};
		};
	};
	class rhs_ammo_r73m: rhs_ammo_r73
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_r74_fly";
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_r74";
		cmimmunity = 0.92;
		missileLockCone = 60;
		missileKeepLockedCone = 120;
	};
	class rhs_ammo_r74: rhs_ammo_r73m
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_r74_fly";
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_r74";
		cost = 900;
		hit = 190;
		maneuvrability = 47;
		indirecthit = 135;
		inittime = 0.5;
	};
	class rhs_ammo_r74m2: rhs_ammo_r74
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_r74m2_fly";
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_r74m2";
		maneuvrability = 47;
		inittime = 0.5;
		cmimmunity = 0.92;
		missileLockCone = 150;
		missileKeepLockedCone = 150;
		missileLockMaxDistance = 8000;
		missileLockMinDistance = 150;
		missileLockMaxSpeed = 700;
	};
	class rhs_ammo_r77: rhs_ammo_r73
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_r77_fly";
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_r77";
		inittime = 0.5;
		cost = 900;
		hit = 270;
		indirecthit = 150;
		indirecthitrange = 12;
		proximityExplosionDistance = 20;
		maxspeed = 1111;
		timetolive = 120;
		airFriction = 0.014;
		sideairfriction = 0.5;
		cmimmunity = 0.89;
		weaponLockSystem = "8 + 16";
		missileLockCone = 60;
		missileKeepLockedCone = 90;
		missileLockMaxDistance = 22000;
		missileLockMinDistance = 2000;
		missileLockMaxSpeed = 972;
		autoSeekTarget = 1;
		lockSeekRadius = 1000;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 25000;
							maxRange = 25000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 25000;
							maxRange = 25000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = -1;
						angleRangeHorizontal = 45;
						angleRangeVertical = 45;
						groundNoiseDistanceCoef = 0.1;
						aimDown = 0;
						minSpeedThreshold = 30;
						maxSpeedThreshold = 40;
					};
				};
			};
		};
	};
	class rhs_ammo_r77m: rhs_ammo_r77
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_r77m_fly";
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_r77m";
		cost = 1000;
		hit = 330;
		indirecthit = 80;
		missileLockMaxSpeed = 1000;
		missileKeepLockedCone = 120;
		cmimmunity = 0.94;
	};
	class rhs_ammo_kh25_base: Missile_AGM_01_F
	{
		submunitionAmmo = "rhs_ammo_kh25_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 530;
		indirectHit = 85;
		indirectHitRange = 8;
		maxspeed = 870;
		inittime = 0.8;
		thrust = 350;
		thrusttime = 2;
		timetolive = 30;
		missileLockCone = 30;
		missileKeepLockedCone = 30;
		missileLockMaxDistance = 10000;
		missileLockMinDistance = 2000;
		missileLockMaxSpeed = 55;
		cameraViewAvailable = 0;
		effectsMissile = "RHS_Rocket_Fired";
		class CamShakeExplode
		{
			power = 102;
			duration = 4.6;
			frequency = 20;
			distance = 900.665;
		};
		class CamShakeHit
		{
			power = 510;
			duration = 1;
			frequency = 20;
			distance = 1;
		};
	};
	class rhs_ammo_kh25: rhs_ammo_kh25_base
	{
		maxspeed = 850;
		missileLockMaxDistance = 7000;
		weaponLockSystem = "4 + 16";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 7000;
							maxRange = 7000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 7000;
							maxRange = 7000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 30;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
				};
			};
		};
	};
	class rhs_ammo_kh25ml: rhs_ammo_kh25_base
	{
		weaponLockSystem = "4 + 16";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class NVSensorComponent: SensorTemplateNV
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 10000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 30;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 30;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
				};
			};
		};
	};
	class rhs_ammo_kh25ma: rhs_ammo_kh25_base
	{
		weaponLockSystem = "8 + 16";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class RadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 10000;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = -1;
						maxFogSeeThrough = 0.8;
						minTrackableSpeed = 0;
						maxTrackableSpeed = 56;
						minTrackableATL = -1;
						maxTrackableATL = 40;
					};
				};
			};
		};
	};
	class rhs_ammo_kh25mt: rhs_ammo_kh25_base
	{
		maxspeed = 870;
		missileLockCone = 45;
		missileKeepLockedCone = 45;
		missileLockMaxDistance = 10000;
		missileLockMinDistance = 1500;
		weaponLockSystem = "1 + 16";
		cameraViewAvailable = 1;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 35;
						nightRangeCoef = 0.8;
						angleRangeHorizontal = 45;
						angleRangeVertical = 45;
					};
				};
			};
		};
	};
	class rhs_ammo_kh25mtp: rhs_ammo_kh25_base
	{
		weaponLockSystem = "2 + 16";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 55;
						angleRangeHorizontal = 30;
						angleRangeVertical = 30;
					};
				};
			};
		};
	};
	class rhs_ammo_kh25mp: rhs_ammo_kh25_base
	{
		maxspeed = 920;
		weaponLockSystem = 16;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class AntiRadiationSensorComponent: SensorTemplateAntiRadiation
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 55;
						angleRangeHorizontal = 30;
						angleRangeVertical = 30;
					};
				};
			};
		};
	};
	class rhs_ammo_kh25_penetrator: rhs_ammo_base_penetrator
	{
		hit = 310;
		typicalSpeed = 800;
		caliber = 60;
	};
	class rhs_ammo_kh29_base: Missile_AGM_02_F
	{
		submunitionAmmo = "rhs_ammo_kh29_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_m_kh29_fly";
		proxyShape = "\rhsafrf\addons\rhs_a2port_air\data\rhs_m_kh29";
		maverickWeaponIndexOffset = 0;
		hit = 1330;
		indirecthit = 300;
		indirecthitrange = 17;
		cratereffects = "BombCrater";
		effectsMissile = "RHS_Rocket_Fired";
		explosioneffects = "BombExplosion";
		maxspeed = 720;
		maneuvrability = 10;
		maxcontrolrange = 10000;
		sideairfriction = 0.1;
		simulationstep = 0.001;
		inittime = 0.8;
		thrust = 350;
		thrusttime = 2;
		timetolive = 30;
		tracklead = 0.95;
		trackoversteer = 50;
		whistledist = 18;
		irlock = 1;
		laserlock = 1;
		lockType = 0;
		weaponLockSystem = "4 + 16";
		lockSeekRadius = 120;
		missileLockCone = 30;
		missileKeepLockedCone = 30;
		missileLockMaxDistance = 9000;
		missileLockMinDistance = 1500;
		missileLockMaxSpeed = 55;
		cameraViewAvailable = 0;
		class CamShakeExplode
		{
			power = 180;
			duration = 6;
			frequency = 20;
			distance = 1240;
		};
		class CamShakeHit
		{
			power = 900;
			duration = 1;
			frequency = 20;
			distance = 1;
		};
		SoundSetExplosion[] = {"BombsHeavy_Exp_SoundSet", "BombsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class rhs_ammo_kh29l: rhs_ammo_kh29_base
	{
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 30;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
				};
			};
		};
	};
	class rhs_ammo_kh29ml: rhs_ammo_kh29_base
	{
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class NVSensorComponent: SensorTemplateNV
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 30;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 9000;
							maxRange = 9000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 9000;
							maxRange = 9000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 30;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
				};
			};
		};
	};
	class rhs_ammo_kh29t: rhs_ammo_kh29_base
	{
		missileLockCone = 45;
		missileKeepLockedCone = 45;
		missileLockMaxDistance = 9000;
		missileLockMinDistance = 1500;
		weaponLockSystem = "1 + 16";
		cameraViewAvailable = 1;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 9000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 9000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 35;
						nightRangeCoef = 0.1;
						maxFogSeeThrough = 0.1;
						angleRangeHorizontal = 45;
						angleRangeVertical = 45;
					};
				};
			};
		};
	};
	class rhs_ammo_kh29mp: rhs_ammo_kh29_base
	{
		weaponLockSystem = "8 + 16";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class RadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 10000;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
					};
				};
			};
		};
	};
	class rhs_ammo_kh29d: rhs_ammo_kh29_base
	{
		weaponLockSystem = 16;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 55;
						angleRangeHorizontal = 30;
						angleRangeVertical = 30;
					};
				};
			};
		};
	};
	class rhs_ammo_kh29_penetrator: rhs_ammo_base_penetrator
	{
		hit = 310;
		typicalSpeed = 800;
		caliber = 33.3333;
	};
	class rhs_ammo_kh38m_base: Missile_AGM_02_F
	{
		submunitionAmmo = "rhs_ammo_kh38m_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_kh38m_fly";
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_kh38m";
		hit = 830;
		indirectHit = 105;
		indirectHitRange = 10;
		maxspeed = 748;
		class CamShakeExplode
		{
			power = 102;
			duration = 4.6;
			frequency = 20;
			distance = 1060.67;
		};
		class CamShakeHit
		{
			power = 510;
			duration = 1;
			frequency = 20;
			distance = 1;
		};
	};
	class rhs_ammo_kh38mle: rhs_ammo_kh38m_base
	{
		weaponLockSystem = "4 + 16";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class NVSensorComponent: SensorTemplateNV
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 30;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 30;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
				};
			};
		};
	};
	class rhs_ammo_kh38mle_ext: rhs_ammo_kh38mle
	{
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_kh38m_ext";
	};
	class rhs_ammo_kh38mae: rhs_ammo_kh38m_base
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_kh38mae_fly";
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_kh38mae";
		weaponLockSystem = "8 + 16";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class RadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 10000;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = -1;
						maxFogSeeThrough = 0.8;
						minTrackableSpeed = 0;
						maxTrackableSpeed = 56;
						minTrackableATL = -1;
						maxTrackableATL = 40;
					};
				};
			};
		};
	};
	class rhs_ammo_kh38mae_ext: rhs_ammo_kh38mae
	{
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_kh38mae_ext";
	};
	class rhs_ammo_kh38mte: rhs_ammo_kh38m_base
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_kh38mte_fly";
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_kh38mte";
		weaponLockSystem = "2 + 16";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 6000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 55;
						angleRangeHorizontal = 30;
						angleRangeVertical = 30;
					};
				};
			};
		};
	};
	class rhs_ammo_kh38mte_ext: rhs_ammo_kh38mte
	{
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_kh38mte_ext";
	};
	class rhs_ammo_kh38m_penetrator: rhs_ammo_base_penetrator
	{
		hit = 310;
		typicalSpeed = 800;
		caliber = 73.3333;
	};
	class rhs_ammo_kh55sm: rhs_ammo_kh29l
	{
		submunitionAmmo = "";
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_kh55sm_fly";
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_kh55sm";
		CraterEffects = "RHS_HeavyBombCrater";
		explosionEffects = "RHS_HeavyBombExplosion";
		effectsMissile = "missile5";
		hit = 9920;
		indirecthit = 1300;
		indirecthitrange = 56;
		inittime = 6;
		maneuvrability = 10;
		maxcontrolrange = 350000;
		maxspeed = 255;
		sideairfriction = 0.001;
		simulationstep = 0.001;
		thrust = 20;
		thrusttime = 180;
		timetolive = 900;
		tracklead = 0.95;
		trackoversteer = 50;
		whistledist = 25;
		weaponLockSystem = 16;
		lockType = 0;
		irlock = 1;
		laserlock = 1;
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Fly_NLAW", 2.5, 1.5, 10800};
		SoundSetExplosion[] = {"BombsHeavy_Exp_SoundSet", "BombsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		RHS_yield = 50000;
		RHS_FuseRange = 100;
		RHS_WarheadType = "NUKE";
		class CamShakeExplode
		{
			power = 140;
			duration = 5.2;
			frequency = 20;
			distance = 2011.66;
		};
		class CamShakeHit
		{
			power = 700;
			duration = 1;
			frequency = 20;
			distance = 1;
		};
	};
	class rhs_ammo_kh55sm_nocamo: rhs_ammo_kh55sm
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_kh55sm2_fly";
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_kh55sm2";
	};
	class rhs_ammo_kh55sh: rhs_ammo_kh55sm
	{
		RHS_WarheadType = "EXPLOSIVE";
		RHS_FuseRange = 0;
	};
	class rhs_ammo_kh55sh_nocamo: rhs_ammo_kh55sm_nocamo
	{
		RHS_WarheadType = "EXPLOSIVE";
	};
	class rhs_ammo_fab100: Bomb_04_F
	{
		cost = 50;
		flightProfiles[] = {"Direct"};
		class Direct
		{
		};
		hit = 1500;
		indirectHit = 650;
		indirectHitRange = 13;
		dangerRadiusHit = 850;
		suppressionRadiusHit = 80;
		irLock = 0;
		laserLock = 0;
		allowAgainstInfantry = 1;
		autoSeekTarget = 0;
		aiAmmoUsageFlags = "64 + 128 + 512";
		weaponLockSystem = 1;
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_fab100";
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_fab100";
		soundFakeFall0[] = {"a3\Sounds_F\weapons\falling_bomb\fall_01", 3.16228, 1, 1000};
		soundFakeFall1[] = {"a3\Sounds_F\weapons\falling_bomb\fall_02", 3.16228, 1, 1000};
		soundFakeFall2[] = {"a3\Sounds_F\weapons\falling_bomb\fall_03", 3.16228, 1, 1000};
		soundFakeFall3[] = {"a3\Sounds_F\weapons\falling_bomb\fall_04", 3.16228, 1, 1000};
		soundFakeFall[] = {"soundFakeFall0", 0.25, "soundFakeFall1", 0.25, "soundFakeFall2", 0.25, "soundFakeFall3", 0.25};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
				};
			};
		};
	};
	class rhs_ammo_fab250: rhs_ammo_fab100
	{
		hit = 5000;
		indirectHit = 1140;
		indirectHitRange = 15;
		dangerRadiusHit = 1250;
		suppressionRadiusHit = 100;
		model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_m_fab250";
		proxyShape = "\rhsafrf\addons\rhs_a2port_air\data\rhs_m_fab250";
	};
	class rhs_ammo_fab250_m62: rhs_ammo_fab250
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_fab250m62";
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_fab250m62";
		sideAirFriction = 0.1;
	};
	class rhs_ammo_ofab250: rhs_ammo_fab250
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ofab250";
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_ofab250";
	};
	class rhs_ammo_kab250: Bomb_04_F
	{
		flightProfiles[] = {"LoalAltitude"};
		class Direct
		{
		};
		class LoalAltitude
		{
			lockSeekAltitude = 300;
		};
		hit = 5000;
		indirectHit = 1140;
		indirectHitRange = 15;
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_kab250.p3d";
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_kab250.p3d";
		maverickWeaponIndexOffset = 0;
	};
	class rhs_ammo_rbk250_ao1: rhs_ammo_fab250
	{
		laserLock = 0;
		allowAgainstInfantry = 1;
		autoSeekTarget = 0;
		aiAmmoUsageFlags = "64 + 128 + 512";
		weaponLockSystem = 1;
		maverickWeaponIndexOffset = 0;
		simulation = "shotMissile";
		triggerDistance = 250;
		triggerSpeedCoef[] = {0.8, 1};
		submunitionConeAngle = 20;
		submunitionAmmo[] = {"rhs_ammo_sub_ao1", 0.94, "rhs_ammo_ao1_uxo_deploy", 0.06};
		submunitionConeType[] = {"randomcenter", 75};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
				};
			};
		};
	};
	class rhs_ammo_rbk250_ptab25: rhs_ammo_rbk250_ao1
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_rbk250275";
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_rbk250275";
		submunitionConeAngle = 8;
		submunitionAmmo[] = {"rhs_ammo_sub_ptab25m", 0.94, "rhs_ammo_ptab25m_uxo_deploy", 0.06};
		submunitionConeType[] = {"randomcenter", 60};
	};
	class rhs_ammo_rbk250_zab25t: rhs_ammo_rbk250_ao1
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_rbk250275";
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_rbk250275";
		submunitionAmmo[] = {"rhs_ammo_sub_zab25t_deploy", 1};
		submunitionConeType[] = {"randomcenter", 24};
	};
	class rhs_ammo_sub_ao1: Mo_cluster_AP
	{
		hit = 15;
		indirectHit = 8;
		indirectHitRange = 5;
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ao1sh";
		effectFly = "";
	};
	class rhs_ammo_ao1_uxo_deploy: UXO_deploy_BombCluster_base_F
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ao1sh";
		submunitionAmmo[] = {"rhs_ammo_uxo_ao1_1_deploy", 0.34, "rhs_ammo_uxo_ao1_2_deploy", 0.33, "rhs_ammo_uxo_ao1_3_deploy", 0.33};
	};
	class rhs_ammo_uxo_ao1_1_deploy: ShotDeployBase
	{
		model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ao1sh_1";
		submunitionAmmo = "rhs_ammo_uxo_ao1_1";
	};
	class rhs_ammo_uxo_ao1_1: APERSMine_Range_Ammo
	{
		hit = 15;
		indirectHit = 8;
		indirectHitRange = 5;
		icon = "iconExplosiveUXO";
		model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ao1sh_1";
		mineModelDisabled = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ao1sh_3";
		defaultMagazine = "";
		mineTrigger = "UXOTrigger1";
		mineCanBeReactivated = 0;
		mineFloating = 1e+007;
	};
	class rhs_ammo_uxo_ao1_2_deploy: ShotDeployBase
	{
		model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ao1sh_2";
		submunitionAmmo = "rhs_ammo_uxo_ao1_2";
	};
	class rhs_ammo_uxo_ao1_2: rhs_ammo_uxo_ao1_1
	{
		model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ao1sh_2";
		mineTrigger = "UXOTrigger2";
	};
	class rhs_ammo_uxo_ao1_3_deploy: ShotDeployBase
	{
		model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ao1sh_3";
		submunitionAmmo = "rhs_ammo_uxo_ao1_3";
	};
	class rhs_ammo_uxo_ao1_3: rhs_ammo_uxo_ao1_1
	{
		model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ao1sh_3";
		mineTrigger = "UXOTrigger3";
	};
	class rhs_ammo_sub_ptab25m: rhs_ammo_sub_ao1
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ptab25m";
		submunitionAmmo = "rhs_ammo_sub_ptab25m_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 50;
		indirectHitRange = 4;
	};
	class rhs_ammo_sub_ptab25m_penetrator: rhs_ammo_cluster_penetrator
	{
		hit = 130;
		submunitionConeType[] = {"randomcenter", 5};
		caliber = 8;
	};
	class rhs_ammo_ptab25m_uxo_deploy: UXO_deploy_BombCluster_base_F
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ptab25m";
		submunitionAmmo[] = {"rhs_ammo_uxo_ptab25m_1_deploy", 0.34, "rhs_ammo_uxo_ptab25m_2_deploy", 0.33, "rhs_ammo_uxo_ptab25m_3_deploy", 0.33};
	};
	class rhs_ammo_uxo_ptab25m_1_deploy: ShotDeployBase
	{
		model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25m_1";
		submunitionAmmo = "rhs_ammo_uxo_ptab25m_1";
	};
	class rhs_ammo_uxo_ptab25m_1: APERSMine_Range_Ammo
	{
		hit = 50;
		indirectHit = 8;
		indirectHitRange = 4;
		icon = "iconExplosiveUXO";
		model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25m_1";
		mineModelDisabled = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25m_3";
		defaultMagazine = "";
		mineTrigger = "UXOTrigger1";
		mineCanBeReactivated = 0;
		mineFloating = 1e+007;
	};
	class rhs_ammo_uxo_ptab25m_2_deploy: ShotDeployBase
	{
		model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25m_2";
		submunitionAmmo = "rhs_ammo_uxo_ptab25m_2";
	};
	class rhs_ammo_uxo_ptab25m_2: rhs_ammo_uxo_ptab25m_1
	{
		model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25m_2";
		mineTrigger = "UXOTrigger2";
	};
	class rhs_ammo_uxo_ptab25m_3_deploy: ShotDeployBase
	{
		model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25m_3";
		submunitionAmmo = "rhs_ammo_uxo_ptab25m_3";
	};
	class rhs_ammo_uxo_ptab25m_3: rhs_ammo_uxo_ptab25m_1
	{
		model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25m_3";
		mineTrigger = "UXOTrigger3";
	};
	class rhs_ammo_sub_ptab25ko: rhs_ammo_sub_ptab25m
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ptab25ko";
		submunitionAmmo = "rhs_ammo_sub_ptab25ko_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 50;
		indirectHitRange = 8;
	};
	class rhs_ammo_sub_ptab25ko_penetrator: rhs_ammo_cluster_penetrator
	{
		hit = 130;
		submunitionConeType[] = {"randomcenter", 5};
		caliber = 8;
	};
	class rhs_ammo_ptab25ko_uxo_deploy: UXO_deploy_BombCluster_base_F
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ptab25ko";
		submunitionAmmo[] = {"rhs_ammo_uxo_ptab25ko_1_deploy", 0.34, "rhs_ammo_uxo_ptab25ko_2_deploy", 0.33, "rhs_ammo_uxo_ptab25ko_3_deploy", 0.33};
	};
	class rhs_ammo_uxo_ptab25ko_1_deploy: ShotDeployBase
	{
		model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25ko_1";
		submunitionAmmo = "rhs_ammo_uxo_ptab25ko_1";
	};
	class rhs_ammo_uxo_ptab25ko_1: APERSMine_Range_Ammo
	{
		hit = 50;
		indirectHit = 8;
		indirectHitRange = 8;
		icon = "iconExplosiveUXO";
		model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25ko_1";
		mineModelDisabled = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25ko_3";
		defaultMagazine = "";
		mineTrigger = "UXOTrigger1";
		mineCanBeReactivated = 0;
		mineFloating = 1e+007;
	};
	class rhs_ammo_uxo_ptab25ko_2_deploy: ShotDeployBase
	{
		model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25ko_2";
		submunitionAmmo = "rhs_ammo_uxo_ptab25ko_2";
	};
	class rhs_ammo_uxo_ptab25ko_2: rhs_ammo_uxo_ptab25ko_1
	{
		model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25ko_2";
		mineTrigger = "UXOTrigger2";
	};
	class rhs_ammo_uxo_ptab25ko_3_deploy: ShotDeployBase
	{
		model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25ko_3";
		submunitionAmmo = "rhs_ammo_uxo_ptab25ko_3";
	};
	class rhs_ammo_uxo_ptab25ko_3: rhs_ammo_uxo_ptab25ko_1
	{
		model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25ko_3";
		mineTrigger = "UXOTrigger3";
	};
	class rhs_ammo_sub_zab25t_deploy: rhs_ammo_rbk250_ao1
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_zab25t";
		hit = 1;
		indirectHit = 1;
		indirectHitRange = 1;
		triggerDistance = 15;
		triggerSpeedCoef[] = {0.1};
		submunitionConeAngle = 1;
		submunitionAmmo[] = {"rhs_ammo_sub_zab25t", 1};
		submunitionConeType[] = {"randomcenter", 1};
		effectFly = "ArtilleryTrails";
		explosionEffects = "";
	};
	class rhs_ammo_sub_zab25t: F_40mm_White
	{
		hit = 1;
		indirectHit = 1;
		indirectHitRange = 1;
		timetolive = 180;
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_zab25t";
		effectFlare = "RHS_Incendiary_Bomb";
		craterShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_zab25t";
		explosionEffects = "";
	};
	class rhs_ammo_fab500: rhs_ammo_fab250
	{
		hit = 8000;
		indirectHit = 2400;
		indirectHitRange = 25;
		CraterEffects = "RHS_HeavyBombCrater";
		explosionEffects = "RHS_HeavyBombExplosion";
		SoundSetExplosion[] = {"BombsHeavy_Exp_SoundSet", "BombsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		class CamShakeExplode
		{
			power = 240;
			duration = 7;
			frequency = 20;
			distance = 2077.13;
		};
		class CamShakeHit
		{
			power = 1200;
			duration = 1.2;
			frequency = 20;
			distance = 1;
		};
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_fab500";
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_fab500";
	};
	class rhs_ammo_fab500_m54: rhs_ammo_fab500
	{
		hit = 8000;
		indirectHit = 2000;
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_fab500_m54";
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_fab500_m54";
	};
	class rhs_ammo_kab500: rhs_ammo_kab250
	{
		hit = 8000;
		indirectHit = 2400;
		indirectHitRange = 25;
		CraterEffects = "RHS_HeavyBombCrater";
		explosionEffects = "RHS_HeavyBombExplosion";
		SoundSetExplosion[] = {"BombsHeavy_Exp_SoundSet", "BombsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		class CamShakeExplode
		{
			power = 240;
			duration = 7;
			frequency = 20;
			distance = 2077.13;
		};
		class CamShakeHit
		{
			power = 1200;
			duration = 1.2;
			frequency = 20;
			distance = 1;
		};
	};
	class rhs_ammo_kab500lk: rhs_ammo_kab500
	{
		simulation = "shotMissile";
		triggerDistance = 250;
		triggerSpeedCoef[] = {0.8, 1};
		submunitionConeAngle = 20;
		submunitionAmmo[] = {"rhs_ammo_sub_ao25", 1};
		submunitionConeType[] = {"randomcenter", 63};
	};
	class rhs_ammo_kab500od: rhs_ammo_kab500
	{
		flightProfiles[] = {"Direct"};
		missileLockMaxDistance = 11000;
		missileLockMinDistance = 2500;
		weaponLockSystem = 1;
		cameraViewAvailable = 1;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 11000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 11000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 35;
						nightRangeCoef = 0.8;
						angleRangeHorizontal = 5;
						angleRangeVertical = 5;
					};
				};
			};
		};
	};
	class rhs_ammo_kab500kr: rhs_ammo_kab500od
	{
		hit = 8000;
		indirectHitRange = 15;
	};
	class rhs_ammo_kab500s: rhs_ammo_kab500
	{
		flightProfiles[] = {"Direct"};
	};
	class rhs_ammo_rbk500_ao25: rhs_ammo_rbk250_ao1
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_Fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_F";
		submunitionAmmo[] = {"rhs_ammo_sub_ao25", 1};
		submunitionConeType[] = {"randomcenter", 63};
	};
	class rhs_ammo_rbk500_ofab50: rhs_ammo_rbk500_ao25
	{
		submunitionAmmo[] = {"rhs_ammo_sub_ofab50", 1};
		submunitionConeType[] = {"randomcenter", 10};
	};
	class rhs_ammo_rbk500_spbed: rhs_ammo_rbk500_ao25
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_rbk500_spbed";
		submunitionAmmo[] = {"rhs_ammo_sub_spbed", 1};
		submunitionConeType[] = {"randomcenter", 12};
		submunitionConeAngle = 60;
	};
	class rhs_ammo_rbk500_ptab1m: rhs_ammo_rbk250_ptab25
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_rbk500_ptab";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_F";
		submunitionAmmo[] = {"rhs_ammo_sub_ptab1m", 0.94, "rhs_ammo_ptab1m_uxo_deploy", 0.06};
		submunitionConeAngle = 8;
		submunitionConeType[] = {"randomcenter", 136};
	};
	class rhs_ammo_rbk500_zab25t: rhs_ammo_rbk500_ao25
	{
		submunitionAmmo[] = {"rhs_ammo_sub_zab25t_deploy", 1};
		submunitionConeType[] = {"randomcenter", 57};
	};
	class rhs_ammo_sub_ao25: rhs_ammo_sub_ao1
	{
		hit = 20;
		indirectHit = 15;
		indirectHitRange = 7;
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_sub_F";
	};
	class rhs_ammo_sub_ofab50: rhs_ammo_sub_ao1
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ofab50ud";
		hit = 400;
		indirectHit = 215;
		indirectHitRange = 12;
	};
	class rhs_ammo_sub_spbed: M_Mo_155mm_AT
	{
		submunitionAmmo = "rhs_ammo_sub_spbed_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 60;
		indirectHitRange = 5;
		autoSeekTarget = 1;
		lockSeekRadius = 450;
		weaponLockSystem = 2;
		missileLockCone = 30;
		missileKeepLockedCone = 60;
		missileLockMaxDistance = 400;
		missileLockMinDistance = 10;
		missileLockMaxSpeed = 35;
		weaponType = "missileAA";
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 2000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 2000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 15;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						nightRangeCoef = 1;
					};
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 15;
						angleRangeHorizontal = 30;
						angleRangeVertical = 30;
					};
				};
			};
		};
	};
	class rhs_ammo_sub_spbed_penetrator: rhs_ammo_cluster_penetrator
	{
		hit = 130;
		submunitionConeType[] = {"randomcenter", 12};
		caliber = 23.4667;
	};
	class rhs_ammo_sub_ptab1m: rhs_ammo_sub_ptab25m
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ptab1m";
		submunitionAmmo = "rhs_ammo_sub_ptab1m_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 60;
		indirectHitRange = 5;
	};
	class rhs_ammo_sub_ptab1m_penetrator: rhs_ammo_cluster_penetrator
	{
		hit = 130;
		submunitionConeType[] = {"randomcenter", 5};
		caliber = 17.8667;
	};
	class rhs_ammo_ptab1m_uxo_deploy: UXO_deploy_BombCluster_base_F
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ptab1m";
		submunitionAmmo[] = {"rhs_ammo_uxo_ptab1m_1_deploy", 0.34, "rhs_ammo_uxo_ptab1m_2_deploy", 0.33, "rhs_ammo_uxo_ptab1m_3_deploy", 0.33};
	};
	class rhs_ammo_uxo_ptab1m_1_deploy: ShotDeployBase
	{
		model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab1m_1";
		submunitionAmmo = "rhs_ammo_uxo_ptab1m_1";
	};
	class rhs_ammo_uxo_ptab1m_1: APERSMine_Range_Ammo
	{
		hit = 60;
		indirectHit = 8;
		indirectHitRange = 5;
		icon = "iconExplosiveUXO";
		model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab1m_1";
		mineModelDisabled = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab1m_3";
		defaultMagazine = "";
		mineTrigger = "UXOTrigger1";
		mineCanBeReactivated = 0;
		mineFloating = 1e+007;
	};
	class rhs_ammo_uxo_ptab1m_2_deploy: ShotDeployBase
	{
		model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab1m_2";
		submunitionAmmo = "rhs_ammo_uxo_ptab1m_2";
	};
	class rhs_ammo_uxo_ptab1m_2: rhs_ammo_uxo_ptab1m_1
	{
		model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab1m_2";
		mineTrigger = "UXOTrigger2";
	};
	class rhs_ammo_uxo_ptab1m_3_deploy: ShotDeployBase
	{
		model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab1m_3";
		submunitionAmmo = "rhs_ammo_uxo_ptab1m_3";
	};
	class rhs_ammo_uxo_ptab1m_3: rhs_ammo_uxo_ptab1m_1
	{
		model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab1m_3";
		mineTrigger = "UXOTrigger3";
	};
	class rhs_ammo_kmgu2_ao25: rhs_ammo_rbk250_ao1
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ao25_x12_fly";
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_ao25_x12";
		submunitionAmmo[] = {"rhs_ammo_sub_ao25", 1};
		submunitionConeType[] = {"poissondisccenter", 12};
		triggerTime = 2.5;
		submunitionConeAngle = 14;
		triggerSpeedCoef[] = {0.8, 1.1};
	};
	class rhs_ammo_kmgu2_ptab1m: rhs_ammo_kmgu2_ao25
	{
		submunitionConeAngle = 8;
		submunitionAmmo[] = {"rhs_ammo_sub_ptab1m", 0.94, "rhs_ammo_ptab1m_uxo_deploy", 0.06};
		submunitionConeType[] = {"random", 12};
	};
	class rhs_ammo_kmgu2_pfm1: rhs_ammo_kmgu2_ao25
	{
		submunitionAmmo[] = {"rhs_ammo_pfm1_deploy", 1};
		submunitionConeType[] = {"random", 40};
	};
	class rhs_ammo_kmgu2_ptm1: rhs_ammo_kmgu2_ao25
	{
		submunitionAmmo[] = {"rhs_ammo_ptm1_deploy", 1};
		submunitionConeType[] = {"random", 12};
	};
	class rhs_ammo_pfm1_deploy: ShotDeployBase
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_pfm1";
		submunitionAmmo = "rhs_ammo_pfm1";
	};
	class rhs_ammo_ptm1_deploy: ShotDeployBase
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ptm1";
		submunitionAmmo = "rhs_ammo_ptm1";
	};
	class rhs_ammo_ptm3_deploy: ShotDeployBase
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ptm1";
		submunitionAmmo = "rhs_ammo_ptm3";
	};
	class rhs_ammo_pfm1: APERSMine_Range_Ammo
	{
		hit = 9;
		indirectHit = 8;
		indirectHitRange = 2;
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_pfm1_d";
		mineModelDisabled = "\rhsafrf\addons\rhs_airweapons\rhs_m_pfm1_d";
		defaultMagazine = "rhs_mag_mine_pfm1";
		cost = 200;
		mineInconspicuousness = 60;
		mineTrigger = "RangeTriggerShort";
		mineFloating = 1e+007;
	};
	class rhs_ammo_ptm1: ATMine_Range_Ammo
	{
		hit = 2000;
		indirectHit = 1250;
		indirectHitRange = 1;
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ptm1_d";
		mineModelDisabled = "\rhsafrf\addons\rhs_airweapons\rhs_m_ptm1_d";
		defaultMagazine = "rhs_mag_mine_ptm1";
		mineTrigger = "rhs_tm62Trigger";
		mineFloating = 1e+007;
	};
	class rhs_ammo_ptm3: rhs_ammo_ptm1
	{
		hit = 3000;
		indirectHit = 1250;
		indirectHitRange = 1;
	};
	class rhs_ammo_ptb1150: rhs_ammo_fab250
	{
		model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ptb1150";
		proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_ptb1150";
		sideAirFriction = -1;
		hit = 50;
		indirectHit = 10;
		weaponType = "special";
		explosive = 0;
	};
	class rhs_ammo_ptb1500: MissileBase
	{
		simulation = "shotMissile";
		maverickWeaponIndexOffset = 10;
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		thrustTime = 0;
		thrust = 0;
		maxspeed = 0;
		timetolive = 0;
		maneuvrability = 0;
		model = "\A3\Weapons_F\empty.p3d";
		proxyShape = "\A3\Weapons_F\empty.p3d";
		airlock = 0;
		laserLock = 0;
		irLock = 0;
		initTime = 0;
		minRange = 0;
		minRangeProbab = 0;
		midRange = 0;
		midRangeProbab = 0;
		maxRange = 0;
		maxRangeProbab = 0;
		sideAirFriction = 0;
	};
	class rhs_ammo_Sidewinder_AA: Missile_AA_04_F
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_08_fly_F";
		proxyShape = "\A3\Weapons_F_Jets\Ammo\Missile_AA_08_F";
		hit = 150;
		indirectHit = 90;
		indirectHitRange = 14;
		proximityExplosionDistance = 19;
		maneuvrability = 30;
		simulationStep = 0.001;
		airLock = 2;
		irLock = 1;
		cost = 1500;
		maxSpeed = 1029;
		timeToLive = 35;
		sideAirFriction = 0.2;
		trackOversteer = 0.95;
		trackLead = 0.75;
		initTime = 0;
		thrustTime = 3;
		thrust = 390;
		fuseDistance = 300;
		explosionAngle = 60;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissile = "missile3";
		whistleDist = 20;
		cmImmunity = 0.96;
		missileLockMaxDistance = 8000;
		missileLockMinDistance = 300;
		missileLockMaxSpeed = 555;
		missileLockCone = 180;
		missileKeepLockedCone = 180;
		weaponLockSystem = "2 + 16";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						typeRecognitionDistance = -1;
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
						groundNoiseDistanceCoef = 0.03;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						maxFogSeeThrough = 0.8;
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 555;
						minTrackableATL = 20;
						maxTrackableATL = 1e+010;
					};
				};
			};
		};
	};
	class rhs_ammo_aim9: rhs_ammo_Sidewinder_AA
	{
	};
	class rhs_ammo_aim9m: rhs_ammo_Sidewinder_AA
	{
		model = "\a3\Weapons_F_EPC\Ammo\Missile_AA_04_fly_F.p3d";
		proxyShape = "\a3\Weapons_F_EPC\Ammo\Missile_AA_04_F.p3d";
		maneuvrability = 30;
		cmImmunity = 0.9;
		missileLockCone = 90;
		missileKeepLockedCone = 90;
	};
	class rhs_ammo_aim9m_ah64: rhs_ammo_aim9m
	{
		weaponType = "bomb";
	};
	class rhs_ammo_aim9x: rhs_ammo_Sidewinder_AA
	{
	};
	class rhs_ammo_aim9x_ah64: rhs_ammo_aim9x
	{
		weaponType = "bomb";
	};
	class rhs_ammo_aim120: rhs_ammo_Sidewinder_AA
	{
		proxyShape = "\A3\Weapons_F\Ammo\Missile_AA_02_F.p3d";
		model = "\A3\Weapons_F\Ammo\Missile_AA_02_fly_F.p3d";
		cmimmunity = 0.92;
		timeToLive = 120;
		inittime = 0.5;
		cost = 1000;
		hit = 230;
		indirecthit = 140;
		indirecthitrange = 16;
		proximityExplosionDistance = 25;
		maverickWeaponIndexOffset = 0;
		airFriction = 0.014;
		sideAirFriction = 0.23;
		trackOversteer = 0.9;
		trackLead = 1;
		thrustTime = 5;
		thrust = 260;
		maxSpeed = 1300;
		missileLockMaxDistance = 22000;
		missileLockMinDistance = 2000;
		missileLockMaxSpeed = 833;
		missileLockCone = 60;
		missileKeepLockedCone = 90;
		weaponLockSystem = "8 + 16";
		autoSeekTarget = 1;
		lockSeekRadius = 1000;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 30000;
							maxRange = 30000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 30000;
							maxRange = 30000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = -1;
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
						groundNoiseDistanceCoef = 0.1;
						maxGroundNoiseDistance = 200;
						minSpeedThreshold = 12;
						maxSpeedThreshold = 42;
						maxFogSeeThrough = 1;
						minTrackableSpeed = 12;
						maxTrackableSpeed = 833;
						minTrackableATL = 70;
						maxTrackableATL = 1e+010;
					};
				};
			};
		};
	};
	class rhs_ammo_aim120d: rhs_ammo_aim120
	{
		proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AIM120D";
		model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AIM120D_fly.p3d";
		missileLockMaxDistance = 28000;
		missileLockMinDistance = 2000;
		missileLockMaxSpeed = 3000;
		missileLockCone = 60;
		missileKeepLockedCone = 90;
		thrustTime = 9;
		thrust = 260;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 30000;
							maxRange = 30000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 30000;
							maxRange = 30000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = -1;
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
						groundNoiseDistanceCoef = 0.1;
						maxGroundNoiseDistance = 200;
						minSpeedThreshold = 12;
						maxSpeedThreshold = 42;
						maxFogSeeThrough = 1;
						minTrackableSpeed = 12;
						maxTrackableSpeed = 833;
						minTrackableATL = 70;
						maxTrackableATL = 1e+010;
					};
				};
			};
		};
	};
	class rhs_ammo_Hellfire_AT: Missile_AGM_02_F
	{
		submunitionAmmo = "rhs_ammo_Hellfire_AT_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AGM114K_fly";
		proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AGM114K";
		cost = 300;
		hit = 400;
		indirectHit = 20;
		indirectHitRange = 2;
		irLock = 1;
		laserLock = 0;
		airLock = 0;
		maxSpeed = 425;
		simulationStep = 0.005;
		airFriction = 0.03;
		sideAirFriction = 0.15;
		initTime = 0;
		thrustTime = 3;
		thrust = 199;
		fuseDistance = 5;
		manualControl = 0;
		maxControlRange = 8000;
		trackOversteer = 1;
		trackLead = 0.2;
		maneuvrability = 21;
		timeToLive = 70;
		whistleDist = 4;
		effectsMissileInit = "MissileDAR1";
		effectsMissile = "missile2";
		missileLockMaxDistance = 8000;
		missileLockMinDistance = 200;
		missileLockMaxSpeed = 56;
		missileLockCone = 90;
		missileKeepLockedCone = 90;
		lockSeekRadius = 2000;
		autoSeekTarget = 1;
		weaponLockSystem = "2 + 16";
		maneuvDependsOnSpeedCoef = 0.018;
		flightProfiles[] = {"TopDown", "LoalDistance", "Cruise"};
		class Direct
		{
		};
		class TopDown
		{
			ascendAngle = 39;
			ascendHeight = 360;
			minDistance = 600;
			descendDistance = 3000;
		};
		class LoalDistance
		{
			lockSeekDistanceFromParent = 1000;
		};
		class Cruise
		{
			preferredFlightAltitude = 500;
			lockDistanceToTarget = 500;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class RadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = -1;
						angleRangeHorizontal = 90;
						angleRangeVertical = 90;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = -1;
						maxFogSeeThrough = 0.8;
						minTrackableSpeed = 0;
						maxTrackableSpeed = 56;
						minTrackableATL = -1;
						maxTrackableATL = 1000;
					};
				};
			};
		};
	};
	class rhs_ammo_Hellfire_AT_penetrator: rhsusf_ammo_basic_penetrator
	{
		warheadName = "TandemHEAT";
		hit = 310;
		caliber = 66.6667;
	};
	class RHS_ammo_AGM_114L: rhs_ammo_Hellfire_AT
	{
		activeSensorAlwaysOn = 0;
		missileLockCone = 90;
		missileKeepLockedCone = 90;
		flightProfiles[] = {"TopDown", "LoalDistance"};
		class TopDown
		{
			ascendAngle = 26.5;
			ascendHeight = 850;
			minDistance = 1000;
			descendDistance = 1200;
		};
	};
	class RHS_ammo_AGM_114K: rhs_ammo_Hellfire_AT
	{
		model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AGM114K_fly";
		proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AGM114K";
		indirectHit = 35;
		indirectHitRange = 8;
		cost = 250;
		airLock = 0;
		irLock = 1;
		laserLock = 1;
		muzzleEffect = "";
		effectsMissileInit = "MissileDAR1";
		effectsMissile = "missile1";
		whistleDist = 4;
		aiAmmoUsageFlags = "64+128 + 512";
		missileLockMaxDistance = 8000;
		missileLockMinDistance = 400;
		missileLockMaxSpeed = 56;
		missileLockCone = 40;
		missileKeepLockedCone = 40;
		missileManualControlCone = 40;
		weaponLockSystem = "4 + 16";
		lockSeekRadius = 1000;
		weaponType = "missileAA";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 7000;
							maxRange = 7000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 7000;
							maxRange = 7000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 30;
						angleRangeVertical = 50;
						typeRecognitionDistance = -1;
						maxGroundNoiseDistance = 0;
						maxFogSeeThrough = 0.3;
						allowsMarking = 1;
					};
				};
			};
		};
	};
	class RHS_ammo_AGM_114M: RHS_ammo_AGM_114K
	{
		submunitionAmmo = "";
		indirectHit = 140;
		indirectHitRange = 11;
		dangerRadiusHit = 1250;
		suppressionRadiusHit = 120;
		class CamShakeExplode
		{
			power = "(122*0.2)";
			duration = "((round (122^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((10 + 122^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 122;
			duration = "((round (122^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(122^0.25)";
			duration = "((round (122^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((122^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class RHS_ammo_AGM_114N: RHS_ammo_AGM_114M
	{
		AIAmmoUsageFlags = "64+128";
		cost = 100;
		hit = 210;
		indirectHit = 85;
		indirectHitRange = 20;
		explosive = 1;
		allowAgainstInfantry = 1;
		class CamShakeExplode
		{
			power = "(110*0.2)";
			duration = "((round (110^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 110^0.5)*8)";
		};
		explosionEffects = "RHS_FAE_Explosion";
	};
	class RHS_Ammo_DAGR: MissileBase
	{
		maverickWeaponIndexOffset = 80;
		model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_DAGR_fly";
		proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_DAGR";
		hit = 300;
		indirectHit = 50;
		indirectHitRange = 6;
		cost = 100;
		maxSpeed = 720;
		irLock = 0;
		airLock = 0;
		laserLock = 1;
		maxControlRange = 8000;
		trackOversteer = 1;
		trackLead = 1;
		maneuvrability = 14;
		timeToLive = 20;
		simulationStep = 0.01;
		airFriction = 0.1;
		sideAirFriction = 0.3;
		initTime = 0.002;
		thrustTime = 1.57;
		thrust = 825;
		fuseDistance = 50;
		whistleDist = 4;
		muzzleEffect = "";
		effectsMissileInit = "MissileDAR1";
		effectsMissile = "missile1";
		explosionEffects = "ATMissileExplosion";
		weaponLockSystem = 4;
		manualControl = 1;
		aiAmmoUsageFlags = "64 + 128+512";
		autoSeekTarget = 1;
		lockSeekRadius = 1000;
		missileLockMaxDistance = 6000;
		missileLockMinDistance = 1000;
		missileLockMaxSpeed = 56;
		missileLockCone = 25;
		missileKeepLockedCone = 25;
		flightProfiles[] = {"Direct", "LoalDistance"};
		class Direct
		{
		};
		class LoalDistance
		{
			lockSeekDistanceFromParent = 200;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 55;
						angleRangeHorizontal = 14;
						angleRangeVertical = 14;
						maxGroundNoiseDistance = 0;
						maxFogSeeThrough = 0.3;
					};
				};
			};
		};
		class CamShakeExplode
		{
			power = 24.4;
			duration = 2.2;
			frequency = 20;
			distance = 208.363;
		};
		class CamShakeHit
		{
			power = 122;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.32346;
			duration = 2.2;
			frequency = 20;
			distance = 88.3629;
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class rhs_ammo_agm65: rhs_ammo_Hellfire_AT
	{
		submunitionAmmo = "rhs_ammo_agm65_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		model = "\rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_m_agm65_fly.p3d";
		proxyShape = "\rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_m_agm65.p3d";
		cost = 1000;
		hit = 400;
		indirectHit = 250;
		indirectHitRange = 10.5;
		whistleDist = 8;
		simulationStep = 0.002;
		airLock = 0;
		irLock = 0;
		laserLock = 0;
		cmimmunity = 0.8;
		manualControl = 1;
		maxControlRange = 11000;
		maneuvrability = 14;
		trackOversteer = 1;
		flightProfiles[] = {"Direct"};
		maxSpeed = 320;
		timeToLive = 45;
		airFriction = 0.07;
		sideAirFriction = 0.08;
		trackLead = 1;
		initTime = 0.15;
		thrustTime = 2;
		thrust = 246;
		fuseDistance = 500;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissileInit = "PylonBackEffects";
		muzzleEffect = "";
		class Hiteffects
		{
			hitWater = "ImpactEffectsSmall";
		};
		weaponLockSystem = "0 + 16";
		maverickWeaponIndexOffset = 50;
		missileLockCone = 60;
		missileLockMaxDistance = 4000;
		missileLockMinDistance = 100;
	};
	class rhs_ammo_agm65_penetrator: rhsusf_ammo_basic_penetrator
	{
		hit = 320;
		caliber = 73.3333;
	};
	class rhs_ammo_agm65e: rhs_ammo_agm65
	{
		manualControl = 0;
		laserLock = 1;
		weaponLockSystem = "4 + 16";
		missileLockMaxDistance = 20000;
		model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65e_fly.p3d";
		proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65e.p3d";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 10000;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 10000;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
						typeRecognitionDistance = -1;
						maxFogSeeThrough = 0.3;
					};
				};
			};
		};
	};
	class rhs_ammo_agm65b: rhs_ammo_agm65
	{
		weaponLockSystem = "1 + 16";
		missileLockMaxDistance = 4000;
		model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65b_fly.p3d";
		proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65b.p3d";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 1000;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 1000;
							maxRange = 4000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						minTrackableSpeed = 0;
						maxTrackableSpeed = 15;
						minTrackableATL = -1;
						maxTrackableATL = 1000;
						nightRangeCoef = 0;
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
					};
				};
			};
		};
	};
	class rhs_ammo_agm65h: rhs_ammo_agm65
	{
		weaponLockSystem = "1 + 16";
		missileLockMaxDistance = 10000;
		model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65h_fly.p3d";
		proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65h.p3d";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 2000;
							maxRange = 20000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 2000;
							maxRange = 20000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						minTrackableSpeed = 0;
						maxTrackableSpeed = 30;
						minTrackableATL = -1;
						maxTrackableATL = 1000;
						nightRangeCoef = 0.2;
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
					};
				};
			};
		};
	};
	class rhs_ammo_agm65d: rhs_ammo_agm65
	{
		manualControl = 0;
		missileLockMaxDistance = 11000;
		irLock = 1;
		weaponLockSystem = "2 + 16";
		model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65d_fly.p3d";
		proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65d.p3d";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 5000;
							maxRange = 20000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 5000;
							maxRange = 20000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						minTrackableSpeed = 0;
						maxTrackableSpeed = 30;
						minTrackableATL = -1;
						maxTrackableATL = 1000;
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
					};
				};
			};
		};
	};
	class rhs_ammo_agm65f: rhs_ammo_agm65d
	{
		model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65f_fly.p3d";
		proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65f.p3d";
		missileLockMaxDistance = 16000;
		class Components: Components
		{
			class SensorsManagerComponent: SensorsManagerComponent
			{
				class Components: Components
				{
					class IRSensorComponent: IRSensorComponent
					{
						class AirTarget: AirTarget
						{
							minRange = 16000;
							maxRange = 24000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget: GroundTarget
						{
						};
						maxTrackableSpeed = 15;
					};
				};
			};
		};
	};
	class rhs_ammo_Hydra_HE_Heli: Rocket_04_HE_F
	{
		maverickweapon = 0;
		hit = 190;
		indirectHit = 50;
		indirectHitRange = 10;
		cost = 75;
		maxSpeed = 740;
		thrustTime = 1.1;
		thrust = 800;
		sideAirFriction = 0.004;
		timeToLive = 60;
		fuseDistance = 40;
		whistleDist = 24;
	};
	class rhs_ammo_FFAR_M151: rhs_ammo_Hydra_HE_Heli
	{
		maverickweapon = 1;
		maverickWeaponIndexOffset = 0;
		model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M151_FFAR_fly";
		proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M151";
	};
	class rhs_ammo_Hydra_M151: rhs_ammo_Hydra_HE_Heli
	{
		maverickweapon = 1;
		maverickWeaponIndexOffset = 0;
		model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M151_fly";
		proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M151";
	};
	class rhs_ammo_Hydra_M229: rhs_ammo_Hydra_M151
	{
		model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M229_fly";
		proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M229";
		indirecthitrange = 15;
	};
	class rhs_ammo_Hydra_M257: rhs_ammo_Hydra_M151
	{
		model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M257_fly";
		proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M257";
		explosive = 0;
		hit = 10;
		indirectHit = 8;
		indirecthitrange = 1;
		triggerTime = 8;
		airFriction = 0.225;
		submunitionAmmo[] = {"rhs_ammo_flare_M257", 1};
		submunitionConeType[] = {"random", 1};
		submunitionConeAngle = 5;
		submunitionParentSpeedCoef = 0.1;
	};
	class rhs_ammo_flare_M257: F_40mm_White
	{
		triggerTime = 2;
		model = "rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_r_m257_drogue";
		brightness = 10000;
		lightColor[] = {100, 100, 100, 100};
		timeToLive = 120;
		intensity = 100000;
	};
	class rhs_ammo_gbu12: Bomb_04_F
	{
		model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_b_gbu12_fly";
		proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_b_gbu12";
		initTime = 0.2;
	};
	class rhs_ammo_gbu32: Bomb_04_F
	{
		model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_b_gbu32";
		proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_b_gbu32";
	};
	class rhs_ammo_mk82: Bo_Mk82
	{
		hit = 5000;
		indirectHit = 1150;
		cost = 50;
		sideAirFriction = 0.25;
		aiAmmoUsageFlags = "64 + 128 + 512";
		maverickWeaponIndexOffset = 0;
	};
	class rhs_ammo_cbu_base: rhs_ammo_mk82
	{
		cost = 70;
		laserLock = 0;
		autoSeekTarget = 0;
		weaponLockSystem = 1;
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_F";
		simulation = "shotMissile";
		triggerSpeedCoef[] = {0.8, 1};
		submunitionConeAngle = 20;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
				};
			};
		};
	};
	class rhs_ammo_cbu100: rhs_ammo_cbu_base
	{
		allowAgainstInfantry = 0;
		aiAmmoUsageFlags = "128 + 512";
		triggerTime = 4;
		submunitionAmmo[] = {"rhs_ammo_sub_mk118", 1};
		submunitionConeType[] = {"randomcenter", 123};
	};
	class rhs_ammo_sub_mk118: Mo_cluster_AP
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_sub_F";
		submunitionAmmo = "rhs_ammo_sub_mk118_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 50;
		indirectHitRange = 4;
		effectFly = "";
	};
	class rhs_ammo_sub_mk118_penetrator: rhs_ammo_cluster_penetrator
	{
		hit = 130;
		caliber = 8;
	};
	class rhs_ammo_cbu87: rhs_ammo_cbu_base
	{
		model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_b_cbu87_fly";
		proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_b_cbu87";
		initTime = 0.2;
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128 + 512";
		triggerDistance = 250;
		submunitionAmmo[] = {"rhs_ammo_sub_blu97", 0.95, "rhs_ammo_blu97_deploy", 0.05};
		submunitionConeType[] = {"randomcenter", 101};
	};
	class rhs_ammo_cbu89: rhs_ammo_cbu87
	{
		model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_b_cbu89_fly";
		proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_b_cbu89";
		submunitionAmmo[] = {"rhs_ammo_blu91_deploy", 0.76, "rhs_ammo_blu92_deploy", 0.24};
		submunitionConeType[] = {"randomcenter", 94};
	};
	class rhs_ammo_blu91_deploy: ShotDeployBase
	{
		model = "\rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU91_fly";
		submunitionAmmo = "rhs_ammo_blu91";
	};
	class rhs_ammo_blu92_deploy: ShotDeployBase
	{
		model = "\rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU92_fly";
		submunitionAmmo = "rhs_ammo_blu92";
	};
	class rhs_ammo_blu91: ATMine_Range_Ammo
	{
		hit = 2000;
		indirectHit = 1250;
		indirectHitRange = 1;
		model = "\rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU91_d";
		mineModelDisabled = "\rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU91_d";
		defaultMagazine = "";
		mineTrigger = "TankTriggerMagnetic";
		mineCanBeReactivated = 0;
		mineFloating = 1e+007;
	};
	class rhs_ammo_blu92: APERSMine_Range_Ammo
	{
		hit = 9;
		indirectHit = 8;
		indirectHitRange = 2;
		model = "\rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU92_d";
		mineModelDisabled = "\rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU92_d";
		defaultMagazine = "";
		mineTrigger = "RangeTriggerShort";
		mineCanBeReactivated = 0;
		mineFloating = 1e+007;
	};
	class rhs_ammo_sub_blu97: Mo_cluster_AP
	{
		model = "\rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU97_fly";
		submunitionAmmo = "rhs_ammo_sub_blu97_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 8;
		indirectHitRange = 10;
		effectFly = "";
	};
	class rhs_ammo_sub_blu97_penetrator: rhs_ammo_cluster_penetrator
	{
		hit = 130;
		caliber = 13.3333;
	};
	class rhs_ammo_blu97_deploy: ShotDeployBase
	{
		model = "\rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU97_fly";
		submunitionAmmo = "rhs_ammo_uxo_blu97";
	};
	class rhs_ammo_uxo_blu97: APERSMine_Range_Ammo
	{
		hit = 9;
		indirectHit = 8;
		indirectHitRange = 2;
		icon = "iconExplosiveUXO";
		model = "\rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU97_d";
		mineModelDisabled = "\rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU97_d";
		defaultMagazine = "";
		mineTrigger = "RangeTriggerShort";
		mineCanBeReactivated = 0;
		mineFloating = 1e+007;
	};
	class rhs_ammo_ANALQ131: MissileBase
	{
		simulation = "shotMissile";
		model = "\A3\Weapons_F\empty.p3d";
		proxyShape = "\A3\Weapons_F\empty.p3d";
		maverickWeaponIndexOffset = 10;
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		thrustTime = 0;
		thrust = 0;
		maxspeed = 0;
		timetolive = 0;
		maneuvrability = 0;
		airlock = 0;
		laserLock = 0;
		irLock = 0;
		initTime = 0;
		minRange = 0;
		minRangeProbab = 0;
		midRange = 0;
		midRangeProbab = 0;
		maxRange = 0;
		maxRangeProbab = 0;
		sideAirFriction = 0;
	};
	class rhsusf_ammo_M61A2: B_20mm_Tracer_Red
	{
		hit = 50;
		indirectHit = 3;
		indirectHitRange = 0.5;
		visibleFire = 25;
		audibleFire = 28;
		visibleFireTime = 4;
		cost = 80;
		explosive = 0;
		airlock = 2;
		irLock = 1;
		aiAmmoUsageFlags = 256;
	};
	class RHS_9M79_1_F: rhs_ammo_kh29_base
	{
		hit = 1500;
		indirectHit = 1000;
		indirectHitRange = 50;
		airFriction = 0;
		sideAirFriction = 0.08;
		model = "\rhsafrf\addons\rhs_ss21\ss21.p3d";
		initTime = 0;
		timeToLive = 300;
		cost = 400;
		maxSpeed = 700;
		thrustTime = 25;
		thrust = 80;
		fuseDistance = 5;
		CraterEffects = "RHS_HeavyBombCrater";
		explosionEffects = "RHS_HeavyBombExplosion";
		effectsMissile = "missile5";
		whistleOnFire = 2;
		whistleDist = 60;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2", 2.5, 1.5, 10800};
		RHS_WarheadType = "REPLACE";
		RHS_FuseRange = 25;
		SoundSetExplosion[] = {"BombsHeavy_Exp_SoundSet", "BombsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class RHS_9N123F: RHS_9M79_1_F
	{
		model = "\rhsafrf\addons\rhs_ss21\ss21.p3d";
		timeToLive = 0.01;
		thrustTime = 0;
	};
	class RHS_9M79B: RHS_9M79_1_F
	{
		RHS_Yield = 10000;
		RHS_WarheadType = "NUKE";
		RHS_FuseRange = 100;
	};
	class RHS_9M79_1_K: RHS_9M79_1_F
	{
		RHS_WarheadType = "CLUSTER";
		RHS_FuseRange = 300;
	};
	class RHS_9N123K: RHS_9N123F
	{
		hit = 140;
		indirectHit = 40;
	};
	class RHS_9N24: rhs_ammo_m21OF_HE
	{
		hit = 280;
		indirectHit = 52;
		indirectHitRange = 22;
		model = "\rhsafrf\addons\rhs_ss21\ammo\9n24.p3d";
		timeToLive = 60;
	};
	class RHS_ammo_BGM109: rhs_ammo_agm65
	{
		hit = 1500;
		indirectHit = 1000;
		indirectHitRange = 50;
		airFriction = 0;
		sideAirFriction = 0.08;
		model = "\rhsusf\addons\rhsusf_a2port_air2\CruiseMissile\cruisemissile3";
		initTime = 0;
		timeToLive = 300;
		cost = 400;
		maxSpeed = 700;
		thrustTime = 25;
		thrust = 80;
		fuseDistance = 5;
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "VehicleExplosionEffectsBig";
		effectsMissile = "missile5";
		whistleOnFire = 2;
		whistleDist = 60;
	};
	class rhs_ammo_zt3: rhs_ammo_atgmBase_base
	{
		submunitionAmmo = "rhs_ammo_zt3_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		cost = 50;
		hit = 270;
		indirecthit = 26;
		indirecthitrange = 3.6;
		lockType = 0;
		manualcontrol = 0;
		maxcontrolrange = 5000;
		maxspeed = 250;
		maneuvrability = 18;
		tracklead = 1;
		trackoversteer = 1;
		sideairfriction = 0.03;
		initTime = 0.3;
		thrust = 172;
		thrusttime = 10;
		timetolive = 30;
		whistledist = 3;
		model = "\rhsgref\addons\rhsgref_airweapons\zt3\rhs_m_zt3_fly";
		proxyShape = "\rhsgref\addons\rhsgref_airweapons\zt3\rhs_m_zt3";
		AIAmmoUsageFlags = "64+128+512";
		missileManualControlCone = 45;
		rhs_saclos = 1;
		rhs_ballisticMode = 0;
		rhs_guideMode = "BEAMRIDER";
		class EventHandlers
		{
			class RHS_Guidance
			{
				fired = "_this call RHS_fnc_saclosGuide";
			};
		};
	};
	class rhs_ammo_zt3_penetrator: rhs_ammo_9m112_penetrator
	{
		warheadName = "TandemHEAT";
		hit = 290;
		caliber = 56;
	};
	class rhs_ammo_zt6: Missile_AGM_02_F
	{
		submunitionAmmo = "rhs_ammo_zt6_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		maverickWeaponIndexOffset = 0;
		model = "\rhsgref\addons\rhsgref_airweapons\zt6\rhs_m_zt6_fly";
		proxyShape = "\rhsgref\addons\rhsgref_airweapons\zt6\rhs_m_zt6";
		hit = 400;
		indirectHit = 35;
		indirectHitRange = 8;
		cost = 100;
		maxSpeed = 530;
		airLock = 0;
		irLock = 0;
		laserLock = 1;
		manualControl = 1;
		maxControlRange = 10000;
		trackOversteer = 1;
		trackLead = 1;
		maneuvrability = 18;
		timeToLive = 30;
		simulationStep = 0.01;
		airFriction = 0.1;
		sideAirFriction = 0.3;
		initTime = 0;
		thrustTime = 4.1;
		thrust = 300;
		class Direct
		{
		};
		flightProfiles[] = {"Direct"};
		fuseDistance = 50;
		whistleDist = 4;
		muzzleEffect = "";
		effectsMissileInit = "MissileDAR1";
		effectsMissile = "missile1";
		aiAmmoUsageFlags = "64+128 + 512";
		lockSeekRadius = 120;
		missileLockMaxDistance = 10000;
		missileLockMinDistance = 200;
		missileLockMaxSpeed = 56;
		missileLockCone = 50;
		missileKeepLockedCone = 50;
		missileManualControlCone = 45;
		weaponLockSystem = "2 + 16";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 2000;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 10000;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 50;
						angleRangeVertical = 50;
						typeRecognitionDistance = -1;
						maxGroundNoiseDistance = 0;
						maxFogSeeThrough = 0.3;
					};
				};
			};
		};
	};
	class rhs_ammo_zt6_penetrator: rhsusf_ammo_basic_penetrator
	{
		hit = 310;
		caliber = 66.6667;
	};
	class rhs_ammo_l159_fuelpod_proxy: rhs_ammo_atgmBase_base
	{
	};
	class rhs_ammo_20x139mm_AP: rhs_ammo_20mm_AP
	{
		hit = 60;
		explosive = 0;
		indirectHit = 1;
		indirectHitRange = 0.3;
		typicalSpeed = 1050;
		caliber = 2.92063;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerEndTime = 1.5;
		class CamShakeHit
		{
			power = 20;
			duration = "((round (20^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(19^0.25)";
			duration = "((round (19^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((19^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class rhs_ammo_20x139mm_HE: rhs_ammo_20x139mm_AP
	{
		hit = 20;
		explosive = 0.8;
		indirectHit = 4;
		indirectHitRange = 6.9;
		typicalSpeed = 1100;
		caliber = 1.4;
		dangerRadiusBulletClose = 20;
		dangerRadiusHit = 60;
		suppressionRadiusBulletClose = 12;
		suppressionRadiusHit = 24;
		tracerEndTime = 2;
		class CamShakeExplode
		{
			power = "(19*0.2)";
			duration = "((round (19^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((2 + 19^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 19;
			duration = "((round (19^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};
	class rhs_ammo_20x139mm_mixed: SubmunitionBase
	{
		cost = 10;
		model = "\A3\Weapons_f\empty";
		submunitionAmmo[] = {"rhs_ammo_20x139mm_AP", 0.8, "rhs_ammo_20x139mm_HE", 0.2};
		weaponType = "cannon";
		simulation = "shotSubmunitions";
		triggerTime = 0.01;
	};
	class rhs_ammo_9x17: B_9x21_Ball
	{
		hit = 5.07;
		typicalSpeed = 272;
		airFriction = -0.00176715;
		caliber = 0.838;
		deflecting = 37;
		visibleFire = 2.8;
		audibleFire = 5.65;
	};
	class rhs_ammo_762x25_Ball: BulletBase
	{
		hit = 4.94578;
		indirectHit = 0;
		indirectHitRange = 0;
		suppressionRadiusBulletClose = 2;
		cartridge = "FxCartridge_9mm";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		caliber = 0.774;
		deflecting = 29;
		visibleFire = 1.5;
		audibleFire = 3;
		cost = 100;
		typicalSpeed = 390.1;
		airFriction = -0.0027667;
	};
	class rhs_ammo_8mm_mhp: BulletBase
	{
		scope = 2;
		hit = 3.43133;
		indirectHit = 0;
		indirectHitRange = 0;
		suppressionRadiusBulletClose = 2;
		cartridge = "FxCartridge_9mm";
		caliber = 0.533333;
		deflecting = 30;
		visibleFire = 5;
		audibleFire = 9;
		cost = 100;
		typicalSpeed = 290;
		airFriction = -0.0018;
	};
	class rhs_ammo_792x57_Ball: BulletBase
	{
		hit = 11.55;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_762";
		visibleFire = 22;
		audibleFire = 18;
		visibleFireTime = 3;
		cost = 1.2;
		airLock = 1;
		caliber = 0.45;
		model = "\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";
		tracerScale = 1.2;
		tracerStartTime = 0.045;
		tracerEndTime = 1.5;
		airFriction = -0.0006814;
		typicalSpeed = 838;
	};
	class rhs_ammo_75x55_Ball: BulletBase
	{
		hit = 11.55;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_762";
		visibleFire = 22;
		audibleFire = 18;
		visibleFireTime = 3;
		cost = 1.2;
		airLock = 1;
		caliber = 0.45;
		model = "\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";
		tracerScale = 1.2;
		tracerStartTime = 0.045;
		tracerEndTime = 1.5;
		airFriction = -0.0006814;
		typicalSpeed = 838;
	};
	class rhs_ammo_762x63_M2B_ball: BulletBase
	{
		hit = 13.75;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_762";
		visibleFire = 22;
		audibleFire = 18;
		visibleFireTime = 3;
		cost = 1.2;
		airLock = 1;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		caliber = 0.45;
		airFriction = -0.0006814;
		typicalSpeed = 838;
	};
	class rhs_ammo_762x63_M1T_tracer: BulletBase
	{
		hit = 13.75;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_762";
		visibleFire = 22;
		audibleFire = 18;
		visibleFireTime = 3;
		cost = 1.2;
		airLock = 1;
		caliber = 0.45;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 0.6;
		tracerStartTime = 0.045;
		tracerEndTime = 1.5;
		airFriction = -0.0006814;
		typicalSpeed = 838;
	};
	class rhs_ammo_792x33_SmE_ball: BulletBase
	{
		hit = 7.5;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_762";
		visibleFire = 22;
		audibleFire = 18;
		visibleFireTime = 3;
		cost = 1.2;
		airLock = 1;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		caliber = 0.44;
		tracerScale = 1.2;
		tracerStartTime = 0.045;
		tracerEndTime = 1.5;
		airFriction = -0.00101;
		typicalSpeed = 685;
	};
	class rhs_ammo_f1: GrenadeHand
	{
		model = "\rhsgref\addons\rhsgref_weapons\grenades\throw\frag_f1";
		explosionTime = 4;
	};
	class rhsgref_ammo_rkg3em: GrenadeHand
	{
		model = "\rhsgref\addons\rhsgref_weapons\rkg_3em\rkg_3em.p3d";
		rhs_submunition = "rhsgref_ammo_rkg3em_fly";
		rhs_submunition_uxo = "rhsgref_ammo_rkg3em_uxo";
		rhs_fuseTime[] = {0.3, 0.35, 0.4};
		simulationStep = 0.001;
		explosionTime = -1;
		timeToLive = 5;
		explosionEffects = "";
		CraterEffects = "";
		SoundSetExplosion[] = {};
		multiSoundHit[] = {};
		hit = 0.1;
		indirectHit = 0;
	};
	class rhsgref_ammo_rkg3em_uxo: SmokeShell
	{
		model = "\rhsgref\addons\rhsgref_weapons\rkg_3em\rkg_3em.p3d";
		smokeColor[] = {0, 0, 0, 0};
		explosionTime = 0.001;
		grenadeFireSound[] = {};
		grenadeBurningSound[] = {};
	};
	class rhsgref_ammo_rkg3em_fly: GrenadeHand
	{
		rhs_submunition = "rhsgref_ammo_rkg3em_explosion";
		hit = 180;
		indirectHit = 12;
		indirectHitRange = 3;
		model = "\rhsgref\addons\rhsgref_weapons\rkg_3em\rkg_3em_thrown.p3d";
		explosionTime = -1;
		SoundSetExplosion[] = {};
	};
	class rhsgref_ammo_rkg3em_explosion: BulletBase
	{
		hit = 140;
		indirectHit = 8;
		indirectHitRange = 3;
		simulationStep = 1e-005;
		simulation = "shotShell";
		deflecting = 0;
		explosive = 1;
		timeToLive = 1;
		explosionTime = 0;
		explosionSoundEffect = "DefaultExplosion";
		CraterEffects = "GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
		submunitionAmmo = "rhsgref_ammo_rkg3em_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhsgref_ammo_rkg3em_penetrator: rhs_ammo_3bk12_penetrator
	{
		caliber = 29.3333;
	};
	class rhs_grenade_m1939e_ammo: GrenadeHand
	{
		model = "\rhsgref\addons\rhsgref_weapons2\grenades\M39\thrown\m39early_proj";
		defaultMagazine = "rhs_grenade_m1939e_mag";
		explosionTime = 4.5;
	};
	class rhs_grenade_m1939l_ammo: rhs_grenade_m1939e_ammo
	{
		model = "\rhsgref\addons\rhsgref_weapons2\grenades\M39\thrown\m39late_proj";
		defaultMagazine = "rhs_grenade_m1939l_mag";
	};
	class rhs_grenade_m1939e_f_ammo: rhs_grenade_m1939e_ammo
	{
		model = "\rhsgref\addons\rhsgref_weapons2\grenades\M39\thrown\m39early_f_proj";
		defaultMagazine = "rhs_grenade_m1939e_f_mag";
	};
	class rhs_grenade_m1939l_f_ammo: rhs_grenade_m1939e_ammo
	{
		model = "\rhsgref\addons\rhsgref_weapons2\grenades\M39\thrown\m39late_f_proj";
		defaultMagazine = "rhs_grenade_m1939l_f_mag";
	};
	class rhs_grenade_nbhgr39_ammo: SmokeShell
	{
		model = "\rhsgref\addons\rhsgref_weapons2\grenades\NM39\thrown\nm39_early_proj";
		explosionTime = 7;
	};
	class rhs_grenade_nbhgr39B_ammo: rhs_grenade_nbhgr39_ammo
	{
		model = "\rhsgref\addons\rhsgref_weapons2\grenades\NM39\thrown\nm39_late_proj";
	};
	class rhs_grenade_sthgr24_ammo: GrenadeHand
	{
		model = "\rhsgref\addons\rhsgref_weapons2\grenades\M24\thrown\m24late_proj";
		explosionTime = 5;
	};
	class rhs_grenade_sthgr24_heerfrag_ammo: rhs_grenade_sthgr24_ammo
	{
		model = "\rhsgref\addons\rhsgref_weapons2\grenades\M24\thrown\m24late_heer_proj";
	};
	class rhs_grenade_sthgr24_ssfrag_ammo: rhs_grenade_sthgr24_ammo
	{
		model = "\rhsgref\addons\rhsgref_weapons2\grenades\M24\thrown\m24late_ss_proj";
	};
	class rhs_grenade_sthgr24_x7bundle_ammo: GrenadeHand
	{
		model = "\rhsgref\addons\rhsgref_weapons2\grenades\M24\thrown\m24late_bundle_proj";
		explosionTime = 5;
		hit = 56;
		indirectHit = 56;
		IndirecthitRange = 7;
	};
	class rhs_grenade_sthgr43_ammo: rhs_grenade_sthgr24_ammo
	{
		model = "\rhsgref\addons\rhsgref_weapons2\grenades\M43\thrown\m43_proj";
		explosionTime = 4.5;
	};
	class rhs_grenade_sthgr43_heerfrag_ammo: rhs_grenade_sthgr24_ammo
	{
		model = "\rhsgref\addons\rhsgref_weapons2\grenades\M43\thrown\m43_heer_proj";
		explosionTime = 4.5;
	};
	class rhs_grenade_sthgr43_ssfrag_ammo: rhs_grenade_sthgr24_ammo
	{
		model = "\rhsgref\addons\rhsgref_weapons2\grenades\M43\thrown\m43_ss_proj";
		explosionTime = 4.5;
	};
	class rhs_grenade_mkii_ammo: GrenadeHand
	{
		model = "\rhsgref\addons\rhsgref_weapons2\grenades\US\thrown\mk_ii_proj";
		explosionTime = 4.5;
	};
	class rhs_grenade_mkiiia1_ammo: GrenadeHand
	{
		model = "\rhsgref\addons\rhsgref_weapons2\grenades\US\thrown\mk_iii_proj";
		explosionTime = 4.5;
	};
	class rhs_grenade_anm8_ammo: SmokeShell
	{
		smokeColor[] = {1, 1, 1, 1};
		model = "\rhsgref\addons\rhsgref_weapons2\grenades\US\thrown\M8_proj";
	};
	class rhs_grenade_m15_ammo: GrenadeHand
	{
		model = "\rhsgref\addons\rhsgref_weapons2\grenades\US\thrown\M15_proj";
		explosionTime = 4.5;
		hit = 2;
		indirectHit = 2;
		indirectHitRange = 2;
		explosionEffects = "RHS_GDM40Effect";
	};
	class rhs_grenade_mki_ammo: SmokeShell
	{
		AIAmmoUsageFlags = "1+4";
		smokeColor[] = {1, 1, 1, 0.5};
		lightColor[] = {0.5, 0.5, 0.5, 0.5};
		effectsSmoke = "EmptyEffect";
		effectFlare = "CounterMeasureFlare";
		model = "\rhsgref\addons\rhsgref_weapons2\grenades\US\thrown\mk_i_proj";
		intensity = 55000;
		brightness = 12;
		size = 1;
		useFlare = 1;
		flareSize = 2;
		timeToLive = 30;
		triggerTime = 5;
		triggerSpeedCoef = 1;
		deflecting = 10;
		simulation = "shotIlluminating";
	};
	class rhs_ammo_rpg75_rocket: R_PG32V_F
	{
		AIAmmoUsageFlags = "128+256+512";
		model = "rhsgref\addons\rhsgref_weapons2\rpg75\rhs_rpg75_projectile";
		submunitionAmmo = "rhs_ammo_rpg75_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		cost = 100;
		hit = 200;
		indirectHit = 10;
		indirectHitRange = 1;
		explosive = 0.35;
		caliber = 0.1;
		airFriction = 0.64;
		sideAirFriction = 1e-005;
		simulationStep = 0.01;
		maxSpeed = 189;
		initTime = 0;
		thrustTime = 0;
		thrust = 0;
		fuseDistance = 5;
		visibleFire = 28;
		audibleFire = 16;
		whistleDist = 4;
		timeToLive = 6;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissileInit = "RocketBackEffectsNLAW";
		effectsMissile = "missile3";
		class CamShakeFire
		{
			power = 10;
			duration = 0.5;
			frequency = 20;
			distance = 30;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
		};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly", 1.1, 0.7, 250};
	};
	class rhs_ammo_rpg75_penetrator: rhs_ammo_3bk12_penetrator
	{
		caliber = 22;
	};
	class rhs_ammo_panzerfaust60_rocket: R_PG32V_F
	{
		AIAmmoUsageFlags = "128+256+512";
		model = "rhsgref\addons\rhsgref_weapons2\pzf\rhs_pzf60_projectile";
		submunitionAmmo = "rhs_ammo_panzerfaust60_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		cost = 60;
		hit = 200;
		indirectHit = 10;
		indirectHitRange = 1;
		explosive = 0.35;
		caliber = 0.1;
		airFriction = 0.6;
		sideAirFriction = 0.2;
		simulationStep = 0.001;
		maxSpeed = 189;
		initTime = 0;
		thrustTime = 0;
		thrust = 0;
		fuseDistance = 5;
		visibleFire = 28;
		audibleFire = 16;
		whistleDist = 4;
		timeToLive = 6;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissileInit = "RocketBackEffectsNLAW";
		effectsMissile = "missile3";
		class CamShakeFire
		{
			power = 10;
			duration = 0.5;
			frequency = 20;
			distance = 30;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
		};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly", 1.1, 0.7, 250};
	};
	class rhs_ammo_panzerfaust60_penetrator: rhs_ammo_3bk12_penetrator
	{
		caliber = 13.3333;
		submunitionConeType[] = {"randomcenter", 45};
	};
	class rhs_mine_bounding_trigger_base: APERSMine_Range_Ammo
	{
		soundHit1[] = {};
		soundHit2[] = {};
		multiSoundHit[] = {};
		soundTrigger[] = {};
		SoundSetExplosion[] = {};
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersMine_Placement_01", 0.398107, 1, 20};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersMine_Deactivate_01", 1.41254, 1, 20};
		explosionEffects = "";
		CraterEffects = "";
		deleteParentWhenTriggered = 1;
		submunitionConeAngle[] = {0, 10};
		submunitionConeAngleHorizontal = 720;
		submunitionAutoleveling = 1;
		submunitionConeType[] = {"randomupcone", 1};
		submunitionInitSpeed = 5;
		mineJumpEffects = "MineJumpEffect";
		class CamShakeExplode
		{
			power = 0;
			duration = 0.2;
			frequency = 20;
			distance = 0;
		};
		class CamShakeHit
		{
			power = 0;
			duration = 0.2;
			frequency = 20;
			distance = 1;
		};
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
	};
	class rhs_mine_smine35_press_ammo: APERSBoundingMine_Range_Ammo
	{
		model = "\rhsgref\addons\rhsgref_weapons2\mines\Smine35\SMI35_PROJ_PRESS";
		mineModelDisabled = "\rhsgref\addons\rhsgref_weapons2\mines\Smine35\SMI35_ITEM_PRESS";
		defaultMagazine = "rhs_mine_smine35_press_mag";
		cost = 200;
		mineBoundingDist = 1.25;
		mineBoundingTime = 0.5;
		mineDiveSpeed = 1;
		minePlaceDist = 0.5;
	};
	class rhs_mine_smine35_trip_ammo: rhs_mine_bounding_trigger_base
	{
		model = "\rhsgref\addons\rhsgref_weapons2\mines\Smine35\SMI35_HELPER_TRIP";
		mineModelDisabled = "\rhsgref\addons\rhsgref_weapons2\mines\Smine35\SMI35_ITEM_TRIP";
		defaultMagazine = "rhs_mine_smine35_trip_mag";
		cost = 200;
		mineTrigger = "rhsgref_sMine_tripwire_trigger";
		minePlaceDist = 0.5;
		submunitionAmmo[] = {"rhs_mine_smine35_trip_explo_ammo", 1};
		submunitionInitSpeed = 4;
	};
	class rhs_mine_smine35_trip_explo_ammo: ShellBase
	{
		SoundSetExplosion[] = {"M6slamMine_Exp_SoundSet", "M6slamMine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		model = "\rhsgref\addons\rhsgref_weapons2\mines\Smine35\SMI35_SUBMUNITION_TRIP";
		explosionTime = 0.3125;
		hit = 20;
		indirectHit = 20;
		indirectHitRange = 20;
	};
	class rhs_mine_smine44_trip_ammo: rhs_mine_smine35_trip_ammo
	{
		model = "\rhsgref\addons\rhsgref_weapons2\mines\Smine44\SMI44_HELPER_TRIP";
		mineModelDisabled = "\rhsgref\addons\rhsgref_weapons2\mines\Smine44\SMI44_ITEM_TRIP";
		defaultMagazine = "rhs_mine_smine44_trip_mag";
		submunitionAmmo[] = {"rhs_mine_smine44_trip_explo_ammo", 1};
	};
	class rhs_mine_smine44_trip_explo_ammo: rhs_mine_smine35_trip_explo_ammo
	{
		model = "\rhsgref\addons\rhsgref_weapons2\mines\Smine44\SMI44_SUBMUNITION_TRIP";
		explosionTime = 0.25;
		hit = 20;
		indirectHit = 20;
		indirectHitRange = 20;
	};
	class rhs_mine_smine44_press_ammo: APERSBoundingMine_Range_Ammo
	{
		model = "\rhsgref\addons\rhsgref_weapons2\mines\Smine44\SMI44_PROJ_PRESS";
		mineModelDisabled = "\rhsgref\addons\rhsgref_weapons2\mines\Smine44\SMI44_ITEM_PRESS";
		defaultMagazine = "rhs_mine_smine44_press_mag";
		mineTrigger = "rhsgref_pressure_trigger";
		cost = 200;
		mineBoundingDist = 0.9144;
		mineBoundingTime = 0.5;
		mineDiveSpeed = 1;
		minePlaceDist = 0.5;
	};
	class rhs_mine_m2a3b_press_ammo: rhs_mine_bounding_trigger_base
	{
		model = "\rhsgref\addons\rhsgref_weapons2\mines\M2A3B\M2A3_HELPER_PRESSURE";
		mineModelDisabled = "\rhsgref\addons\rhsgref_weapons2\mines\M2A3B\M2A3_DISABLED";
		defaultMagazine = "rhs_mine_m2a3b_press_mag";
		cost = 200;
		minePlaceDist = 0.5;
		mineTrigger = "rhsgref_pressure_trigger";
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersBoundingMine_Placement_01", 1, 1, 20};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersBoundingMine_Deactivate_01", 1.99526, 1, 20};
		soundTrigger[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersBoundingMine_Trigger_01", 3.98107, 1, 20};
		deleteParentWhenTriggered = 1;
		submunitionAmmo[] = {"rhs_mine_m2a3b_explo_ammo", 1};
		submunitionConeAngle[] = {0, 10};
		submunitionConeAngleHorizontal = 720;
		submunitionAutoleveling = 1;
		submunitionConeType[] = {"randomupcone", 1};
		submunitionInitSpeed = 5;
		explosionEffects = "BoundingMineExplosion";
	};
	class rhs_mine_m2a3b_trip_ammo: rhs_mine_m2a3b_press_ammo
	{
		model = "\rhsgref\addons\rhsgref_weapons2\mines\M2A3B\M2A3_HELPER_TRIPWIRE";
		defaultMagazine = "rhs_mine_m2a3b_trip_mag";
		mineTrigger = "rhsgref_M2A3_tripwire_trigger";
	};
	class rhs_mine_m2a3b_explo_ammo: ShellBase
	{
		SoundSetExplosion[] = {"M6slamMine_Exp_SoundSet", "M6slamMine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		model = "\rhsgref\addons\rhsgref_weapons2\mines\M2A3B\M2A3_SUBMUNITION";
		explosionTime = 0.4;
		hit = 15;
		indirectHit = 15;
		indirectHitRange = 10;
	};
	class rhs_mine_glasmine43_hz_ammo: APERSMine_Range_Ammo
	{
		model = "\rhsgref\addons\rhsgref_weapons2\mines\Glasmine43\GLMI43_HELPER";
		mineModelDisabled = "\rhsgref\addons\rhsgref_weapons2\mines\Glasmine43\GLMI43_DISABLED";
		defaultMagazine = "rhs_mine_glasmine43_hz_mag";
		cost = 200;
		mineTrigger = "rhsgref_pressure_trigger";
	};
	class rhs_mine_glasmine43_bz_ammo: rhs_mine_glasmine43_hz_ammo
	{
		model = "\rhsgref\addons\rhsgref_weapons2\mines\Glasmine43\GLMI43_HELPER";
		mineModelDisabled = "\rhsgref\addons\rhsgref_weapons2\mines\Glasmine43\GLMI43_DISABLED";
		defaultMagazine = "rhs_mine_glasmine43_bz_mag";
	};
	class rhs_mine_a200_bz_ammo: APERSMine_Range_Ammo
	{
		model = "\rhsgref\addons\rhsgref_weapons2\mines\A200\A200_BZ_HELPER";
		mineModelDisabled = "\rhsgref\addons\rhsgref_weapons2\mines\A200\A200_DISABLED";
		defaultMagazine = "rhs_mine_a200_bz_mag";
		cost = 200;
		mineTrigger = "rhsgref_pressure_trigger";
	};
	class rhs_mine_a200_dz35_ammo: rhs_mine_a200_bz_ammo
	{
		model = "\rhsgref\addons\rhsgref_weapons2\mines\A200\A200_DZ35_HELPER";
		mineModelDisabled = "\rhsgref\addons\rhsgref_weapons2\mines\A200\A200_DISABLED";
		defaultMagazine = "rhs_mine_a200_dz35_mag";
	};
	class rhs_mine_M3_pressure_ammo: APERSMine_Range_Ammo
	{
		model = "\rhsgref\addons\rhsgref_weapons2\mines\M3\M6M7FUZE_HELPER_PRESSURE";
		mineModelDisabled = "\rhsgref\addons\rhsgref_weapons2\mines\M3\M3_DISABLED";
		defaultMagazine = "rhs_mine_m3_pressure_mag";
		cost = 200;
		hit = 20;
		indirectHit = 20;
		IndirecthitRange = 10;
		mineTrigger = "rhsgref_pressure_trigger";
	};
	class rhs_mine_Mk2_pressure_ammo: APERSMine_Range_Ammo
	{
		model = "\rhsgref\addons\rhsgref_weapons2\mines\M3\M6M7FUZE_HELPER_PRESSURE";
		mineModelDisabled = "\rhsgref\addons\rhsgref_weapons2\mines\MKII_BOOBYTRAP\MKII_TRAP_DISABLED";
		defaultMagazine = "rhs_mine_mk2_pressure_mag";
		cost = 200;
		hit = 8;
		indirectHit = 8;
		IndirecthitRange = 6;
		mineTrigger = "rhsgref_pressure_trigger";
	};
	class rhs_mine_M7A2_ammo: APERSMine_Range_Ammo
	{
		model = "\rhsgref\addons\rhsgref_weapons2\mines\M7A2\M7A2_HELPER_SURFACE";
		mineModelDisabled = "\rhsgref\addons\rhsgref_weapons2\mines\M7A2\M7A2_DISABLED";
		defaultMagazine = "rhs_mine_M7A2_mag";
		cost = 200;
		hit = 852;
		indirectHit = 852;
		indirectHitRange = 3;
		mineTrigger = "rhsgref_pressure_trigger";
	};
	class rhs_mine_stockmine43_2m_ammo: APERSTripMine_Wire_Ammo
	{
		model = "\rhsgref\addons\rhsgref_weapons2\mines\Stockmine43\STMI43_HELPER_2M";
		mineModelDisabled = "\rhsgref\addons\rhsgref_weapons2\mines\Stockmine43\STMI43_DISABLED_2M";
		defaultMagazine = "rhs_mine_stockmine43_2m_mag";
		cost = 200;
		hit = 8;
		indirectHit = 8;
		indirectHitRange = 4;
		mineTrigger = "rhsgref_StMi43_2m_tripwire_trigger";
	};
	class rhs_mine_stockmine43_4m_ammo: rhs_mine_stockmine43_2m_ammo
	{
		model = "\rhsgref\addons\rhsgref_weapons2\mines\Stockmine43\STMI43_HELPER_4M";
		mineModelDisabled = "\rhsgref\addons\rhsgref_weapons2\mines\Stockmine43\STMI43_DISABLED_4M";
		defaultMagazine = "rhs_mine_stockmine43_4m_mag";
		mineTrigger = "rhsgref_StMi43_4m_tripwire_trigger";
	};
	class rhs_mine_M3_tripwire_ammo: rhs_mine_M3_pressure_ammo
	{
		model = "\rhsgref\addons\rhsgref_weapons2\mines\M3\M6M7FUZE_HELPER_TRIPWIRE";
		mineModelDisabled = "\rhsgref\addons\rhsgref_weapons2\mines\M3\M3_DISABLED";
		defaultMagazine = "rhs_mine_M3_tripwire_mag";
		mineTrigger = "rhsgref_Mk2_tripwire_trigger";
	};
	class rhs_mine_Mk2_tripwire_ammo: rhs_mine_Mk2_pressure_ammo
	{
		model = "\rhsgref\addons\rhsgref_weapons2\mines\M3\M6M7FUZE_HELPER_TRIPWIRE";
		mineModelDisabled = "\rhsgref\addons\rhsgref_weapons2\mines\MKII_BOOBYTRAP\MKII_TRAP_DISABLED";
		defaultMagazine = "rhs_mine_Mk2_tripwire_mag";
		mineTrigger = "rhsgref_Mk2_tripwire_trigger";
	};
	class rhs_mine_TM43_ammo: ATMine_Range_Ammo
	{
		model = "\rhsgref\addons\rhsgref_weapons2\mines\TM43\TM43_proj";
		mineModelDisabled = "\rhsgref\addons\rhsgref_weapons2\mines\TM43\TM43";
		defaultMagazine = "rhs_mine_TM43_mag";
	};
	class rhs_charge_tnt_x2_ammo: GrenadeHand
	{
		model = "\rhsgref\addons\rhsgref_weapons2\mines\TNT_BLOCK_x2\TNT_BLOCK_x2_HELPER";
		explosionTime = 4.5;
		hit = 210;
		indirectHit = 170;
		IndirecthitRange = 3;
		defaultMagazine = "rhs_charge_tnt_x2_mag";
	};
	class rhs_charge_sb3kg_ammo: GrenadeHand
	{
		model = "\rhsgref\addons\rhsgref_weapons2\grenades\Sprengbuechse3kg\SB3kg_proj";
		explosionTime = 5;
		hit = 210;
		indirectHit = 300;
		IndirecthitRange = 10;
		defaultMagazine = "rhs_charge_sb3kg_mag";
	};
	class rhs_charge_M2tet_x2_ammo: DemoCharge_Remote_Ammo
	{
		model = "\rhsgref\addons\rhsgref_weapons2\mines\M2_TETRYTOL_x2\M2TET_x2_HELPER";
		mineModelDisabled = "\rhsgref\addons\rhsgref_weapons2\mines\M2_TETRYTOL_x2\M2TET_x2_ITEM";
		defaultMagazine = "rhs_charge_M2tet_x2_mag";
	};
	class rhssaf_ammo_762x39_m82_api: rhs_B_762x39_Ball
	{
		cartridge = "RHS_Cartridge_762x39";
		hit = 8.8;
		typicalSpeed = 718;
		airFriction = -0.0016519;
		caliber = 0.913;
		deflecting = 15;
		visibleFire = 3;
		audibleFire = 6;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerStartTime = 0.151;
		tracerEndTime = 1;
	};
	class rhssaf_ammo_556x45_EPR: B_556x45_Ball
	{
		hit = 8.11458;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		typicalSpeed = 905.256;
		airFriction = -0.00115438;
		caliber = 0.855;
		deflecting = 21;
		visibleFire = 3;
		audibleFire = 7;
	};
	class rhssaf_ammo_556x45_EPR_Tracer: rhssaf_ammo_556x45_EPR
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly = 0;
	};
	class rhssaf_ammo_556x45_SOST: B_556x45_Ball
	{
		hit = 9.0387;
		typicalSpeed = 857.098;
		airFriction = -0.00128176;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		caliber = 0.755;
		deflecting = 18;
		visibleFire = 3;
		audibleFire = 5.5;
	};
	class rhssaf_ammo_556x45_SPR: B_556x45_Ball
	{
		hit = 11.5703;
		typicalSpeed = 868.68;
		airFriction = -0.00108679;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		caliber = 0.615;
		deflecting = 16;
		visibleFire = 2.5;
		audibleFire = 5;
	};
	class rhssaf_ammo_556x45_Ball_Tracer_Dim: B_556x45_Ball_Tracer_Red
	{
		nvgOnly = 1;
	};
	class rhssaf_ammo_ttm_m60: GrenadeBase
	{
		simulation = "shotShell";
		model = "\rhssaf\addons\rhssaf_m_explosives\rifle_grenades\ttm_m60\rhssaf_ttm_m60_fly";
		hit = 100;
		indirectHit = 25;
		indirectHitRange = 15;
		visibleFire = 16;
		audibleFire = 18;
		visibleFireTime = 3;
		explosive = 1;
		cost = 500;
		deflecting = 5;
		airFriction = -0.0015;
		fuseDistance = 30;
		whistleDist = 5;
	};
	class rhssaf_ammo_tkm_m60: GrenadeBase
	{
		simulation = "shotShell";
		model = "\rhssaf\addons\rhssaf_m_explosives\rifle_grenades\tkm_m60\rhssaf_tkm_m60_fly";
		hit = 150;
		indirectHit = 25;
		indirectHitRange = 25;
		visibleFire = 16;
		audibleFire = 20;
		visibleFireTime = 3;
		explosive = 1;
		cost = 530;
		deflecting = 5;
		airFriction = -0.0015;
		fuseDistance = 30;
		whistleDist = 5;
	};
	class rhs_ammo_m80_penetrator: rhs_ammo_base_penetrator
	{
		caliber = "(300/((15*1000)/1000))";
	};
	class rhs_ammo_m80_rocket: rhs_rpg26_rocket
	{
		warheadName = "HEAT";
		submunitionAmmo = "rhs_ammo_m80_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		airFriction = 0.26;
		sideAirFriction = 0.001;
		hit = 180;
		indirectHit = 21;
		maxSpeed = 190;
		timeToLive = 4;
	};
	class rhssaf_ammo_br_m75: GrenadeHand
	{
		model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\br_m75\rhssaf_br_m75_throw";
		explosionTime = 4;
	};
	class rhssaf_ammo_br_m84: GrenadeHand
	{
		model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\br_m84\rhssaf_br_m84_throw";
		explosionTime = 4;
	};
	class rhssaf_ammo_brd_m83_white: SmokeShell
	{
		model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\brd_m83\rhssaf_brd_m83_throw";
	};
	class rhssaf_ammo_brd_m83_yellow: rhssaf_ammo_brd_m83_white
	{
		smokeColor[] = {0.9883, 0.8606, 0.0719, 1};
		model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\brd_m83\rhssaf_brd_m83_y_throw";
	};
	class rhssaf_ammo_brd_m83_green: rhssaf_ammo_brd_m83_white
	{
		smokeColor[] = {0.2125, 0.6258, 0.4891, 1};
		model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\brd_m83\rhssaf_brd_m83_g_throw";
	};
	class rhssaf_ammo_brd_m83_red: rhssaf_ammo_brd_m83_white
	{
		smokeColor[] = {0.8438, 0.1383, 0.1353, 1};
		model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\brd_m83\rhssaf_brd_m83_r_throw";
	};
	class rhssaf_ammo_brd_m83_blue: rhssaf_ammo_brd_m83_white
	{
		smokeColor[] = {0.2549, 0.4117, 1, 1};
		model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\brd_m83\rhssaf_brd_m83_b_throw";
	};
	class rhssaf_ammo_brd_m83_orange: rhssaf_ammo_brd_m83_white
	{
		smokeColor[] = {1, 0.647, 0, 1};
		model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\brd_m83\rhssaf_brd_m83_o_throw";
	};
	class rhssaf_ammo_rshb_p98: GrenadeHand
	{
		model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\rshb_p98\rhssaf_rshb_p98_throw";
		hit = 0.1;
		indirectHit = 0.1;
		indirectHitRange = 15;
		ExplosionEffects = "RHSUSF_flashbang_15";
		craterEffects = "RHSUSF_flashbang_Crater";
		explosionTime = 1.5;
		cost = 10;
	};
	class rhssaf_ammo_brz_m88: SmokeShell
	{
		CraterEffects = "NoCrater";
		explosionEffects = "NoExplosion";
		cost = 150;
		timeToLive = 25;
		effectsSmoke = "RHS_Incendenary_Grenade";
		model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\brz_m88\rhssaf_brz_m88_throw";
		SmokeShellSoundLoop1[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop1", 0.125893, 1, 16.5};
		SmokeShellSoundLoop2[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop2", 0.125893, 1, 16.5};
		grenadeBurningSound[] = {"SmokeShellSoundLoop1", 0.5, "SmokeShellSoundLoop2", 0.5};
		aiAmmoUsageFlags = "1 + 2 + 64";
	};
	class rhssaf_ammo_brk_m79: GrenadeHand
	{
		model = "\rhssaf\addons\rhssaf_m_explosives\grenades\brk_m79\rhssaf_brk_m79";
		rhs_submunition = "rhssaf_ammo_brk_m79_fly";
		rhs_submunition_uxo = "rhssaf_ammo_brk_m79_uxo";
		rhs_fuseTime[] = {0.3, 0.35, 0.4};
		simulationStep = 0.001;
		explosionTime = -1;
		timeToLive = 5;
		explosionEffects = "";
		CraterEffects = "";
		SoundSetExplosion[] = {};
		multiSoundHit[] = {};
		hit = 0.1;
		indirectHit = 0;
	};
	class rhssaf_ammo_brk_m79_uxo: SmokeShell
	{
		model = "\rhssaf\addons\rhssaf_m_explosives\grenades\brk_m79\rhssaf_brk_m79";
		smokeColor[] = {0, 0, 0, 0};
		grenadeFireSound[] = {};
		grenadeBurningSound[] = {};
	};
	class rhssaf_ammo_brk_m79_fly: GrenadeHand
	{
		rhs_submunition = "rhssaf_ammo_brk_m79_explosion";
		hit = 180;
		indirectHit = 12;
		indirectHitRange = 3;
		model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\brk_m79\brk_m79_throw.p3d";
		explosionTime = -1;
		SoundSetExplosion[] = {};
	};
	class rhssaf_ammo_brk_m79_explosion: BulletBase
	{
		hit = 140;
		indirectHit = 8;
		indirectHitRange = 3;
		simulationStep = 1e-005;
		simulation = "shotShell";
		deflecting = 0;
		explosive = 1;
		timeToLive = 1;
		explosionTime = 0;
		explosionSoundEffect = "DefaultExplosion";
		CraterEffects = "GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
		submunitionAmmo = "rhssaf_ammo_brk_m79_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhssaf_ammo_brk_m79_penetrator: rhs_ammo_3bk12_penetrator
	{
		caliber = "(440/((15* 1000)/1000))";
	};
	class rhssaf_mortar_M73_HE: Sh_82mm_AMOS
	{
		hit = 100;
		indirectHit = 30;
		indirectHitRange = 10;
	};
	class rhssaf_mine_pma3_ammo: MineBase
	{
		AIAmmoUsageFlags = "16";
		hit = 3;
		indirectHit = 40;
		indirectHitRange = 0.1;
		model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\pma\rhssaf_pma3_e";
		mineModelDisabled = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\pma\rhssaf_pma3_d";
		icon = "iconExplosiveAP";
		defaultMagazine = "rhssaf_mine_pma3_mag";
		soundHit[] = {"A3\Sounds_F\weapons\mines\mine_debris_2", 3.16228, 1, 2000};
		explosionEffects = "MineExplosion";
		CraterEffects = "MineCrater";
		whistleDist = 8;
		cost = 200;
		mineInconspicuousness = 3;
		mineTrigger = "RangeTriggerShort";
	};
	class rhssaf_mine_tma4_ammo: MineBase
	{
		AIAmmoUsageFlags = "16";
		hit = 2200;
		indirectHit = 1250;
		indirectHitRange = 2;
		model = "\rhssaf\addons\rhssaf_m_explosives\mines_at\tma4\rhssaf_tma4_e";
		mineModelDisabled = "\rhssaf\addons\rhssaf_m_explosives\mines_at\tma4\rhssaf_tma4_d";
		icon = "iconExplosiveAT";
		defaultMagazine = "rhssaf_mine_tma4_mag";
		soundHit[] = {"A3\Sounds_F\weapons\mines\mine_debris_2", 3.16228, 1, 2000};
		explosionEffects = "ATMineExplosion";
		CraterEffects = "ATMineCrater";
		whistleDist = 8;
		cost = 200;
		mineInconspicuousness = 30;
		mineTrigger = "rhssaf_tma4Trigger";
	};
	class rhssaf_mine_mrud_a_ammo: DirectionalBombBase
	{
		AIAmmoUsageFlags = "16";
		hit = 15;
		indirectHit = 15;
		indirectHitRange = 10;
		model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_a_e";
		mineModelDisabled = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_a_d";
		icon = "iconExplosiveAP";
		defaultMagazine = "rhssaf_mine_mrud_a_mag";
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_2", 3.16228, 1, 50};
		soundActivation[] = {"A3\Sounds_F\weapons\mines\mech_activate_mine_1", 0.562341, 1, 30};
		soundDeactivation[] = {"A3\Sounds_F\weapons\mines\deactivate_mine_3a", 0.562341, 1, 30};
		soundHit[] = {"\A3\Sounds_F\arsenal\explosives\mines\Explosion_tripwire_landmine", 3.16228, 1, 1500};
		explosionEffects = "MineExplosion";
		CraterEffects = "MineCrater";
		whistleDist = 8;
		cost = 200;
		mineInconspicuousness = 30;
		mineTrigger = "rhssaf_mrud_a_Trigger";
	};
	class rhssaf_mine_mrud_b_ammo: rhssaf_mine_mrud_a_ammo
	{
		model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_b_e";
		defaultMagazine = "rhssaf_mine_mrud_b_mag";
		mineTrigger = "rhssaf_mrud_b_Trigger";
	};
	class rhssaf_mine_mrud_c_ammo: rhssaf_mine_mrud_a_ammo
	{
		model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_c_e";
		defaultMagazine = "rhssaf_mine_mrud_c_mag";
		mineTrigger = "rhssaf_mrud_c_Trigger";
	};
	class rhssaf_mine_mrud_d_ammo: rhssaf_mine_mrud_a_ammo
	{
		model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_d_e";
		mineModelDisabled = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_b_d";
		icon = "iconExplosiveAPDirectional";
		defaultMagazine = "rhssaf_mine_mrud_d_mag";
		cost = 400;
		mineTrigger = "RemoteTrigger";
	};
	class rhssaf_tm100_ammo: PipeBombBase
	{
		hit = 200;
		indirectHit = 200;
		indirectHitRange = 1;
		model = "\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm100_e";
		mineModelDisabled = "\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm100_d";
		soundHit[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosive_Charge", 3.16228, 1, 1500};
		soundDeactivation[] = {"A3\Sounds_F\weapons\Mines\deactivate_mine_3a", 1.41254, 1, 20};
		SoundSetExplosion[] = {"ExplosiveCharge_Exp_SoundSet", "ExplosiveCharge_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		defaultMagazine = "rhssaf_tm100_mag";
		ExplosionEffects = "MineNondirectionalExplosionSmall";
		CraterEffects = "MineNondirectionalCraterSmall";
		whistleDist = 32;
		mineInconspicuousness = 5;
		mineTrigger = "RemoteTrigger";
	};
	class rhssaf_tm100_ammo_scripted: rhssaf_tm100_ammo
	{
	};
	class rhssaf_tm200_ammo: rhssaf_tm100_ammo
	{
		hit = 400;
		indirectHit = 400;
		indirectHitRange = 3;
		model = "\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm200_e";
		mineModelDisabled = "\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm200_d";
		defaultMagazine = "rhssaf_tm200_mag";
	};
	class rhssaf_tm200_ammo_scripted: rhssaf_tm200_ammo
	{
	};
	class rhssaf_tm500_ammo: rhssaf_tm100_ammo
	{
		hit = 1000;
		indirectHit = 1000;
		indirectHitRange = 5;
		model = "\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm500_e";
		mineModelDisabled = "\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm500_d";
		ExplosionEffects = "MineNondirectionalExplosion";
		CraterEffects = "MineNondirectionalCrater";
		defaultMagazine = "rhssaf_tm500_mag";
		SoundSetExplosion[] = {"ClaymoreMine_Exp_SoundSet", "ClaymoreMine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class rhssaf_tm500_ammo_scripted: rhssaf_tm500_ammo
	{
	};
};
