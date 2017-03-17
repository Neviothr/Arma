class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class asdg_SlotInfo;
class asdg_FrontSideRail;
class asdg_OpticRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_762;
class asdg_MuzzleSlot_9MM;
class asdg_UnderSlot;
class CfgWeapons {
	class Rifle;
	class UGL_F;
	class WeaponSlotsInfo;
	class Rifle_Base_F: Rifle {
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class ItemCore;
	class ItemInfo;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class Zasleh2;
	class RH_m4: Rifle_Base_F {
		scope = 2;
		author = "RobertHammer";
		magazines[] = {"RH_30Rnd_556x45_M855A1","RH_30Rnd_556x45_Mk262","RH_30Rnd_556x45_Mk318","RH_20Rnd_556x45_M855A1","RH_20Rnd_556x45_Mk262","RH_20Rnd_556x45_Mk318","RH_60Rnd_556x45_M855A1","RH_60Rnd_556x45_Mk262","RH_60Rnd_556x45_Mk318","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
		class Library {
			libTextDesc = "Colt M4";
		};
		reloadAction = "GestureReloadSMG_02";
		maxrecoilsway = 0.003;
		swaydecayspeed = 0;
		recoil = "RH_recoil_M4";
		initSpeed = -0.93000001;
		class GunParticles: GunParticles {
			class EjectEffect {
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "RH_Rifle556Cartridge";
			};
			class RifleAmmoCloud {
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "RH_RifleAmmoCloud";
			};
			class SmokeEffect {
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "RH_RifleSmokeTrail";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 85;
			class PointerSlot {};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				iconPosition[] = {0,0.37};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913_short {
				iconPosition[] = {0.5,0.2};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "center";
			};
		};
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		descriptionShort = "Assault rifle<br/>Caliber: 5.56 mm";
		displayName = "M4";
		model = "\RH_m4\RH_m4.p3d";
		picture = "\RH_m4\inv\m4_x_ca.paa";
		discreteDistance[] = {100,200,300,400,500,600,800};
		discreteDistanceInitIndex = 1;
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.40000001;
		maxZeroing = 1000;
		handAnim[] = {"OFP2_ManSkeleton","\RH_m4\anim\RH_m16.rtm"};
		modes[] = {"Single","Burst","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto {
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType {
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.56,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.56,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType {
				begin1[] = {"nev_mod_overrides\sound\m4_s1.wss",1,1,1200};
				begin2[] = {"nev_mod_overrides\sound\m4_s2.wss",1,1,1200};
				begin3[] = {"nev_mod_overrides\sound\m4_s3.wss",1,1,1200};
				begin4[] = {"nev_mod_overrides\sound\m4_s4.wss",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType {
				begin1[] = {"RH_m4\sound\m4sd_s1",1,1,240};
				begin2[] = {"RH_m4\sound\m4sd_s2",1,1,240};
				begin3[] = {"RH_m4\sound\m4sd_s3",1,1,240};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadTime = 0.075000003;
			recoil = "RH_M4_Recoil";
			recoilProne = "RH_M4_RecoilProne";
			dispersion = 0.0022499999;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 225;
			midRangeProbab = 0.69999999;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
		class Burst: Mode_Burst {
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType {
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.56,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.56,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType {
				begin1[] = {"nev_mod_overrides\sound\m4_s1.wss",1,1,1200};
				begin2[] = {"nev_mod_overrides\sound\m4_s2.wss",1,1,1200};
				begin3[] = {"nev_mod_overrides\sound\m4_s3.wss",1,1,1200};
				begin4[] = {"nev_mod_overrides\sound\m4_s4.wss",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType {
				begin1[] = {"RH_m4\sound\m4sd_s1",1,1,24};
				begin2[] = {"RH_m4\sound\m4sd_s2",1,1,240};
				begin3[] = {"RH_m4\sound\m4sd_s3",1,1,240};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadtime = 0.075000003;
			recoil = "RH_M4_Recoil_Auto";
			recoilProne = "RH_M4_RecoilProneAuto";
			dispersion = 0.0022499999;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 0;
			minRangeProbab = 0.80000001;
			midRange = 60;
			midRangeProbab = 0.69999999;
			maxRange = 120;
			maxRangeProbab = 0.050000001;
		};
		class FullAuto: Mode_FullAuto {
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType {
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.56,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.56,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType {
				begin1[] = {"nev_mod_overrides\sound\m4_s1.wss",1,1,1200};
				begin2[] = {"nev_mod_overrides\sound\m4_s2.wss",1,1,1200};
				begin3[] = {"nev_mod_overrides\sound\m4_s3.wss",1,1,1200};
				begin4[] = {"nev_mod_overrides\sound\m4_s4.wss",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType {
				begin1[] = {"RH_m4\sound\m4sd_s1",1,1,240};
				begin2[] = {"RH_m4\sound\m4sd_s2",1,1,240};
				begin3[] = {"RH_m4\sound\m4sd_s3",1,1,240};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadTime = 0.075000003;
			recoil = "RH_M4_Recoil_Auto";
			recoilProne = "RH_M4_RecoilProneAuto";
			dispersion = 0.0022499999;
			minRange = 0;
			minRangeProbab = 0.89999998;
			midRange = 15;
			midRangeProbab = 0.69999999;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
		};
		class single_medium_optics1: Single {
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 550;
			midRangeProbab = 0.69999999;
			maxRange = 700;
			maxRangeProbab = 0.1;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1 {
			requiredOpticType = 2;
		};
		class fullauto_medium: FullAuto {
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.69999999;
			maxRange = 150;
			maxRangeProbab = 0.050000001;
			aiRateOfFire = 2;
		};
		class M203: UGL_F {
			displayName = "M203";
			descriptionShort = "$STR_A3_cfgweapons_3gl1";
			useModelOptics = 0;
			useExternalOptic = 0;
			recoil = "RH_M203GLBase";
			magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
			sounds[] = {"StandardSound"};
			class BaseSoundModeType {
				closure1[] = {"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL",1,1,10};
				soundClosure[] = {"closure1",1};
			};
			class StandardSound {
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"RH_m4\sound\m203",1,1,200};
				soundBegin[] = {"begin1",1};
			};
			reloadMagazineSound[] = {"RH_m4\sound\m203_reload",1,1,10};
			cameraDir = "OP_look";
			discreteDistance[] = {50,100,150,200,250};
			discreteDistanceCameraPoint[] = {"OP_eye","OP_eye2","OP_eye3","OP_eye4","OP_eye5"};
			discreteDistanceInitIndex = 1;
		};
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 8;
		changeFiremodeSound[] = {"\RH_m4\sound\m4_selector",0.5,1,10};
		drySound[] = {"\RH_m4\sound\dry",0.80000001,1,15};
		reloadMagazineSound[] = {"RH_m4\sound\m4_reload",1,1,15};
	};
	class RH_M16a1: RH_m4
	{
		author = "RobertHammer";
		model = "\RH_M4\RH_m16a1.p3d";
		displayName = "M16A1";
		picture = "\RH_m4\inv\m16a1_x_ca.paa";
		modes[] =
		{
			"Single",
			"FullAuto",
			"single_medium_optics1",
			"single_far_optics2"
		};
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\RH_m4\anim\RH_m16a1.rtm"
		};
		inertia = 0.5;
		recoil = "RH_recoil_M16";
		initSpeed = 0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
			class CowsSlot
			{
			};
			class MuzzleSlot
			{
			};
			class PointerSlot
			{
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[] =
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] =
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					0.56,
					1,
					10
				};
				closure2[] =
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					0.56,
					1,
					10
				};
				soundClosure[] =
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] =
				{
					"nev_mod_overrides\sound\m16a1_s1.wss",
					1,
					1,
					1200
				};
				begin2[] =
				{
					"nev_mod_overrides\sound\m16a1_s2.wss",
					1,
					1,
					1200
				};
				begin3[] =
				{
					"nev_mod_overrides\sound\m16a1_s3.wss",
					1,
					1,
					1200
				};
				begin4[] =
				{
					"nev_mod_overrides\sound\m16a1_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[] =
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] =
				{
					"RH_m4\sound\m16_sd1",
					1,
					1,
					240
				};
				begin2[] =
				{
					"RH_m4\sound\m16_sd2",
					1,
					1,
					240
				};
				soundBegin[] =
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			reloadTime = 0.079999998;
			recoil = "RH_M4_Recoil";
			recoilProne = "RH_M4_RecoilProne";
			dispersion = 0.0020000001;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 225;
			midRangeProbab = 0.69999999;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] =
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] =
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					0.56,
					1,
					10
				};
				closure2[] =
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					0.56,
					1,
					10
				};
				soundClosure[] =
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] =
				{
					"nev_mod_overrides\sound\m16a1_s1.wss",
					1,
					1,
					1200
				};
				begin2[] =
				{
					"nev_mod_overrides\sound\m16a1_s2.wss",
					1,
					1,
					1200
				};
				begin3[] =
				{
					"nev_mod_overrides\sound\m16a1_s3.wss",
					1,
					1,
					1200
				};
				begin4[] =
				{
					"nev_mod_overrides\sound\m16a1_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[] =
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] =
				{
					"RH_m4\sound\m16_sd1",
					1,
					1,
					240
				};
				begin2[] =
				{
					"RH_m4\sound\m16_sd2",
					1,
					1,
					240
				};
				soundBegin[] =
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			reloadTime = 0.079999998;
			recoil = "RH_M4_Recoil_Auto";
			recoilProne = "RH_M4_RecoilProneAuto";
			dispersion = 0.0020000001;
			minRange = 0;
			minRangeProbab = 0.80000001;
			midRange = 40;
			midRangeProbab = 0.69999999;
			maxRange = 80;
			maxRangeProbab = 0.050000001;
			aiRateOfFire = 1e-006;
		};
	};
	class RH_M16A2: RH_m4
	{
		author = "RobertHammer";
		model = "\RH_M4\RH_m16a2.p3d";
		displayName = "M16A2";
		picture = "\RH_m4\inv\m16a2_x_ca.paa";
		inertia = 0.5;
		recoil = "RH_recoil_M16";
		initSpeed = 0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
			class CowsSlot
			{
			};
			class MuzzleSlot
			{
			};
			class PointerSlot
			{
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[] =
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] =
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					0.56,
					1,
					10
				};
				closure2[] =
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					0.56,
					1,
					10
				};
				soundClosure[] =
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] =
				{
					"nev_mod_overrides\sound\m16a1_s1.wss",
					1,
					1,
					1200
				};
				begin2[] =
				{
					"nev_mod_overrides\sound\m16a1_s2.wss",
					1,
					1,
					1200
				};
				begin3[] =
				{
					"nev_mod_overrides\sound\m16a1_s3.wss",
					1,
					1,
					1200
				};
				begin4[] =
				{
					"nev_mod_overrides\sound\m16a1_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[] =
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] =
				{
					"RH_m4\sound\m16_sd1",
					1,
					1,
					240
				};
				begin2[] =
				{
					"RH_m4\sound\m16_sd2",
					1,
					1,
					240
				};
				soundBegin[] =
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			reloadtime = 0.071000002;
			recoil = "RH_M4_Recoil";
			recoilProne = "RH_M4_RecoilProne";
			dispersion = 0.0017500001;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 225;
			midRangeProbab = 0.69999999;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
		class Burst: Mode_Burst
		{
			sounds[] =
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] =
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					0.56,
					1,
					10
				};
				closure2[] =
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					0.56,
					1,
					10
				};
				soundClosure[] =
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] =
				{
					"nev_mod_overrides\sound\m16a1_s1.wss",
					1,
					1,
					1200
				};
				begin2[] =
				{
					"nev_mod_overrides\sound\m16a1_s2.wss",
					1,
					1,
					1200
				};
				begin3[] =
				{
					"nev_mod_overrides\sound\m16a1_s3.wss",
					1,
					1,
					1200
				};
				begin4[] =
				{
					"nev_mod_overrides\sound\m16a1_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[] =
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] =
				{
					"RH_m4\sound\m16_sd1",
					1,
					1,
					240
				};
				begin2[] =
				{
					"RH_m4\sound\m16_sd2",
					1,
					1,
					240
				};
				soundBegin[] =
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			reloadtime = 0.071000002;
			recoil = "RH_M4_Recoil_Auto";
			recoilProne = "RH_M4_RecoilProneAuto";
			dispersion = 0.0017500001;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 0;
			minRangeProbab = 0.80000001;
			midRange = 60;
			midRangeProbab = 0.69999999;
			maxRange = 120;
			maxRangeProbab = 0.050000001;
		};
	};
	class RH_M4_ris: RH_m4 {
		author = "RobertHammer";
		handAnim[] = {"OFP2_ManSkeleton","\RH_m4\anim\RH_M4vg.rtm"};
		model = "\RH_M4\RH_m4_ris.p3d";
		displayName = "M4 RIS";
		picture = "\RH_m4\inv\m4_ris_x_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class PointerSlot: SlotInfo {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] = {"RH_m4covers_s","RH_m4covers_f"};
				iconPosition[] = {0.30000001,0.34999999};
				iconScale = 0.25;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinpoint = "center";
			};
			class MuzzleSlot: MuzzleSlot {};
			class asdg_FrontSideRail_M4: asdg_FrontSideRail {
				iconPosition[] = {0.30000001,0.34999999};
				iconScale = 0.25;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinpoint = "center";
			};
			class CowsSlot: asdg_OpticRail1913 {
				iconPosition[] = {0.5,0.2};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "center";
			};
			class UnderBarrelSlot: asdg_UnderSlot {
				linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
				iconPicture = "\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinpoint = "Bottom";
				iconPosition[] = {0.27000001,0.69999999};
				iconScale = 0.25;
			};
		};
	};
	class RH_M16A4: RH_M4_ris
	{
		author = "RobertHammer";
		model = "\RH_M4\RH_m16a4.p3d";
		displayName = "M16A4";
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\RH_m4\anim\RH_M16vg.rtm"
		};
		picture = "\RH_m4\inv\m16a4_x_ca.paa";
		inertia = 0.5;
		recoil = "RH_recoil_M16";
		initSpeed = 0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
			class PointerSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] =
				{
					"RH_m16covers_s",
					"RH_m16covers_f"
				};
				iconPosition[] = {0.30000001,0.40000001};
				iconScale = 0.25;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinpoint = "center";
			};
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[] = {-0.050000001,0.40000001};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] = {0.5,0.25};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "center";
			};
			class asdg_FrontSideRail_M4: asdg_FrontSideRail
			{
				iconPosition[] = {0.30000001,0.40000001};
				iconScale = 0.25;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinpoint = "center";
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] = {0.30000001,0.69999999};
				iconScale = 0.25;
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[] =
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] =
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					0.56,
					1,
					10
				};
				closure2[] =
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					0.56,
					1,
					10
				};
				soundClosure[] =
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] =
				{
					"nev_mod_overrides\sound\m16_s1.wss",
					1,
					1,
					1200
				};
				begin2[] =
				{
					"nev_mod_overrides\sound\m16_s2.wss",
					1,
					1,
					1200
				};
				begin3[] =
				{
					"nev_mod_overrides\sound\m16_s3.wss",
					1,
					1,
					1200
				};
				begin4[] =
				{
					"nev_mod_overrides\sound\m16_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[] =
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] =
				{
					"RH_m4\sound\m16_sd1",
					1,
					1,
					240
				};
				begin2[] =
				{
					"RH_m4\sound\m16_sd2",
					1,
					1,
					240
				};
				soundBegin[] =
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			reloadtime = 0.071000002;
			recoil = "RH_M4_Recoil";
			recoilProne = "RH_M4_RecoilProne";
			dispersion = 0.0017500001;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 225;
			midRangeProbab = 0.69999999;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
		class Burst: Mode_Burst
		{
			sounds[] =
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] =
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					0.56,
					1,
					10
				};
				closure2[] =
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					0.56,
					1,
					10
				};
				soundClosure[] =
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] =
				{
					"nev_mod_overrides\sound\m16_s1.wss",
					1,
					1,
					1200
				};
				begin2[] =
				{
					"nev_mod_overrides\sound\m16_s2.wss",
					1,
					1,
					1200
				};
				begin3[] =
				{
					"nev_mod_overrides\sound\m16_s3.wss",
					1,
					1,
					1200
				};
				begin4[] =
				{
					"nev_mod_overrides\sound\m16_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[] =
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] =
				{
					"RH_m4\sound\m16_sd1",
					1,
					1,
					240
				};
				begin2[] =
				{
					"RH_m4\sound\m16_sd2",
					1,
					1,
					240
				};
				soundBegin[] =
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			reloadtime = 0.071000002;
			recoil = "RH_M4_Recoil_Auto";
			recoilProne = "RH_M4_RecoilProneAuto";
			dispersion = 0.0017500001;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 0;
			minRangeProbab = 0.80000001;
			midRange = 60;
			midRangeProbab = 0.69999999;
			maxRange = 120;
			maxRangeProbab = 0.050000001;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] =
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] =
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					0.56,
					1,
					10
				};
				closure2[] =
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					0.56,
					1,
					10
				};
				soundClosure[] =
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] =
				{
					"nev_mod_overrides\sound\m16_s1.wss",
					1,
					1,
					1200
				};
				begin2[] =
				{
					"nev_mod_overrides\sound\m16_s2.wss",
					1,
					1,
					1200
				};
				begin3[] =
				{
					"nev_mod_overrides\sound\m16_s3.wss",
					1,
					1,
					1200
				};
				begin4[] =
				{
					"nev_mod_overrides\sound\m16_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[] =
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] =
				{
					"RH_m4\sound\m16_sd1",
					1,
					1,
					240
				};
				begin2[] =
				{
					"RH_m4\sound\m16_sd2",
					1,
					1,
					240
				};
				soundBegin[] =
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			reloadTime = 0.071000002;
			recoil = "RH_M4_Recoil_Auto";
			recoilProne = "RH_M4_RecoilProneAuto";
			dispersion = 0.0017500001;
			minRange = 0;
			minRangeProbab = 0.89999998;
			midRange = 15;
			midRangeProbab = 0.69999999;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
		};
	};
};