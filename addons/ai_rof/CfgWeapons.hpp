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

    class DMR_01_base_F: Rifle_Long_Base_F {
        AI_ROF(FullAuto);
    };
    class EBR_base_F: Rifle_Long_Base_F {
        AI_ROF(FullAuto);
    };
    class LMG_Mk200_F: Rifle_Long_Base_F {
        AI_ROF(manual);
    };
    class LMG_Zafir_F: Rifle_Long_Base_F {
        AI_ROF(FullAuto);
    };
    class arifle_Katiba_Base_F: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class mk20_base_F: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class arifle_MX_Base_F: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class arifle_MX_SW_F: arifle_MX_Base_F {
        AI_ROF(manual);
    };
    class SDAR_base_F: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class Tavor_base_F: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class pdw2000_base_F: Rifle_Short_Base_F {
        AI_ROF(FullAuto);
    };
    class SMG_01_Base: Rifle_Short_Base_F {
        AI_ROF(FullAuto);
    };
    class SMG_02_base_F: Rifle_Short_Base_F {
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G3_Base: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class DMR_03_base_F: Rifle_Long_Base_F {
        AI_ROF(FullAuto);
    };
    class DMR_04_base_F: Rifle_Long_Base_F {
        AI_ROF(FullAuto);
    };
    class DMR_05_base_F: Rifle_Long_Base_F {
        AI_ROF(FullAuto);
    };
    class DMR_06_base_F: Rifle_Long_Base_F {
        AI_ROF(FullAuto);
    };
    class MMG_01_base_F: Rifle_Long_Base_F {
        AI_ROF(manual);
    };
    class MMG_02_base_F: Rifle_Long_Base_F {
        AI_ROF(manual);
    };
    class CUP_sgun_AA12: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class SMG_03_TR_BASE: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class LMG_03_base_F: Rifle_Long_Base_F{
        AI_ROF(FullAutoFast);
    };
    class arifle_AK12_base_F: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class arifle_AKM_base_F: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class arifle_AKS_base_F: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class arifle_ARX_base_F: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class arifle_CTAR_base_F: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class arifle_CTARS_base_F: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class arifle_SPAR_01_base_F: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class arifle_SPAR_02_base_F: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class arifle_SPAR_03_base_F: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class SMG_05_base_F: Rifle_Short_Base_F {
        AI_ROF(FullAuto);
    };
    class arifle_MSBS65_base_F: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class rhs_weap_pkt: PKT {
        AI_ROF(manual);
    };
    class rhs_weap_pkm_tigr: rhs_weap_pkt {
        AI_ROF(manual);
    };
    class rhs_weap_ak74m_Base_F: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class rhs_weap_akm: rhs_weap_ak74m {
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak103_base: rhs_weap_akm {
        AI_ROF(FullAuto);
    };
    class rhs_weap_aks74u: rhs_weap_aks74 {
        AI_ROF(FullAuto);
    };
    class rhs_weap_asval: rhs_weap_ak74m {
        AI_ROF(FullAuto);
    };
    class rhs_weap_pp2000: hgun_PDW2000_F {
        AI_ROF(FullAuto);
    };
    class rhs_pkp_base: Rifle_Long_Base_F {
        AI_ROF(FullAuto);
    };
    class rhs_weap_pkm: rhs_weap_pkp {
        AI_ROF(manual);
    };
    class rhs_weap_rpk74: rhs_weap_pkp {
        AI_ROF(manual);
    };
    class rhs_weap_m4a1: rhs_weap_m4_Base {
        AI_ROF(FullAuto);
    };
    class rhs_weap_m4a1_blockII: rhs_weap_m4a1 {
        AI_ROF(FullAuto);
    };
    class rhs_weap_hk416d10: rhs_weap_m4a1 {
        AI_ROF(FullAuto);
    };
    class rhs_weap_m27iar: rhs_weap_m4a1 {
        AI_ROF(FullAuto);
    };
    class rhs_weap_M249_base: LMG_Mk200_F {
        AI_ROF(FullAuto);
    };
    class rhs_weap_saw_base: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class rhs_weap_m240_base: rhs_weap_M249_base {
        AI_ROF(manual);
    };
    class rhsusf_weap_MP7A1_base_f: SMG_02_base_F {
        AI_ROF(FullAuto);
    };
    class rhs_weap_SCAR_Base: arifle_MX_Base_F {
        AI_ROF(FullAuto);
    };
    class CUP_CZ_BREN2_Base: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class CUP_arifle_OTS14_GROZA_Base: Rifle_Base_F {
        AI_ROF(Full);
    };
    class CUP_Mac10_Base: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class CUP_hgun_Mac10_Base: Pistol_Base_F {
        AI_ROF(FullAuto);
    };
    class CUP_hgun_MicroUzi: Pistol_Base_F {
        AI_ROF(FullAuto);
    };
    class CUP_smg_MP5SD6: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AUG_Base: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class CUP_lmg_UK59: Rifle_Long_Base_F {
        AI_ROF(manual);
    };
    class CUP_srifle_VSSVintorez: Rifle_Base_F {
        AI_ROF(Full);
    };
    class CUP_arifle_SR3M_Vikhr: Rifle_Base_F {
        AI_ROF(Full);
    };
    class CUP_arifle_AK107_Base: CUP_arifle_AK_Base {
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK74: CUP_arifle_AK_Base {
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK74_GL: CUP_arifle_AK_Base {
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AKS74: CUP_arifle_AKS_Base {
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AKS74_GL: CUP_arifle_AK74_GL {
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK74M: CUP_arifle_AK_Base {
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK74M_GL: CUP_arifle_AK_Base {
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK102: CUP_arifle_AK_Base {
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK104: CUP_arifle_AK_Base {
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK105: CUP_arifle_AK_Base {
        AI_ROF(FullAuto);
    };
    class CUP_arifle_RPK74: CUP_arifle_AK_Base {
        AI_ROF(manual);
    };
    class CUP_smg_bizon: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class CUP_smg_vityaz: CUP_smg_bizon {
        AI_ROF(FullAuto);
    };
    class CUP_smg_EVO: Rifle_Short_Base_F {
        AI_ROF(FullAuto);
    };
    class CUP_arifle_FNFAL: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36_Base: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36K: CUP_arifle_G36_Base_CarryhandleOptics {
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36C: CUP_arifle_G36_Base {
        AI_ROF(FullAuto);
    };
    class CUP_arifle_MG36: CUP_arifle_G36C {
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK416_145_Base: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK416_11_Base: CUP_arifle_HK416_145_Base {
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK417_Base: CUP_arifle_HK416_145_Base {
        AI_ROF(FullAuto);
    };
    class CUP_l85a2_base: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class CUP_srifle_M14: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4_Base: CUP_arifle_M16_Base {
        AI_ROF(FullAuto);
    };
    class CUP_arifle_XM16E1: CUP_arifle_M16_Base {
        AI_ROF(FullAuto);
    };
    class CUP_arifle_Colt727: CUP_arifle_M16_Base {
        AI_ROF(FullAuto);
    };
    class CUP_lmg_M240: Rifle_Long_Base_F {
        AI_ROF(manual);
    };
    class CUP_saw_base: Rifle_Long_Base_F {
        AI_ROF(FullAuto);
    };
    class CUP_M60E4_base: Rifle_Long_Base_F {
        AI_ROF(FullAuto);
    };
    class CUP_lmg_MG3: Rifle_Long_Base_F {
        AI_ROF(manual);
    };
    class CUP_lmg_Mk48_Base: Rifle_Long_Base_F {
        AI_ROF(manual);
    };
    class CUP_smg_MP7: Rifle_Short_Base_F {
        AI_ROF(FullAuto);
    };
    class CUP_hgun_MP7: Pistol_Base_F {
        AI_ROF(FullAuto);
    };
    class CUP_lmg_PKM: Rifle_Long_Base_F {
        AI_ROF(manual);
    };
    class CUP_lmg_Pecheneg: CUP_lmg_PKM {
        AI_ROF(manual);
    };
    class CUP_arifle_Sa58_base: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class CUP_hgun_SA61: Pistol_Base_F {
        AI_ROF(FullAuto);
    };
    class CUP_smg_SA61: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class CUP_arifle_SCAR_Base: Rifle_Base_F {
        AI_ROF(SCAR_L_FullLAuto);
    };
    class CUP_arifle_Mk17_Base: CUP_arifle_SCAR_Base {
        AI_ROF(SCAR_H_FullLAuto);
    };
    class CUP_arifle_Mk16_STD: CUP_arifle_SCAR_L_Base {
        AI_ROF(SCAR_L_FullLAuto);
    };
    class CUP_arifle_Mk16_SV: CUP_arifle_SCAR_L_Base {
        AI_ROF(SCAR_L_FullLAuto);
    };
    class CUP_arifle_Mk16_CQC: CUP_arifle_SCAR_L_Base {
        AI_ROF(SCAR_L_FullLAuto);
    };
    class CUP_arifle_XM8_Base: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class CUP_arifle_XM8_Railed_Base: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class CUP_arifle_xm8_SAW: CUP_arifle_xm8_sharpshooter {
        AI_ROF(FullAuto);
    };
    class rhs_weap_savz61: SMG_01_F {
        AI_ROF(FullAuto);
    };
    class rhs_weap_savz58_base: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class rhs_weap_vhs2_base: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class rhs_weap_stgw57_base: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class rhs_weap_m3a1_base: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class rhs_weap_MP44_base: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class rhs_weap_mg42_base: Rifle_Base_F{
        AI_ROF(manual);
    };
    class rhs_weap_fnfal_base: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class rhs_weap_scorpion: SMG_01_F {
        AI_ROF(FullAuto);
    };
    class rhs_weap_g36_base: Rifle_Base_F {
        AI_ROF(FullAuto);
    };
    class rhs_weap_g36c: rhs_weap_g36_base {
        AI_ROF(FullAuto);
    };
    class rhs_weap_g36kv: rhs_weap_g36_base {
        AI_ROF(FullAuto);
    };
    class rhs_weap_m84: Rifle_Long_Base_F {
        AI_ROF(FullAuto);
    };
    class CUP_arifle_SCAR_Base: Rifle_Base_F {
        AI_ROF(SCAR_L_FullLAuto);
    };
};
