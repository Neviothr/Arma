class CfgPatches
{
	class asr_ai3_cfgweapons
	{
		addonRootClass="A3_Weapons_F";
		units[]={};
		weapons[]={};
		ammo[]={};
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Mark",
			"A3_Weapons_F_Exp"
		};
		requiredVersion=1.64;
		author="Robalo";
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class asr_ai3_cfgweapons
		{
			list[]=
			{
				"asr_ai3_cfgweapons"
			};
		};
	};
};
class Mode_SemiAuto
{
	aiRateOfFire=0;
	aiRateOfFireDistance=250;
	aiRateOfFireDispersion=2;
	minRange=0;
	minRangeProbab=0.89999998;
	midRange=150;
	midRangeProbab=0.5;
	maxRange=700;
	maxRangeProbab=0.0099999998;
	aiDispersionCoefX=15;
	aiDispersionCoefY=20;
};
class Mode_Burst: Mode_SemiAuto
{
	aiRateOfFire=0;
	aiRateOfFireDistance=100;
	aiRateOfFireDispersion=2;
	minRange=5;
	minRangeProbab=0.80000001;
	midRange=10;
	midRangeProbab=0.69999999;
	maxRange=20;
	maxRangeProbab="random 0.2";
	aiDispersionCoefX=15;
	aiDispersionCoefY=20;
};
class Mode_FullAuto: Mode_SemiAuto
{
	aiRateOfFire=0;
	aiRateOfFireDistance=50;
	aiRateOfFireDispersion=1;
	minRange=0;
	minRangeProbab=0.89999998;
	midRange=1;
	midRangeProbab=0.80000001;
	maxRange=5;
	maxRangeProbab=0.1;
	aiDispersionCoefX=15;
	aiDispersionCoefY=20;
};
class CfgWeapons
{
	class Default
	{
		aiRateOfFire=0;
		aiRateOfFireDistance=250;
		aiRateOfFireDispersion=2;
		minRange=0;
		minRangeProbab=0.89999998;
		midRange=150;
		midRangeProbab=0.5;
		maxRange=700;
		maxRangeProbab=0.0099999998;
		aiDispersionCoefX=15;
		aiDispersionCoefY=20;
	};
	class RifleCore;
	class MGunCore;
	class CannonCore;
	class MGun;
	class LMG_RCWS: MGun
	{
		aiDispersionCoefX=5;
		aiDispersionCoefY=10;
	};
	class M134_minigun: MGunCore
	{
		class LowROF: Mode_FullAuto
		{
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
	};
	class autocannon_Base_F: CannonCore
	{
		class player;
		class close: player
		{
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
	};
	class gatling_30mm: CannonCore
	{
		class LowROF: Mode_FullAuto
		{
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
	};
	class cannon_120mm: CannonCore
	{
		class player;
		class close: player
		{
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
	};
	class Gatling_30mm_Plane_CAS_01_F: CannonCore
	{
		class LowROF: Mode_FullAuto
		{
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
	};
	class Cannon_30mm_Plane_CAS_02_F: CannonCore
	{
		class LowROF: Mode_FullAuto
		{
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
	};
	class cannon_125mm: CannonCore
	{
		class player;
		class close: player
		{
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
	};
	class cannon_105mm: CannonCore
	{
		class player;
		class close: player
		{
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
	};
	class GrenadeLauncher: Default
	{
		aiRateOfFire=0;
		aiRateOfFireDistance=50;
		aiRateOfFireDispersion=2;
		minRange=60;
		minRangeProbab=0.60000002;
		midRange=150;
		midRangeProbab=0.69999999;
		maxRange=400;
		maxRangeProbab=0.0099999998;
		aiDispersionCoefX=15;
		aiDispersionCoefY=20;
	};
	class UGL_F: GrenadeLauncher
	{
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=2;
			minRange=60;
			minRangeProbab=0.60000002;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.0099999998;
		};
	};
	class Rifle: RifleCore
	{
		aiDispersionCoefX=15;
		aiDispersionCoefY=20;
	};
	class Rifle_Base_F: Rifle
	{
	};
	class Rifle_Short_Base_F: Rifle_Base_F
	{
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
	};
	class HandGunBase: Rifle
	{
		aiRateOfFire=0;
		aiRateOfFireDistance=100;
		aiRateOfFireDispersion=2;
		minRange=0;
		minRangeProbab=0.2;
		midRange=40;
		midRangeProbab=0.1;
		maxRange=90;
		maxRangeProbab=0.0099999998;
	};
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		aiRateOfFire=0;
		aiRateOfFireDistance=100;
		aiRateOfFireDispersion=2;
		minRange=0;
		minRangeProbab=0.2;
		midRange=40;
		midRangeProbab=0.1;
		maxRange=90;
		maxRangeProbab=0.0099999998;
	};
	class Throw: GrenadeLauncher
	{
		class ThrowMuzzle: GrenadeLauncher
		{
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class HandGrenadeMuzzle: ThrowMuzzle
		{
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=50;
			midRangeProbab=0.89999998;
		};
		class MiniGrenadeMuzzle: ThrowMuzzle
		{
			minRange=15;
			minRangeProbab=0.80000001;
			midRange=50;
			midRangeProbab=0.89999998;
		};
	};
	class DMR_01_base_F: Rifle_Long_Base_F
	{
		modes[]=
		{
			"ASR_SemiAuto",
			"FullAuto",
			"ASR_AI_Single_optics1",
			"ASR_AI_Single_optics2"
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=300;
			aiRateOfFireDispersion=2;
			minRange=15;
			minRangeProbab=0.80000001;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=1;
			midRangeProbab=0.80000001;
			maxRange=5;
			maxRangeProbab=0.1;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer=0;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=15;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_close2: ASR_AI_Burst_close
		{
			burst=5;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			aiRateOfFire=0;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=3;
			minRange=15;
			minRangeProbab=0.89999998;
			midRange=300;
			midRangeProbab=0.80000001;
			maxRange=1000;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=10;
			aiDispersionCoefY=15;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer=0;
			requiredOpticType=2;
			aiRateOfFire=0;
			aiRateOfFireDistance=1200;
			aiRateOfFireDispersion=4;
			minRange=15;
			minRangeProbab=0.69999999;
			midRange=500;
			midRangeProbab=0.80000001;
			maxRange=1600;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=250;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
		};
		aiDispersionCoefX=15;
		aiDispersionCoefY=20;
	};
	class EBR_base_F: Rifle_Long_Base_F
	{
		modes[]=
		{
			"ASR_SemiAuto",
			"FullAuto",
			"ASR_AI_Single_optics1",
			"ASR_AI_Single_optics2"
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=300;
			aiRateOfFireDispersion=2;
			minRange=15;
			minRangeProbab=0.80000001;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=1;
			midRangeProbab=0.80000001;
			maxRange=5;
			maxRangeProbab=0.1;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer=0;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=15;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_close2: ASR_AI_Burst_close
		{
			burst=5;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			aiRateOfFire=0;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=3;
			minRange=15;
			minRangeProbab=0.89999998;
			midRange=300;
			midRangeProbab=0.80000001;
			maxRange=1000;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=10;
			aiDispersionCoefY=15;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer=0;
			requiredOpticType=2;
			aiRateOfFire=0;
			aiRateOfFireDistance=1200;
			aiRateOfFireDispersion=4;
			minRange=15;
			minRangeProbab=0.69999999;
			midRange=500;
			midRangeProbab=0.80000001;
			maxRange=1600;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=250;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
		};
		aiDispersionCoefX=15;
		aiDispersionCoefY=20;
	};
	class GM6_base_F: Rifle_Long_Base_F
	{
		modes[]=
		{
			"Single",
			"ASR_AI_Single_optics1",
			"ASR_AI_Single_optics2",
			"ASR_AI_Single_far_optics2"
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=300;
			minRange=1;
			minRangeProbab=0.40000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			aiRateOfFire=0;
			aiRateOfFireDistance=500;
			minRange=150;
			minRangeProbab=0.2;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=1500;
			maxRangeProbab=0.2;
			aiDispersionCoefX=10;
			aiDispersionCoefY=15;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer=0;
			requiredOpticType=2;
			aiRateOfFire=0;
			aiRateOfFireDistance=1000;
			minRange=250;
			minRangeProbab=0.2;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.40000001;
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
		class ASR_AI_Single_far_optics2: Single
		{
			showToPlayer=0;
			requiredOpticType=2;
			aiRateOfFire=0;
			aiRateOfFireDistance=1200;
			minRange=500;
			minRangeProbab=0.30000001;
			midRange=1200;
			midRangeProbab=0.69999999;
			maxRange=2500;
			maxRangeProbab=0.1;
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
	};
	class LRR_base_F: Rifle_Long_Base_F
	{
		modes[]=
		{
			"Single",
			"ASR_AI_Single_optics1",
			"ASR_AI_Single_optics2",
			"ASR_AI_Single_far_optics2"
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=300;
			minRange=1;
			minRangeProbab=0.40000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			aiRateOfFire=0;
			aiRateOfFireDistance=500;
			minRange=150;
			minRangeProbab=0.2;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=1500;
			maxRangeProbab=0.2;
			aiDispersionCoefX=10;
			aiDispersionCoefY=15;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer=0;
			requiredOpticType=2;
			aiRateOfFire=0;
			aiRateOfFireDistance=1000;
			minRange=250;
			minRangeProbab=0.2;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.40000001;
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
		class ASR_AI_Single_far_optics2: Single
		{
			showToPlayer=0;
			requiredOpticType=2;
			aiRateOfFire=0;
			aiRateOfFireDistance=1200;
			minRange=500;
			minRangeProbab=0.30000001;
			midRange=1200;
			midRangeProbab=0.69999999;
			maxRange=2500;
			maxRangeProbab=0.1;
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
	};
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		modes[]=
		{
			"manual",
			"ASR_AI_Burst_close",
			"ASR_AI_Burst_short",
			"ASR_AI_Burst_medium",
			"ASR_AI_Burst_far",
			"ASR_AI_Burst_far_optic1",
			"ASR_AI_Burst_far_optic2"
		};
		class manual: Mode_FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=40;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class ASR_AI_Burst_close: manual
		{
			showToPlayer=0;
			burst=8;
			aiRateOfFire=0;
			aiRateOfFireDistance=250;
			aiRateOfFireDispersion=2;
			minRange=30;
			minRangeProbab=0.80000001;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_short: ASR_AI_Burst_close
		{
			burst=7;
			aiRateOfFire=0;
			aiRateOfFireDistance=450;
			aiRateOfFireDispersion=2;
			minRange=80;
			minRangeProbab=0.80000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_medium: ASR_AI_Burst_close
		{
			burst=6;
			aiRateOfFire=0;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=3;
			minRange=200;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=800;
			maxRangeProbab="random 0.1";
		};
		class ASR_AI_Burst_far: ASR_AI_Burst_close
		{
			burst=6;
			aiRateOfFire=0;
			aiRateOfFireDistance=1000;
			aiRateOfFireDispersion=5;
			minRange=400;
			minRangeProbab=0.69999999;
			midRange=500;
			midRangeProbab=0.2;
			maxRange=800;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_far_optic1: ASR_AI_Burst_close
		{
			requiredOpticType=1;
			burst=4;
			aiRateOfFire=0;
			aiRateOfFireDistance=800;
			aiRateOfFireDispersion=4;
			minRange=400;
			minRangeProbab=0.80000001;
			midRange=600;
			midRangeProbab=0.69999999;
			maxRange=1200;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=10;
			aiDispersionCoefY=15;
		};
		class ASR_AI_Burst_far_optic2: ASR_AI_Burst_close
		{
			requiredOpticType=2;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=800;
			aiRateOfFireDispersion=4;
			minRange=400;
			minRangeProbab=0.80000001;
			midRange=600;
			midRangeProbab=0.69999999;
			maxRange=1200;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
		class ASR_AI_Burst_far_optic2_MMG: ASR_AI_Burst_far_optic2
		{
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=1200;
			aiRateOfFireDispersion=5;
			minRange=800;
			minRangeProbab=0.80000001;
			midRange=1000;
			midRangeProbab=0.69999999;
			maxRange=1800;
			maxRangeProbab="random 0.2";
		};
		class Single: manual
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=300;
			aiRateOfFireDispersion=1;
			minRange=200;
			minRangeProbab=0.1;
			midRange=300;
			midRangeProbab=0.1;
			maxRange=500;
			maxRangeProbab=0.1;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		aiDispersionCoefX=15;
		aiDispersionCoefY=20;
	};
	class LMG_Zafir_F: Rifle_Long_Base_F
	{
		modes[]=
		{
			"FullAuto",
			"Single",
			"ASR_AI_Burst_close",
			"ASR_AI_Burst_short",
			"ASR_AI_Burst_medium",
			"ASR_AI_Burst_far",
			"ASR_AI_Burst_far_optic1",
			"ASR_AI_Burst_far_optic2"
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=40;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer=0;
			burst=8;
			aiRateOfFire=0;
			aiRateOfFireDistance=250;
			aiRateOfFireDispersion=2;
			minRange=30;
			minRangeProbab=0.80000001;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_short: ASR_AI_Burst_close
		{
			burst=7;
			aiRateOfFire=0;
			aiRateOfFireDistance=450;
			aiRateOfFireDispersion=2;
			minRange=80;
			minRangeProbab=0.80000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_medium: ASR_AI_Burst_close
		{
			burst=6;
			aiRateOfFire=0;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=3;
			minRange=200;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=800;
			maxRangeProbab="random 0.1";
		};
		class ASR_AI_Burst_far: ASR_AI_Burst_close
		{
			burst=6;
			aiRateOfFire=0;
			aiRateOfFireDistance=1000;
			aiRateOfFireDispersion=5;
			minRange=400;
			minRangeProbab=0.69999999;
			midRange=500;
			midRangeProbab=0.2;
			maxRange=800;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_far_optic1: ASR_AI_Burst_close
		{
			requiredOpticType=1;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=800;
			aiRateOfFireDispersion=4;
			minRange=400;
			minRangeProbab=0.80000001;
			midRange=600;
			midRangeProbab=0.69999999;
			maxRange=1200;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=10;
			aiDispersionCoefY=15;
		};
		class ASR_AI_Burst_far_optic2: ASR_AI_Burst_close
		{
			requiredOpticType=2;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=800;
			aiRateOfFireDispersion=4;
			minRange=400;
			minRangeProbab=0.80000001;
			midRange=600;
			midRangeProbab=0.69999999;
			maxRange=1200;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
		class ASR_AI_Burst_far_optic2_MMG: ASR_AI_Burst_far_optic2
		{
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=1200;
			aiRateOfFireDispersion=5;
			minRange=800;
			minRangeProbab=0.80000001;
			midRange=1000;
			midRangeProbab=0.69999999;
			maxRange=1800;
			maxRangeProbab="random 0.2";
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=300;
			aiRateOfFireDispersion=1;
			minRange=200;
			minRangeProbab=0.1;
			midRange=300;
			midRangeProbab=0.1;
			maxRange=500;
			maxRangeProbab=0.1;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		aiDispersionCoefX=15;
		aiDispersionCoefY=20;
	};
	class hgun_ACPC2_F: Pistol_Base_F
	{
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.2;
			midRange=40;
			midRangeProbab=0.1;
			maxRange=90;
			maxRangeProbab=0.0099999998;
		};
	};
	class hgun_P07_F: Pistol_Base_F
	{
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.2;
			midRange=40;
			midRangeProbab=0.1;
			maxRange=90;
			maxRangeProbab=0.0099999998;
		};
	};
	class hgun_Pistol_heavy_01_F: Pistol_Base_F
	{
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.2;
			midRange=40;
			midRangeProbab=0.1;
			maxRange=90;
			maxRangeProbab=0.0099999998;
		};
	};
	class hgun_Pistol_heavy_02_F: Pistol_Base_F
	{
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.2;
			midRange=40;
			midRangeProbab=0.1;
			maxRange=90;
			maxRangeProbab=0.0099999998;
		};
	};
	class hgun_Rook40_F: Pistol_Base_F
	{
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.2;
			midRange=40;
			midRangeProbab=0.1;
			maxRange=90;
			maxRangeProbab=0.0099999998;
		};
	};
	class arifle_Katiba_Base_F: Rifle_Base_F
	{
		modes[]=
		{
			"Single",
			"FullAuto",
			"ASR_AI_Burst_close",
			"ASR_AI_Burst_close2",
			"ASR_AI_Single_optics1",
			"ASR_AI_Single_optics2"
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=300;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=1;
			midRangeProbab=0.80000001;
			maxRange=5;
			maxRangeProbab=0.1;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer=0;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_close2: ASR_AI_Burst_close
		{
			burst=5;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_far: FullAuto
		{
			showToPlayer=0;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=5;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.30000001;
			maxRange=800;
			maxRangeProbab="random 0.1";
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			aiRateOfFire=0;
			aiRateOfFireDistance=450;
			aiRateOfFireDispersion=3;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.60000002;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=10;
			aiDispersionCoefY=15;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer=0;
			requiredOpticType=2;
			aiRateOfFire=0;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=4;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.60000002;
			maxRange=1100;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
		class ASR_Single: Single
		{
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=250;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
		};
		class ASR_Burst3: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
			showToPlayer=1;
			burst=5;
			displayName="$STR_DN_MODE_BURST";
			textureType="burst";
			soundBurst=0;
		};
		class ASR_Burst2: ASR_Burst3
		{
			burst=5;
			textureType="dual";
		};
		aiDispersionCoefX=15;
		aiDispersionCoefY=20;
		class EGLM: UGL_F
		{
		};
	};
	class arifle_Katiba_C_F: arifle_Katiba_Base_F
	{
		modes[]=
		{
			"Single",
			"FullAuto",
			"ASR_AI_Burst_close",
			"ASR_AI_Burst_close2",
			"ASR_AI_Single_optics1",
			"ASR_AI_Single_optics2"
		};
		class Single: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=250;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=600;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class FullAuto: FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=1;
			midRangeProbab=0.80000001;
			maxRange=5;
			maxRangeProbab=0.1;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer=0;
			burst=7;
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_close2: ASR_AI_Burst_close
		{
			burst=7;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_far: FullAuto
		{
			showToPlayer=0;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=5;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=400;
			midRangeProbab=0.30000001;
			maxRange=600;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			aiRateOfFire=0;
			aiRateOfFireDistance=450;
			aiRateOfFireDispersion=3;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=200;
			midRangeProbab=0.60000002;
			maxRange=700;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=10;
			aiDispersionCoefY=15;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer=0;
			requiredOpticType=2;
			aiRateOfFire=0;
			aiRateOfFireDistance=450;
			aiRateOfFireDispersion=3;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=200;
			midRangeProbab=0.60000002;
			maxRange=700;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
		class ASR_Single: Single
		{
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=200;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=600;
			maxRangeProbab=0.0099999998;
		};
		class ASR_Burst3: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
			showToPlayer=1;
			burst=5;
			displayName="$STR_DN_MODE_BURST";
			textureType="burst";
			soundBurst=0;
		};
		class ASR_Burst2: ASR_Burst3
		{
			burst=5;
		};
		aiDispersionCoefX=15;
		aiDispersionCoefY=20;
	};
	class mk20_base_F: Rifle_Base_F
	{
		modes[]=
		{
			"Single",
			"FullAuto",
			"ASR_AI_Burst_close",
			"ASR_AI_Burst_close2",
			"ASR_AI_Single_optics1",
			"ASR_AI_Single_optics2"
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=300;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=1;
			midRangeProbab=0.80000001;
			maxRange=5;
			maxRangeProbab=0.1;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer=0;
			burst=7;
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_close2: ASR_AI_Burst_close
		{
			burst=7;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_far: FullAuto
		{
			showToPlayer=0;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=5;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.30000001;
			maxRange=800;
			maxRangeProbab="random 0.1";
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			aiRateOfFire=0;
			aiRateOfFireDistance=450;
			aiRateOfFireDispersion=3;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.60000002;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=10;
			aiDispersionCoefY=15;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer=0;
			requiredOpticType=2;
			aiRateOfFire=0;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=4;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.60000002;
			maxRange=1100;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
		class ASR_Single: Single
		{
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=250;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
		};
		class ASR_Burst3: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
			showToPlayer=1;
			burst=5;
			displayName="$STR_DN_MODE_BURST";
			textureType="burst";
			soundBurst=0;
		};
		class ASR_Burst2: ASR_Burst3
		{
			burst=5;
			textureType="dual";
		};
		aiDispersionCoefX=15;
		aiDispersionCoefY=20;
	};
	class arifle_Mk20C_F: mk20_base_F
	{
		modes[]=
		{
			"Single",
			"FullAuto",
			"ASR_AI_Burst_close",
			"ASR_AI_Burst_close2",
			"ASR_AI_Single_optics1",
			"ASR_AI_Single_optics2"
		};
		class Single: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=250;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=600;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class FullAuto: FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=1;
			midRangeProbab=0.80000001;
			maxRange=5;
			maxRangeProbab=0.1;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer=0;
			burst=7;
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_close2: ASR_AI_Burst_close
		{
			burst=7;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_far: FullAuto
		{
			showToPlayer=0;
			burst=7;
			aiRateOfFire=0;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=5;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=400;
			midRangeProbab=0.30000001;
			maxRange=600;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			aiRateOfFire=0;
			aiRateOfFireDistance=450;
			aiRateOfFireDispersion=3;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=200;
			midRangeProbab=0.60000002;
			maxRange=700;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=10;
			aiDispersionCoefY=15;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer=0;
			requiredOpticType=2;
			aiRateOfFire=0;
			aiRateOfFireDistance=450;
			aiRateOfFireDispersion=3;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=200;
			midRangeProbab=0.60000002;
			maxRange=700;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
		class ASR_Single: Single
		{
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=200;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=600;
			maxRangeProbab=0.0099999998;
		};
		class ASR_Burst3: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
			showToPlayer=1;
			burst=5;
			displayName="$STR_DN_MODE_BURST";
			textureType="burst";
			soundBurst=0;
		};
		class ASR_Burst2: ASR_Burst3
		{
			burst=5;
		};
	};
	class arifle_MX_Base_F: Rifle_Base_F
	{
		modes[]=
		{
			"Single",
			"FullAuto",
			"ASR_AI_Burst_close",
			"ASR_AI_Burst_close2",
			"ASR_AI_Single_optics1",
			"ASR_AI_Single_optics2"
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=300;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=1;
			midRangeProbab=0.80000001;
			maxRange=5;
			maxRangeProbab=0.1;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer=0;
			burst=7;
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_close2: ASR_AI_Burst_close
		{
			burst=7;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_far: FullAuto
		{
			showToPlayer=0;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=5;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.30000001;
			maxRange=800;
			maxRangeProbab="random 0.1";
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			aiRateOfFire=0;
			aiRateOfFireDistance=450;
			aiRateOfFireDispersion=3;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.60000002;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=10;
			aiDispersionCoefY=15;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer=0;
			requiredOpticType=2;
			aiRateOfFire=0;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=4;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.60000002;
			maxRange=1100;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
		class ASR_Single: Single
		{
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=250;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
		};
		class ASR_Burst3: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
			showToPlayer=1;
			burst=5;
			displayName="$STR_DN_MODE_BURST";
			textureType="burst";
			soundBurst=0;
		};
		class ASR_Burst2: ASR_Burst3
		{
			burst=5;
			textureType="dual";
		};
		aiDispersionCoefX=15;
		aiDispersionCoefY=20;
	};
	class arifle_MXC_F: arifle_MX_Base_F
	{
		modes[]=
		{
			"Single",
			"FullAuto",
			"ASR_AI_Burst_close",
			"ASR_AI_Burst_close2",
			"ASR_AI_Single_optics1",
			"ASR_AI_Single_optics2"
		};
		class Single: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=250;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=600;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class FullAuto: FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=1;
			midRangeProbab=0.80000001;
			maxRange=5;
			maxRangeProbab=0.1;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer=0;
			burst=7;
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_close2: ASR_AI_Burst_close
		{
			burst=7;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_far: FullAuto
		{
			showToPlayer=0;
			burst=7;
			aiRateOfFire=0;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=5;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=400;
			midRangeProbab=0.30000001;
			maxRange=600;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			aiRateOfFire=0;
			aiRateOfFireDistance=450;
			aiRateOfFireDispersion=3;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=200;
			midRangeProbab=0.60000002;
			maxRange=700;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=10;
			aiDispersionCoefY=15;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer=0;
			requiredOpticType=2;
			aiRateOfFire=0;
			aiRateOfFireDistance=450;
			aiRateOfFireDispersion=3;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=200;
			midRangeProbab=0.60000002;
			maxRange=700;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
		class ASR_Single: Single
		{
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=200;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=600;
			maxRangeProbab=0.0099999998;
		};
		class ASR_Burst3: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
			showToPlayer=1;
			burst=5;
			displayName="$STR_DN_MODE_BURST";
			textureType="burst";
			soundBurst=0;
		};
		class ASR_Burst2: ASR_Burst3
		{
			burst=5;
		};
		aiDispersionCoefX=15;
		aiDispersionCoefY=20;
	};
	class arifle_MX_SW_F: arifle_MX_Base_F
	{
		modes[]=
		{
			"Single",
			"manual",
			"ASR_AI_Burst_close",
			"ASR_AI_Burst_short",
			"ASR_AI_Burst_medium",
			"ASR_AI_Burst_far",
			"ASR_AI_Burst_far_optic1",
			"ASR_AI_Burst_far_optic2"
		};
		class manual: FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=40;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class ASR_AI_Burst_close: manual
		{
			showToPlayer=0;
			burst=8;
			aiRateOfFire=0;
			aiRateOfFireDistance=250;
			aiRateOfFireDispersion=2;
			minRange=30;
			minRangeProbab=0.80000001;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_short: ASR_AI_Burst_close
		{
			burst=7;
			aiRateOfFire=0;
			aiRateOfFireDistance=450;
			aiRateOfFireDispersion=2;
			minRange=80;
			minRangeProbab=0.80000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_medium: ASR_AI_Burst_close
		{
			burst=6;
			aiRateOfFire=0;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=3;
			minRange=200;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=800;
			maxRangeProbab="random 0.1";
		};
		class ASR_AI_Burst_far: ASR_AI_Burst_close
		{
			burst=6;
			aiRateOfFire=0;
			aiRateOfFireDistance=1000;
			aiRateOfFireDispersion=5;
			minRange=400;
			minRangeProbab=0.69999999;
			midRange=500;
			midRangeProbab=0.2;
			maxRange=800;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_far_optic1: ASR_AI_Burst_close
		{
			requiredOpticType=1;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=800;
			aiRateOfFireDispersion=4;
			minRange=400;
			minRangeProbab=0.80000001;
			midRange=600;
			midRangeProbab=0.69999999;
			maxRange=1200;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=10;
			aiDispersionCoefY=15;
		};
		class ASR_AI_Burst_far_optic2: ASR_AI_Burst_close
		{
			requiredOpticType=2;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=800;
			aiRateOfFireDispersion=4;
			minRange=400;
			minRangeProbab=0.80000001;
			midRange=600;
			midRangeProbab=0.69999999;
			maxRange=1200;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
		class ASR_AI_Burst_far_optic2_MMG: ASR_AI_Burst_far_optic2
		{
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=1200;
			aiRateOfFireDispersion=5;
			minRange=800;
			minRangeProbab=0.80000001;
			midRange=1000;
			midRangeProbab=0.69999999;
			maxRange=1800;
			maxRangeProbab="random 0.2";
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=300;
			aiRateOfFireDispersion=1;
			minRange=200;
			minRangeProbab=0.1;
			midRange=300;
			midRangeProbab=0.1;
			maxRange=500;
			maxRangeProbab=0.1;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		aiDispersionCoefX=15;
		aiDispersionCoefY=20;
	};
	class arifle_MXM_F: arifle_MX_Base_F
	{
		modes[]=
		{
			"ASR_SemiAuto",
			"FullAuto",
			"ASR_AI_Single_optics1",
			"ASR_AI_Single_optics2"
		};
		class Single: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=300;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class FullAuto: FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=1;
			midRangeProbab=0.80000001;
			maxRange=5;
			maxRangeProbab=0.1;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer=0;
			burst=7;
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_close2: ASR_AI_Burst_close
		{
			burst=7;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_far: FullAuto
		{
			showToPlayer=0;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=5;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.30000001;
			maxRange=800;
			maxRangeProbab="random 0.1";
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			aiRateOfFire=0;
			aiRateOfFireDistance=450;
			aiRateOfFireDispersion=3;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.60000002;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=10;
			aiDispersionCoefY=15;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer=0;
			requiredOpticType=2;
			aiRateOfFire=0;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=4;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.60000002;
			maxRange=1100;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
		class ASR_Single: Single
		{
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=250;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
		};
		class ASR_Burst3: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
			showToPlayer=1;
			burst=5;
			displayName="$STR_DN_MODE_BURST";
			textureType="burst";
			soundBurst=0;
		};
		class ASR_Burst2: ASR_Burst3
		{
			burst=5;
			textureType="dual";
		};
	};
	class SDAR_base_F: Rifle_Base_F
	{
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=200;
			aiRateOfFireDispersion=2;
			minRange=50;
			minRangeProbab=0.89999998;
			midRange=80;
			midRangeProbab=0.5;
			maxRange=300;
			maxRangeProbab=0.0099999998;
		};
		class Burst: Mode_Burst
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=30;
			midRangeProbab=0.5;
			maxRange=60;
			maxRangeProbab="random 0.2";
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=10;
			midRangeProbab=0.80000001;
			maxRange=20;
			maxRangeProbab="random 0.2";
		};
		aiDispersionCoefX=15;
		aiDispersionCoefY=20;
	};
	class Tavor_base_F: Rifle_Base_F
	{
		modes[]=
		{
			"Single",
			"FullAuto",
			"ASR_AI_Burst_close",
			"ASR_AI_Burst_close2",
			"ASR_AI_Single_optics1",
			"ASR_AI_Single_optics2"
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=250;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=600;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=1;
			midRangeProbab=0.80000001;
			maxRange=5;
			maxRangeProbab=0.1;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer=0;
			burst=7;
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_close2: ASR_AI_Burst_close
		{
			burst=7;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_far: FullAuto
		{
			showToPlayer=0;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=5;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=400;
			midRangeProbab=0.30000001;
			maxRange=600;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			aiRateOfFire=0;
			aiRateOfFireDistance=450;
			aiRateOfFireDispersion=3;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=200;
			midRangeProbab=0.60000002;
			maxRange=700;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=10;
			aiDispersionCoefY=15;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer=0;
			requiredOpticType=2;
			aiRateOfFire=0;
			aiRateOfFireDistance=450;
			aiRateOfFireDispersion=3;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=200;
			midRangeProbab=0.60000002;
			maxRange=700;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
		class ASR_Single: Single
		{
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=200;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=600;
			maxRangeProbab=0.0099999998;
		};
		class ASR_Burst3: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
			showToPlayer=1;
			burst=5;
			displayName="$STR_DN_MODE_BURST";
			textureType="burst";
			soundBurst=0;
		};
		class ASR_Burst2: ASR_Burst3
		{
			burst=5;
		};
		aiDispersionCoefX=15;
		aiDispersionCoefY=20;
	};
	class arifle_TRG21_F: Tavor_base_F
	{
		modes[]=
		{
			"Single",
			"FullAuto",
			"ASR_AI_Burst_close",
			"ASR_AI_Burst_close2",
			"ASR_AI_Single_optics1",
			"ASR_AI_Single_optics2"
		};
		class Single: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=300;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class FullAuto: FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=1;
			midRangeProbab=0.80000001;
			maxRange=5;
			maxRangeProbab=0.1;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer=0;
			burst=7;
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_close2: ASR_AI_Burst_close
		{
			burst=7;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_far: FullAuto
		{
			showToPlayer=0;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=5;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.30000001;
			maxRange=800;
			maxRangeProbab="random 0.1";
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			aiRateOfFire=0;
			aiRateOfFireDistance=450;
			aiRateOfFireDispersion=3;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.60000002;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=10;
			aiDispersionCoefY=15;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer=0;
			requiredOpticType=2;
			aiRateOfFire=0;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=4;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.60000002;
			maxRange=1100;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
		class ASR_Single: Single
		{
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=250;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
		};
		class ASR_Burst3: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
			showToPlayer=1;
			burst=5;
			displayName="$STR_DN_MODE_BURST";
			textureType="burst";
			soundBurst=0;
		};
		class ASR_Burst2: ASR_Burst3
		{
			burst=5;
			textureType="dual";
		};
	};
	class pdw2000_base_F: Rifle_Short_Base_F
	{
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=200;
			aiRateOfFireDispersion=2;
			minRange=50;
			minRangeProbab=0.89999998;
			midRange=80;
			midRangeProbab=0.5;
			maxRange=300;
			maxRangeProbab=0.0099999998;
		};
		class Burst: Mode_Burst
		{
			showToPlayer=0;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=30;
			midRangeProbab=0.5;
			maxRange=60;
			maxRangeProbab="random 0.2";
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=10;
			midRangeProbab=0.80000001;
			maxRange=20;
			maxRangeProbab="random 0.2";
		};
	};
	class SMG_01_Base: Rifle_Short_Base_F
	{
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=200;
			aiRateOfFireDispersion=2;
			minRange=50;
			minRangeProbab=0.89999998;
			midRange=80;
			midRangeProbab=0.5;
			maxRange=300;
			maxRangeProbab=0.0099999998;
		};
		class Burst: Mode_Burst
		{
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=30;
			midRangeProbab=0.5;
			maxRange=60;
			maxRangeProbab="random 0.2";
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=10;
			midRangeProbab=0.80000001;
			maxRange=20;
			maxRangeProbab="random 0.2";
		};
		aiDispersionCoefX=15;
		aiDispersionCoefY=20;
	};
	class SMG_02_base_F: Rifle_Base_F
	{
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=200;
			aiRateOfFireDispersion=2;
			minRange=50;
			minRangeProbab=0.89999998;
			midRange=80;
			midRangeProbab=0.5;
			maxRange=300;
			maxRangeProbab=0.0099999998;
		};
		class Burst: Mode_Burst
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=30;
			midRangeProbab=0.5;
			maxRange=60;
			maxRangeProbab="random 0.2";
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=10;
			midRangeProbab=0.80000001;
			maxRange=20;
			maxRangeProbab="random 0.2";
		};
		aiDispersionCoefX=15;
		aiDispersionCoefY=20;
	};
	class ItemCore;
	class InventoryMuzzleItem_Base_F;
	class muzzle_snds_H: ItemCore
	{
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			class AmmoCoef
			{
				visibleFire=0.2;
				audibleFire=0.1;
			};
		};
	};
	class muzzle_snds_L: muzzle_snds_H
	{
		class ItemInfo: ItemInfo
		{
			class AmmoCoef
			{
				visibleFire=0.2;
				audibleFire=0.1;
			};
		};
	};
	class muzzle_snds_M: muzzle_snds_H
	{
		class ItemInfo: ItemInfo
		{
			class AmmoCoef
			{
				visibleFire=0.2;
				audibleFire=0.1;
			};
		};
	};
	class muzzle_snds_B: muzzle_snds_H
	{
		class ItemInfo: ItemInfo
		{
			class AmmoCoef
			{
				visibleFire=0.2;
				audibleFire=0.1;
			};
		};
	};
	class muzzle_snds_H_MG: muzzle_snds_H
	{
		class ItemInfo: ItemInfo
		{
			class AmmoCoef
			{
				visibleFire=0.2;
				audibleFire=0.1;
			};
		};
	};
	class muzzle_snds_H_SW: muzzle_snds_H_MG
	{
		class ItemInfo: ItemInfo
		{
			class AmmoCoef
			{
				visibleFire=0.2;
				audibleFire=0.1;
			};
		};
	};
	class muzzle_snds_acp: muzzle_snds_H
	{
		class ItemInfo: ItemInfo
		{
			class AmmoCoef
			{
				visibleFire=0.2;
				audibleFire=0.1;
			};
		};
	};
	class muzzle_snds_338_black: ItemCore
	{
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			class AmmoCoef
			{
				visibleFire=0.2;
				audibleFire=0.1;
			};
		};
	};
	class muzzle_snds_93mmg: ItemCore
	{
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			class AmmoCoef
			{
				visibleFire=0.2;
				audibleFire=0.1;
			};
		};
	};
	class InventoryOpticsItem_Base_F;
	class optic_NVS: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
		};
	};
	class optic_tws: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
		};
	};
	class optic_tws_mg: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
		};
	};
	class DMR_02_base_F: Rifle_Long_Base_F
	{
		modes[]=
		{
			"Single",
			"ASR_AI_Single_optics1",
			"ASR_AI_Single_optics2"
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=300;
			minRange=1;
			minRangeProbab=0.40000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			aiRateOfFire=0;
			aiRateOfFireDistance=500;
			minRange=150;
			minRangeProbab=0.2;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=1500;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=10;
			aiDispersionCoefY=15;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer=0;
			requiredOpticType=2;
			aiRateOfFire=0;
			aiRateOfFireDistance=1000;
			minRange=250;
			minRangeProbab=0.2;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=2200;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
		aiDispersionCoefX=15;
		aiDispersionCoefY=20;
	};
	class DMR_03_base_F: Rifle_Long_Base_F
	{
		modes[]=
		{
			"ASR_SemiAuto",
			"FullAuto",
			"ASR_AI_Single_optics1",
			"ASR_AI_Single_optics2"
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=300;
			aiRateOfFireDispersion=2;
			minRange=15;
			minRangeProbab=0.80000001;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=1;
			midRangeProbab=0.80000001;
			maxRange=5;
			maxRangeProbab=0.1;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer=0;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=15;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_close2: ASR_AI_Burst_close
		{
			burst=5;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			aiRateOfFire=0;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=3;
			minRange=15;
			minRangeProbab=0.89999998;
			midRange=300;
			midRangeProbab=0.80000001;
			maxRange=1000;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=10;
			aiDispersionCoefY=15;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer=0;
			requiredOpticType=2;
			aiRateOfFire=0;
			aiRateOfFireDistance=1200;
			aiRateOfFireDispersion=4;
			minRange=15;
			minRangeProbab=0.69999999;
			midRange=500;
			midRangeProbab=0.80000001;
			maxRange=1600;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=250;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
		};
		aiDispersionCoefX=15;
		aiDispersionCoefY=20;
	};
	class DMR_04_base_F: Rifle_Long_Base_F
	{
		aiDispersionCoefX=15;
		aiDispersionCoefY=20;
	};
	class DMR_05_base_F: Rifle_Long_Base_F
	{
		aiDispersionCoefX=15;
		aiDispersionCoefY=20;
	};
	class DMR_06_base_F: Rifle_Long_Base_F
	{
		modes[]=
		{
			"ASR_SemiAuto",
			"FullAuto",
			"ASR_AI_Single_optics1",
			"ASR_AI_Single_optics2"
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=300;
			aiRateOfFireDispersion=2;
			minRange=15;
			minRangeProbab=0.80000001;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=1;
			midRangeProbab=0.80000001;
			maxRange=5;
			maxRangeProbab=0.1;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer=0;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=15;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_close2: ASR_AI_Burst_close
		{
			burst=5;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			aiRateOfFire=0;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=3;
			minRange=15;
			minRangeProbab=0.89999998;
			midRange=300;
			midRangeProbab=0.80000001;
			maxRange=1000;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=10;
			aiDispersionCoefY=15;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer=0;
			requiredOpticType=2;
			aiRateOfFire=0;
			aiRateOfFireDistance=1200;
			aiRateOfFireDispersion=4;
			minRange=15;
			minRangeProbab=0.69999999;
			midRange=500;
			midRangeProbab=0.80000001;
			maxRange=1600;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=250;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
		};
		aiDispersionCoefX=15;
		aiDispersionCoefY=20;
	};
	class MMG_01_base_F: Rifle_Long_Base_F
	{
		aiDispersionCoefX=15;
		aiDispersionCoefY=20;
		modes[]=
		{
			"manual",
			"ASR_AI_Burst_close",
			"ASR_AI_Burst_short",
			"ASR_AI_Burst_medium",
			"ASR_AI_Burst_far",
			"ASR_AI_Burst_far_optic1",
			"ASR_AI_Burst_far_optic2",
			"ASR_AI_Burst_far_optic2_MMG"
		};
		class manual: Mode_FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=40;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class ASR_AI_Burst_close: manual
		{
			showToPlayer=0;
			burst=8;
			aiRateOfFire=0;
			aiRateOfFireDistance=250;
			aiRateOfFireDispersion=2;
			minRange=30;
			minRangeProbab=0.80000001;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_short: ASR_AI_Burst_close
		{
			burst=7;
			aiRateOfFire=0;
			aiRateOfFireDistance=450;
			aiRateOfFireDispersion=2;
			minRange=80;
			minRangeProbab=0.80000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_medium: ASR_AI_Burst_close
		{
			burst=6;
			aiRateOfFire=0;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=3;
			minRange=200;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=800;
			maxRangeProbab="random 0.1";
		};
		class ASR_AI_Burst_far: ASR_AI_Burst_close
		{
			burst=6;
			aiRateOfFire=0;
			aiRateOfFireDistance=1000;
			aiRateOfFireDispersion=5;
			minRange=400;
			minRangeProbab=0.69999999;
			midRange=500;
			midRangeProbab=0.2;
			maxRange=800;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_far_optic1: ASR_AI_Burst_close
		{
			requiredOpticType=1;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=800;
			aiRateOfFireDispersion=4;
			minRange=400;
			minRangeProbab=0.80000001;
			midRange=600;
			midRangeProbab=0.69999999;
			maxRange=1200;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=10;
			aiDispersionCoefY=15;
		};
		class ASR_AI_Burst_far_optic2: ASR_AI_Burst_close
		{
			requiredOpticType=2;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=800;
			aiRateOfFireDispersion=4;
			minRange=400;
			minRangeProbab=0.80000001;
			midRange=600;
			midRangeProbab=0.69999999;
			maxRange=1200;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
		class ASR_AI_Burst_far_optic2_MMG: ASR_AI_Burst_far_optic2
		{
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=1200;
			aiRateOfFireDispersion=5;
			minRange=800;
			minRangeProbab=0.80000001;
			midRange=1000;
			midRangeProbab=0.69999999;
			maxRange=1800;
			maxRangeProbab="random 0.2";
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=300;
			aiRateOfFireDispersion=1;
			minRange=200;
			minRangeProbab=0.1;
			midRange=300;
			midRangeProbab=0.1;
			maxRange=500;
			maxRangeProbab=0.1;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
	};
	class MMG_02_base_F: Rifle_Long_Base_F
	{
		aiDispersionCoefX=15;
		aiDispersionCoefY=20;
		modes[]=
		{
			"manual",
			"ASR_AI_Burst_close",
			"ASR_AI_Burst_short",
			"ASR_AI_Burst_medium",
			"ASR_AI_Burst_far",
			"ASR_AI_Burst_far_optic1",
			"ASR_AI_Burst_far_optic2",
			"ASR_AI_Burst_far_optic2_MMG"
		};
		class manual: Mode_FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=40;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class ASR_AI_Burst_close: manual
		{
			showToPlayer=0;
			burst=8;
			aiRateOfFire=0;
			aiRateOfFireDistance=250;
			aiRateOfFireDispersion=2;
			minRange=30;
			minRangeProbab=0.80000001;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_short: ASR_AI_Burst_close
		{
			burst=7;
			aiRateOfFire=0;
			aiRateOfFireDistance=450;
			aiRateOfFireDispersion=2;
			minRange=80;
			minRangeProbab=0.80000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_medium: ASR_AI_Burst_close
		{
			burst=6;
			aiRateOfFire=0;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=3;
			minRange=200;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=800;
			maxRangeProbab="random 0.1";
		};
		class ASR_AI_Burst_far: ASR_AI_Burst_close
		{
			burst=6;
			aiRateOfFire=0;
			aiRateOfFireDistance=1000;
			aiRateOfFireDispersion=5;
			minRange=400;
			minRangeProbab=0.69999999;
			midRange=500;
			midRangeProbab=0.2;
			maxRange=800;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_far_optic1: ASR_AI_Burst_close
		{
			requiredOpticType=1;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=800;
			aiRateOfFireDispersion=4;
			minRange=400;
			minRangeProbab=0.80000001;
			midRange=600;
			midRangeProbab=0.69999999;
			maxRange=1200;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=10;
			aiDispersionCoefY=15;
		};
		class ASR_AI_Burst_far_optic2: ASR_AI_Burst_close
		{
			requiredOpticType=2;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=800;
			aiRateOfFireDispersion=4;
			minRange=400;
			minRangeProbab=0.80000001;
			midRange=600;
			midRangeProbab=0.69999999;
			maxRange=1200;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
		class ASR_AI_Burst_far_optic2_MMG: ASR_AI_Burst_far_optic2
		{
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=1200;
			aiRateOfFireDispersion=5;
			minRange=800;
			minRangeProbab=0.80000001;
			midRange=1000;
			midRangeProbab=0.69999999;
			maxRange=1800;
			maxRangeProbab="random 0.2";
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=300;
			aiRateOfFireDispersion=1;
			minRange=200;
			minRangeProbab=0.1;
			midRange=300;
			midRangeProbab=0.1;
			maxRange=500;
			maxRangeProbab=0.1;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
	};
	class DMR_07_base_F: Rifle_Long_Base_F
	{
		modes[]=
		{
			"ASR_SemiAuto",
			"ASR_AI_Single_optics1",
			"ASR_AI_Single_optics2"
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=300;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=1;
			midRangeProbab=0.80000001;
			maxRange=5;
			maxRangeProbab=0.1;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer=0;
			burst=7;
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_close2: ASR_AI_Burst_close
		{
			burst=7;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_far: FullAuto
		{
			showToPlayer=0;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=5;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.30000001;
			maxRange=800;
			maxRangeProbab="random 0.1";
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			aiRateOfFire=0;
			aiRateOfFireDistance=450;
			aiRateOfFireDispersion=3;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.60000002;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=10;
			aiDispersionCoefY=15;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer=0;
			requiredOpticType=2;
			aiRateOfFire=0;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=4;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.60000002;
			maxRange=1100;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
		class ASR_Single: Single
		{
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=250;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
		};
		class ASR_Burst3: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
			showToPlayer=1;
			burst=5;
			displayName="$STR_DN_MODE_BURST";
			textureType="burst";
			soundBurst=0;
		};
		class ASR_Burst2: ASR_Burst3
		{
			burst=5;
			textureType="dual";
		};
		aiDispersionCoefX=15;
		aiDispersionCoefY=20;
	};
	class LMG_03_base_F: Rifle_Long_Base_F
	{
		aiDispersionCoefX=15;
		aiDispersionCoefY=20;
	};
	class hgun_Pistol_01_F: Pistol_Base_F
	{
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.2;
			midRange=40;
			midRangeProbab=0.1;
			maxRange=90;
			maxRangeProbab=0.0099999998;
		};
	};
	class arifle_AK12_base_F: Rifle_Base_F
	{
		modes[]=
		{
			"FullAuto",
			"Burst",
			"Single",
			"ASR_AI_Burst_close",
			"ASR_AI_Burst_close2",
			"ASR_AI_Burst_far",
			"ASR_AI_Single_optics1",
			"ASR_AI_Single_optics2"
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=300;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class Burst: Mode_Burst
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=1;
			midRangeProbab=0.80000001;
			maxRange=5;
			maxRangeProbab=0.1;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer=0;
			burst=7;
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_close2: ASR_AI_Burst_close
		{
			burst=7;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_far: FullAuto
		{
			showToPlayer=0;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=5;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.30000001;
			maxRange=800;
			maxRangeProbab="random 0.1";
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			aiRateOfFire=0;
			aiRateOfFireDistance=450;
			aiRateOfFireDispersion=3;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.60000002;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=10;
			aiDispersionCoefY=15;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer=0;
			requiredOpticType=2;
			aiRateOfFire=0;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=4;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.60000002;
			maxRange=1100;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
		class ASR_Single: Single
		{
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=250;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
		};
		class ASR_Burst3: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
			showToPlayer=1;
			burst=5;
			displayName="$STR_DN_MODE_BURST";
			textureType="burst";
			soundBurst=0;
		};
		class ASR_Burst2: ASR_Burst3
		{
			burst=5;
			textureType="dual";
		};
	};
	class arifle_AKM_base_F: Rifle_Base_F
	{
		modes[]=
		{
			"FullAuto",
			"Single",
			"ASR_AI_Burst_close",
			"ASR_AI_Burst_close2",
			"ASR_AI_Burst_far",
			"ASR_AI_Single_optics1",
			"ASR_AI_Single_optics2"
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=300;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=1;
			midRangeProbab=0.80000001;
			maxRange=5;
			maxRangeProbab=0.1;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer=0;
			burst=7;
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_close2: ASR_AI_Burst_close
		{
			burst=5;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_far: FullAuto
		{
			showToPlayer=0;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=5;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.30000001;
			maxRange=800;
			maxRangeProbab="random 0.1";
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			aiRateOfFire=0;
			aiRateOfFireDistance=450;
			aiRateOfFireDispersion=3;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.60000002;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=10;
			aiDispersionCoefY=15;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer=0;
			requiredOpticType=2;
			aiRateOfFire=0;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=4;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.60000002;
			maxRange=1100;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
		class ASR_Single: Single
		{
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=250;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
		};
		class ASR_Burst3: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
			showToPlayer=1;
			burst=5;
			displayName="$STR_DN_MODE_BURST";
			textureType="burst";
			soundBurst=0;
		};
		class ASR_Burst2: ASR_Burst3
		{
			burst=5;
			textureType="dual";
		};
	};
	class arifle_AKS_base_F: Rifle_Base_F
	{
		modes[]=
		{
			"FullAuto",
			"Single",
			"ASR_AI_Burst_close",
			"ASR_AI_Burst_close2",
			"ASR_AI_Burst_far",
			"ASR_AI_Single_optics1",
			"ASR_AI_Single_optics2"
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=250;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=600;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=1;
			midRangeProbab=0.80000001;
			maxRange=5;
			maxRangeProbab=0.1;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer=0;
			burst=7;
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_close2: ASR_AI_Burst_close
		{
			burst=7;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_far: FullAuto
		{
			showToPlayer=0;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=5;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=400;
			midRangeProbab=0.30000001;
			maxRange=600;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			aiRateOfFire=0;
			aiRateOfFireDistance=450;
			aiRateOfFireDispersion=3;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=200;
			midRangeProbab=0.60000002;
			maxRange=700;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=10;
			aiDispersionCoefY=15;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer=0;
			requiredOpticType=2;
			aiRateOfFire=0;
			aiRateOfFireDistance=450;
			aiRateOfFireDispersion=3;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=200;
			midRangeProbab=0.60000002;
			maxRange=700;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
		class ASR_Single: Single
		{
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=200;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=600;
			maxRangeProbab=0.0099999998;
		};
		class ASR_Burst3: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
			showToPlayer=1;
			burst=5;
			displayName="$STR_DN_MODE_BURST";
			textureType="burst";
			soundBurst=0;
		};
		class ASR_Burst2: ASR_Burst3
		{
			burst=5;
		};
	};
	class arifle_ARX_base_F: Rifle_Base_F
	{
		modes[]=
		{
			"Single",
			"FullAuto",
			"ASR_AI_Burst_close",
			"ASR_AI_Burst_close2",
			"ASR_AI_Single_optics1",
			"ASR_AI_Single_optics2"
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=300;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=1;
			midRangeProbab=0.80000001;
			maxRange=5;
			maxRangeProbab=0.1;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer=0;
			burst=7;
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_close2: ASR_AI_Burst_close
		{
			burst=7;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_far: FullAuto
		{
			showToPlayer=0;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=5;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.30000001;
			maxRange=800;
			maxRangeProbab="random 0.1";
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			aiRateOfFire=0;
			aiRateOfFireDistance=450;
			aiRateOfFireDispersion=3;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.60000002;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=10;
			aiDispersionCoefY=15;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer=0;
			requiredOpticType=2;
			aiRateOfFire=0;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=4;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.60000002;
			maxRange=1100;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
		class ASR_Single: Single
		{
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=250;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
		};
		class ASR_Burst3: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
			showToPlayer=1;
			burst=5;
			displayName="$STR_DN_MODE_BURST";
			textureType="burst";
			soundBurst=0;
		};
		class ASR_Burst2: ASR_Burst3
		{
			burst=5;
			textureType="dual";
		};
		class Secondary: Rifle_Base_F
		{
		};
		aiDispersionCoefX=15;
		aiDispersionCoefY=20;
	};
	class arifle_CTAR_base_F: Rifle_Base_F
	{
		modes[]=
		{
			"FullAuto",
			"Single",
			"ASR_AI_Burst_close",
			"ASR_AI_Burst_close2",
			"ASR_AI_Single_optics1",
			"ASR_AI_Single_optics2"
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=300;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=1;
			midRangeProbab=0.80000001;
			maxRange=5;
			maxRangeProbab=0.1;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer=0;
			burst=7;
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_close2: ASR_AI_Burst_close
		{
			burst=7;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_far: FullAuto
		{
			showToPlayer=0;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=5;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.30000001;
			maxRange=800;
			maxRangeProbab="random 0.1";
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			aiRateOfFire=0;
			aiRateOfFireDistance=450;
			aiRateOfFireDispersion=3;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.60000002;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=10;
			aiDispersionCoefY=15;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer=0;
			requiredOpticType=2;
			aiRateOfFire=0;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=4;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.60000002;
			maxRange=1100;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
		class ASR_Single: Single
		{
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=250;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
		};
		class ASR_Burst3: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
			showToPlayer=1;
			burst=5;
			displayName="$STR_DN_MODE_BURST";
			textureType="burst";
			soundBurst=0;
		};
		class ASR_Burst2: ASR_Burst3
		{
			burst=5;
			textureType="dual";
		};
	};
	class arifle_CTAR_GL_base_F: arifle_CTAR_base_F
	{
		aiDispersionCoefX=15;
		aiDispersionCoefY=20;
	};
	class arifle_CTARS_base_F: Rifle_Base_F
	{
		modes[]=
		{
			"FullAuto",
			"Single",
			"ASR_AI_Burst_close",
			"ASR_AI_Burst_short",
			"ASR_AI_Burst_medium",
			"ASR_AI_Burst_far",
			"ASR_AI_Burst_far_optic1",
			"ASR_AI_Burst_far_optic2"
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=40;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer=0;
			burst=8;
			aiRateOfFire=0;
			aiRateOfFireDistance=250;
			aiRateOfFireDispersion=2;
			minRange=30;
			minRangeProbab=0.80000001;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_short: ASR_AI_Burst_close
		{
			burst=7;
			aiRateOfFire=0;
			aiRateOfFireDistance=450;
			aiRateOfFireDispersion=2;
			minRange=80;
			minRangeProbab=0.80000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_medium: ASR_AI_Burst_close
		{
			burst=6;
			aiRateOfFire=0;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=3;
			minRange=200;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=800;
			maxRangeProbab="random 0.1";
		};
		class ASR_AI_Burst_far: ASR_AI_Burst_close
		{
			burst=6;
			aiRateOfFire=0;
			aiRateOfFireDistance=1000;
			aiRateOfFireDispersion=5;
			minRange=400;
			minRangeProbab=0.69999999;
			midRange=500;
			midRangeProbab=0.2;
			maxRange=800;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_far_optic1: ASR_AI_Burst_close
		{
			requiredOpticType=1;
			burst=4;
			aiRateOfFire=0;
			aiRateOfFireDistance=800;
			aiRateOfFireDispersion=4;
			minRange=400;
			minRangeProbab=0.80000001;
			midRange=600;
			midRangeProbab=0.69999999;
			maxRange=1200;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=10;
			aiDispersionCoefY=15;
		};
		class ASR_AI_Burst_far_optic2: ASR_AI_Burst_close
		{
			requiredOpticType=2;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=800;
			aiRateOfFireDispersion=4;
			minRange=400;
			minRangeProbab=0.80000001;
			midRange=600;
			midRangeProbab=0.69999999;
			maxRange=1200;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
		class ASR_AI_Burst_far_optic2_MMG: ASR_AI_Burst_far_optic2
		{
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=1200;
			aiRateOfFireDispersion=5;
			minRange=800;
			minRangeProbab=0.80000001;
			midRange=1000;
			midRangeProbab=0.69999999;
			maxRange=1800;
			maxRangeProbab="random 0.2";
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=300;
			aiRateOfFireDispersion=1;
			minRange=200;
			minRangeProbab=0.1;
			midRange=300;
			midRangeProbab=0.1;
			maxRange=500;
			maxRangeProbab=0.1;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
	};
	class arifle_SPAR_01_base_F: Rifle_Base_F
	{
		modes[]=
		{
			"Single",
			"FullAuto",
			"ASR_AI_Burst_close",
			"ASR_AI_Burst_close2",
			"ASR_AI_Single_optics1",
			"ASR_AI_Single_optics2"
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=300;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=1;
			midRangeProbab=0.80000001;
			maxRange=5;
			maxRangeProbab=0.1;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer=0;
			burst=7;
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_close2: ASR_AI_Burst_close
		{
			burst=7;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_far: FullAuto
		{
			showToPlayer=0;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=5;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.30000001;
			maxRange=800;
			maxRangeProbab="random 0.1";
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			aiRateOfFire=0;
			aiRateOfFireDistance=450;
			aiRateOfFireDispersion=3;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.60000002;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=10;
			aiDispersionCoefY=15;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer=0;
			requiredOpticType=2;
			aiRateOfFire=0;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=4;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.60000002;
			maxRange=1100;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
		class ASR_Single: Single
		{
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=250;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
		};
		class ASR_Burst3: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
			showToPlayer=1;
			burst=5;
			displayName="$STR_DN_MODE_BURST";
			textureType="burst";
			soundBurst=0;
		};
		class ASR_Burst2: ASR_Burst3
		{
			burst=5;
			textureType="dual";
		};
	};
	class arifle_SPAR_01_GL_base_F: arifle_SPAR_01_base_F
	{
		aiDispersionCoefX=15;
		aiDispersionCoefY=20;
	};
	class arifle_SPAR_02_base_F: Rifle_Base_F
	{
		modes[]=
		{
			"FullAuto",
			"Single",
			"ASR_AI_Burst_close",
			"ASR_AI_Burst_short",
			"ASR_AI_Burst_medium",
			"ASR_AI_Burst_far",
			"ASR_AI_Burst_far_optic1",
			"ASR_AI_Burst_far_optic2"
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=40;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer=0;
			burst=8;
			aiRateOfFire=0;
			aiRateOfFireDistance=250;
			aiRateOfFireDispersion=2;
			minRange=30;
			minRangeProbab=0.80000001;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_short: ASR_AI_Burst_close
		{
			burst=7;
			aiRateOfFire=0;
			aiRateOfFireDistance=450;
			aiRateOfFireDispersion=2;
			minRange=80;
			minRangeProbab=0.80000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_medium: ASR_AI_Burst_close
		{
			burst=6;
			aiRateOfFire=0;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=3;
			minRange=200;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=800;
			maxRangeProbab="random 0.1";
		};
		class ASR_AI_Burst_far: ASR_AI_Burst_close
		{
			burst=6;
			aiRateOfFire=0;
			aiRateOfFireDistance=1000;
			aiRateOfFireDispersion=5;
			minRange=400;
			minRangeProbab=0.69999999;
			midRange=500;
			midRangeProbab=0.2;
			maxRange=800;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_far_optic1: ASR_AI_Burst_close
		{
			requiredOpticType=1;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=800;
			aiRateOfFireDispersion=4;
			minRange=400;
			minRangeProbab=0.80000001;
			midRange=600;
			midRangeProbab=0.69999999;
			maxRange=1200;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=10;
			aiDispersionCoefY=15;
		};
		class ASR_AI_Burst_far_optic2: ASR_AI_Burst_close
		{
			requiredOpticType=2;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=800;
			aiRateOfFireDispersion=4;
			minRange=400;
			minRangeProbab=0.80000001;
			midRange=600;
			midRangeProbab=0.69999999;
			maxRange=1200;
			maxRangeProbab="random 0.2";
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
		class ASR_AI_Burst_far_optic2_MMG: ASR_AI_Burst_far_optic2
		{
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=1200;
			aiRateOfFireDispersion=5;
			minRange=800;
			minRangeProbab=0.80000001;
			midRange=1000;
			midRangeProbab=0.69999999;
			maxRange=1800;
			maxRangeProbab="random 0.2";
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=300;
			aiRateOfFireDispersion=1;
			minRange=200;
			minRangeProbab=0.1;
			midRange=300;
			midRangeProbab=0.1;
			maxRange=500;
			maxRangeProbab=0.1;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
	};
	class arifle_SPAR_03_base_F: Rifle_Base_F
	{
		modes[]=
		{
			"ASR_SemiAuto",
			"FullAuto",
			"ASR_AI_Single_optics1",
			"ASR_AI_Single_optics2"
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=300;
			aiRateOfFireDispersion=2;
			minRange=15;
			minRangeProbab=0.80000001;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=1;
			midRangeProbab=0.80000001;
			maxRange=5;
			maxRangeProbab=0.1;
			aiDispersionCoefX=15;
			aiDispersionCoefY=20;
		};
		class ASR_AI_Burst_close: FullAuto
		{
			showToPlayer=0;
			burst=5;
			aiRateOfFire=0;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=2;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=15;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Burst_close2: ASR_AI_Burst_close
		{
			burst=5;
			maxRangeProbab="random 0.2";
		};
		class ASR_AI_Single_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			aiRateOfFire=0;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=3;
			minRange=15;
			minRangeProbab=0.89999998;
			midRange=300;
			midRangeProbab=0.80000001;
			maxRange=1000;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=10;
			aiDispersionCoefY=15;
		};
		class ASR_AI_Single_optics2: Single
		{
			showToPlayer=0;
			requiredOpticType=2;
			aiRateOfFire=0;
			aiRateOfFireDistance=1200;
			aiRateOfFireDispersion=4;
			minRange=15;
			minRangeProbab=0.69999999;
			midRange=500;
			midRangeProbab=0.80000001;
			maxRange=1600;
			maxRangeProbab=0.0099999998;
			aiDispersionCoefX=5;
			aiDispersionCoefY=10;
		};
		class ASR_SemiAuto: Single
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=250;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
		};
	};
	class SMG_05_base_F: Rifle_Short_Base_F
	{
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=200;
			aiRateOfFireDispersion=2;
			minRange=50;
			minRangeProbab=0.89999998;
			midRange=80;
			midRangeProbab=0.5;
			maxRange=300;
			maxRangeProbab=0.0099999998;
		};
		class Burst: Mode_Burst
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=30;
			midRangeProbab=0.5;
			maxRange=60;
			maxRangeProbab="random 0.2";
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire=0;
			aiRateOfFireDistance=50;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=10;
			midRangeProbab=0.80000001;
			maxRange=20;
			maxRangeProbab="random 0.2";
		};
	};
};
