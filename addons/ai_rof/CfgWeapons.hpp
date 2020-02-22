class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons {
    class Rifle_Base_F;
    class Rifle_Short_Base_F;
    class Rifle_Long_Base_F;
    class PKT;
    class rhs_weap_ak74m_Base_F;
    class rhs_weap_ak74m;
    class rhs_weap_aks74;
    class hgun_PDW2000_F;
    class rhs_weap_pkp;
    class rhs_weap_m4_Base;
    class Pistol_Base_F;
    class CUP_arifle_G36_Base_CarryhandleOptics;
    class CUP_arifle_M16_Base;
    class CUP_arifle_SCAR_L_Base;
    class CUP_arifle_xm8_sharpshooter;
    class CUP_arifle_AKS_Base;
    class CUP_arifle_AK_Base;
    class MGun;
    class MGunCore;
    class CannonCore;
    class rhs_weap_m134_minigun_1;
    class SMG_01_F;

    // Manually add the "NEV_FullAuto" firemode to modes[] array because += operator doesn't work reliably.
    class DMR_01_base_F: Rifle_Long_Base_F {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class EBR_base_F: Rifle_Long_Base_F {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class LMG_Mk200_F: Rifle_Long_Base_F {
        modes[] = {"manual", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_RIFLE_ROF(manual);
    };
    class LMG_Zafir_F: Rifle_Long_Base_F {
        modes[] = {"FullAuto", "Single", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class arifle_Katiba_Base_F: Rifle_Base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class mk20_base_F: Rifle_Base_F {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class arifle_MX_Base_F: Rifle_Base_F {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class arifle_MX_SW_F: arifle_MX_Base_F {
        modes[] = {"manual", "single", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_RIFLE_ROF(manual);
    };
    class SDAR_base_F: Rifle_Base_F {
        modes[] = {"Single", "Burst", "FullAuto", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class Tavor_base_F: Rifle_Base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class pdw2000_base_F: Rifle_Short_Base_F {
        modes[] = {"Single", "Burst", "FullAuto", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class SMG_01_Base: Rifle_Short_Base_F {
        modes[] = {"Single", "Burst", "FullAuto", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class SMG_02_base_F: Rifle_Short_Base_F {
        modes[] = {"Single", "Burst", "FullAuto", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_arifle_G3_Base: Rifle_Base_F {
        modes[] = {"Single", "Fullauto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class DMR_03_base_F: Rifle_Long_Base_F {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class DMR_05_base_F: Rifle_Long_Base_F {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class DMR_06_base_F: Rifle_Long_Base_F {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class MMG_01_base_F: Rifle_Long_Base_F {
        modes[] = {"manual", "burst", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_RIFLE_ROF(manual);
    };
    class MMG_02_base_F: Rifle_Long_Base_F {
        modes[] = {"manual", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_RIFLE_ROF(manual);
    };
    class CUP_sgun_AA12: Rifle_Base_F {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class SMG_03_TR_BASE: Rifle_Base_F {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class LMG_03_base_F: Rifle_Long_Base_F {
        modes[] = {"FullAutoFast", "FullAutoSlow", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAutoFast);
    };
    class arifle_AK12_base_F: Rifle_Base_F {
        modes[] = {"FullAuto", "Burst", "Single", "Burst_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class arifle_AKM_base_F: Rifle_Base_F {
        modes[] = {"FullAuto", "Single", "FullAuto_medium", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class arifle_AKS_base_F: Rifle_Base_F {
        modes[] = {"FullAuto", "Single", "FullAuto_medium", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class arifle_ARX_base_F: Rifle_Base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class arifle_CTAR_base_F: Rifle_Base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class arifle_CTARS_base_F: Rifle_Base_F {
        modes[] = {"FullAuto", "Single", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class arifle_SPAR_01_base_F: Rifle_Base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class arifle_SPAR_02_base_F: Rifle_Base_F {
        modes[] = {"FullAuto", "Single", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class arifle_SPAR_03_base_F: Rifle_Base_F {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class SMG_05_base_F: Rifle_Short_Base_F {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class arifle_MSBS65_base_F: Rifle_Base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class rhs_weap_pkt: PKT {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_RIFLE_ROF(manual);
    };
    class rhs_weap_pkm_tigr: rhs_weap_pkt {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_RIFLE_ROF(manual);
    };
    class rhs_weap_ak74m_Base_F: Rifle_Base_F {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class rhs_weap_akm: rhs_weap_ak74m {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class rhs_weap_ak103_base: rhs_weap_akm {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class rhs_weap_aks74u: rhs_weap_aks74 {
        modes[] = {"FullAuto", "Single", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class rhs_weap_asval: rhs_weap_ak74m {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class rhs_weap_pp2000: hgun_PDW2000_F {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class rhs_pkp_base: Rifle_Long_Base_F {
        modes[] = {"FullAuto", "Single", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class rhs_weap_pkm: rhs_weap_pkp {
        modes[] = {"manual", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_RIFLE_ROF(manual);
    };
    class rhs_weap_rpk74: rhs_weap_pkp {
        modes[] = {"single", "manual", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_RIFLE_ROF(manual);
    };
    class rhs_weap_m4a1: rhs_weap_m4_Base {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class rhs_weap_m4a1_blockII: rhs_weap_m4a1 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class rhs_weap_hk416d10: rhs_weap_m4a1 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class rhs_weap_m27iar: rhs_weap_m4a1 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class rhs_weap_M249_base: LMG_Mk200_F {
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class rhs_weap_saw_base: Rifle_Base_F {
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class rhs_weap_m240_base: rhs_weap_M249_base {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_RIFLE_ROF(manual);
    };
    class rhsusf_weap_MP7A1_base_f: SMG_02_base_F {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class rhs_weap_SCAR_Base: arifle_MX_Base_F {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_CZ_BREN2_Base: Rifle_Base_F {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_arifle_OTS14_GROZA_Base: Rifle_Base_F {
        modes[] = {"Single", "Full", "FullAuto_medium", "NEV_FullAuto"};
        AI_RIFLE_ROF(Full);
    };
    class CUP_Mac10_Base: Rifle_Base_F {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_hgun_Mac10_Base: Pistol_Base_F {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_hgun_MicroUzi: Pistol_Base_F {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_smg_MP5SD6: Rifle_Base_F {
        modes[] = {"Single", "Burst", "FullAuto", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_arifle_AUG_Base: Rifle_Base_F {
        modes[] = {"FullAuto", "Single", "fullauto_medium", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_lmg_UK59: Rifle_Long_Base_F {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_RIFLE_ROF(manual);
    };
    class CUP_srifle_VSSVintorez: Rifle_Base_F {
        modes[] = {"Single", "Full", "NEV_FullAuto"};
        AI_RIFLE_ROF(Full);
    };
    class CUP_arifle_SR3M_Vikhr: Rifle_Base_F {
        modes[] = {"Single", "Full", "NEV_FullAuto"};
        AI_RIFLE_ROF(Full);
    };
    class CUP_arifle_AK107_Base: CUP_arifle_AK_Base {
        modes[] = {"FullAuto", "Burst", "Single", "Burst_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_arifle_AK74: CUP_arifle_AK_Base {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_arifle_AK74_GL: CUP_arifle_AK_Base {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_arifle_AKS74: CUP_arifle_AKS_Base {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_arifle_AKS74_GL: CUP_arifle_AK74_GL {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_arifle_AK74M: CUP_arifle_AK_Base {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_arifle_AK74M_GL: CUP_arifle_AK_Base {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_arifle_AK102: CUP_arifle_AK_Base {
        modes[] = {"FullAuto", "Single", "Burst", "Burst_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_arifle_AK104: CUP_arifle_AK_Base {
        modes[] = {"FullAuto", "Single", "Burst", "Burst_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_arifle_AK105: CUP_arifle_AK_Base {
        modes[] = {"FullAuto", "Single", "Burst", "Burst_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_arifle_RPK74: CUP_arifle_AK_Base {
        modes[] = {"manual", "close", "short", "medium", "far_optic1", "far_optic2", "Single", "NEV_FullAuto"};
        AI_RIFLE_ROF(manual);
    };
    class CUP_smg_bizon: Rifle_Base_F {
        modes[] = {"FullAuto", "Single", "Burst", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_smg_vityaz: CUP_smg_bizon {
        modes[] = {"FullAuto", "Single", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_smg_EVO: Rifle_Short_Base_F {
        modes[] = {"Single", "Burst", "FullAuto", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_arifle_FNFAL: Rifle_Base_F {
        modes[] = {"Fullauto", "Single", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_arifle_G36_Base: Rifle_Base_F {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_arifle_G36K: CUP_arifle_G36_Base_CarryhandleOptics {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_arifle_G36C: CUP_arifle_G36_Base {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_arifle_MG36: CUP_arifle_G36C {
        modes[] = {"Single", "Fullauto", "close", "medium", "far", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_arifle_HK416_145_Base: Rifle_Base_F {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_arifle_HK416_11_Base: CUP_arifle_HK416_145_Base {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_arifle_HK417_Base: CUP_arifle_HK416_145_Base {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_l85a2_base: Rifle_Base_F {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_srifle_M14: Rifle_Base_F {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_arifle_M4_Base: CUP_arifle_M16_Base {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_arifle_XM16E1: CUP_arifle_M16_Base {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_arifle_Colt727: CUP_arifle_M16_Base {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_lmg_M240: Rifle_Long_Base_F {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_RIFLE_ROF(manual);
    };
    class CUP_saw_base: Rifle_Long_Base_F {
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_M60E4_base: Rifle_Long_Base_F {
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_lmg_MG3: Rifle_Long_Base_F {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_RIFLE_ROF(manual);
    };
    class CUP_lmg_Mk48_Base: Rifle_Long_Base_F {
        modes[] = {"manual", "close", "short", "medium", "far", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_RIFLE_ROF(manual);
    };
    class CUP_smg_MP7: Rifle_Short_Base_F {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_hgun_MP7: Pistol_Base_F {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_lmg_PKM: Rifle_Long_Base_F {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_RIFLE_ROF(manual);
    };
    class CUP_lmg_Pecheneg: CUP_lmg_PKM {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_RIFLE_ROF(manual);
    };
    class CUP_arifle_Sa58_base: Rifle_Base_F {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_hgun_SA61: Pistol_Base_F {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_smg_SA61: Rifle_Base_F {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_arifle_SCAR_Base: Rifle_Base_F {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullLAuto", "NEV_FullAuto"};
        AI_RIFLE_ROF(SCAR_L_FullLAuto);
    };
    class CUP_arifle_Mk17_Base: CUP_arifle_SCAR_Base {
        modes[] = {"SCAR_H_Single", "SCAR_H_FullAuto", "NEV_FullAuto"};
        AI_RIFLE_ROF(SCAR_H_FullLAuto);
    };
    class CUP_arifle_Mk16_STD: CUP_arifle_SCAR_L_Base {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullAuto", "NEV_FullAuto"};
        AI_RIFLE_ROF(SCAR_L_FullLAuto);
    };
    class CUP_arifle_Mk16_SV: CUP_arifle_SCAR_L_Base {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullAuto", "NEV_FullAuto"};
        AI_RIFLE_ROF(SCAR_L_FullLAuto);
    };
    class CUP_arifle_Mk16_CQC: CUP_arifle_SCAR_L_Base {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullAuto", "NEV_FullAuto"};
        AI_RIFLE_ROF(SCAR_L_FullLAuto);
    };
    class CUP_arifle_XM8_Base: Rifle_Base_F {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_arifle_XM8_Railed_Base: Rifle_Base_F {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_arifle_xm8_SAW: CUP_arifle_xm8_sharpshooter {
        modes[] = {"Single", "Fullauto", "Close", "Short", "Medium", "Far", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class rhs_weap_savz61: SMG_01_F {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class rhs_weap_savz58_base: Rifle_Base_F {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class rhs_weap_vhs2_base: Rifle_Base_F {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class rhs_weap_stgw57_base: Rifle_Base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class rhs_weap_m3a1_base: Rifle_Base_F {
        modes[] = {"FullAuto", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class rhs_weap_MP44_base: Rifle_Base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class rhs_weap_mg42_base: Rifle_Base_F {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_RIFLE_ROF(manual);
    };
    class rhs_weap_fnfal_base: Rifle_Base_F {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class rhs_weap_scorpion: SMG_01_F {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class rhs_weap_g36_base: Rifle_Base_F {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class rhs_weap_g36c: rhs_weap_g36_base {
        modes[] = {"Single", "Burst", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class rhs_weap_g36kv: rhs_weap_g36_base {
        modes[] = {"Single", "Burst2rnd", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class rhs_weap_m84: Rifle_Long_Base_F {
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_RIFLE_ROF(FullAuto);
    };
    class CUP_arifle_SCAR_Base: Rifle_Base_F {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullLAuto", "NEV_FullAuto"};
        AI_RIFLE_ROF(SCAR_L_FullLAuto);
    };
    class LMG_RCWS: MGun {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class HMG_127: LMG_RCWS {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class HMG_NSVT: HMG_127 {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class HMG_127_APC: HMG_127 {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class HMG_127_UGV: HMG_127 {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class HMG_01: HMG_127 {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
     class HMG_M2: HMG_01 {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class LMG_65mm_body: LMG_RCWS {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class LMG_M200: LMG_RCWS {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class LMG_Minigun: LMG_RCWS {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class LMG_Minigun_Transport: LMG_Minigun {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class LMG_Minigun_Transport2: LMG_Minigun_Transport {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class LMG_Minigun2: LMG_Minigun {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class LMG_Minigun_heli: LMG_Minigun {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class LMG_M200_body: LMG_M200 {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class M134_minigun: MGunCore {
        modes[] = {"HighROF", "LowROF", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(HighROF);
    };
    class GMG_20mm: GMG_F {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class GMG_40mm: GMG_F {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class gatling_20mm: CannonCore {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class gatling_30mm_base: CannonCore {
        modes[] = {"LowROF", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(LowROF);
    };
    class gatling_25mm: CannonCore {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class autocannon_35mm: CannonCore {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class Gatling_30mm_Plane_CAS_01_F: CannonCore {
        modes[] = {"LowROF", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(LowROF);
    };
    class Cannon_30mm_Plane_CAS_02_F: CannonCore {
        modes[] = {"LowROF", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(LowROF);
    };
    class M61_Vulcan_CIWS: Gatling_30mm_Plane_CAS_01_F {
        modes[] = {"LowROF", "AI", "NEV_FullAuto"};
        AI_VEHICLE_ROF(LowROF);
    };
    class CUP_Vhmg_DSHKM_veh: MGun {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class CUP_Vhmg_M2_veh: HMG_M2 {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class CUP_Vhmg_M3P_veh: CUP_Vhmg_M2_veh {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class CUP_Vlmg_M240_veh: MGun {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class CUP_Vlmg_UK59_veh: MGun {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class CUP_Vlmg_M134_veh: MGunCore {
        modes[] = {"LowROF", "HighROF", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(HighROF);
    };
    class CUP_Vhmg_KORD_veh: MGun {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class CUP_Vhmg_PKT_veh: MGun {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class CUP_Vhmg_KPVT_veh: MGun {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class CUP_Vhmg_GAU19_veh: MGun {
        modes[] = {"LowROF", "HighROF", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(HighROF);
    };
    class CUP_Vacannon_M197_veh: CannonCore {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class CUP_Vacannon_M242_veh: CannonCore {
        modes[] = {"LowROF", "HighROF", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(HighROF);
    };
    class CUP_Vacannon_M230_veh: CannonCore {
        modes[] = {"close", "short", "medium", "far", "burst_5", "burst_10", "burst_15", "NEV_FullAuto"};
        AI_VEHICLE_ROF(burst_15);
    };
    class CUP_Vacannon_2A14_veh: CannonCore {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class CUP_Vacannon_AZP23_veh: CannonCore {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class CUP_Vacannon_2A42_veh: CannonCore {
        modes[] = {"LowROF", "HighROF", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(HighROF);
    };
    class CUP_Vacannon_2A72_veh: CUP_Vacannon_2A42_veh {
        modes[] = {"LowROF", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(LowROF);
    };
    class CUP_Vacannon_M621_AW159_veh: CannonCore {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class CUP_Vacannon_GI2_veh: CannonCore {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class CUP_Vacannon_GSh23L_in_veh: CannonCore {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class CUP_Vacannon_GAU8_veh: CannonCore {
        modes[] = {"halfsec", "1sec", "2sec", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(2sec);
    };
    class CUP_Vacannon_GAU12_veh: CannonCore {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class CUP_Vacannon_GAU22_veh: CannonCore {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class CUP_Vacannon_M168_M163VADS: CannonCore {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class CUP_Vacannon_GSh302K_veh: CannonCore {
        modes[] = {"LowROF", "close", "near", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(LowROF);
    };
    class CUP_Vcannon_L30A1_veh: CannonCore {
        modes[] = {"player", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(player);
    };
    class CUP_Vacannon_GSh23L_pod_veh: CannonCore {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class MMG_02_vehicle: LMG_RCWS {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class weapon_Cannon_Phalanx: CannonCore {
        modes[] = {"manual", "close", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class weapon_Fighter_Gun20mm_AA: CannonCore {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class weapon_Fighter_Gun_30mm: CannonCore {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class MMG_01_vehicle: LMG_RCWS {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class rhs_weap_DSHKM: LMG_RCWS {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class rhs_weap_kpvt: MGun {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class gatling_30mm: gatling_30mm_base {
        modes[] = {"LowROF", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(LowROF);
    };
    class rhs_weap_yakB: gatling_30mm {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class RHS_weap_Ags30: GMG_20mm {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class rhs_weap_pkm_tigr: rhs_weap_pkt {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class autocannon_Base_F: CannonCore {
        modes[] = {"player", "close", "short", "medium", "far"};
        AI_VEHICLE_ROF(player);
    };
    class autocannon_30mm_CTWS: autocannon_Base_F {
        modes[] = {"player", "close", "short", "medium", "far"};
        AI_VEHICLE_ROF(player);
    };
    class rhs_weap_2a42_base: autocannon_30mm_CTWS {
        modes[] = {"LowROFBMD2", "HighROFBMD2", "closeBMD2", "shortBMD2", "mediumBMD2", "farBMD2", "NEV_FullAuto"};
        AI_VEHICLE_ROF(HighROFBMD2);
    };
    class rhs_weap_gsh30: gatling_30mm {
        modes[] = {"manual", "manual_low", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class rhs_weap_gsh302: rhs_weap_gsh30 {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class rhs_weap_gsh301: rhs_weap_gsh30 {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class rhs_weap_gsh23l: rhs_weap_gsh30 {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class rhs_weap_azp23: CannonCore {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class RHS_weap_m134_pylon: rhs_weap_m134_minigun_1 {
        modes[] = {"LowROF", "HighROF", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(HighROF);
    };
    class rhs_weap_M197: gatling_30mm {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class rhs_weap_M301: rhs_weap_M197 {
        modes[] = {"manual", "HighROF", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class rhs_weap_M230: rhs_weap_M197 {
        modes[] = {"manual", "burst_20", "burst_50", "burst_100", "burst_all", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(burst_all);
    };
    class RHS_weap_gau8: Gatling_30mm_Plane_CAS_01_F {
        modes[] = {"LowROF", "HighROF", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(HighROF);
    };
    class RHS_weap_gau19: HMG_127 {
        modes[] = {"LowROF", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(LowROF);
    };
    class RHS_weap_zpl20: gatling_30mm {
        modes[] = {"manual", "manual_low", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class CUP_Vlmg_MG3_veh: MGun {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class GMG_F: MGun {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class autocannon_40mm_CTWS: autocannon_Base_F {
        modes[] = {"player", "close", "short", "medium", "far"};
        AI_VEHICLE_ROF(player);
    };
    class cannon_120mm: CannonCore {
        AI_VEHICLE_DISPERSION;
    };
};
