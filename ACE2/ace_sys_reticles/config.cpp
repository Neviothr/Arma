class CfgPatches
{
	class ace_sys_reticles
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.62;
		requiredAddons[]=
		{
			"Extended_EventHandlers",
			"ace_main",
			"ace_c_weapon",
			"ace_m_wep_optics"
		};
		version="1.14.0.597";
		author[]=
		{
			"q1184"
		};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class ace_sys_reticles
		{
			list[]=
			{
				"ace_sys_reticles"
			};
		};
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_sys_reticles
	{
		clientinit="call ('\x\ace\addons\sys_reticles\XEH_preInit.sqf' call SLX_XEH_COMPILE)";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_sys_reticles
	{
		clientInit="call ('\x\ace\addons\sys_reticles\XEH_postClientInit.sqf' call SLX_XEH_COMPILE)";
	};
};
class Extended_FiredBIS_EventHandlers
{
	class CAManBase
	{
		class ace_sys_reticles
		{
			clientFiredBisPlayer="if (ace_sys_reticles_sightup) then {_this call ace_sys_reticles_fnc_fired}";
		};
	};
};
class RscTitles
{
	class ACE_RscOpticsReticle
	{
		idd=-1;
		onLoad="with uiNameSpace do { ACE_RscOpticsReticle = _this select 0 }";
		movingEnable=1;
		duration=10000;
		fadeIn=0;
		fadeOut=0;
		controls[]=
		{
			"ACE_RscReticle",
			"ACE_RscRing"
		};
		class ACE_RscReticle
		{
			idc=1;
			type=0;
			style=48;
			movingEnable=1;
			font="TahomaB";
			colorBackground[]={0,0,0,0};
			colorText[]={0,0,0,0};
			colorBorder[]={1,1,1,1};
			border=1;
			text="";
			sizeEx=0.029999999;
			x=0;
			y="SafeZoneY";
			w=1;
			h="SafeZoneH";
			size=0.034000002;
			shadow=0;
			fixedWidth=1;
			lineSpacing=0;
		};
		class ACE_RscRing: ACE_RscReticle
		{
			idc=2;
			style=48;
			x=0;
			y="SafeZoneY";
			w="SafeZoneH";
			h="SafeZoneH";
		};
	};
};
class cfgVehicles
{
	class Tank;
	class Tracked_APC;
	class BMP2_Base: Tracked_APC
	{
		ace_sys_reticles_gunneroptics=1;
		ace_sys_reticles_gunnersight="BPK_2_42";
	};
	class BMP2_HQ_Base: BMP2_Base
	{
		ace_sys_reticles_gunneroptics=0;
	};
	class BMP2_Ambul_Base: BMP2_Base
	{
		ace_sys_reticles_gunneroptics=0;
	};
	class Wheeled_APC;
	class GAZ_Vodnik_HMG: Wheeled_APC
	{
		ace_sys_reticles_gunneroptics=1;
		ace_sys_reticles_gunnersight="BPK_2_42";
	};
	class GAZ_Vodnik: GAZ_Vodnik_HMG
	{
		ace_sys_reticles_gunneroptics=0;
	};
	class BTR90_Base: Wheeled_APC
	{
		ace_sys_reticles_gunneroptics=1;
		ace_sys_reticles_gunnersight="BPK_2_42";
	};
	class BTR90_HQ: BTR90_Base
	{
		ace_sys_reticles_gunneroptics=0;
	};
	class T55_Base: Tank
	{
		ace_sys_reticles_gunneroptics=1;
		ace_sys_reticles_gunnersight="TSh_2B_32";
	};
};
class ACE_Config
{
	class cfgOpticsReticles
	{
		class PSO_1
		{
			ace_sys_reticles_texring="x\ace\addons\sys_reticles\data\scopering_pso_noedges.paa";
			ace_sys_reticles_texreticle="x\ace\addons\sys_reticles\data\PSO-1White.paa";
			ace_sys_reticles_texmap=0.5;
			ace_sys_reticles_texsize=512;
			ace_sys_reticles_pxmil=7;
			ace_sys_reticles_ringscale=1;
			ace_sys_reticles_illum=1;
			ace_sys_reticles_illumcolor[]={0.75300002,0,0,1};
		};
		class PSO_1_1AK: PSO_1
		{
			ace_sys_reticles_texreticle="x\ace\addons\sys_reticles\data\PSO-1-1AKWhite.paa";
		};
		class PSO_1_1: PSO_1
		{
			ace_sys_reticles_texreticle="x\ace\addons\sys_reticles\data\PSO-1-1White.paa";
		};
		class Groza: PSO_1
		{
			ace_sys_reticles_texreticle="x\ace\addons\sys_reticles\data\GscopeWhite.paa";
		};
		class PSO_3
		{
			ace_sys_reticles_texring="x\ace\addons\sys_reticles\data\scopering_pso_noedges.paa";
			ace_sys_reticles_texreticle="x\ace\addons\sys_reticles\data\PSO-3-1White.paa";
			ace_sys_reticles_texmap=1;
			ace_sys_reticles_texsize=1024;
			ace_sys_reticles_pxmil=14;
			ace_sys_reticles_ringscale=1;
			ace_sys_reticles_illum=1;
			ace_sys_reticles_illumcolor[]={0.75300002,0,0,1};
		};
		class 1P29
		{
			ace_sys_reticles_texring="x\ace\addons\sys_reticles\data\scopering_pso_noedges.paa";
			ace_sys_reticles_texreticle="x\ace\addons\sys_reticles\data\1p29White.paa";
			ace_sys_reticles_texmap=1;
			ace_sys_reticles_texsize=512;
			ace_sys_reticles_pxmil=7;
			ace_sys_reticles_ringscale=1;
			ace_sys_reticles_illum=1;
			ace_sys_reticles_illumcolor[]={0.77600002,1,0.54900002,1};
		};
		class 1P78
		{
			ace_sys_reticles_texring="x\ace\addons\sys_reticles\data\scopering_pso_noedges.paa";
			ace_sys_reticles_texreticle="x\ace\addons\sys_reticles\data\1p78.paa";
			ace_sys_reticles_texmap="2.5/3.563";
			ace_sys_reticles_texsize=1024;
			ace_sys_reticles_pxmil=8;
			ace_sys_reticles_ringscale=1;
		};
		class PGO7V
		{
			ace_sys_reticles_texring="x\ace\addons\sys_reticles\data\scopering_pso_noedges.paa";
			ace_sys_reticles_texreticle="x\ace\addons\sys_reticles\data\pgo7vWhite.paa";
			ace_sys_reticles_texmap=1;
			ace_sys_reticles_texsize=1024;
			ace_sys_reticles_pxmil=14;
			ace_sys_reticles_ringscale=1;
			ace_sys_reticles_illum=1;
			ace_sys_reticles_illumcolor[]={0.75300002,0,0,1};
		};
		class ACOG_TA31F
		{
			ace_sys_reticles_texring="x\ace\addons\sys_reticles\data\scopering_pso_noedges.paa";
			ace_sys_reticles_texreticle="x\ace\addons\sys_reticles\data\TA31RCOFull.paa";
			ace_sys_reticles_texmap=1;
			ace_sys_reticles_texsize=1024;
			ace_sys_reticles_pxmil=7;
			ace_sys_reticles_ringscale=1.135;
		};
		class ACOG_TA01NSN: ACOG_TA31F
		{
			ace_sys_reticles_texreticle="x\ace\addons\sys_reticles\data\TA01NSN.paa";
		};
		class ACOG_TA31DOC: ACOG_TA31F
		{
			ace_sys_reticles_texreticle="x\ace\addons\sys_reticles\data\TA31DOC.paa";
		};
		class ACOG_TA31ECOS: ACOG_TA31F
		{
			ace_sys_reticles_texreticle="x\ace\addons\sys_reticles\data\TA31ECOS.paa";
		};
		class Specter_4x
		{
			ace_sys_reticles_texring="x\ace\addons\sys_reticles\data\scopering_pso_noedges.paa";
			ace_sys_reticles_texreticle="x\ace\addons\sys_reticles\data\SpecterDR_4x.paa";
			ace_sys_reticles_texmap=1;
			ace_sys_reticles_texsize=1024;
			ace_sys_reticles_pxmil=7;
			ace_sys_reticles_ringscale=1.135;
		};
		class ACOG_762x39
		{
			ace_sys_reticles_texring="x\ace\addons\sys_reticles\data\scopering_pso_noedges.paa";
			ace_sys_reticles_texreticle="x\ace\addons\sys_reticles\data\TA01NSN_762x39.paa";
			ace_sys_reticles_texmap=1;
			ace_sys_reticles_texsize=1024;
			ace_sys_reticles_pxmil=7;
			ace_sys_reticles_ringscale=1.135;
		};
		class M145
		{
			ace_sys_reticles_texring="x\ace\addons\sys_reticles\data\scopering_pso_noedges.paa";
			ace_sys_reticles_texreticle="x\ace\addons\sys_reticles\data\m145White.paa";
			ace_sys_reticles_texmap=1;
			ace_sys_reticles_texsize=1024;
			ace_sys_reticles_pxmil=7;
			ace_sys_reticles_ringscale=1.02;
			ace_sys_reticles_illum=1;
			ace_sys_reticles_illumcolor[]={1,0.93000001,0.35299999,1};
		};
		class G36
		{
			ace_sys_reticles_texring="x\ace\addons\sys_reticles\data\scopering_pso_noedges.paa";
			ace_sys_reticles_texreticle="x\ace\addons\sys_reticles\data\g36_cross_centered.paa";
			ace_sys_reticles_texmap=1;
			ace_sys_reticles_texsize=1024;
			ace_sys_reticles_pxmil=5.25;
			ace_sys_reticles_ringscale=1;
		};
		class MK4CQT
		{
			ace_sys_reticles_texring="x\ace\addons\sys_reticles\data\scopering_pso_noedges.paa";
			ace_sys_reticles_texreticle="x\ace\addons\sys_reticles\data\ret_MK4.paa";
			ace_sys_reticles_texmap=1;
			ace_sys_reticles_texsize=1024;
			ace_sys_reticles_pxmil=7;
			ace_sys_reticles_ringscale=1;
			ace_sys_reticles_illum=1;
			ace_sys_reticles_illumcolor[]={0.75300002,0,0,1};
		};
		class Leu10xMildot
		{
			ace_sys_reticles_texring="x\ace\addons\sys_reticles\data\scopering_pso_noedges.paa";
			ace_sys_reticles_texreticle="x\ace\addons\m_wep_optics\t\10x_rdot.paa";
			ace_sys_reticles_texmap=1;
			ace_sys_reticles_texsize=1024;
			ace_sys_reticles_pxmil=17;
			ace_sys_reticles_ringscale=0.861;
		};
		class Leu875xMildot
		{
			ace_sys_reticles_texring="x\ace\addons\sys_reticles\data\scopering_pso_noedges.paa";
			ace_sys_reticles_texreticle="x\ace\addons\m_wep_optics\t\8x_irdot.paa";
			ace_sys_reticles_texmap=1;
			ace_sys_reticles_texsize=1024;
			ace_sys_reticles_pxmil=15;
			ace_sys_reticles_ringscale=0.912;
		};
		class Leu14xMildot
		{
			ace_sys_reticles_texring="x\ace\addons\sys_reticles\data\scopering_pso_noedges.paa";
			ace_sys_reticles_texreticle="x\ace\addons\sys_reticles\data\14x_odot_0.paa";
			ace_sys_reticles_texreticle_lod1="x\ace\addons\sys_reticles\data\14x_odot_1.paa";
			ace_sys_reticles_texmap=1;
			ace_sys_reticles_texsize=1024;
			ace_sys_reticles_pxmil=24;
			ace_sys_reticles_ringscale=0.815;
			ace_sys_reticles_fov0=0.020984;
			ace_sys_reticles_fov_switchlod=0.033;
			ace_sys_reticles_scalereticle=1;
		};
		class Leu3510xMildot
		{
			ace_sys_reticles_texring="x\ace\addons\sys_reticles\data\scopering_pso_noedges.paa";
			ace_sys_reticles_texreticle="x\ace\addons\m_wep_optics\t\10x_rdot.paa";
			ace_sys_reticles_texreticle_lod1="x\ace\addons\sys_reticles\data\10x_rdot_1.paa";
			ace_sys_reticles_texmap=1;
			ace_sys_reticles_texsize=1024;
			ace_sys_reticles_pxmil=17;
			ace_sys_reticles_ringscale=0.861;
			ace_sys_reticles_fov0=0.029624;
			ace_sys_reticles_fov_switchlod=0.045000002;
			ace_sys_reticles_scalereticle=1;
		};
		class Leu39xTMR
		{
			ace_sys_reticles_texring="x\ace\addons\sys_reticles\data\scopering_pso_noedges.paa";
			ace_sys_reticles_texreticle="x\ace\addons\sys_reticles\data\39x_TMR_0.paa";
			ace_sys_reticles_texreticle_lod1="x\ace\addons\sys_reticles\data\39x_TMR_1.paa";
			ace_sys_reticles_texmap=1;
			ace_sys_reticles_texsize=1024;
			ace_sys_reticles_pxmil=15;
			ace_sys_reticles_ringscale=0.912;
			ace_sys_reticles_fov0=0.033574;
			ace_sys_reticles_fov_switchlod=0.056400001;
			ace_sys_reticles_illum=1;
			ace_sys_reticles_illumcolor[]={0.74119997,0,0,1};
			ace_sys_reticles_scalereticle=1;
		};
		class SB312x
		{
			ace_sys_reticles_texring="x\ace\addons\sys_reticles\data\scopering_pso_noedges.paa";
			ace_sys_reticles_texreticle="x\ace\addons\sys_reticles\data\12x_gen2_0.paa";
			ace_sys_reticles_texreticle_lod1="x\ace\addons\sys_reticles\data\12x_gen2_1.paa";
			ace_sys_reticles_texmap=1;
			ace_sys_reticles_texsize=1024;
			ace_sys_reticles_pxmil=20;
			ace_sys_reticles_ringscale=0.861;
			ace_sys_reticles_fov0=0.025599999;
			ace_sys_reticles_fov_switchlod=0.0405;
			ace_sys_reticles_illum=1;
			ace_sys_reticles_illumcolor[]={0.74119997,0,0,1};
			ace_sys_reticles_scalereticle=1;
		};
		class ZF24
		{
			ace_sys_reticles_texring="x\ace\addons\sys_reticles\data\scopering_pso_noedges.paa";
			ace_sys_reticles_texreticle="x\ace\addons\sys_reticles\data\ZF24.paa";
			ace_sys_reticles_texmap=1;
			ace_sys_reticles_texsize=1024;
			ace_sys_reticles_pxmil=7;
			ace_sys_reticles_ringscale=0.91000003;
			ace_sys_reticles_fov0=0.050000001;
			ace_sys_reticles_scalereticle=1;
		};
		class SB_CQB_4X
		{
			ace_sys_reticles_texring="x\ace\addons\sys_reticles\data\scopering_pso_noedges.paa";
			ace_sys_reticles_texreticle="x\ace\addons\sys_reticles\data\zenith_cqb_4x.paa";
			ace_sys_reticles_texmap=1;
			ace_sys_reticles_texsize=1024;
			ace_sys_reticles_pxmil=7;
			ace_sys_reticles_ringscale=1.03;
			ace_sys_reticles_fov0=0.071944997;
			ace_sys_reticles_scalereticle=1;
		};
		class Colt4x
		{
			ace_sys_reticles_texring="x\ace\addons\sys_reticles\data\scopering_pso_noedges.paa";
			ace_sys_reticles_texreticle="x\ace\addons\m_wep_optics\t\cscope_ret.paa";
			ace_sys_reticles_texmap=1;
			ace_sys_reticles_texsize=1024;
			ace_sys_reticles_pxmil=7;
			ace_sys_reticles_ringscale=1;
		};
		class ANPVS4
		{
			ace_sys_reticles_texring="x\ace\addons\sys_reticles\data\scopering_pso_noedges.paa";
			ace_sys_reticles_texreticle="x\ace\addons\sys_reticles\data\anpvs4_ca.paa";
			ace_sys_reticles_texmap=1;
			ace_sys_reticles_texsize=1024;
			ace_sys_reticles_pxmil=7;
			ace_sys_reticles_ringscale=0.89999998;
		};
		class NSPU
		{
			ace_sys_reticles_texring="x\ace\addons\sys_reticles\data\scopering_pso_noedges.paa";
			ace_sys_reticles_texreticle="x\ace\addons\sys_reticles\data\nspu.paa";
			ace_sys_reticles_texmap=1;
			ace_sys_reticles_texsize=1024;
			ace_sys_reticles_pxmil=6;
			ace_sys_reticles_ringscale=0.89999998;
		};
		class 1PN100: NSPU
		{
			ace_sys_reticles_texreticle="x\ace\addons\sys_reticles\data\1pn100.paa";
			ace_sys_reticles_texmap=0.75;
		};
		class PKP
		{
			ace_sys_reticles_texring="x\ace\addons\sys_reticles\data\scopering_pso_noedges.paa";
			ace_sys_reticles_texreticle="x\ace\addons\sys_reticles\data\pecheneg_w.paa";
			ace_sys_reticles_texmap=1;
			ace_sys_reticles_texsize=1024;
			ace_sys_reticles_pxmil=7;
			ace_sys_reticles_ringscale=0.89999998;
			ace_sys_reticles_illum=1;
			ace_sys_reticles_illumcolor[]={0.75300002,0,0,1};
		};
		class Eotech4X
		{
			ace_sys_reticles_texring="x\ace\addons\sys_reticles\data\scopering_pso_noedges.paa";
			ace_sys_reticles_texreticle="x\ace\addons\sys_reticles\data\eotech_ret.paa";
			ace_sys_reticles_texmap=0.125;
			ace_sys_reticles_texsize=1024;
			ace_sys_reticles_pxmil=7;
			ace_sys_reticles_ringscale=1.03;
		};
		class SUSAT
		{
			ace_sys_reticles_texring="x\ace\addons\sys_reticles\data\scopering_pso_noedges.paa";
			ace_sys_reticles_texreticle="x\ace\addons\sys_reticles\data\trilux.paa";
			ace_sys_reticles_texmap=0.80000001;
			ace_sys_reticles_texsize=1024;
			ace_sys_reticles_pxmil=7;
			ace_sys_reticles_ringscale=1.135;
		};
	};
	class cfgVehicleOpticsReticles
	{
		class BPK_2_42
		{
			ace_sys_reticles_texstatic="\x\ace\addons\m_veh_optics\data\bpk242_mark_w.paa";
			ace_sys_reticles_texreticle="\x\ace\addons\m_veh_optics\data\bpk242_w.paa";
			ace_sys_reticles_texreticle_n="\x\ace\addons\m_veh_optics\data\bpk242_n_w.paa";
			ace_sys_reticles_texmap=1;
			ace_sys_reticles_texsize=1024;
			ace_sys_reticles_pxmil=9;
			ace_sys_reticles_fov0=0.05689;
			ace_sys_reticles_illum=1;
			ace_sys_reticles_illumcolor[]={0.74119997,0,0,1};
			ace_sys_reticles_checkweapon="2A42";
		};
		class TSh_2B_32
		{
			ace_sys_reticles_texstatic="\x\ace\addons\m_veh_optics\data\t55_mark_w.paa";
			ace_sys_reticles_texreticle="\x\ace\addons\m_veh_optics\data\t55_ret_w.paa";
			ace_sys_reticles_texreticle_n="\x\ace\addons\m_veh_optics\data\t55_n_w.paa";
			ace_sys_reticles_texmap=1;
			ace_sys_reticles_texsize=1024;
			ace_sys_reticles_pxmil=10;
			ace_sys_reticles_fov0=0.051199999;
			ace_sys_reticles_illum=1;
			ace_sys_reticles_illumcolor[]={0.74119997,0,0,1};
			ace_sys_reticles_checkweapon="D10";
			ace_sys_reticles_horizshift=-0.30000001;
		};
	};
};
class PreloadTextures
{
	class ACE_Config
	{
		class cfgOpticsReticles
		{
			class PSO_1
			{
				ace_sys_reticles_texring="*";
				ace_sys_reticles_texreticle="*";
			};
			class PSO_1_1AK: PSO_1
			{
				ace_sys_reticles_texreticle="*";
			};
			class PSO_1_1: PSO_1
			{
				ace_sys_reticles_texreticle="*";
			};
			class Groza: PSO_1
			{
				ace_sys_reticles_texreticle="*";
			};
			class PSO_3
			{
				ace_sys_reticles_texring="*";
				ace_sys_reticles_texreticle="*";
			};
			class 1P29
			{
				ace_sys_reticles_texring="*";
				ace_sys_reticles_texreticle="*";
			};
			class 1P78
			{
				ace_sys_reticles_texring="*";
				ace_sys_reticles_texreticle="*";
			};
			class ACOG_TA31F
			{
				ace_sys_reticles_texring="*";
				ace_sys_reticles_texreticle="*";
			};
			class ACOG_TA01NSN: ACOG_TA31F
			{
			};
			class ACOG_TA31DOC: ACOG_TA31F
			{
			};
			class ACOG_TA31ECOS: ACOG_TA31F
			{
			};
			class Specter_4x
			{
				ace_sys_reticles_texring="*";
				ace_sys_reticles_texreticle="*";
			};
			class ACOG_762x39
			{
				ace_sys_reticles_texring="*";
				ace_sys_reticles_texreticle="*";
			};
			class M145
			{
				ace_sys_reticles_texring="*";
				ace_sys_reticles_texreticle="*";
			};
			class G36
			{
				ace_sys_reticles_texring="*";
				ace_sys_reticles_texreticle="*";
			};
			class MK4CQT
			{
				ace_sys_reticles_texring="*";
				ace_sys_reticles_texreticle="*";
			};
			class Leu10xMildot
			{
				ace_sys_reticles_texring="*";
				ace_sys_reticles_texreticle="*";
			};
			class Leu875xMildot
			{
				ace_sys_reticles_texring="*";
				ace_sys_reticles_texreticle="*";
			};
			class Leu14xMildot
			{
				ace_sys_reticles_texring="*";
				ace_sys_reticles_texreticle="*";
				ace_sys_reticles_texreticle_lod1="*";
			};
			class Leu3510xMildot
			{
				ace_sys_reticles_texring="*";
				ace_sys_reticles_texreticle="*";
				ace_sys_reticles_texreticle_lod1="*";
			};
			class Leu39xTMR
			{
				ace_sys_reticles_texring="*";
				ace_sys_reticles_texreticle="*";
				ace_sys_reticles_texreticle_lod1="*";
			};
			class SB312x
			{
				ace_sys_reticles_texring="*";
				ace_sys_reticles_texreticle="*";
				ace_sys_reticles_texreticle_lod1="*";
			};
			class ZF24
			{
				ace_sys_reticles_texring="*";
				ace_sys_reticles_texreticle="*";
			};
			class SB_CQB_4X
			{
				ace_sys_reticles_texring="*";
				ace_sys_reticles_texreticle="*";
			};
			class Colt4x
			{
				ace_sys_reticles_texring="*";
				ace_sys_reticles_texreticle="*";
			};
			class ANPVS4
			{
				ace_sys_reticles_texring="*";
				ace_sys_reticles_texreticle="*";
			};
			class NSPU
			{
				ace_sys_reticles_texring="*";
				ace_sys_reticles_texreticle="*";
			};
			class PKP
			{
				ace_sys_reticles_texring="*";
				ace_sys_reticles_texreticle="*";
			};
			class Eotech4X
			{
				ace_sys_reticles_texring="*";
				ace_sys_reticles_texreticle="*";
			};
			class SUSAT
			{
				ace_sys_reticles_texring="*";
				ace_sys_reticles_texreticle="*";
			};
		};
		class cfgVehicleOpticsReticles
		{
			class BPK_2_42
			{
				ace_sys_reticles_texstatic="*";
				ace_sys_reticles_texreticle="*";
				ace_sys_reticles_texreticle_n="*";
			};
			class TSh_2B_32
			{
				ace_sys_reticles_texstatic="*";
				ace_sys_reticles_texreticle="*";
				ace_sys_reticles_texreticle_n="*";
			};
		};
	};
};
