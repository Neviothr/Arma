/*
	configFile >> "CfgMagazines" >> currentMagazine player >> "ammo"
	vehicle player getCompatiblePylonMagazines 0;

	{
		configFile >> "CfgMagazines" >> _x >> "ammo"
	} forEach _arr

	_arr apply {getText (configFile >> "CfgMagazines" >> _x >> "ammo")}
*/

class CfgAmmo {
	class RocketCore;
	class RocketBase: RocketCore {};
	class R_PG32V_F: RocketBase {
		ENHANCED_LAUNCHER
	};
	class R_TBG32V_F: R_PG32V_F {
		ENHANCED_LAUNCHER
	};
	class MissileCore;
	class MissileBase: MissileCore {};
	class M_NLAW_AT_F: MissileBase {
		ENHANCED_LAUNCHER
	};
	class M_PG_AT: MissileBase {
		ENHANCED_LAUNCHER
	};
	class M_AT: M_PG_AT {
		ENHANCED_LAUNCHER
	};
	class M_Titan_AA: MissileBase {
		ENHANCED_LAUNCHER
	};
	class M_Titan_AT: MissileBase {
		ENHANCED_LAUNCHER
	};
	class M_Titan_AP: M_Titan_AT {
		ENHANCED_LAUNCHER
	};
	class M_Scalpel_AT: MissileBase {
		ENHANCED_LAUNCHER
	};
	class M_Scalpel_AT_hidden: M_Scalpel_AT {
		ENHANCED_LAUNCHER
	};
	class R_80mm_HE: RocketBase {
		ENHANCED_LAUNCHER
	};
	class M_Air_AA: MissileBase {
		ENHANCED_LAUNCHER
	};
	class M_Air_AA_MI02: M_Air_AA {
		ENHANCED_LAUNCHER
	};
	class M_Zephyr: M_Titan_AA {
		ENHANCED_LAUNCHER
	};
	class M_Titan_AA_long: M_Titan_AA {
		ENHANCED_LAUNCHER
	};
	class M_Air_AT: M_Titan_AT {
		ENHANCED_LAUNCHER
	};
	class M_Titan_AA_static: M_Titan_AA {
		ENHANCED_LAUNCHER
	};
	class R_PG7_F: RocketBase {
		ENHANCED_LAUNCHER
	};
	class M_Titan_AT_static: M_Titan_AT {
		ENHANCED_LAUNCHER
	};
	class Missile_AA_04_F: MissileBase {
		ENHANCED_LAUNCHER
	};
	class Rocket_04_HE_F: MissileBase {
		ENHANCED_LAUNCHER
	};
	class Missile_AGM_02_F: MissileBase {
		ENHANCED_LAUNCHER
	};
	class BombCore;
	class LaserBombCore: BombCore {};
	class Bomb_04_F: LaserBombCore {
		ENHANCED_LAUNCHER
	};
	class Rocket_04_AP_F: Rocket_04_HE_F {
		ENHANCED_LAUNCHER
	};
	class Bo_Mk82: BombCore {
		ENHANCED_LAUNCHER
	};
	class BombCluster_01_Ammo_F: Bomb_04_F {
		ENHANCED_LAUNCHER
	};
	class BombCluster_03_Ammo_F: BombCluster_01_Ammo_F {
		ENHANCED_LAUNCHER
	};
	class ammo_Missile_MediumRangeAABase: MissileBase {};
	class ammo_Missile_AMRAAM_D: ammo_Missile_MediumRangeAABase {
		ENHANCED_LAUNCHER
	};
	class ammo_Missile_ShortRangeAABase: MissileBase {};
	class ammo_Missile_BIM9X: ammo_Missile_ShortRangeAABase {
		ENHANCED_LAUNCHER
	};
	class Missile_AA_03_F: Missile_AA_04_F {
		ENHANCED_LAUNCHER
	};
	class Missile_AGM_01_F: Missile_AGM_02_F {
		ENHANCED_LAUNCHER
	};
	class Rocket_03_HE_F: Rocket_04_HE_F {
		ENHANCED_LAUNCHER
	};
	class Bomb_03_F: Bomb_04_F {
		ENHANCED_LAUNCHER
	};
	class Rocket_03_AP_F: Rocket_04_AP_F {
		ENHANCED_LAUNCHER
	};
	class BombCluster_02_Ammo_F: BombCluster_01_Ammo_F {
		ENHANCED_LAUNCHER
	};
	class ammo_Missile_AA_R73: ammo_Missile_ShortRangeAABase {
		ENHANCED_LAUNCHER
	};
	class ammo_Missile_AA_R77: ammo_Missile_MediumRangeAABase {
		ENHANCED_LAUNCHER
	};
	class ammo_Missile_AMRAAM_C: ammo_Missile_MediumRangeAABase {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_9k32: M_Titan_AA {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_9k38: rhs_ammo_9k32 {
		ENHANCED_LAUNCHER
	};
	class rhs_rpg26_rocket: R_PG32V_F {
		ENHANCED_LAUNCHER
	};
	class rhs_rpg7v2_pg7vl: rhs_rpg26_rocket {
		ENHANCED_LAUNCHER
	};
	class rhs_rpg7v2_pg7v: rhs_rpg7v2_pg7vl {
		ENHANCED_LAUNCHER
	};
	class rhs_rpg7v2_pg7vr: rhs_rpg7v2_pg7vl {
		ENHANCED_LAUNCHER
	};
	class rhs_rpg7v2_og7v: rhs_rpg7v2_pg7vl {
		ENHANCED_LAUNCHER
	};
	class rhs_rpg7v2_tbg7v: rhs_rpg7v2_pg7vl {
		ENHANCED_LAUNCHER
	};
	class rhs_rpg7v2_type63_airburst: rhs_rpg7v2_og7v {
		ENHANCED_LAUNCHER
	};
	class rhs_rshg2_rocket: rhs_rpg7v2_tbg7v {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_M_fgm148_AT: MissileBase {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_fim92_missile: M_Titan_AA {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_M136_rocket: RocketBase {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_M136_hedp_rocket: rhs_ammo_M136_rocket {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_M136_hp_rocket: rhs_ammo_M136_rocket {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_m72a7_rocket: rhs_ammo_M136_hedp_rocket {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_maaws_HEAT: RocketBase {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_maaws_HEDP: RocketBase {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_maaws_HE: RocketBase {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_smaw_HEAA: RocketBase {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_smaw_HEDP: RocketBase {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_smaw_SR: RocketBase {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_ch29: Missile_AGM_02_F {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_kh29_base: Missile_AGM_02_F {};
	class RHS_9M79_1_F: rhs_ammo_kh29_base {
		ENHANCED_LAUNCHER
	};
	class SubmunitionCore;
	class SubmunitionBase: SubmunitionCore {};
	class R_230mm_HE: SubmunitionBase {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_m21OF_HE: R_230mm_HE {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_atgmCore_base: M_Titan_AT {};
	class rhs_ammo_atgmBase_base: M_Titan_AT {};
	class rhs_ammo_9m113: rhs_ammo_atgmBase_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_rpgShell_base: RocketBase {};
	class rhs_ammo_pg9v: rhs_ammo_rpgShell_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_9m119: rhs_ammo_atgmCore_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_9m14: rhs_ammo_atgmBase_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_9m14m: rhs_ammo_9m14 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_s8: R_80mm_HE {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_9m133: rhs_ammo_atgmBase_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_9m117: rhs_ammo_atgmCore_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_9m117m: rhs_ammo_9m117 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_9m111: rhs_ammo_atgmBase_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_9m113: rhs_ammo_atgmBase_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_9m113m: rhs_ammo_9m113 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_9m117m1: rhs_ammo_9m117 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_TOW_AT: M_Titan_AT {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_TOWB_AT: rhs_ammo_TOW_AT {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_TOW2_AT: rhs_ammo_TOWB_AT {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_TOW2A_AT: rhs_ammo_TOW2_AT {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_9m115: rhs_ammo_9m119 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_9m131: rhs_ammo_9m115 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_9m131m: rhs_ammo_9m131 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_pg9n: rhs_ammo_pg9v {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_kab250: Bomb_04_F {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_kab500: rhs_ammo_kab250 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_9m17: rhs_ammo_atgmBase_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_9m17p: rhs_ammo_9m17 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_zt6: Missile_AGM_02_F {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_9m114: rhs_ammo_atgmBase_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_9m114m: rhs_ammo_9m114 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_9m114m1: rhs_ammo_9m114 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_zt3: rhs_ammo_atgmBase_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_9m114m2: rhs_ammo_9m114 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_9m114f: rhs_ammo_9m114 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_Hellfire_AT: Missile_AGM_02_F {
		ENHANCED_LAUNCHER
	};
	class RHS_ammo_AGM_114L: rhs_ammo_Hellfire_AT {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_9m120: rhs_ammo_atgmBase_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_9m120m: rhs_ammo_9m120 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_9m120o: rhs_ammo_9m120 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_9m120f: rhs_ammo_9m120 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_9m127: rhs_ammo_9m120 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_9m127m: rhs_ammo_9m127 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_ptb1500: MissileBase {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_Sidewinder_AA: Missile_AA_04_F {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_mk82: Bo_Mk82 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_cbu_base: rhs_ammo_mk82 {};
	class rhs_ammo_cbu87: rhs_ammo_cbu_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_gbu12: Bomb_04_F {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_agm65: rhs_ammo_Hellfire_AT {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_agm65d: rhs_ammo_agm65 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_agm65f: rhs_ammo_agm65d {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_cbu100: rhs_ammo_cbu_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_aim120: rhs_ammo_Sidewinder_AA {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_aim120d: rhs_ammo_aim120 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_agm65b: rhs_ammo_agm65 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_agm65e: rhs_ammo_agm65 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_kh29l: rhs_ammo_kh29_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_kh29ml: rhs_ammo_kh29_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_agm65h: rhs_ammo_agm65 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_kh29t: rhs_ammo_kh29_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_kh29mp: rhs_ammo_kh29_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_kh29d: rhs_ammo_kh29_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_kh25_base: Missile_AGM_01_F {};
	class rhs_ammo_kh25ma: rhs_ammo_kh25_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_kh25: rhs_ammo_kh25_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_kh25ml: rhs_ammo_kh25_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_kh25mt: rhs_ammo_kh25_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_kh25mtp: rhs_ammo_kh25_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_kh25mp: rhs_ammo_kh25_base {
		ENHANCED_LAUNCHER
	};
	class RHS_Ammo_DAGR: MissileBase {
		ENHANCED_LAUNCHER
	};
	class RHS_ammo_AGM_114K: rhs_ammo_Hellfire_AT {
		ENHANCED_LAUNCHER
	};
	class RHS_ammo_AGM_114M: RHS_ammo_AGM_114K {
		ENHANCED_LAUNCHER
	};
	class RHS_ammo_AGM_114N: RHS_ammo_AGM_114M {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_fab100: Bomb_04_F {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_fab250: rhs_ammo_fab100 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_rbk250_ao1: rhs_ammo_fab250 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_kmgu2_ao25: rhs_ammo_rbk250_ao1 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_kmgu2_ptm1: rhs_ammo_kmgu2_ao25 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_ptb1150: rhs_ammo_fab250 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_r73: Missile_AA_04_F {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_r77: rhs_ammo_r73 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_r77m: rhs_ammo_r77 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_Hydra_HE_Heli: Rocket_04_HE_F {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_Hydra_M151: rhs_ammo_Hydra_HE_Heli {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_Hydra_M229: rhs_ammo_Hydra_M151 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_s8: R_80mm_HE {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_s13b: rhs_ammo_s8 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_s24_base: rhs_ammo_s13b {};
	class rhs_ammo_s25_base: rhs_ammo_s24_base {};
	class rhs_ammo_s25of: rhs_ammo_s25_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_s13t: rhs_ammo_s13b {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_s8DF: rhs_ammo_s8 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_s5: rhs_ammo_s8 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_r60_base: Missile_AA_04_F {};
	class rhs_ammo_r60m: rhs_ammo_r60_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_s13of: rhs_ammo_s13b {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_s5m1: rhs_ammo_s5 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_s24: rhs_ammo_s24_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_s5k1: rhs_ammo_s5 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_rbk500_ao25: rhs_ammo_rbk250_ao1 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_rbk500_zab25t: rhs_ammo_rbk500_ao25 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_fab500: rhs_ammo_fab250 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_fab500_m54: rhs_ammo_fab500 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_s5ko: rhs_ammo_s5 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_s8t: rhs_ammo_s8 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_s13D: rhs_ammo_s13b {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_s24b: rhs_ammo_s24_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_s13DF: rhs_ammo_s13D {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_s25o: rhs_ammo_s25_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_s25l: rhs_ammo_s25_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_s25ld: rhs_ammo_s25l {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_r27_base: Missile_AA_04_F {};
	class rhs_ammo_r27r: rhs_ammo_r27_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_r27er: rhs_ammo_r27r {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_r27t: rhs_ammo_r27_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_r60: rhs_ammo_r60_base {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_rbk250_zab25t: rhs_ammo_rbk250_ao1 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_r73m: rhs_ammo_r73 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_rbk250_ptab25: rhs_ammo_rbk250_ao1 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_fab250_m62: rhs_ammo_fab250 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_ofab250: rhs_ammo_fab250 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_kmgu2_ptab1m: rhs_ammo_kmgu2_ao25 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_rbk500_ptab1m: rhs_ammo_rbk250_ptab25 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_kmgu2_pfm1: rhs_ammo_kmgu2_ao25 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_rbk500_ofab50: rhs_ammo_rbk500_ao25 {
		ENHANCED_LAUNCHER
	};
	class rhs_ammo_rbk500_spbed: rhs_ammo_rbk500_ao25 {
		ENHANCED_LAUNCHER
	};
};
