class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons {
    // Manually add the "NEV_FullAuto" firemode to modes[] array because += operator doesn't work reliably.
    // Handheld Weapons
    class DMR_01_base_F;
    class srifle_DMR_01_F: DMR_01_base_F {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class EBR_base_F;
    class srifle_EBR_F: EBR_base_F {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class GM6_base_F;
    class srifle_GM6_F: GM6_base_F {
        AI_DISPERSION;
    };
    class srifle_GM6_camo_F: srifle_GM6_F {
        AI_DISPERSION;
    };
    class LRR_base_F;
    class srifle_LRR_F: LRR_base_F {
        AI_DISPERSION;
    };
    class srifle_LRR_camo_F: srifle_LRR_F {
        AI_DISPERSION;
    };
    class Rifle_Long_Base_F;
    class LMG_Mk200_F: Rifle_Long_Base_F {
        modes[] = {"manual", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class LMG_Zafir_F: Rifle_Long_Base_F {
       modes[] = {"FullAuto", "Single", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
       AI_ROF(FullAuto);
    };
    class arifle_Katiba_Base_F;
    class arifle_Katiba_F: arifle_Katiba_Base_F {
       modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
       AI_ROF(FullAuto);
    };
    class arifle_Katiba_C_F: arifle_Katiba_Base_F {
       modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
       AI_ROF(FullAuto);
    };
    class arifle_Katiba_GL_F: arifle_Katiba_Base_F {
       modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
       AI_ROF(FullAuto);
    };
    class mk20_base_F;
    class arifle_Mk20_F: mk20_base_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
       AI_ROF(FullAuto);
    };
    class arifle_Mk20_plain_F: arifle_Mk20_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
       AI_ROF(FullAuto);
    };
    class arifle_Mk20C_F: mk20_base_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
       AI_ROF(FullAuto);
    };
    class arifle_Mk20C_plain_F: arifle_Mk20C_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
       AI_ROF(FullAuto);
    };
    class arifle_Mk20_GL_F: mk20_base_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
       AI_ROF(FullAuto);
    };
    class arifle_Mk20_GL_plain_F: arifle_Mk20_GL_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
       AI_ROF(FullAuto);
    };
    class arifle_MX_Base_F;
    class arifle_MXC_F: arifle_MX_Base_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
       AI_ROF(FullAuto);
    };
    class arifle_MX_F: arifle_MX_Base_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
       AI_ROF(FullAuto);
    };
    class arifle_MX_GL_F: arifle_MX_Base_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
       AI_ROF(FullAuto);
    };
    class arifle_MX_SW_F: arifle_MX_Base_F {
        modes[] = {"manual", "single", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class arifle_MXM_F: arifle_MX_Base_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
       AI_ROF(FullAuto);
    };
    class arifle_MXC_Black_F: arifle_MXC_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
       AI_ROF(FullAuto);
    };
    class arifle_MX_Black_F: arifle_MX_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
       AI_ROF(FullAuto);
    };
    class arifle_MX_GL_Black_F: arifle_MX_GL_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
       AI_ROF(FullAuto);
    };
    class arifle_MX_SW_Black_F: arifle_MX_SW_F {
        modes[] = {"manual", "single", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class arifle_MXM_Black_F: arifle_MXM_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
       AI_ROF(FullAuto);
    };
    class SDAR_base_F;
    class arifle_SDAR_F: SDAR_base_F {
        modes[] = {"Single", "Burst", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class Tavor_base_F;
    class arifle_TRG21_F: Tavor_base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_TRG20_F: Tavor_base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_TRG21_GL_F: arifle_TRG21_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class pdw2000_base_F;
    class hgun_PDW2000_F: pdw2000_base_F {
        modes[] = {"Single", "Burst", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class SMG_01_Base;
    class SMG_01_F: SMG_01_Base {
        modes[] = {"Single", "Burst", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class SMG_02_base_F;
    class SMG_02_F: SMG_02_base_F {
        modes[] = {"Single", "Burst", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_srifle_CZ750_Base;
    class CUP_srifle_CZ750: CUP_srifle_CZ750_Base {
        AI_DISPERSION;
    };
    class CUP_arifle_G3_Base;
    class CUP_arifle_G3A3_ris: CUP_arifle_G3_Base {
        modes[] = {"Single", "Fullauto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G3A3_ris_vfg: CUP_arifle_G3_Base {
        modes[] = {"Single", "Fullauto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G3A3_modern_ris: CUP_arifle_G3A3_ris {
        modes[] = {"Single", "Fullauto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G3A3_ris_black: CUP_arifle_G3A3_ris {
        modes[] = {"Single", "Fullauto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G3A3_ris_vfg_black: CUP_arifle_G3A3_ris_vfg {
        modes[] = {"Single", "Fullauto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G3A3_modern_ris_black: CUP_arifle_G3A3_modern_ris {
        modes[] = {"Single", "Fullauto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_srifle_CZ550_base;
    class CUP_srifle_CZ550: CUP_srifle_CZ550_base {
        AI_DISPERSION;
    };
    class CUP_srifle_CZ550_rail: CUP_srifle_CZ550_base {
        AI_DISPERSION;
    };
    class Rifle_Base_F;
    class CUP_srifle_LeeEnfield: Rifle_Long_Base_F {
        AI_DISPERSION;
    };
    class CUP_srifle_LeeEnfield_rail: CUP_srifle_LeeEnfield {
        AI_DISPERSION;
    };
    class CUP_srifle_M14_DMR: Rifle_Base_F {
        AI_DISPERSION;
    };
    class CUP_srifle_M24_des: Rifle_Base_F {
        AI_DISPERSION;
    };
    class CUP_srifle_M24_wdl: CUP_srifle_M24_des {
        AI_DISPERSION;
    };
    class CUP_srifle_M24_blk: CUP_srifle_M24_des {
        AI_DISPERSION;
    };
    class CUP_srifle_M40A3: CUP_srifle_M24_des {
        AI_DISPERSION;
    };
    class DMR_02_base_F;
    class srifle_DMR_02_F: DMR_02_base_F {
        AI_DISPERSION;
    };
    class srifle_DMR_02_camo_F: srifle_DMR_02_F {
        AI_DISPERSION;
    };
    class srifle_DMR_02_sniper_F: srifle_DMR_02_F {
        AI_DISPERSION;
    };
    class DMR_03_base_F;
    class srifle_DMR_03_F: DMR_03_base_F {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class srifle_DMR_03_khaki_F: srifle_DMR_03_F {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class srifle_DMR_03_tan_F: srifle_DMR_03_F {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class srifle_DMR_03_multicam_F: srifle_DMR_03_F {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class srifle_DMR_03_woodland_F: srifle_DMR_03_F {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class DMR_04_base_F;
    class srifle_DMR_04_F: DMR_04_base_F {
        AI_DISPERSION;
    };
    class srifle_DMR_04_Tan_F: srifle_DMR_04_F {
        AI_DISPERSION;
    };
    class DMR_05_base_F;
    class srifle_DMR_05_blk_F: DMR_05_base_F {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class srifle_DMR_05_hex_F: srifle_DMR_05_blk_F {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class srifle_DMR_05_tan_f: srifle_DMR_05_blk_F {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class DMR_06_base_F;
    class srifle_DMR_06_camo_F: DMR_06_base_F {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class srifle_DMR_06_olive_F: srifle_DMR_06_camo_F {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class MMG_01_base_F;
    class MMG_01_hex_F: MMG_01_base_F {
        modes[] = {"manual", "burst", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class MMG_01_tan_F: MMG_01_hex_F {
        modes[] = {"manual", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class MMG_02_base_F;
    class MMG_02_camo_F: MMG_02_base_F {
        modes[] = {"manual", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class MMG_02_black_F: MMG_02_camo_F {
        modes[] = {"manual", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class MMG_02_sand_F: MMG_02_camo_F {
        modes[] = {"manual", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class CUP_sgun_AA12: Rifle_Base_F {
        modes[] = {"FullAuto", "Single_close", "Single_far", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class SMG_03_TR_BASE;
    class SMG_03_TR_black: SMG_03_TR_BASE {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class SMG_03_TR_camo: SMG_03_TR_black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class SMG_03_TR_khaki: SMG_03_TR_black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class SMG_03_TR_hex: SMG_03_TR_BASE {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class SMG_03C_BASE;
    class SMG_03C_TR_black: SMG_03C_BASE {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class SMG_03C_TR_camo: SMG_03C_TR_black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class SMG_03C_TR_khaki: SMG_03C_TR_black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class SMG_03C_TR_hex: SMG_03C_TR_black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class SMG_03_black: SMG_03_TR_BASE {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class SMG_03_camo: SMG_03_black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class SMG_03_khaki: SMG_03_black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class SMG_03_hex: SMG_03_black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class SMG_03C_black: SMG_03C_BASE {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class SMG_03C_camo: SMG_03C_black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class SMG_03C_khaki: SMG_03C_black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class SMG_03C_hex: SMG_03C_black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_MX_khk_F: arifle_MX_Black_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
       AI_ROF(FullAuto);
    };
    class arifle_MX_GL_khk_F: arifle_MX_GL_Black_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
       AI_ROF(FullAuto);
    };
    class arifle_MX_SW_khk_F: arifle_MX_SW_Black_F {
        modes[] = {"manual", "single", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class arifle_MXC_khk_F: arifle_MXC_Black_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
       AI_ROF(FullAuto);
    };
    class arifle_MXM_khk_F: arifle_MXM_Black_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
       AI_ROF(FullAuto);
    };
    class srifle_LRR_tna_F: srifle_LRR_camo_F {
        AI_DISPERSION;
    };
    class srifle_GM6_ghex_F: srifle_GM6_F {
        AI_DISPERSION;
    };
    class DMR_07_base_F;
    class srifle_DMR_07_blk_F: DMR_07_base_F {
        AI_DISPERSION;
    };
    class srifle_DMR_07_hex_F: DMR_07_base_F {
        AI_DISPERSION;
    };
    class srifle_DMR_07_ghex_F: DMR_07_base_F {
        AI_DISPERSION;
    };
    class LMG_03_base_F;
    class LMG_03_F: LMG_03_base_F {
        modes[] = {"FullAutoFast", "FullAutoSlow", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAutoFast);
    };
    class arifle_AK12_base_F;
    class arifle_AK12_F: arifle_AK12_base_F {
        modes[] = {"FullAuto", "Burst", "Single", "Burst_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_AK12_GL_base_F;
    class arifle_AK12_GL_F: arifle_AK12_GL_base_F {
        modes[] = {"FullAuto", "Burst", "Single", "Burst_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_AKM_base_F;
    class arifle_AKM_F: arifle_AKM_base_F {
        modes[] = {"FullAuto", "Single", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_AKS_base_F;
    class arifle_AKS_F: arifle_AKS_base_F {
        modes[] = {"FullAuto", "Single", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_ARX_base_F;
    class arifle_ARX_blk_F: arifle_ARX_base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_ARX_ghex_F: arifle_ARX_base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_ARX_hex_F: arifle_ARX_base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_CTAR_base_F;
    class arifle_CTAR_blk_F: arifle_CTAR_base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_CTAR_hex_F: arifle_CTAR_base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_CTAR_ghex_F: arifle_CTAR_base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_CTAR_GL_base_F;
    class arifle_CTAR_GL_blk_F: arifle_CTAR_GL_base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_CTAR_GL_hex_F: arifle_CTAR_GL_base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_CTAR_GL_ghex_F: arifle_CTAR_GL_base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_CTARS_base_F;
    class arifle_CTARS_blk_F: arifle_CTARS_base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_CTARS_hex_F: arifle_CTARS_base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_CTARS_ghex_F: arifle_CTARS_base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_SPAR_01_base_F;
    class arifle_SPAR_01_blk_F: arifle_SPAR_01_base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_SPAR_01_khk_F: arifle_SPAR_01_base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_SPAR_01_snd_F: arifle_SPAR_01_base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_SPAR_01_GL_base_F;
    class arifle_SPAR_01_GL_blk_F: arifle_SPAR_01_GL_base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_SPAR_01_GL_khk_F: arifle_SPAR_01_GL_base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_SPAR_01_GL_snd_F: arifle_SPAR_01_GL_base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_SPAR_02_base_F;
    class arifle_SPAR_02_blk_F: arifle_SPAR_02_base_F {
        modes[] = {"FullAuto", "Single", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_SPAR_02_khk_F: arifle_SPAR_02_base_F {
        modes[] = {"FullAuto", "Single", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_SPAR_02_snd_F: arifle_SPAR_02_base_F {
        modes[] = {"FullAuto", "Single", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_SPAR_03_base_F;
    class arifle_SPAR_03_blk_F: arifle_SPAR_03_base_F {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_SPAR_03_khk_F: arifle_SPAR_03_base_F {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_SPAR_03_snd_F: arifle_SPAR_03_base_F {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class SMG_05_base_F;
    class SMG_05_F: SMG_05_base_F {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class DMR_06_hunter_base_F;
    class srifle_DMR_06_hunter_F: DMR_06_hunter_base_F {
        AI_DISPERSION;
    };
    class LMG_Mk200_black_F: LMG_Mk200_F {
        modes[] = {"manual", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class arifle_AK12_lush_F: arifle_AK12_base_F {
        modes[] = {"FullAuto", "Burst", "Single", "Burst_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_AK12_arid_F: arifle_AK12_base_F {
        modes[] = {"FullAuto", "Burst", "Single", "Burst_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_AK12_GL_lush_F: arifle_AK12_GL_base_F {
        modes[] = {"FullAuto", "Burst", "Single", "Burst_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_AK12_GL_arid_F: arifle_AK12_GL_base_F {
        modes[] = {"FullAuto", "Burst", "Single", "Burst_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_RPK12_base_F;
    class arifle_RPK12_F: arifle_RPK12_base_F {
        modes[] = {"FullAuto", "Burst", "Single", "Burst_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_RPK12_lush_F: arifle_RPK12_base_F {
        modes[] = {"FullAuto", "Burst", "Single", "Burst_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_RPK12_arid_F: arifle_RPK12_base_F {
        modes[] = {"FullAuto", "Burst", "Single", "Burst_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_AK12U_base_F;
    class arifle_AK12U_F: arifle_AK12U_base_F {
        modes[] = {"FullAuto", "Burst", "Single", "Burst_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_AK12U_lush_F: arifle_AK12U_base_F {
        modes[] = {"FullAuto", "Burst", "Single", "Burst_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_AK12U_arid_F: arifle_AK12U_base_F {
        modes[] = {"FullAuto", "Burst", "Single", "Burst_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_MSBS65_base_F;
    class arifle_MSBS65_F: arifle_MSBS65_base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_MSBS65_Mark_base_F;
    class arifle_MSBS65_Mark_F: arifle_MSBS65_Mark_base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_MSBS65_GL_base_F;
    class arifle_MSBS65_GL_F: arifle_MSBS65_GL_base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_MSBS65_UBS_base_F;
    class arifle_MSBS65_UBS_F: arifle_MSBS65_UBS_base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_MSBS65_base_black_F;
    class arifle_MSBS65_black_F: arifle_MSBS65_base_black_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_MSBS65_Mark_base_black_F;
    class arifle_MSBS65_Mark_black_F: arifle_MSBS65_Mark_base_black_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_MSBS65_GL_base_black_F;
    class arifle_MSBS65_GL_black_F: arifle_MSBS65_GL_base_black_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_MSBS65_UBS_base_black_F;
    class arifle_MSBS65_UBS_black_F: arifle_MSBS65_UBS_base_black_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_MSBS65_base_sand_F;
    class arifle_MSBS65_sand_F: arifle_MSBS65_base_sand_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_MSBS65_Mark_base_sand_F;
    class arifle_MSBS65_Mark_sand_F: arifle_MSBS65_Mark_base_sand_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_MSBS65_GL_base_sand_F;
    class arifle_MSBS65_GL_sand_F: arifle_MSBS65_GL_base_sand_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_MSBS65_UBS_base_sand_F;
    class arifle_MSBS65_UBS_sand_F: arifle_MSBS65_UBS_base_sand_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_MSBS65_base_camo_F;
    class arifle_MSBS65_camo_F: arifle_MSBS65_base_camo_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_MSBS65_Mark_base_camo_F;
    class arifle_MSBS65_Mark_camo_F: arifle_MSBS65_Mark_base_camo_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_MSBS65_GL_base_camo_F;
    class arifle_MSBS65_GL_camo_F: arifle_MSBS65_GL_base_camo_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class arifle_MSBS65_UBS_base_camo_F;
    class arifle_MSBS65_UBS_camo_F: arifle_MSBS65_UBS_base_camo_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class sgun_HunterShotgun_01_base_F;
    class sgun_HunterShotgun_01_F: sgun_HunterShotgun_01_base_F {
        AI_DISPERSION;
    };
    class sgun_HunterShotgun_01_sawedoff_base_F;
    class sgun_HunterShotgun_01_sawedoff_F: sgun_HunterShotgun_01_sawedoff_base_F {
        AI_DISPERSION;
    };
    class rhs_weap_ak74m_Base_F;
    class rhs_weap_ak74m: rhs_weap_ak74m_Base_F {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak74m_camo: rhs_weap_ak74m {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak74m_npz: rhs_weap_ak74m {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak74m_desert_npz: rhs_weap_ak74m_npz {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak74m_desert: rhs_weap_ak74m {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak74m_gp25: rhs_weap_ak74m {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak74m_gp25_npz: rhs_weap_ak74m_gp25 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak74m_fullplum: rhs_weap_ak74m {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak74m_fullplum_npz: rhs_weap_ak74m_npz {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak74m_fullplum_gp25: rhs_weap_ak74m_gp25 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak74m_fullplum_gp25_npz: rhs_weap_ak74m_gp25_npz {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak74m_zenitco01: rhs_weap_ak74m {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak74m_zenitco01_b33: rhs_weap_ak74m_zenitco01 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak74mr: rhs_weap_ak74m {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak74mr_gp25: rhs_weap_ak74mr {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak105: rhs_weap_ak74m {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak105_zenitco01: rhs_weap_ak105 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak105_npz: rhs_weap_ak105 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak105_zenitco01_b33: rhs_weap_ak105_zenitco01 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_akm: rhs_weap_ak74m {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_akm_gp25: rhs_weap_akm {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_akmn: rhs_weap_akm {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_akmn_gp25: rhs_weap_akmn {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_akmn_npz: rhs_weap_akmn {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_akmn_gp25_npz: rhs_weap_akmn_gp25 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_akm_zenitco01_b33: rhs_weap_akmn {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_akms: rhs_weap_akm {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_akms_gp25: rhs_weap_akm {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_pm63: rhs_weap_akm {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak103_base;
    class rhs_weap_ak103: rhs_weap_ak103_base {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak104: rhs_weap_ak103_base {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak104_npz: rhs_weap_ak104 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak104_zenitco01: rhs_weap_ak104 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak104_zenitco01_b33: rhs_weap_ak104_zenitco01 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak103_npz: rhs_weap_ak103 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak103_zenitco01: rhs_weap_ak103 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak103_zenitco01_b33: rhs_weap_ak103_zenitco01 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak103_1: rhs_weap_ak103_base {
        AI_DISPERSION;
    };
    class rhs_weap_ak103_1_npz: rhs_weap_ak103_1 {
        AI_DISPERSION;
    };
    class rhs_weap_ak103_2: rhs_weap_ak103_base {
        modes[] = {"Single", "Burst", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(Burst);
    };
    class rhs_weap_ak103_2_npz: rhs_weap_ak103_2 {
        modes[] = {"Single", "Burst", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(Burst);
    };
    class rhs_weap_ak103_gp25: rhs_weap_ak103_base{
        modes[] = {"Single", "Burst", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(Burst);
    };
    class rhs_weap_ak103_gp25_npz: rhs_weap_ak103_base{
        modes[] = {"Single", "Burst", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(Burst);
    };
    class rhs_weap_ak74: rhs_weap_ak74m {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak74_gp25: rhs_weap_ak74 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak74n: rhs_weap_ak74 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak74n_gp25: rhs_weap_ak74_gp25 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak74n_npz: rhs_weap_ak74 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak74n_gp25_npz: rhs_weap_ak74_gp25 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak74_2: rhs_weap_ak74 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak74n_2: rhs_weap_ak74 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak74n_2_npz: rhs_weap_ak74 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak74n_2_gp25: rhs_weap_ak74_gp25 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak74n_2_gp25_npz: rhs_weap_ak74_gp25 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_ak74_3: rhs_weap_ak74 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_aks74: rhs_weap_ak74 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_aks74_2: rhs_weap_aks74 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_aks74_gp25: rhs_weap_aks74 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_aks74n: rhs_weap_aks74 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_aks74n_npz: rhs_weap_aks74n {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_aks74n_2: rhs_weap_aks74n {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_aks74n_2_npz: rhs_weap_aks74n {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_aks74n_gp25: rhs_weap_aks74_gp25 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_aks74n_gp25_npz: rhs_weap_aks74n_gp25 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_aks74u: rhs_weap_aks74 {
        modes[] = {"FullAuto", "Single", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_aks74un: rhs_weap_aks74u {
        modes[] = {"FullAuto", "Single", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_asval: rhs_weap_ak74m {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_asval_grip: rhs_weap_asval {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_asval_npz: rhs_weap_asval {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_asval_grip_npz: rhs_weap_asval_grip {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_vss: rhs_weap_asval {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_vss_grip: rhs_weap_vss {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_vss_npz: rhs_weap_vss {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_vss_grip_npz: rhs_weap_vss {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_svd;
    class rhs_weap_svdp: rhs_weap_svd {
        AI_DISPERSION
    };
    class rhs_weap_svdp_npz: rhs_weap_svdp {
        AI_DISPERSION
    };
    class rhs_weap_svdp_wd: rhs_weap_svdp {
        AI_DISPERSION
    };
    class rhs_weap_svdp_wd_npz: rhs_weap_svdp_wd {
        AI_DISPERSION
    };
    class rhs_weap_svds: rhs_weap_svdp {
        AI_DISPERSION
    };
    class rhs_weap_svds_npz: rhs_weap_svds {
        AI_DISPERSION
    };
    class rhs_weap_orsis_Base_F;
    class rhs_weap_t5000: rhs_weap_orsis_Base_F {
        AI_DISPERSION
    };
    class rhs_weap_pp2000: hgun_PDW2000_F {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_pkp_base;
    class rhs_weap_pkp: rhs_pkp_base {
        modes[] = {"FullAuto", "Single", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_pkm: rhs_weap_pkp {
        modes[] = {"manual", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class rhs_weap_XM2010_Base_F;
    class rhs_weap_XM2010: rhs_weap_XM2010_Base_F {
        AI_DISPERSION
    };
    class rhs_weap_XM2010_d: rhs_weap_XM2010 {
        AI_DISPERSION
    };
    class rhs_weap_XM2010_wd: rhs_weap_XM2010 {
        AI_DISPERSION
    };
    class rhs_weap_XM2010_sa: rhs_weap_XM2010 {
        AI_DISPERSION
    };
    class rhs_weap_m24sws: rhs_weap_XM2010_Base_F {
        AI_DISPERSION
    };
    class rhs_weap_m24sws_d: rhs_weap_m24sws {
        AI_DISPERSION
    };
    class rhs_weap_m24sws_wd: rhs_weap_m24sws {
        AI_DISPERSION
    };
    class rhs_weap_m40a5: rhs_weap_XM2010_Base_F {
        AI_DISPERSION
    };
    class rhs_weap_m40a5_d: rhs_weap_m40a5 {
        AI_DISPERSION
    };
    class rhs_weap_m40a5_wd: rhs_weap_m40a5 {
        AI_DISPERSION
    };
    class rhs_weap_m4_Base;
    class rhs_weap_m4: rhs_weap_m4_Base {
        modes[] = {"Single", "Single_AI", "Burst", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(Burst);
    };
    class rhs_weap_m4_mstock: rhs_weap_m4 {
        modes[] = {"Single", "Single_AI", "Burst", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(Burst);
    };
    class rhs_weap_m4_carryhandle: rhs_weap_m4 {
        modes[] = {"Single", "Single_AI", "Burst", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(Burst);
    };
    class rhs_weap_m4_carryhandle_mstock: rhs_weap_m4_carryhandle {
        modes[] = {"Single", "Single_AI", "Burst", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(Burst);
    };
    class rhs_weap_m4_m320: rhs_weap_m4 {
        modes[] = {"Single", "Single_AI", "Burst", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(Burst);
    };
    class rhs_weap_m4_m203: rhs_weap_m4_m320 {
        modes[] = {"Single", "Single_AI", "Burst", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(Burst);
    };
    class rhs_weap_m4_m203S: rhs_weap_m4_m203 {
        modes[] = {"Single", "Single_AI", "Burst", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(Burst);
    };
    class rhs_weap_m4_carryhandle_m203: rhs_weap_m4_m203 {
        modes[] = {"Single", "Single_AI", "Burst", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(Burst);
    };
    class rhs_weap_m4_carryhandle_m203S: rhs_weap_m4_carryhandle_m203 {
        modes[] = {"Single", "Single_AI", "Burst", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(Burst);
    };
    class rhs_weap_m4a1: rhs_weap_m4_Base {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m4a1_d: rhs_weap_m4a1 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m4a1_wd: rhs_weap_m4a1 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m4a1_mstock: rhs_weap_m4a1 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m4a1_d_mstock: rhs_weap_m4a1_d {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m4a1_wd_mstock: rhs_weap_m4a1_wd {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m4a1_carryhandle: rhs_weap_m4a1 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m4a1_carryhandle_mstock: rhs_weap_m4a1_carryhandle {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m4a1_m203: rhs_weap_m4a1 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m4a1_m203s: rhs_weap_m4a1_m203 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m4a1_m203s_d: rhs_weap_m4a1_m203s {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m4a1_carryhandle_m203: rhs_weap_m4a1_m203 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m4a1_carryhandle_m203S: rhs_weap_m4a1_carryhandle_m203 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m4a1_m320: rhs_weap_m4a1 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m4a1_m203s_wd: rhs_weap_m4a1_m203s {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m4a1_blockII: rhs_weap_m4a1 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m4a1_blockII_wd: rhs_weap_m4a1_blockII {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m4a1_blockII_bk: rhs_weap_m4a1_blockII {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m4a1_blockII_d: rhs_weap_m4a1_blockII {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m4a1_blockII_KAC: rhs_weap_m4a1_blockII {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m4a1_blockII_KAC_bk: rhs_weap_m4a1_blockII_KAC {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m4a1_blockII_KAC_wd: rhs_weap_m4a1_blockII_KAC {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m4a1_blockII_KAC_d: rhs_weap_m4a1_blockII_KAC {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m4a1_blockII_M203: rhs_weap_m4a1_blockII {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m4a1_blockII_M203_bk: rhs_weap_m4a1_blockII_M203 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m4a1_blockII_M203_d: rhs_weap_m4a1_blockII_M203 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m4a1_blockII_M203_wd: rhs_weap_m4a1_blockII_M203 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_mk18: rhs_weap_m4a1_blockII {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_mk18_bk: rhs_weap_mk18 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_mk18_wd: rhs_weap_mk18 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_mk18_d: rhs_weap_mk18 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_mk18_KAC: rhs_weap_mk18 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_mk18_KAC_bk: rhs_weap_mk18_KAC {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_mk18_KAC_wd: rhs_weap_mk18_KAC {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_mk18_KAC_d: rhs_weap_mk18_KAC {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_mk18_m320: rhs_weap_mk18 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m16a4: rhs_weap_m4_Base {
        modes[] = {"Single", "Single_AI", "Burst", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(Burst);
    };
    class rhs_weap_m16a4_imod: rhs_weap_m16a4 {
        modes[] = {"Single", "Single_AI", "Burst", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(Burst);
    };
    class rhs_weap_m16a4_carryhandle: rhs_weap_m16a4 {
        modes[] = {"Single", "Single_AI", "Burst", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(Burst);
    };
    class rhs_weap_m16a4_carryhandle_M203: rhs_weap_m16a4 {
        modes[] = {"Single", "Single_AI", "Burst", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(Burst);
    };
    class rhs_weap_m16a4_imod_M203: rhs_weap_m16a4_carryhandle_M203 {
        modes[] = {"Single", "Single_AI", "Burst", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(Burst);
    };
    class rhs_weap_hk416d10: rhs_weap_m4a1 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_hk416d145: rhs_weap_hk416d10 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_hk416d10_LMT: rhs_weap_hk416d10 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_hk416d10_m320: rhs_weap_hk416d10 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_hk416d145_m320: rhs_weap_hk416d145 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_hk416d10_LMT_d: rhs_weap_hk416d10_LMT {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_hk416d10_LMT_wd: rhs_weap_hk416d10_LMT {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_hk416d145_d: rhs_weap_hk416d145 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_hk416d145_d_2: rhs_weap_hk416d145 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_hk416d145_wd: rhs_weap_hk416d145 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_hk416d145_wd_2: rhs_weap_hk416d145 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m27iar: rhs_weap_m4a1 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m27iar_grip: rhs_weap_m27iar {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_lmg_minimi_railed;
    class rhs_weap_m249: rhs_weap_lmg_minimi_railed {
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m249_pip_S: rhs_weap_lmg_minimi_railed {
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m249_pip_S_para: rhs_weap_m249_pip_S {
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m249_light_S: rhs_weap_m249_pip_S {
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m249_pip: rhs_weap_lmg_minimi_railed {
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m249_pip_ris: rhs_weap_m249_pip {
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m249_pip_L: rhs_weap_lmg_minimi_railed {
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m249_pip_L_para: rhs_weap_m249_pip_L {
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m249_light_L: rhs_weap_m249_pip_L {
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m240_base;
    class rhs_weap_m240B: rhs_weap_m240_base {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class rhs_weap_m240G: rhs_weap_m240_base {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class rhs_weap_m14ebrri: srifle_EBR_F {
        AI_DISPERSION;
    };
    class rhs_weap_sr25: rhs_weap_m14ebrri {
        AI_DISPERSION;
    };
    class rhs_weap_sr25_ec: rhs_weap_sr25 {
        AI_DISPERSION;
    };
    class rhs_weap_sr25_wd: rhs_weap_sr25 {
        AI_DISPERSION;
    };
    class rhs_weap_sr25_ec_wd: rhs_weap_sr25_wd {
        AI_DISPERSION;
    };
    class rhs_weap_sr25_d: rhs_weap_sr25_wd {
        AI_DISPERSION;
    };
    class rhs_weap_sr25_ec_d: rhs_weap_sr25_d {
        AI_DISPERSION;
    };
    class rhs_weap_M107_Base_F;
    class rhs_weap_M107: rhs_weap_M107_Base_F {
        AI_DISPERSION;
    };
    class rhs_weap_M107_d: rhs_weap_M107 {
        AI_DISPERSION;
    };
    class rhs_weap_M107_w: rhs_weap_M107 {
        AI_DISPERSION;
    };
    class rhs_weap_M590_5RD: Rifle_Base_F {
        AI_DISPERSION;
    };
    class rhs_weap_M590_8RD: rhs_weap_M590_5RD {
        AI_DISPERSION;
    };
    class rhs_weap_m32_Base_F;
    class rhs_weap_m32: rhs_weap_m32_Base_F {
        AI_DISPERSION;
    };
    class rhsusf_weap_MP7A1_base_f;
    class rhsusf_weap_MP7A2: rhsusf_weap_MP7A1_base_f {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhsusf_weap_MP7A2_winter: rhsusf_weap_MP7A2 {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhsusf_weap_MP7A2_desert: rhsusf_weap_MP7A2 {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhsusf_weap_MP7A2_aor1: rhsusf_weap_MP7A2 {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_SCAR_H_CQC_Base;
    class rhs_weap_mk17_CQC: rhs_weap_SCAR_H_CQC_Base {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_SCAR_H_STD_Base;
    class rhs_weap_mk17_STD: rhs_weap_SCAR_H_STD_Base {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_SCAR_H_LB_Base;
    class rhs_weap_mk17_LB: rhs_weap_SCAR_H_LB_Base {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_SCARH_USA_CQC: rhs_weap_mk17_CQC {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_SCARH_USA_STD: rhs_weap_mk17_STD {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_SCARH_USA_LB: rhs_weap_mk17_LB {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_CZ_BREN2_Base;
    class CUP_CZ_BREN2_556_14: CUP_CZ_BREN2_Base {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_CZ_BREN2_GL_Base;
    class CUP_CZ_BREN2_556_14_GL: CUP_CZ_BREN2_GL_Base {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_CZ_BREN2_556_11: CUP_CZ_BREN2_Base {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_CZ_BREN2_556_11_GL: CUP_CZ_BREN2_GL_Base {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_CZ_BREN2_556_8: CUP_CZ_BREN2_Base {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_CZ_BREN2_762_Base;
    class CUP_CZ_BREN2_762_14: CUP_CZ_BREN2_762_Base {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_CZ_BREN2_762_GL_Base;
    class CUP_CZ_BREN2_762_14_GL: CUP_CZ_BREN2_762_GL_Base {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_CZ_BREN2_762_8: CUP_CZ_BREN2_762_Base {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_glaunch_Base;
    class CUP_glaunch_M32: CUP_glaunch_Base {
        AI_DISPERSION;
    };
    class CUP_glaunch_M79: CUP_glaunch_Base {
        AI_DISPERSION;
    };
    class CUP_glaunch_Mk13: CUP_glaunch_Base {
        AI_DISPERSION;
    };
    class CUP_glaunch_6G30: CUP_glaunch_M32 {
        AI_DISPERSION;
    };
    class CUP_arifle_OTS14_GROZA_Base;
    class CUP_arifle_OTS14_GROZA_GL: CUP_arifle_OTS14_GROZA_Base {
        modes[] = {"Single", "Full", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(Full);
    };
    class CUP_arifle_OTS14_GROZA_Grip: CUP_arifle_OTS14_GROZA_Base {
        modes[] = {"Single", "Full", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(Full);
    };
    class CUP_arifle_OTS14_GROZA: CUP_arifle_OTS14_GROZA_Base {
        modes[] = {"Single", "Full", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(Full);
    };
    class CUP_arifle_OTS14_GROZA_762_base;
    class CUP_arifle_OTS14_GROZA_762_Grip: CUP_arifle_OTS14_GROZA_762_base {
        modes[] = {"Single", "Full", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(Full);
    };
    class CUP_arifle_OTS14_GROZA_762: CUP_arifle_OTS14_GROZA_762_base {
        modes[] = {"Single", "Full", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(Full);
    };
    class CUP_arifle_OTS14_GROZA_762_GL: CUP_arifle_OTS14_GROZA_762_base {
        modes[] = {"Single", "Full", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(Full);
    };
    class CUP_srifle_ksvk: Rifle_Base_F {
        AI_DISPERSION;
    };
    class CUP_Mac10_Base;
    class CUP_smg_Mac10: CUP_Mac10_Base {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_smg_MP5SD6: Rifle_Base_F {
        modes[] = {"Single", "Burst", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_smg_MP5A5: CUP_smg_MP5SD6 {
        modes[] = {"Single", "Burst", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_smg_MP5A5_flashlight: CUP_smg_MP5A5 {
        modes[] = {"Single", "Burst", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_sgun_Saiga12K: Rifle_Base_F {
        AI_DISPERSION;
    };
    class CUP_sgun_Saiga12K_top_rail: CUP_sgun_Saiga12K {
        AI_DISPERSION;
    };
    class CUP_hgun_BallisticShield_Armed: Rifle_Base_F {
        AI_DISPERSION;
    };
    class CUP_arifle_AUG_Base;
    class CUP_arifle_AUG_A1: CUP_arifle_AUG_Base {
        modes[] = {"FullAuto", "Single", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_srifle_SVD: Rifle_Base_F {
        AI_DISPERSION;
    };
    class CUP_srifle_SVD_top_rail: CUP_srifle_SVD {
        AI_DISPERSION;
    };
    class CUP_srifle_SVD_des: CUP_srifle_SVD {
        AI_DISPERSION;
    };
    class CUP_srifle_SVD_wdl: CUP_srifle_SVD {
        AI_DISPERSION;
    };
    class CUP_srifle_SVD_des_top_rail: CUP_srifle_SVD_top_rail {
        AI_DISPERSION;
    };
    class CUP_srifle_SVD_wdl_top_rail: CUP_srifle_SVD_top_rail {
        AI_DISPERSION;
    };
    class CUP_lmg_UK59: Rifle_Long_Base_F {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class CUP_srifle_VSSVintorez: Rifle_Base_F {
        modes[] = {"Single", "Full", "NEV_FullAuto"};
        AI_ROF(Full);
    };
    class CUP_srifle_VSSVintorez_top_rail: CUP_srifle_VSSVintorez {
        modes[] = {"Single", "Full", "NEV_FullAuto"};
        AI_ROF(Full);
    };
    class CUP_srifle_VSSVintorez_VFG: CUP_srifle_VSSVintorez {
        modes[] = {"Single", "Full", "NEV_FullAuto"};
        AI_ROF(Full);
    };
    class CUP_srifle_VSSVintorez_VFG_top_rail: CUP_srifle_VSSVintorez_top_rail {
        modes[] = {"Single", "Full", "NEV_FullAuto"};
        AI_ROF(Full);
    };
    class CUP_srifle_VSSVintorez_flash: CUP_srifle_VSSVintorez {
        modes[] = {"Single", "Full", "NEV_FullAuto"};
        AI_ROF(Full);
    };
    class CUP_srifle_VSSVintorez_flash_top: CUP_srifle_VSSVintorez_top_rail {
        modes[] = {"Single", "Full", "NEV_FullAuto"};
        AI_ROF(Full);
    };
    class CUP_arifle_AS_VAL: CUP_srifle_VSSVintorez {
        modes[] = {"Single", "Full", "NEV_FullAuto"};
        AI_ROF(Full);
    };
    class CUP_arifle_AS_VAL_top_rail;
    class CUP_arifle_AS_VAL_VFG_top_rail: CUP_arifle_AS_VAL_top_rail {
        modes[] = {"Single", "Full", "NEV_FullAuto"};
        AI_ROF(Full);
    };
    class CUP_arifle_AS_VAL_VFG: CUP_arifle_AS_VAL {
        modes[] = {"Single", "Full", "NEV_FullAuto"};
        AI_ROF(Full);
    };
    class CUP_arifle_AS_VAL_VFG_top_rail: CUP_arifle_AS_VAL_top_rail {
        modes[] = {"Single", "Full", "NEV_FullAuto"};
        AI_ROF(Full);
    };
    class CUP_arifle_AS_VAL_flash: CUP_arifle_AS_VAL {
        modes[] = {"Single", "Full", "NEV_FullAuto"};
        AI_ROF(Full);
    };
    class CUP_arifle_AS_VAL_flash_top: CUP_arifle_AS_VAL_top_rail {
        modes[] = {"Single", "Full", "NEV_FullAuto"};
        AI_ROF(Full);
    };
    class CUP_arifle_SR3M_Vikhr: Rifle_Base_F {
        modes[] = {"Single", "Full", "NEV_FullAuto"};
        AI_ROF(Full);
    };
    class CUP_arifle_SR3M_Vikhr_top_rail: CUP_arifle_SR3M_Vikhr {
        modes[] = {"Single", "Full", "NEV_FullAuto"};
        AI_ROF(Full);
    };
    class CUP_arifle_SR3M_Vikhr_VFG: CUP_arifle_SR3M_Vikhr {
        modes[] = {"Single", "Full", "NEV_FullAuto"};
        AI_ROF(Full);
    };
    class CUP_arifle_SR3M_Vikhr_VFG_top_rail: CUP_arifle_SR3M_Vikhr_top_rail {
        modes[] = {"Single", "Full", "NEV_FullAuto"};
        AI_ROF(Full);
    };
    class Tavor_base_F;
    class CUP_arifle_X95: Tavor_base_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_X95_Grippod: CUP_arifle_X95 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_Fort224: CUP_arifle_X95 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_Fort224_Grippod: CUP_arifle_X95_Grippod {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_Fort221: arifle_TRG20_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_Fort222: arifle_TRG21_F {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK_Base;
    class CUP_arifle_AKM: CUP_arifle_AK_Base {
        modes[] = {"FullAuto", "Single", "Burst", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AKM_GL: CUP_arifle_AKM {
        modes[] = {"FullAuto", "Single", "Burst", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AKM_top_rail: CUP_arifle_AKM {
        modes[] = {"FullAuto", "Single", "Burst", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AKM_GL_top_rail: CUP_arifle_AKM_GL {
        modes[] = {"FullAuto", "Single", "Burst", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AKM_Early: CUP_arifle_AKM {
        modes[] = {"FullAuto", "Single", "Burst", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AKM_GL_Early: CUP_arifle_AKM_GL {
        modes[] = {"FullAuto", "Single", "Burst", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AKMN_railed: CUP_arifle_AKM {
        modes[] = {"FullAuto", "Single", "Burst", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AKMN_railed_afg: CUP_arifle_AKM {
        modes[] = {"FullAuto", "Single", "Burst", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AKMN_railed_desert: CUP_arifle_AKMN_railed {
        modes[] = {"FullAuto", "Single", "Burst", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AKMN_railed_afg_desert: CUP_arifle_AKMN_railed_afg {
        modes[] = {"FullAuto", "Single", "Burst", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AKMS: CUP_arifle_AKM {
        modes[] = {"FullAuto", "Single", "Burst", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AKMS_top_rail: CUP_arifle_AKMS {
        modes[] = {"FullAuto", "Single", "Burst", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AKMS_GL: CUP_arifle_AKM_GL {
        modes[] = {"FullAuto", "Single", "Burst", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AKMS_GL_top_rail: CUP_arifle_AKMS_GL {
        modes[] = {"FullAuto", "Single", "Burst", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AKMS_Early: CUP_arifle_AKMS {
        modes[] = {"FullAuto", "Single", "Burst", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AKMS_GL_Early: CUP_arifle_AKMS_GL {
        modes[] = {"FullAuto", "Single", "Burst", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AKS_Base;
    class CUP_arifle_AKS74U: CUP_arifle_AKS_Base {
        modes[] = {"FullAuto", "Single", "Burst", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AKS74U_top_rail: CUP_arifle_AKS74U {
        modes[] = {"FullAuto", "Single", "Burst", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AKS74U_railed: CUP_arifle_AKS74U {
        modes[] = {"FullAuto", "Single", "Burst", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK47: CUP_arifle_AK_Base {
        modes[] = {"FullAuto", "Single", "Burst", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK47_GL: CUP_arifle_AK47 {
        modes[] = {"FullAuto", "Single", "Burst", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK47_top_rail: CUP_arifle_AK47 {
        modes[] = {"FullAuto", "Single", "Burst", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK47_GL_top_rail: CUP_arifle_AK47_GL {
        modes[] = {"FullAuto", "Single", "Burst", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK47_Early: CUP_arifle_AK47 {
        modes[] = {"FullAuto", "Single", "Burst", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK47_GL_Early: CUP_arifle_AK47_GL {
        modes[] = {"FullAuto", "Single", "Burst", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AKS: CUP_arifle_AKM {
        modes[] = {"FullAuto", "Single", "Burst", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AKS_Gold: CUP_arifle_AKS {
        modes[] = {"FullAuto", "Single", "Burst", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AKS_top_rail: CUP_arifle_AKS {
        modes[] = {"FullAuto", "Single", "Burst", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK74: CUP_arifle_AK_Base {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK74_GL: CUP_arifle_AK_Base {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK74_top_rail: CUP_arifle_AK74 {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK74_GL_top_rail: CUP_arifle_AK74_GL {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK74_Early: CUP_arifle_AK74 {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK74_GL_Early: CUP_arifle_AK74_GL {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AKS74: CUP_arifle_AKS_Base {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AKS74_GL: CUP_arifle_AK74_GL {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AKS74_top_rail: CUP_arifle_AKS74 {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AKS74_GL_top_rail: CUP_arifle_AKS74_GL {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AKS74_Early: CUP_arifle_AKS74 {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AKS74_GL_Early: CUP_arifle_AKS74_GL {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK74M: CUP_arifle_AK_Base {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK74M_GL: CUP_arifle_AK_Base {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK74M_top_rail: CUP_arifle_AK74M {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK74M_GL_top_rail: CUP_arifle_AK74M_GL {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK74M_railed: CUP_arifle_AK74M {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK74M_GL_railed: CUP_arifle_AK74M_GL {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK74M_railed_afg: CUP_arifle_AK74M_railed {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK74M_desert: CUP_arifle_AK74M {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK74M_top_rail_desert: CUP_arifle_AK74M_desert {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK74M_railed_desert: CUP_arifle_AK74M_desert {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK74M_GL_desert: CUP_arifle_AK74M_GL {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK74M_GL_top_rail_desert: CUP_arifle_AK74M_GL_desert {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK74M_GL_railed_desert: CUP_arifle_AK74M_GL_desert {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK74M_railed_afg_desert: CUP_arifle_AK74M_railed_desert {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK74M_camo: CUP_arifle_AK74M {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK74M_top_rail_camo: CUP_arifle_AK74M_camo {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK74M_railed_camo: CUP_arifle_AK74M_camo {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK74M_GL_camo: CUP_arifle_AK74M_GL {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK74M_GL_top_rail_camo: CUP_arifle_AK74M_GL_camo {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK74M_GL_railed_camo: CUP_arifle_AK74M_GL_camo {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK74M_railed_afg_camo: CUP_arifle_AK74M_railed_camo {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK101: CUP_arifle_AK74M {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK101_GL: CUP_arifle_AK74M_GL {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK101_top_rail: CUP_arifle_AK101 {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK101_GL_top_rail: CUP_arifle_AK101_GL {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK101_railed: CUP_arifle_AK101 {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK101_GL_railed: CUP_arifle_AK101_GL {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK103: CUP_arifle_AK74M {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK103_GL: CUP_arifle_AK74M_GL {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK103_top_rail: CUP_arifle_AK103 {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK103_GL_top_rail: CUP_arifle_AK103_GL {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK103_railed: CUP_arifle_AK103 {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK103_GL_railed: CUP_arifle_AK103_GL {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK107_Base;
    class CUP_arifle_AK107: CUP_arifle_AK107_Base {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK107_GL: CUP_arifle_AK107_Base {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK107_top_rail: CUP_arifle_AK107 {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK107_GL_top_rail: CUP_arifle_AK107_GL {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK107_railed: CUP_arifle_AK107 {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK107_GL_railed: CUP_arifle_AK107_GL {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK108: CUP_arifle_AK107 {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK108_GL: CUP_arifle_AK107_GL {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK108_top_rail: CUP_arifle_AK108 {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK108_GL_top_rail: CUP_arifle_AK108_GL {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK108_railed: CUP_arifle_AK108 {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK108_GL_railed: CUP_arifle_AK108_GL {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK109: CUP_arifle_AK107 {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK109_GL: CUP_arifle_AK107_GL {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK109_top_rail: CUP_arifle_AK109 {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK109_GL_top_rail: CUP_arifle_AK109_GL {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK109_railed: CUP_arifle_AK109 {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK109_GL_railed: CUP_arifle_AK109_GL {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK102: CUP_arifle_AK_Base {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK102_top_rail: CUP_arifle_AK102 {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK102_railed: CUP_arifle_AK102 {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK104: CUP_arifle_AK_Base {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK104_top_rail: CUP_arifle_AK104 {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK104_railed: CUP_arifle_AK104 {
        modes[] = {"FullAuto", "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK105: CUP_arifle_AK_Base {
        modes[] = {"FullAuto", "Single", "Burst", "Burst_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK105_top_rail: CUP_arifle_AK105 {
        modes[] = {"FullAuto", "Single", "Burst", "Burst_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AK105_railed: CUP_arifle_AK105 {
        modes[] = {"FullAuto", "Single", "Burst", "Burst_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_RPK74: CUP_arifle_AK_Base {
        modes[] = {"manual", "close", "short", "medium", "far_optic1", "far_optic2", "Single", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_RPK74_top_rail: CUP_arifle_RPK74 {
        modes[] = {"manual", "close", "short", "medium", "far_optic1", "far_optic2", "Single", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_RPK74_45: CUP_arifle_RPK74 {
        modes[] = {"manual", "close", "short", "medium", "far_optic1", "far_optic2", "Single", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_RPK74_45_top_rail: CUP_arifle_RPK74_45 {
        modes[] = {"manual", "close", "short", "medium", "far_optic1", "far_optic2", "Single", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_RPK74M: CUP_arifle_RPK74 {
        modes[] = {"manual", "close", "short", "medium", "far_optic1", "far_optic2", "Single", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_RPK74M_top_rail: CUP_arifle_RPK74M {
        modes[] = {"manual", "close", "short", "medium", "far_optic1", "far_optic2", "Single", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class CUP_arifle_RPK74M_railed: CUP_arifle_RPK74M_top_rail {
        modes[] = {"manual", "close", "short", "medium", "far_optic1", "far_optic2", "Single", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class CUP_arifle_SAIGA_MK03: CUP_arifle_AK104 {
        AI_DISPERSION;
    };
    class CUP_arifle_SAIGA_MK03_top_rail: CUP_arifle_SAIGA_MK03 {
        AI_DISPERSION;
    };
    class CUP_arifle_SAIGA_MK03_Wood: CUP_arifle_SAIGA_MK03 {
        AI_DISPERSION;
    };
    class CUP_arifle_SIAGE_MK03_Wood_top_rail: CUP_arifle_SAIGA_MK03_Wood {
        AI_DISPERSION;
    };
    class CUP_arifle_TYPE_56_2: CUP_arifle_AKM {
        modes[] = {"FullAuto", "Single", "Burst", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_TYPE_56_2_top_rail: CUP_arifle_TYPE_56_2 {
        modes[] = {"FullAuto", "Single", "Burst", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_TYPE_56_2_Early: CUP_arifle_TYPE_56_2 {
        modes[] = {"FullAuto", "Single", "Burst", "FullAuto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_srifle_AS50: Rifle_Long_Base_F {
        AI_DISPERSION;
    };
    class CUP_srifle_AWM_Base;
    class CUP_srifle_AWM_des: CUP_srifle_AWM_Base {
        AI_DISPERSION;
    };
    class CUP_srifle_AWM_wdl: CUP_srifle_AWM_des {
        AI_DISPERSION;
    };
    class CUP_srifle_G22_des: CUP_srifle_AWM_des {
        AI_DISPERSION;
    };
    class CUP_srifle_G22_wdl: CUP_srifle_AWM_wdl {
        AI_DISPERSION;
    };
    class CUP_smg_bizon: Rifle_Base_F {
        modes[] = {"FullAuto", "Single", "Burst", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_smg_vityaz: CUP_smg_bizon {
        modes[] = {"FullAuto", "Single", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_smg_vityaz_vfg: CUP_smg_vityaz {
        modes[] = {"FullAuto", "Single", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_smg_vityaz_top_rail: CUP_smg_vityaz {
        modes[] = {"FullAuto", "Single", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_smg_vityaz_vfg_top_rail: CUP_smg_vityaz_top_rail {
        modes[] = {"FullAuto", "Single", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_smg_vityaz_vfg_front_rail: CUP_smg_vityaz_top_rail {
        modes[] = {"FullAuto", "Single", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_smg_saiga9: CUP_smg_vityaz_top_rail {
        AI_DISPERSION;
    };
    class CUP_arifle_CZ805_Base;
    class CUP_arifle_CZ805_A2: CUP_arifle_CZ805_Base {
        AI_DISPERSION;
    };
    class CUP_arifle_CZ805_A1: CUP_arifle_CZ805_Base {
        AI_DISPERSION;
    };
    class CUP_arifle_CZ805_GL: CUP_arifle_CZ805_Base {
        AI_DISPERSION;
    };
    class CUP_arifle_CZ805_A2_blk: CUP_arifle_CZ805_A2 {
        AI_DISPERSION;
    };
    class CUP_arifle_CZ805_A2_coyote: CUP_arifle_CZ805_A2 {
        AI_DISPERSION;
    };
    class CUP_arifle_CZ805_A1_blk: CUP_arifle_CZ805_A1 {
        AI_DISPERSION;
    };
    class CUP_arifle_CZ805_A1_coyote: CUP_arifle_CZ805_A1 {
        AI_DISPERSION;
    };
    class CUP_arifle_CZ805_GL_blk: CUP_arifle_CZ805_GL {
        AI_DISPERSION;
    };
    class CUP_arifle_CZ805_GL_coyote: CUP_arifle_CZ805_GL {
        AI_DISPERSION;
    };
    class Rifle_Short_Base_F;
    class CUP_smg_EVO: Rifle_Short_Base_F {
        modes[] = {"Single", "Burst", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_FNFAL: Rifle_Base_F {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_FNFAL_railed: CUP_arifle_FNFAL {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_FNFAL_desert: CUP_arifle_FNFAL {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_FNFAL_railed_desert: CUP_arifle_FNFAL_railed {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_FNFAL_sand: CUP_arifle_FNFAL {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_FNFAL_railed_sand: CUP_arifle_FNFAL_railed {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_FNFAL_woodland: CUP_arifle_FNFAL {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_FNFAL_railed_woodland: CUP_arifle_FNFAL_railed {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_FNFAL5061: CUP_arifle_FNFAL {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_FNFAL5061_rhodesian: CUP_arifle_FNFAL5061 {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_FNFAL5060;
    class CUP_arifle_FNFAL5061_wooden: CUP_arifle_FNFAL5060 {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_FNFAL5062: CUP_arifle_FNFAL {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_FNFAL_OSW: CUP_arifle_FNFAL {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36_Base_CarryhandleOptics;
    class CUP_arifle_G36A: CUP_arifle_G36_Base_CarryhandleOptics {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36A_camo: CUP_arifle_G36A {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36A_wdl: CUP_arifle_G36A {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36_Base;
    class CUP_arifle_G36A_RIS: CUP_arifle_G36_Base {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36A_RIS_camo: CUP_arifle_G36A_RIS {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36A_RIS_wdl: CUP_arifle_G36A_RIS {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AG36: CUP_arifle_G36A {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AG36_camo: CUP_arifle_AG36 {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_AG36_wdl: CUP_arifle_AG36 {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36A_AG36_RIS: CUP_arifle_G36A_RIS {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36A_AG36_RIS_camo: CUP_arifle_G36A_AG36_RIS {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36A_AG36_RIS_wdl: CUP_arifle_G36A_AG36_RIS {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36K: CUP_arifle_G36_Base_CarryhandleOptics {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36K_camo: CUP_arifle_G36K {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36K_wdl: CUP_arifle_G36K {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36K_VFG: CUP_arifle_G36K {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36K_VFG_camo: CUP_arifle_G36K_VFG {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36K_VFG_wdl: CUP_arifle_G36K_VFG {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36K_RIS: CUP_arifle_G36_Base {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36K_RIS_camo: CUP_arifle_G36K_RIS {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36K_RIS_wdl: CUP_arifle_G36K_RIS {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36K_RIS_hex: CUP_arifle_G36K_RIS {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36K_AG36: CUP_arifle_G36K {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36K_AG36_camo: CUP_arifle_G36K_AG36 {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36K_AG36_wdl: CUP_arifle_G36K_AG36 {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36K_RIS_AG36: CUP_arifle_G36K_RIS {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36K_RIS_AG36_camo: CUP_arifle_G36K_RIS_AG36 {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36K_RIS_AG36_wdl: CUP_arifle_G36K_RIS_AG36 {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36K_RIS_AG36_hex: CUP_arifle_G36K_RIS_AG36 {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36K_KSK: CUP_arifle_G36K_RIS {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36K_KSK_camo: CUP_arifle_G36K_KSK {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36K_KSK_hex: CUP_arifle_G36K_KSK {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36K_KSK_VFG: CUP_arifle_G36K_RIS {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36K_KSK_VFG_camo: CUP_arifle_G36K_KSK_VFG {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36K_KSK_VFG_hex: CUP_arifle_G36K_KSK_VFG {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36C: CUP_arifle_G36_Base {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36C_camo: CUP_arifle_G36C {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36C_wdl: CUP_arifle_G36C {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36C_hex: CUP_arifle_G36C {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36C_VFG: CUP_arifle_G36C {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36C_VFG_camo: CUP_arifle_G36C_VFG {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36C_VFG_wdl: CUP_arifle_G36C_VFG {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36C_VFG_hex: CUP_arifle_G36C_VFG {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G36C_VFG_Carry: CUP_arifle_G36C {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_MG36: CUP_arifle_G36C {
        modes[] = {"Single", "Fullauto", "close", "medium", "far", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_MG36_camo: CUP_arifle_MG36 {
        modes[] = {"Single", "Fullauto", "close", "medium", "far", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_MG36_wdl: CUP_arifle_MG36 {
        modes[] = {"Single", "Fullauto", "close", "medium", "far", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_MG36_hex: CUP_arifle_MG36 {
        modes[] = {"Single", "Fullauto", "close", "medium", "far", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK416_11_Base;
    class CUP_arifle_HK416_CQB_Black: CUP_arifle_HK416_11_Base {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK416_CQB_Desert: CUP_arifle_HK416_CQB_Black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK416_CQB_Wood: CUP_arifle_HK416_CQB_Black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK416_145_Base;
    class CUP_arifle_HK416_Black: CUP_arifle_HK416_145_Base {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK416_Desert: CUP_arifle_HK416_Black {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK416_Wood: CUP_arifle_HK416_Black {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK_M27: CUP_arifle_HK416_Black {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK_M27_VFG: CUP_arifle_HK_M27 {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK416_M203_Black: CUP_arifle_HK416_Black {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK416_M203_Desert: CUP_arifle_HK416_M203_Black {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK416_M203_Wood: CUP_arifle_HK416_M203_Black {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK416_CQB_M203_Black: CUP_arifle_HK416_CQB_Black {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK416_CQB_M203_Desert: CUP_arifle_HK416_CQB_M203_Black {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK416_CQB_M203_Wood: CUP_arifle_HK416_CQB_M203_Black {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK416_AGL_Black: CUP_arifle_HK416_Black {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK416_AGL_Desert: CUP_arifle_HK416_AGL_Black {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK416_AGL_Wood: CUP_arifle_HK416_AGL_Black {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK416_CQB_AG36: CUP_arifle_HK416_CQB_Black {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK416_CQB_AG36_Desert: CUP_arifle_HK416_CQB_AG36 {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK416_CQB_AG36_Wood: CUP_arifle_HK416_CQB_AG36 {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK_M27_AG36: CUP_arifle_HK416_Black {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK417_Base;
    class CUP_arifle_HK417_20: CUP_arifle_HK417_Base {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK417_20_Wood: CUP_arifle_HK417_20 {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK417_20_Desert: CUP_arifle_HK417_20 {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK417_12: CUP_arifle_HK417_20 {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK417_12_Wood: CUP_arifle_HK417_12 {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK417_12_Desert: CUP_arifle_HK417_12 {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK417_12_M203: CUP_arifle_HK417_12 {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK417_12_M203_Wood: CUP_arifle_HK417_12_M203 {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK417_12_M203_Desert: CUP_arifle_HK417_12_M203 {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK417_12_AG36: CUP_arifle_HK417_12 {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK417_12_AG36_Wood: CUP_arifle_HK417_12_AG36 {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_HK417_12_AG36_Desert: CUP_arifle_HK417_12_AG36 {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_sgun_CZ584: Rifle_Base_F {
        AI_DISPERSION;
    };
    class CUP_sgun_CZ584_RIS: CUP_sgun_CZ584 {
        AI_DISPERSION;
    };
    class CUP_srifle_L129A1: Rifle_Base_F {
        AI_DISPERSION;
    };
    class CUP_srifle_L129A1_HG: CUP_srifle_L129A1 {
        AI_DISPERSION;
    };
    class CUP_l85a2;
    class CUP_arifle_L85A2: CUP_l85a2 {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_l85a2_ris;
    class CUP_arifle_L85A2_G: CUP_l85a2_ris {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_l85a2_ris_ng;
    class CUP_arifle_L85A2_NG: CUP_l85a2_ris_ng {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_l85a2_ugl;
    class CUP_arifle_L85A2_GL: CUP_l85a2_ugl {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_L86A2: CUP_l85a2 {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_sgun_M1014_base;
    class CUP_sgun_M1014: CUP_sgun_M1014_base {
        AI_DISPERSION;
    };
    class CUP_sgun_M1014_solidstock: CUP_sgun_M1014 {
        AI_DISPERSION;
    };
    class CUP_sgun_M1014_vfg: CUP_sgun_M1014_base {
        AI_DISPERSION;
    };
    class CUP_sgun_M1014_Entry: CUP_sgun_M1014_base {
        AI_DISPERSION;
    };
    class CUP_sgun_M1014_Entry_vfg: CUP_sgun_M1014_Entry {
        AI_DISPERSION;
    };
    class CUP_srifle_M107_Base: Rifle_Long_Base_F {
        AI_DISPERSION;
    };
    class CUP_srifle_M107_Desert: CUP_srifle_M107_Base {
        AI_DISPERSION;
    };
    class CUP_srifle_M107_Pristine: CUP_srifle_M107_Base {
        AI_DISPERSION;
    };
    class CUP_srifle_M107_Snow: CUP_srifle_M107_Base {
        AI_DISPERSION;
    };
    class CUP_srifle_M107_Woodland: CUP_srifle_M107_Base {
        AI_DISPERSION;
    };
    class CUP_srifle_M110: Rifle_Base_F {
        AI_DISPERSION;
    };
    class CUP_srifle_M110_black: CUP_srifle_M110 {
        AI_DISPERSION;
    };
    class CUP_srifle_M110_woodland: CUP_srifle_M110 {
        AI_DISPERSION;
    };
    class CUP_srifle_m110_kac: CUP_srifle_M110 {
        AI_DISPERSION;
    };
    class CUP_srifle_m110_kac_black: CUP_srifle_m110_kac {
        AI_DISPERSION;
    };
    class CUP_srifle_m110_kac_woodland: CUP_srifle_m110_kac {
        AI_DISPERSION;
    };
    class CUP_srifle_M14: Rifle_Base_F {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M16_Base;
    class CUP_arifle_M16A2: CUP_arifle_M16_Base {
        modes[] = {"Single", "Burst", "NEV_FullAuto"};
        AI_ROF(Burst);
    };
    class CUP_arifle_M16A2_GL: CUP_arifle_M16_Base {
        modes[] = {"Single", "Burst", "NEV_FullAuto"};
        AI_ROF(Burst);
    };
    class CUP_arifle_M16A4_Base: CUP_arifle_M16_Base {
        modes[] = {"Single", "Burst", "NEV_FullAuto"};
        AI_ROF(Burst);
    };
    class CUP_arifle_M16A4_Grip: CUP_arifle_M16A4_Base {
        modes[] = {"Single", "Burst", "NEV_FullAuto"};
        AI_ROF(Burst);
    };
    class CUP_arifle_M16A4_GL: CUP_arifle_M16_Base {
        modes[] = {"Single", "Burst", "NEV_FullAuto"};
        AI_ROF(Burst);
    };
    class CUP_arifle_XM16E1: CUP_arifle_M16_Base {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M16A1: CUP_arifle_XM16E1 {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M16A1GL: CUP_arifle_XM16E1 {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M16A1GL_USA: CUP_arifle_M16A1GL {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M16A1GL_FS: CUP_arifle_M16A1GL {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_Colt727: CUP_arifle_M16_Base {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_Colt727_M203: CUP_arifle_Colt727 {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4_Base;
    class CUP_srifle_Mk12SPR: CUP_arifle_M4_Base {
        AI_DISPERSION;
    };
    class CUP_arifle_M4A1: CUP_arifle_M4_Base {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4A1_desert_carryhandle: CUP_arifle_M4_Base {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4A1_camo_carryhandle: CUP_arifle_M4_Base {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4A1_GL_carryhandle: CUP_arifle_M4A1 {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4A1_GL_carryhandle_camo: CUP_arifle_M4A1_GL_carryhandle {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4A1_GL_carryhandle_desert: CUP_arifle_M4A1_GL_carryhandle {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4A1_BUIS_Base;
    class CUP_arifle_M4A1_black: CUP_arifle_M4A1_BUIS_Base {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4A1_camo: CUP_arifle_M4A1_black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4A1_desert: CUP_arifle_M4A1_black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4A1_BUIS_GL: CUP_arifle_M4A1_BUIS_Base {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4A1_BUIS_camo_GL: CUP_arifle_M4A1_BUIS_GL {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4A1_BUIS_desert_GL: CUP_arifle_M4A1_BUIS_GL {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4A3_black: CUP_arifle_M4A1_BUIS_Base {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4A3_desert: CUP_arifle_M4A3_black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4A3_camo: CUP_arifle_M4A3_black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_mk18_black: CUP_arifle_M4A1_BUIS_Base {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_mk18_m203_black: CUP_arifle_mk18_black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_SBR_black: CUP_arifle_M4A1_BUIS_Base {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_SBR_od: CUP_arifle_SBR_black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_lmg_M240: Rifle_Long_Base_F {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class CUP_lmg_L7A2: CUP_lmg_M240 {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class CUP_lmg_L7A2_Flat: CUP_lmg_L7A2 {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class CUP_lmg_FNMAG: CUP_lmg_L7A2_Flat {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class CUP_lmg_FNMAG_RIS: CUP_lmg_M240 {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class CUP_saw_base;
    class CUP_lmg_minimipara: CUP_saw_base {
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_lmg_minimi: CUP_lmg_minimipara {
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_lmg_m249_para: CUP_lmg_minimipara {
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_lmg_M249_E2: CUP_lmg_minimipara {
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_lmg_minimi_railed: CUP_lmg_minimipara {
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_lmg_m249_pip1: CUP_lmg_minimi_railed {
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_lmg_m249_pip2: CUP_lmg_minimi_railed {
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_lmg_m249_pip3: CUP_lmg_minimi_railed {
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_lmg_m249_pip4: CUP_lmg_minimi_railed {
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_lmg_m249_SQuantoon: CUP_lmg_m249_pip4 {
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_lmg_L110A1: CUP_lmg_m249_pip4 {
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_M60E4_base;
    class CUP_lmg_M60E4: CUP_M60E4_base {
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_lmg_M60E4_norail: CUP_M60E4_base {
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_lmg_M60: CUP_M60E4_base {
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_lmg_MG3: Rifle_Long_Base_F {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class CUP_lmg_MG3_rail: CUP_lmg_MG3 {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class CUP_lmg_Mk48_Base;
    class CUP_lmg_Mk48: CUP_lmg_Mk48_Base {
        modes[] = {"manual", "close", "short", "medium", "far", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class CUP_lmg_Mk48_des: CUP_lmg_Mk48 {
        modes[] = {"manual", "close", "short", "medium", "far", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class CUP_lmg_Mk48_wdl: CUP_lmg_Mk48 {
        modes[] = {"manual", "close", "short", "medium", "far", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class CUP_lmg_Mk48_tan: CUP_lmg_Mk48 {
        modes[] = {"manual", "close", "short", "medium", "far", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class CUP_lmg_Mk48_od: CUP_lmg_Mk48 {
        modes[] = {"manual", "close", "short", "medium", "far", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class CUP_lmg_Mk48_nohg: CUP_lmg_Mk48 {
        modes[] = {"manual", "close", "short", "medium", "far", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class CUP_lmg_Mk48_nohg_des: CUP_lmg_Mk48_nohg {
        modes[] = {"manual", "close", "short", "medium", "far", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class CUP_lmg_Mk48_nohg_wdl: CUP_lmg_Mk48_nohg {
        modes[] = {"manual", "close", "short", "medium", "far", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class CUP_lmg_Mk48_nohg_tan: CUP_lmg_Mk48_nohg {
        modes[] = {"manual", "close", "short", "medium", "far", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class CUP_lmg_Mk48_nohg_od: CUP_lmg_Mk48_nohg {
        modes[] = {"manual", "close", "short", "medium", "far", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class CUP_smg_MP7: Rifle_Short_Base_F {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_smg_MP7_desert: CUP_smg_MP7 {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_smg_MP7_woodland: CUP_smg_MP7 {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_lmg_PKM: Rifle_Long_Base_F {
        modes[] = {"manual", "close", "short", "medium", "far", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class CUP_lmg_Pecheneg: CUP_lmg_PKM {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class CUP_lmg_Pecheneg_desert: CUP_lmg_Pecheneg {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class CUP_lmg_Pecheneg_woodland: CUP_lmg_Pecheneg {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class CUP_arifle_Sa58_base;
    class CUP_arifle_Sa58P: CUP_arifle_Sa58_base {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_Sa58P_des: CUP_arifle_Sa58P {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_Sa58P_woodland: CUP_arifle_Sa58P {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_Sa58V: CUP_arifle_Sa58P {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_Sa58V_camo: CUP_arifle_Sa58V {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_Sa58V_woodland: CUP_arifle_Sa58V {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_Sa58RIS1: CUP_arifle_Sa58_base {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_Sa58RIS1_des: CUP_arifle_Sa58RIS1 {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_Sa58RIS1_woodland: CUP_arifle_Sa58RIS1 {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_Sa58RIS2_gl: CUP_arifle_Sa58RIS1 {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_Sa58RIS2_gl_desert: CUP_arifle_Sa58RIS2_gl {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_Sa58RIS2_gl_woodland: CUP_arifle_Sa58RIS2_gl {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_Sa58RIS2: CUP_arifle_Sa58RIS1 {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_Sa58RIS2_camo: CUP_arifle_Sa58RIS2 {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_Sa58RIS2_woodland: CUP_arifle_Sa58RIS2 {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_Sa58P_frontris: CUP_arifle_Sa58_base {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_Sa58P_frontris_desert: CUP_arifle_Sa58P_frontris {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_Sa58P_frontris_woodland: CUP_arifle_Sa58P_frontris {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_smg_SA61: Rifle_Base_F {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_SCAR_L_Base;
    class CUP_arifle_Mk16_STD: CUP_arifle_SCAR_L_Base {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_L_FullAuto);
    };
    class CUP_arifle_Mk16_STD_FG: CUP_arifle_Mk16_STD {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_L_FullAuto);
    };
    class CUP_arifle_Mk16_STD_SFG: CUP_arifle_Mk16_STD {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_L_FullAuto);
    };
    class CUP_arifle_Mk16_STD_EGLM: CUP_arifle_Mk16_STD {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_L_FullAuto);
    };
    class CUP_arifle_SCAR_L_Base;
    class CUP_arifle_Mk16_SV: CUP_arifle_SCAR_L_Base {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_L_FullAuto);
    };
    class CUP_arifle_Mk16_CQC: CUP_arifle_SCAR_L_Base {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_L_FullAuto);
    };
    class CUP_arifle_Mk16_CQC_FG: CUP_arifle_Mk16_CQC {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_L_FullAuto);
    };
    class CUP_arifle_Mk16_CQC_SFG: CUP_arifle_Mk16_CQC {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_L_FullAuto);
    };
    class CUP_arifle_Mk16_CQC_EGLM: CUP_arifle_Mk16_CQC {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_L_FullAuto);
    };
    class CUP_arifle_Mk16_CQC_black: CUP_arifle_Mk16_CQC {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_L_FullAuto);
    };
    class CUP_arifle_Mk16_CQC_FG_black: CUP_arifle_Mk16_CQC_FG {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_L_FullAuto);
    };
    class CUP_arifle_Mk16_CQC_SFG_black: CUP_arifle_Mk16_CQC_SFG {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_L_FullAuto);
    };
    class CUP_arifle_Mk16_CQC_EGLM_black: CUP_arifle_Mk16_CQC_EGLM {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_L_FullAuto);
    };
    class CUP_arifle_Mk16_STD_black: CUP_arifle_Mk16_STD {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_L_FullAuto);
    };
    class CUP_arifle_Mk16_STD_FG_black: CUP_arifle_Mk16_STD_FG {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_L_FullAuto);
    };
    class CUP_arifle_Mk16_STD_SFG_black: CUP_arifle_Mk16_STD_SFG {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_L_FullAuto);
    };
    class CUP_arifle_Mk16_STD_EGLM_black: CUP_arifle_Mk16_STD_EGLM {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_L_FullAuto);
    };
    class CUP_arifle_Mk16_SV_black: CUP_arifle_Mk16_SV {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_L_FullAuto);
    };
    class CUP_arifle_Mk16_CQC_woodland: CUP_arifle_Mk16_CQC {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_L_FullAuto);
    };
    class CUP_arifle_Mk16_CQC_FG_woodland: CUP_arifle_Mk16_CQC_FG {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_L_FullAuto);
    };
    class CUP_arifle_Mk16_CQC_SFG_woodland: CUP_arifle_Mk16_CQC_SFG {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_L_FullAuto);
    };
    class CUP_arifle_Mk16_CQC_EGLM_woodland: CUP_arifle_Mk16_CQC_EGLM {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_L_FullAuto);
    };
    class CUP_arifle_Mk16_STD_woodland: CUP_arifle_Mk16_STD {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_L_FullAuto);
    };
    class CUP_arifle_Mk16_STD_FG_woodland: CUP_arifle_Mk16_STD_FG {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_L_FullAuto);
    };
    class CUP_arifle_Mk16_STD_SFG_woodland: CUP_arifle_Mk16_STD_SFG {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_L_FullAuto);
    };
    class CUP_arifle_Mk16_STD_EGLM_woodland: CUP_arifle_Mk16_STD_EGLM {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_L_FullAuto);
    };
    class CUP_arifle_Mk16_SV_woodland: CUP_arifle_Mk16_SV {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_L_FullAuto);
    };
    class CUP_arifle_Mk17_Base;
    class CUP_arifle_Mk17_CQC: CUP_arifle_Mk17_Base {
        modes[] = {"SCAR_H_Single", "SCAR_H_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_H_FullAuto);
    };
    class CUP_arifle_Mk17_CQC_FG: CUP_arifle_Mk17_CQC {
        modes[] = {"SCAR_H_Single", "SCAR_H_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_H_FullAuto);
    };
    class CUP_arifle_Mk17_CQC_SFG: CUP_arifle_Mk17_CQC_FG {
        modes[] = {"SCAR_H_Single", "SCAR_H_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_H_FullAuto);
    };
    class CUP_arifle_Mk17_CQC_EGLM: CUP_arifle_Mk17_CQC {
        modes[] = {"SCAR_H_Single", "SCAR_H_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_H_FullAuto);
    };
    class CUP_arifle_Mk17_STD: CUP_arifle_Mk17_Base {
        modes[] = {"SCAR_H_Single", "SCAR_H_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_H_FullAuto);
    };
    class CUP_arifle_Mk17_STD_FG: CUP_arifle_Mk17_STD {
        modes[] = {"SCAR_H_Single", "SCAR_H_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_H_FullAuto);
    };
    class CUP_arifle_Mk17_STD_SFG: CUP_arifle_Mk17_STD_FG {
        modes[] = {"SCAR_H_Single", "SCAR_H_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_H_FullAuto);
    };
    class CUP_arifle_Mk17_STD_EGLM: CUP_arifle_Mk17_STD {
        modes[] = {"SCAR_H_Single", "SCAR_H_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_H_FullAuto);
    };
    class CUP_arifle_Mk20: CUP_arifle_Mk17_Base {
        modes[] = {"SCAR_H_Single", "SCAR_H_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_H_FullAuto);
    };
    class CUP_arifle_Mk17_CQC_Black: CUP_arifle_Mk17_CQC {
        modes[] = {"SCAR_H_Single", "SCAR_H_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_H_FullAuto);
    };
    class CUP_arifle_Mk17_CQC_FG_black: CUP_arifle_Mk17_CQC_FG {
        modes[] = {"SCAR_H_Single", "SCAR_H_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_H_FullAuto);
    };
    class CUP_arifle_Mk17_CQC_SFG_black: CUP_arifle_Mk17_CQC_SFG {
        modes[] = {"SCAR_H_Single", "SCAR_H_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_H_FullAuto);
    };
    class CUP_arifle_Mk17_CQC_EGLM_black: CUP_arifle_Mk17_CQC_EGLM {
        modes[] = {"SCAR_H_Single", "SCAR_H_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_H_FullAuto);
    };
    class CUP_arifle_Mk17_STD_black: CUP_arifle_Mk17_STD {
        modes[] = {"SCAR_H_Single", "SCAR_H_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_H_FullAuto);
    };
    class CUP_arifle_Mk17_STD_FG_black: CUP_arifle_Mk17_STD_FG {
        modes[] = {"SCAR_H_Single", "SCAR_H_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_H_FullAuto);
    };
    class CUP_arifle_Mk17_STD_SFG_black: CUP_arifle_Mk17_STD_SFG {
        modes[] = {"SCAR_H_Single", "SCAR_H_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_H_FullAuto);
    };
    class CUP_arifle_Mk17_STD_EGLM_black: CUP_arifle_Mk17_STD_EGLM {
        modes[] = {"SCAR_H_Single", "SCAR_H_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_H_FullAuto);
    };
    class CUP_arifle_Mk20_black: CUP_arifle_Mk20 {
        modes[] = {"SCAR_H_Single", "SCAR_H_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_H_FullAuto);
    };
    class CUP_arifle_Mk17_CQC_woodland: CUP_arifle_Mk17_CQC {
        modes[] = {"SCAR_H_Single", "SCAR_H_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_H_FullAuto);
    };
    class CUP_arifle_Mk17_CQC_FG_woodland: CUP_arifle_Mk17_CQC_FG {
        modes[] = {"SCAR_H_Single", "SCAR_H_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_H_FullAuto);
    };
    class CUP_arifle_Mk17_CQC_SFG_woodland: CUP_arifle_Mk17_CQC_SFG {
        modes[] = {"SCAR_H_Single", "SCAR_H_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_H_FullAuto);
    };
    class CUP_arifle_Mk17_CQC_EGLM_woodland: CUP_arifle_Mk17_CQC_EGLM {
        modes[] = {"SCAR_H_Single", "SCAR_H_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_H_FullAuto);
    };
    class CUP_arifle_Mk17_STD_woodland: CUP_arifle_Mk17_STD {
        modes[] = {"SCAR_H_Single", "SCAR_H_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_H_FullAuto);
    };
    class CUP_arifle_Mk17_STD_FG_woodland: CUP_arifle_Mk17_STD_FG {
        modes[] = {"SCAR_H_Single", "SCAR_H_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_H_FullAuto);
    };
    class CUP_arifle_Mk17_STD_SFG_woodland: CUP_arifle_Mk17_STD_SFG {
        modes[] = {"SCAR_H_Single", "SCAR_H_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_H_FullAuto);
    };
    class CUP_arifle_Mk17_STD_EGLM_woodland: CUP_arifle_Mk17_STD_EGLM {
        modes[] = {"SCAR_H_Single", "SCAR_H_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_H_FullAuto);
    };
    class CUP_arifle_Mk20_woodland: CUP_arifle_Mk20 {
        modes[] = {"SCAR_H_Single", "SCAR_H_FullAuto", "NEV_FullAuto"};
        AI_ROF(SCAR_H_FullAuto);
    };
    class CUP_arifle_XM8_Base;
    class CUP_arifle_XM8_Carbine: CUP_arifle_XM8_Base {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(Fullauto);
    };
    class CUP_arifle_XM8_Carbine_FG: CUP_arifle_XM8_Carbine {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(Fullauto);
    };
    class CUP_arifle_XM8_Carbine_GL: CUP_arifle_XM8_Base {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(Fullauto);
    };
    class CUP_arifle_xm8_sharpshooter: CUP_arifle_XM8_Base {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(Fullauto);
    };
    class CUP_arifle_xm8_SAW: CUP_arifle_xm8_sharpshooter {
        modes[] = {"Single", "Fullauto", "Close", "Short", "Medium", "Far", "NEV_FullAuto"};
        AI_ROF(Fullauto);
    };
    class CUP_arifle_XM8_Compact: CUP_arifle_XM8_Base {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(Fullauto);
    };
    class CUP_arifle_XM8_Compact_Rail: CUP_arifle_XM8_Compact {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(Fullauto);
    };
    class CUP_arifle_XM8_Railed_Base;
    class CUP_arifle_XM8_Railed: CUP_arifle_XM8_Railed_Base {
        modes[] = {"Single", "Fullauto", "NEV_FullAuto"};
        AI_ROF(Fullauto);
    };
    class rhs_weap_kar98k_Base_F;
    class rhs_weap_kar98k: rhs_weap_kar98k_Base_F {
        AI_DISPERSION;
    };
    class rhs_weap_m38_Base_F;
    class rhs_weap_m38: rhs_weap_m38_Base_F {
        AI_DISPERSION;
    };
    class rhs_weap_m38_rail: rhs_weap_m38 {
        AI_DISPERSION;
    };
    class rhs_weap_mosin_sbr: rhs_weap_m38_rail {
        AI_DISPERSION;
    };
    class rhs_weap_m70_base;
    class rhs_weap_m70ab2: rhs_weap_m70_base {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m70b1: rhs_weap_m70ab2 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m92: rhs_weap_m70_base {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m76: rhs_weap_m70_base {
        AI_DISPERSION;
    };
    class rhs_weap_m21_base;
    class rhs_weap_m21a: rhs_weap_m21_base {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m21a_pr: rhs_weap_m21_base {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m21s: rhs_weap_m21_base {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m21s_pr: rhs_weap_m21a_pr {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_savz61: SMG_01_F {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_savz58_base;
    class rhs_weap_savz58p: rhs_weap_savz58_base {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_savz58v: rhs_weap_savz58_base {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_savz58_rail_base;
    class rhs_weap_savz58p_rail: rhs_weap_savz58_rail_base {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_savz58v_rail: rhs_weap_savz58_rail_base {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_savz58_ris_base;
    class rhs_weap_savz58v_ris: rhs_weap_savz58_ris_base {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_savz58p_black: rhs_weap_savz58p {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_savz58v_black: rhs_weap_savz58v {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_savz58p_rail_black: rhs_weap_savz58p_rail {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_savz58v_rail_black: rhs_weap_savz58v_rail {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_Izh18: Rifle_Base_F {
        AI_DISPERSION;
    };
    class rhs_weap_vhs2_base;
    class rhs_weap_vhsd2: rhs_weap_vhs2_base {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_vhsd2_bg: rhs_weap_vhs2_base {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_vhsd2_ct15x: rhs_weap_vhs2_base {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_vhsd2_bg_ct15x: rhs_weap_vhsd2_ct15x {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_vhsk2: rhs_weap_vhsd2 {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m3a1_base;
    class rhs_weap_m3a1: rhs_weap_m3a1_base {
        modes[] = {"FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m3a1_specops: rhs_weap_m3a1_base {
        modes[] = {"FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_MP44_base;
    class rhs_weap_MP44: rhs_weap_MP44_base {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_M1garand_Base_F;
    class rhs_weap_m1garand_sa43: rhs_weap_M1garand_Base_F {
        AI_DISPERSION;
    };
    class rhs_weap_mg42_base;
    class rhs_weap_mg42: rhs_weap_mg42_base {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class rhs_weap_m79: Rifle_Base_F {
        AI_DISPERSION;
    };
    class rhs_weap_l1a1_base;
    class rhs_weap_l1a1: rhs_weap_l1a1_base {
        AI_DISPERSION;
    };
    class rhs_weap_l1a1_wood_base;
    class rhs_weap_l1a1_wood: rhs_weap_l1a1_wood_base {
        AI_DISPERSION;
    };
    class rhs_weap_m70b1n: rhs_weap_m70ab2 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m70b3n: rhs_weap_m70ab2 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m70b3n_pbg40: rhs_weap_m70ab2 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m21a_pr_pbg40: rhs_weap_m21_base {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m21a_pbg40: rhs_weap_m21a {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m82a1: rhs_weap_M107 {
        AI_DISPERSION;
    };
    class rhs_weap_scorpion: SMG_01_F {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_g36_base;
    class rhs_weap_g36c: rhs_weap_g36_base {
        modes[] = {"Single", "Burst", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_g36kv: rhs_weap_g36_base {
        modes[] = {"Single", "Burst", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_g36kv_ag36: rhs_weap_g36kv {
        modes[] = {"Single", "Burst", "FullAuto", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_SCARH_CQC: rhs_weap_SCAR_H_CQC_Base {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_SCARH_STD: rhs_weap_SCAR_H_STD_Base {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_SCARH_LB: rhs_weap_SCAR_H_LB_Base {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_SCARH_FDE_CQC: rhs_weap_SCARH_CQC {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_SCARH_FDE_STD: rhs_weap_SCARH_STD {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_SCARH_FDE_LB: rhs_weap_SCARH_LB {
        modes[] = {"Single", "Single_AI", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_m84: Rifle_Long_Base_F {
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class rhs_weap_lmg_minimipara;
    class rhs_weap_minimi_para_railed: rhs_weap_lmg_minimipara {
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class Launcher_Base_F;
    class launch_NLAW_F: Launcher_Base_F {
        AI_DISPERSION;
    };
    class launch_RPG32_F: Launcher_Base_F {
        AI_DISPERSION;
    };
    class launch_Titan_base;
    class launch_B_Titan_F: launch_Titan_base {
        AI_DISPERSION;
    };
    class launch_I_Titan_F: launch_Titan_base {
        AI_DISPERSION;
    };
    class launch_O_Titan_F: launch_Titan_base {
        AI_DISPERSION;
    };
    class launch_Titan_short_base;
    class launch_B_Titan_short_F: launch_Titan_short_base {
        AI_DISPERSION;
    };
    class launch_I_Titan_short_F: launch_Titan_short_base {
        AI_DISPERSION;
    };
    class launch_O_Titan_short_F: launch_Titan_short_base {
        AI_DISPERSION;
    };
    class CUP_launch_M72A6_Loaded;
    class CUP_launch_M72A6: CUP_launch_M72A6_Loaded {
        AI_DISPERSION;
    };
    class CUP_launch_M72A6_Special_Loaded;
    class CUP_launch_M72A6_Special: CUP_launch_M72A6_Special_Loaded {
        AI_DISPERSION;
    };
    class CUP_launch_Igla_Loaded;
    class CUP_launch_Igla: CUP_launch_Igla_Loaded {
        AI_DISPERSION;
    };
    class CUP_launch_Javelin: Launcher_Base_F {
        AI_DISPERSION;
    };
    class CUP_launch_M136_Loaded;
    class CUP_launch_M136: CUP_launch_M136_Loaded {
        AI_DISPERSION;
    };
    class CUP_launch_M47: Launcher_Base_F {
        AI_DISPERSION;
    };
    class CUP_launch_MAAWS: Launcher_Base_F {
        AI_DISPERSION;
    };
    class CUP_launch_Metis: Launcher_Base_F {
        AI_DISPERSION;
    };
    class CUP_launch_NLAW_Loaded;
    class CUP_launch_NLAW: CUP_launch_NLAW_Loaded {
        AI_DISPERSION;
    };
    class CUP_launch_RPG18_Loaded;
    class CUP_launch_RPG18: CUP_launch_RPG18_Loaded {
        AI_DISPERSION;
    };
    class CUP_launch_Mk153Mod0: Launcher_Base_F {
        AI_DISPERSION;
    };
    class CUP_launch_Mk153Mod0_blk: CUP_launch_Mk153Mod0 {
        AI_DISPERSION;
    };
    class CUP_launch_FIM92Stinger_Loaded;
    class CUP_launch_FIM92Stinger: CUP_launch_FIM92Stinger_Loaded {
        AI_DISPERSION;
    };
    class CUP_launch_9K32Strela_Loaded;
    class CUP_launch_9K32Strela: CUP_launch_9K32Strela_Loaded {
        AI_DISPERSION;
    };
    class launch_RPG32_ghex_F: launch_RPG32_F {
        AI_DISPERSION;
    };
    class launch_RPG7_F: Launcher_Base_F {
        AI_DISPERSION;
    };
    class launch_B_Titan_tna_F: launch_B_Titan_F {
        AI_DISPERSION;
    };
    class launch_B_Titan_short_tna_F: launch_B_Titan_short_F {
        AI_DISPERSION;
    };
    class launch_O_Titan_ghex_F: launch_O_Titan_F {
        AI_DISPERSION;
    };
    class launch_O_Titan_short_ghex_F: launch_O_Titan_short_F {
        AI_DISPERSION;
    };
    class launch_MRAWS_base_F;
    class launch_MRAWS_olive_F: launch_MRAWS_base_F {
        AI_DISPERSION;
    };
    class launch_MRAWS_olive_rail_F: launch_MRAWS_olive_F {
        AI_DISPERSION;
    };
    class launch_MRAWS_green_F: launch_MRAWS_base_F {
        AI_DISPERSION;
    };
    class launch_MRAWS_green_rail_F: launch_MRAWS_olive_rail_F {
        AI_DISPERSION;
    };
    class launch_MRAWS_sand_F: launch_MRAWS_base_F {
        AI_DISPERSION;
    };
    class launch_MRAWS_sand_rail_F: launch_MRAWS_olive_rail_F {
        AI_DISPERSION;
    };
    class launch_Vorona_base_F;
    class launch_O_Vorona_brown_F: launch_Vorona_base_F {
        AI_DISPERSION;
    };
    class launch_O_Vorona_green_F: launch_Vorona_base_F {
        AI_DISPERSION;
    };
    class launch_RPG32_green_F: launch_RPG32_F {
        AI_DISPERSION;
    };
    class launch_I_Titan_eaf_F: launch_I_Titan_F {
        AI_DISPERSION;
    };
    class launch_B_Titan_olive_F: launch_B_Titan_F {
        AI_DISPERSION;
    };
    class rhs_weap_rpg26: Launcher_Base_F {
        AI_DISPERSION;
    };
    class rhs_weap_rshg2: rhs_weap_rpg26 {
        AI_DISPERSION;
    };
    class rhs_weap_rpg7: Launcher_Base_F {
        AI_DISPERSION;
    };
    class rhs_weap_strela;
    class rhs_weap_igla: rhs_weap_strela {
        AI_DISPERSION;
    };
    class rhs_weap_smaw: Launcher_Base_F {
        AI_DISPERSION;
    };
    class rhs_weap_smaw_green: rhs_weap_smaw {
        AI_DISPERSION;
    };
    class rhs_weap_maaws: Launcher_Base_F {
        AI_DISPERSION;
    };
    class rhs_weap_M136: Launcher_Base_F {
        AI_DISPERSION;
    };
    class rhs_weap_M136_hedp: rhs_weap_M136 {
        AI_DISPERSION;
    };
    class rhs_weap_M136_hp: rhs_weap_M136 {
        AI_DISPERSION;
    };
    class rhs_weap_m72a7: rhs_weap_M136 {
        AI_DISPERSION;
    };
    class rhs_weap_fim92: launch_O_Titan_F {
        AI_DISPERSION;
    };
    class rhs_weap_fgm148: launch_O_Titan_F {
        AI_DISPERSION;
    };
    class CUP_launch_RPG7V: Launcher_Base_F {
        AI_DISPERSION;
    };
    class rhs_weap_rpg75: Launcher_Base_F {
        AI_DISPERSION;
    };
    class rhs_weap_panzerfaust60: Launcher_Base_F {
        AI_DISPERSION;
    };
    class rhs_weap_m80: Launcher_Base_F {
        AI_DISPERSION;
    };
    class CUP_arifle_ACR_BASE_556;
    class CUP_arifle_ACR_blk_556: CUP_arifle_ACR_BASE_556 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACR_tan_556: CUP_arifle_ACR_blk_556 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACR_tan_556: CUP_arifle_ACR_blk_556 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACR_snw_556: CUP_arifle_ACR_blk_556 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACR_Short_BASE_556;
    class CUP_arifle_ACRC_blk_556: CUP_arifle_ACR_Short_BASE_556 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACRC_tan_556: CUP_arifle_ACRC_blk_556 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACRC_wdl_556: CUP_arifle_ACRC_blk_556 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACRC_snw_556: CUP_arifle_ACRC_blk_556 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACR_DMR_BASE_556;
    class CUP_arifle_ACR_DMR_blk_556: CUP_arifle_ACR_DMR_BASE_556 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACR_DMR_tan_556: CUP_arifle_ACR_DMR_blk_556 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACR_DMR_wdl_556: CUP_arifle_ACR_DMR_blk_556 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACR_DMR_snw_556: CUP_arifle_ACR_DMR_blk_556 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACR_EGLM_BASE_556;
    class CUP_arifle_ACR_EGLM_blk_556: CUP_arifle_ACR_EGLM_BASE_556 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACR_EGLM_tan_556: CUP_arifle_ACR_EGLM_blk_556 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACR_EGLM_wdl_556: CUP_arifle_ACR_EGLM_blk_556 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACR_EGLM_snw_556: CUP_arifle_ACR_EGLM_blk_556 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACR_EGLM_SHORT_BASE_556;
    class CUP_arifle_ACRC_EGLM_blk_556: CUP_arifle_ACR_EGLM_SHORT_BASE_556 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACRC_EGLM_tan_556: CUP_arifle_ACRC_EGLM_blk_556 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACRC_EGLM_wdl_556: CUP_arifle_ACRC_EGLM_blk_556 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACRC_EGLM_snw_556: CUP_arifle_ACRC_EGLM_blk_556 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACR_BASE_68;
    class CUP_arifle_ACR_blk_68: CUP_arifle_ACR_BASE_68 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACR_tan_68: CUP_arifle_ACR_blk_68 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACR_wdl_68: CUP_arifle_ACR_blk_68 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACR_snw_68: CUP_arifle_ACR_blk_68 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACR_Short_BASE_68;
    class CUP_arifle_ACRC_blk_68: CUP_arifle_ACR_Short_BASE_68 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACRC_tan_68: CUP_arifle_ACRC_blk_68 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACRC_wdl_68: CUP_arifle_ACRC_blk_68 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACRC_snw_68: CUP_arifle_ACRC_blk_68 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACR_DMR_BASE_68;
    class CUP_arifle_ACR_DMR_blk_68: CUP_arifle_ACR_DMR_BASE_68 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACR_DMR_tan_68: CUP_arifle_ACR_DMR_blk_68 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACR_DMR_wdl_68: CUP_arifle_ACR_DMR_blk_68 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACR_DMR_snw_68: CUP_arifle_ACR_DMR_blk_68 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACR_EGLM_BASE_68;
    class CUP_arifle_ACR_EGLM_blk_68: CUP_arifle_ACR_EGLM_BASE_68 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACR_EGLM_tan_68: CUP_arifle_ACR_EGLM_blk_68 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACR_EGLM_wdl_68: CUP_arifle_ACR_EGLM_blk_68 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACR_EGLM_snw_68: CUP_arifle_ACR_EGLM_blk_68 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACR_EGLM_SHORT_BASE_68;
    class CUP_arifle_ACRC_EGLM_blk_68: CUP_arifle_ACR_EGLM_SHORT_BASE_68 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACRC_EGLM_tan_68: CUP_arifle_ACRC_EGLM_blk_68 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACRC_EGLM_wdl_68: CUP_arifle_ACRC_EGLM_blk_68 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_ACRC_EGLM_snw_68: CUP_arifle_ACRC_EGLM_blk_68 {
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_Famas_Base;
    class CUP_Famas_F1: CUP_Famas_Base {
        modes[] = {"Single", "Burst", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_Famas_F1_Rail: CUP_Famas_Base {
        modes[] = {"Single", "Burst", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_Famas_F1_Wood: CUP_Famas_F1 {
        modes[] = {"Single", "Burst", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_Famas_F1_Arid: CUP_Famas_F1 {
        modes[] = {"Single", "Burst", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_Famas_F1_Rail_Wood: CUP_Famas_F1_Rail {
        modes[] = {"Single", "Burst", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_Famas_F1_Rail_Arid: CUP_Famas_F1_Rail {
        modes[] = {"Single", "Burst", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_DSA_SA58: CUP_arifle_FNFAL {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_DSA_SA58_OSW: CUP_arifle_DSA_SA58 {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_DSA_SA58_OSW_VFG: CUP_arifle_DSA_SA58_OSW {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_DSA_SA58_OSW_M203: CUP_arifle_DSA_SA58_OSW {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_DSA_SA58_DMR: CUP_arifle_DSA_SA58 {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_DSA_SA58_OSW_Sand: CUP_arifle_DSA_SA58_OSW {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_DSA_SA58_OSW_Desert: CUP_arifle_DSA_SA58_OSW {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_DSA_SA58_OSW_Woodland: CUP_arifle_DSA_SA58_OSW {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_DSA_SA58_OSW_VFG_Sand: CUP_arifle_DSA_SA58_OSW_VFG {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_DSA_SA58_OSW_VFG_Desert: CUP_arifle_DSA_SA58_OSW_VFG {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_DSA_SA58_OSW_VFG_Woodland: CUP_arifle_DSA_SA58_OSW_VFG {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_Gewehr1: CUP_arifle_FNFAL {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_Gewehr1_railed: CUP_arifle_Gewehr1 {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_IMI_Romat: CUP_arifle_FNFAL {
        AI_DISPERSION;
    };
    class CUP_arifle_IMI_Romat_railed: CUP_arifle_IMI_Romat {
        AI_DISPERSION;
    };
    class CUP_arifle_Steyr_Stg58: CUP_arifle_FNFAL {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_Steyr_Stg58_railed: CUP_arifle_Steyr_Stg58 {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_srifle_Mosin_Nagant: Rifle_Long_Base_F {
        AI_DISPERSION;
    };
    class CUP_srifle_Remington700: Rifle_Long_Base_F {
        AI_DISPERSION;
    };
    class CUP_SKS: Rifle_Base_F {
        AI_DISPERSION;
    };
    class CUP_SKS_rail: CUP_SKS {
        AI_DISPERSION;
    };
    class CUP_arifle_FNFAL5060_railed: CUP_arifle_FNFAL5060 {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_FNFAL5060_rhodesian: CUP_arifle_FNFAL5060 {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_FNFAL5060_desert: CUP_arifle_FNFAL5060 {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_FNFAL5060_sand: CUP_arifle_FNFAL5060 {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_FNFAL5060_woodland: CUP_arifle_FNFAL5060 {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_FNFAL5060_railed_desert: CUP_arifle_FNFAL5060_railed {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_FNFAL5060_railed_sand: CUP_arifle_FNFAL5060_railed {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_FNFAL5060_railed_woodland: CUP_arifle_FNFAL5060_railed {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_FNFAL5061_wooden_railed: CUP_arifle_FNFAL5061_wooden {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_FNFAL5062_railed: CUP_arifle_FNFAL5062 {
        modes[] = {"Single", "Fullauto", "FullAuto_medium", "single_medium_optics1", "single_medium_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4A1_MOE_black: CUP_arifle_M4A1_BUIS_Base {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4A1_MOE_wdl: CUP_arifle_M4A1_MOE_black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4A1_MOE_desert: CUP_arifle_M4A1_MOE_black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4A1_MOE_winter: CUP_arifle_M4A1_MOE_black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4A1_MOE_short_black: CUP_arifle_M4A1_BUIS_Base {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4A1_MOE_short_wdl: CUP_arifle_M4A1_MOE_short_black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4A1_MOE_short_desert: CUP_arifle_M4A1_MOE_short_black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4A1_MOE_short_winter: CUP_arifle_M4A1_MOE_short_black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4A1_standard_black: CUP_arifle_M4A1_BUIS_Base {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4A1_standard_wdl: CUP_arifle_M4A1_standard_black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4A1_standard_dsrt: CUP_arifle_M4A1_standard_black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4A1_standard_winter: CUP_arifle_M4A1_standard_black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4A1_standard_short_black: CUP_arifle_M4A1_BUIS_Base {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4A1_standard_short_wdl: CUP_arifle_M4A1_standard_short_black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4A1_standard_short_wdl: CUP_arifle_M4A1_standard_short_black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4A1_standard_short_dsrt: CUP_arifle_M4A1_standard_short_black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_M4A1_standard_short_winter: CUP_arifle_M4A1_standard_short_black {
        modes[] = {"Single", "FullAuto", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_lmg_M60E4_wood: CUP_lmg_M60E4 {
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_lmg_M60E4_norail_wood: CUP_M60E4_base{
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_lmg_M60E4_jungle: CUP_lmg_M60E4{
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_lmg_M60E4_norail_jungle: CUP_M60E4_base{
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_lmg_M60E4_desert: CUP_lmg_M60E4{
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_lmg_M60E4_norail_desert: CUP_M60E4_base{
        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_lmg_PKMN: CUP_lmg_PKM {
        modes[] = {"manual", "close", "short", "medium", "far", "far_optic1", "far_optic2", "NEV_FullAuto"};
        AI_ROF(manual);
    };
    class CUP_srifle_RSASS_BASE;
    class CUP_srifle_RSASS_Black: CUP_srifle_RSASS_BASE {
        AI_DISPERSION;
    };
    class CUP_srifle_RSASS_WDL: CUP_srifle_RSASS_BASE {
        AI_DISPERSION;
    };
    class CUP_srifle_RSASS_WDLNet: CUP_srifle_RSASS_BASE {
        AI_DISPERSION;
    };
    class CUP_srifle_RSASS_Sand: CUP_srifle_RSASS_BASE {
        AI_DISPERSION;
    };
    class CUP_srifle_RSASS_Dazzle: CUP_srifle_RSASS_BASE {
        AI_DISPERSION;
    };
    class CUP_srifle_RSASS_Winter: CUP_srifle_RSASS_BASE {
        AI_DISPERSION;
    };
    class CUP_srifle_RSASS_Jungle: CUP_srifle_RSASS_BASE {
        AI_DISPERSION;
    };
    class CUP_sgun_SPAS12: Rifle_Base_F {
        AI_DISPERSION;
    };

    // Vehicle weapons
    class MGun;
    class M2: MGun {
        AI_DISPERSION;
    };
    class LMG_RCWS: MGun {
        AI_DISPERSION;
    };
    class LMG_65mm_body: LMG_RCWS {
        AI_DISPERSION;
    };
    class LMG_M200: LMG_RCWS {
        AI_DISPERSION;
    };
    class LMG_M200_body: LMG_M200 {
        AI_DISPERSION;
    };
    class LMG_Minigun: LMG_RCWS {
        AI_DISPERSION;
    };
    class LMG_Minigun_heli: LMG_Minigun {
        AI_DISPERSION;
    };
    class HMG_127: LMG_RCWS {
        AI_DISPERSION;
    };
    class HMG_127_APC: HMG_127 {
        AI_DISPERSION;
    };
    class HMG_127_UGV: HMG_127 {
        AI_DISPERSION;
    };
    class HMG_01: HMG_127 {
        AI_DISPERSION;
    };
    class HMG_static: HMG_01 {
        AI_DISPERSION;
    };
    class HMG_M2: HMG_01 {
        AI_DISPERSION;
    };
    class HMG_NSVT: HMG_127 {
        AI_DISPERSION;
    };
    class MGunCore;
    class M134_minigun: MGunCore {
        AI_DISPERSION;
    };
    class GMG_F: MGun {
        AI_DISPERSION;
    };
    class GMG_20mm: GMG_F {
        AI_DISPERSION;
    };
    class GMG_40mm: GMG_F {
        AI_DISPERSION;
    };
    class autocannon_Base_F;
    class autocannon_40mm_CTWS: autocannon_Base_F {
        AI_DISPERSION;
    };
    class autocannon_30mm_CTWS: autocannon_Base_F {
        AI_DISPERSION;
    };
    class CannonCore;
    class gatling_20mm: CannonCore {
        AI_DISPERSION;
    };
    class gatling_30mm_base;
    class gatling_30mm: gatling_30mm_base {
        AI_DISPERSION;
    };
    class LMG_Minigun;
    class LMG_Minigun2: LMG_Minigun {
        AI_DISPERSION;
    };
    class LMG_Minigun_Transport: LMG_Minigun {
        AI_DISPERSION;
    };
    class LMG_Minigun_Transport2: LMG_Minigun_Transport {
        AI_DISPERSION;
    };
    class cannon_120mm: CannonCore {
        AI_DISPERSION;
    };
    class cannon_125mm: CannonCore {
        AI_DISPERSION;
    };
    class cannon_105mm: CannonCore {
        AI_DISPERSION;
    };
    class gatling_25mm: CannonCore {
        AI_DISPERSION;
    };
    class autocannon_35mm: CannonCore {
        AI_DISPERSION;
    };
    class LMG_coax: LMG_RCWS {
        AI_DISPERSION;
    };
    class LMG_coax_ext: LMG_coax {
        AI_DISPERSION;
    };
    class autocannon_30mm: autocannon_30mm_CTWS {
        AI_DISPERSION;
    };
    class cannon_120mm_long: cannon_120mm {
        AI_DISPERSION;
    };
    class Twin_Cannon_20mm: gatling_20mm {
        AI_DISPERSION;
    };
    class Gatling_30mm_Plane_CAS_01_F: CannonCore {
        AI_DISPERSION;
    };
    class Cannon_30mm_Plane_CAS_02_F: CannonCore {
        AI_DISPERSION;
    };
    class HMG_127_MBT: HMG_127_APC {
        AI_DISPERSION;
    };
    class CUP_Vhmg_DSHKM_veh: MGun {
        AI_DISPERSION;
    };
    class CUP_Vhmg_NSVT_veh: CUP_Vhmg_DSHKM_veh {
        AI_DISPERSION;
    };
    class CUP_Vhmg_M2_veh: HMG_M2 {
        AI_DISPERSION;
    };
    class CUP_Vhmg_L111A1_veh: CUP_Vhmg_M2_veh {
        AI_DISPERSION;
    };
    class CUP_Vhmg_M2_M1Abrams_Commander: CUP_Vhmg_M2_veh {
        AI_DISPERSION;
    };
    class CUP_Vhmg_M85_M60_Commander: CUP_Vhmg_M2_veh {
        AI_DISPERSION;
    };
    class CUP_Vhmg_M2_AAV_Noeject: CUP_Vhmg_M2_veh {
        AI_DISPERSION;
    };
    class CUP_Vhmg_M3P_veh: CUP_Vhmg_M2_veh {
        AI_DISPERSION;
    };
    class CUP_Vhmg_GAU21_MH60_Left: CUP_Vhmg_M3P_veh {
        AI_DISPERSION;
    };
    class CUP_Vhmg_GAU21_MH60_Right: CUP_Vhmg_GAU21_MH60_Left {
        AI_DISPERSION;
    };
    class CUP_Vhmg_M2_static: CUP_Vhmg_M2_veh {
        AI_DISPERSION;
    };
    class CUP_Vhmg_M2_CROWS_gunner: CUP_Vhmg_M2_veh {
        AI_DISPERSION;
    };
    class CUP_Vhmg_M2_LG_veh: CUP_Vhmg_M2_veh {
        AI_DISPERSION;
    };
    class CUP_Vhmg_M2_RG_veh: CUP_Vhmg_M2_veh {
        AI_DISPERSION;
    };
    class CUP_Vlmg_M240_veh: MGun {
        AI_DISPERSION;
    };
    class CUP_Vlmg_L7A2_veh: CUP_Vlmg_M240_veh {
        AI_DISPERSION;
    };
    class CUP_Vlmg_M240_veh_laser: CUP_Vlmg_M240_veh {
        AI_DISPERSION;
    };
    class CUP_Vlmg_M240_veh2: CUP_Vlmg_M240_veh {
        AI_DISPERSION;
    };
    class CUP_Vlmg_M240_veh3: CUP_Vlmg_M240_veh {
        AI_DISPERSION;
    };
    class CUP_Vlmg_M240_veh4: CUP_Vlmg_M240_veh {
        AI_DISPERSION;
    };
    class CUP_M240_uh1h_right_veh_W: CUP_Vlmg_M240_veh {
        AI_DISPERSION;
    };
    class CUP_M240_uh1h_left_veh_W: CUP_Vlmg_M240_veh {
        AI_DISPERSION;
    };
    class CUP_Vlmg_M240_M1Abrams_Loader: CUP_Vlmg_M240_veh {
        AI_DISPERSION;
    };
    class CUP_Vlmg_M240_Challenger2_Loader: CUP_Vlmg_M240_veh {
        AI_DISPERSION;
    };
    class CUP_Vlmg_M240_M1Abrams_Coax: CUP_Vlmg_M240_veh {
        AI_DISPERSION;
    };
    class CUP_Vlmg_L94A1_Coax: CUP_Vlmg_M240_veh {
        AI_DISPERSION;
    };
    class CUP_Vlmg_M240_Merlin_Rear: CUP_Vlmg_M240_veh {
        AI_DISPERSION;
    };
    class CUP_Vlmg_MG3_veh_noeject: CUP_Vlmg_M240_veh {
        AI_DISPERSION;
    };
    class CUP_Vlmg_UK59_veh: MGun {
        AI_DISPERSION;
    };
    class CUP_Vlmg_M134_veh: MGun {
        AI_DISPERSION;
    };
    class CUP_Vlmg_M134_veh2: CUP_Vlmg_M134_veh {
        AI_DISPERSION;
    };
    class CUP_Vlmg_M134_UH1Y_veh: CUP_Vlmg_M134_veh {
        AI_DISPERSION;
    };
    class CUP_Vlmg_M134_UH1Y_veh2: CUP_Vlmg_M134_veh {
        AI_DISPERSION;
    };
    class CUP_Vlmg_TwinM134_veh: CUP_Vlmg_M134_veh {
        AI_DISPERSION;
    };
    class CUP_Vlmg_TwinM134_AC47: CUP_Vlmg_TwinM134_veh {
        AI_DISPERSION;
    };
    class CUP_Vhmg_KORD_veh: MGun {
        AI_DISPERSION;
    };
    class CUP_Vhmg_KORD_T72CZ: CUP_Vhmg_KORD_veh {
        AI_DISPERSION;
    };
    class CUP_Vlmg_L2A1_veh: HMG_M2 {
        AI_DISPERSION;
    };
    class CUP_Vlmg_MG3_veh: MGun {
        AI_DISPERSION;
    };
    class CUP_Vlmg_MG3_Loader_veh: CUP_Vlmg_MG3_veh {
        AI_DISPERSION;
    };
    class CUP_Vhmg_PKT_veh: MGun {
        AI_DISPERSION;
    };
    class CUP_Vlmg_MG3_coax_veh: CUP_Vlmg_MG3_veh {
        AI_DISPERSION;
    };
    class CUP_Vhmg_SGMT: CUP_Vhmg_PKT_veh {
        AI_DISPERSION;
    };
    class CUP_Vhmg_PKT_MGNest: CUP_Vhmg_PKT_veh {
        AI_DISPERSION;
    };
    class CUP_Vhmg_PKT_veh2: CUP_Vhmg_PKT_MGNest {
        AI_DISPERSION;
    };
    class CUP_Vhmg_PKT_veh3: CUP_Vhmg_PKT_MGNest {
        AI_DISPERSION;
    };
    class CUP_Vhmg_PKT_veh_Noeject: CUP_Vhmg_PKT_veh {
        AI_DISPERSION;
    };
    class CUP_Vhmg_PKT_veh_Noeject_FCS: CUP_Vhmg_PKT_veh_Noeject {
        AI_DISPERSION;
    };
    class CUP_Vhmg_PKT_BMP_L_Noeject: CUP_Vhmg_PKT_veh {
        AI_DISPERSION;
    };
    class CUP_Vhmg_PKT_BMP_R_Noeject: CUP_Vhmg_PKT_veh {
        AI_DISPERSION;
    };
    class CUP_Vhmg_PKT_T34: CUP_Vhmg_PKT_veh {
        AI_DISPERSION;
    };
    class CUP_Vhmg_PKT_LR: CUP_Vhmg_PKT_veh {
        AI_DISPERSION;
    };
    class CUP_Vhmg_KPVT_veh: MGun {
        AI_DISPERSION;
    };
    class CUP_Vhmg_GAU19_veh: MGun {
        AI_DISPERSION;
    };
    class CUP_Vhmg_TwinGAU19_veh: CUP_Vhmg_GAU19_veh {
        AI_DISPERSION;
    };
    class CUP_Vgmg_HKGMG_veh: GMG_40mm {
        AI_DISPERSION;
    };
    class CUP_Vhmg_AGS30_veh: GMG_20mm {
        AI_DISPERSION;
    };
    class CUP_Vgmg_AGS17_veh: CUP_Vhmg_AGS30_veh {
        AI_DISPERSION;
    };
    class CUP_Vgmg_MK19_veh: CUP_Vhmg_AGS30_veh {
        AI_DISPERSION;
    };
    class CUP_M32_heli: MGun {
        AI_DISPERSION;
    };
    class CUP_Vacannon_D10: cannon_125mm {
        AI_DISPERSION;
    };
    class CUP_Vacannon_D5_T34: cannon_125mm {
        AI_DISPERSION;
    };
    class CUP_Vacannon_2A70_veh: CUP_Vacannon_D10 {
        AI_DISPERSION;
    };
    class CUP_Vacannon_2A28: CUP_Vacannon_D10 {
        AI_DISPERSION;
    };
    class CUP_Vcannon_rh120: cannon_120mm {
        AI_DISPERSION;
    };
    class CUP_Vcannon_M256_veh: CUP_Vcannon_rh120 {
        AI_DISPERSION;
    };
    class CUP_Vcannon_M256_M1Abrams: CUP_Vcannon_M256_veh {
        AI_DISPERSION;
    };
    class CUP_Vcannon_L55_veh: CUP_Vcannon_rh120 {
        AI_DISPERSION;
    };
    class CUP_Vcannon_L7_veh: cannon_105mm {
        AI_DISPERSION;
    };
    class CUP_Vcannon_M68_veh: CUP_Vcannon_L7_veh {
        AI_DISPERSION;
    };
    class CUP_Vcannon_M68A2_veh: CUP_Vcannon_M68_veh {
        AI_DISPERSION;
    };
    class CUP_Vcannon_2A46_Txx: cannon_125mm {
        AI_DISPERSION;
    };
    class CUP_Vcannon_L30A1_veh: cannon_120mm {
        AI_DISPERSION;
    };
    class CUP_Vacannon_M197_veh: CannonCore {
        AI_DISPERSION;
    };
    class CUP_Vacannon_M242_veh: CannonCore {
        AI_DISPERSION;
    };
    class CUP_Vacannon_CTWS_veh: autocannon_40mm_CTWS {
        AI_DISPERSION;
    };
    class CUP_Rarden_CTWS_veh: autocannon_40mm_CTWS {
        AI_DISPERSION;
    };
    class CUP_Vacannon_KPVB_veh: CUP_Vacannon_M242_veh {
        AI_DISPERSION;
    };
    class CUP_Vacannon_M230_veh: CannonCore {
        AI_DISPERSION;
    };
    class CUP_Vacannon_2A14_veh: CannonCore {
        AI_DISPERSION;
    };
    class CUP_Vacannon_AZP23_veh: CannonCore {
        AI_DISPERSION;
    };
    class CUP_Vacannon_AZP23_2_veh: CUP_Vacannon_AZP23_veh {
        AI_DISPERSION;
    };
    class CUP_Vacannon_2A42_veh: CannonCore {
        AI_DISPERSION;
    };
    class CUP_Vacannon_2A42_FCS: CUP_Vacannon_2A42_veh {
        AI_DISPERSION;
    };
    class CUP_Vacannon_2A42_Ka50: CUP_Vacannon_2A42_veh {
        AI_DISPERSION;
    };
    class CUP_Vacannon_2A72_veh: CUP_Vacannon_2A42_veh {
        AI_DISPERSION;
    };
    class CUP_Vacannon_2A72_FCS: CUP_Vacannon_2A72_veh {
        AI_DISPERSION;
    };
    class CUP_Vacannon_M621_AW159_veh: CannonCore {
        AI_DISPERSION;
    };
    class CUP_Vacannon_GI2_veh: CannonCore {
        AI_DISPERSION;
    };
    class CUP_Vacannon_GSh23L_in_veh: CannonCore {
        AI_DISPERSION;
    };
    class CUP_Vacannon_GSh23L_L39: CUP_Vacannon_GSh23L_in_veh {
        AI_DISPERSION;
    };
    class CUP_Vacannon_GAU8_veh: CannonCore {
        AI_DISPERSION;
    };
    class CUP_Vacannon_GAU12_veh: CannonCore {
        AI_DISPERSION;
    };
    class CUP_Vacannon_GAU22_veh: CannonCore {
        AI_DISPERSION;
    };
    class CUP_Vacannon_M168_M163VADS: CannonCore {
        AI_DISPERSION;
    };
    class CUP_Vacannon_Phalanx_veh: CUP_Vacannon_M168_M163VADS {
        AI_DISPERSION;
    };
    class CUP_Vacannon_GSh302K_veh: CannonCore {
        AI_DISPERSION;
    };
    class CUP_Vacannon_GSh301_veh: CUP_Vacannon_GSh302K_veh {
        AI_DISPERSION;
    };
    class CUP_Vacannon_2A38M_veh: CUP_Vacannon_GSh302K_veh {
        AI_DISPERSION;
    };
    class CUP_Vacannon_Yakb_veh: gatling_20mm {
        AI_DISPERSION;
    };
    class CUP_Vacannon_SPG9_veh: CannonCore {
        AI_DISPERSION;
    };
    class CUP_DSHKM_W: CUP_Vhmg_DSHKM_veh {
        AI_DISPERSION;
    };
    class CUP_M2_vehicle_W: CUP_Vhmg_M2_veh {
        AI_DISPERSION;
    };
    class CUP_M3P_vehicle_W: CUP_Vhmg_M3P_veh {
        AI_DISPERSION;
    };
    class CUP_M2_Commander_M1_Abrams_W: CUP_Vhmg_M2_M1Abrams_Commander {
        AI_DISPERSION;
    };
    class CUP_M240_veh_W: CUP_Vlmg_M240_veh {
        AI_DISPERSION;
    };
    class CUP_M240_veh2_W: CUP_Vlmg_M240_veh2 {
        AI_DISPERSION;
    };
    class CUP_M240_veh3_W: CUP_Vlmg_M240_veh3 {
        AI_DISPERSION;
    };
    class CUP_M240_Loader_M1_Abrams_W: CUP_Vlmg_M240_M1Abrams_Loader {
        AI_DISPERSION;
    };
    class CUP_M240_Coax_M1_Abrams_W: CUP_Vlmg_M240_M1Abrams_Coax {
        AI_DISPERSION;
    };
    class CUP_MG3_noeject_W: CUP_Vlmg_MG3_veh_noeject {
        AI_DISPERSION;
    };
    class CUP_M134: CUP_Vlmg_M134_veh {
        AI_DISPERSION;
    };
    class CUP_M134_2: CUP_Vlmg_M134_veh2 {
        AI_DISPERSION;
    };
    class CUP_KORD_W: CUP_Vhmg_KORD_veh {
        AI_DISPERSION;
    };
    class CUP_L2A1_W: CUP_Vlmg_L2A1_veh {
        AI_DISPERSION;
    };
    class CUP_PKT_MG_Nest_W: CUP_Vhmg_PKT_MGNest {
        AI_DISPERSION;
    };
    class CUP_PKT_veh_W: CUP_Vhmg_PKT_veh2 {
        AI_DISPERSION;
    };
    class CUP_PKT_Noeject_W: CUP_Vhmg_PKT_veh_Noeject {
        AI_DISPERSION;
    };
    class CUP_KPVT_W: CUP_Vhmg_KPVT_veh {
        AI_DISPERSION;
    };
    class CUP_HKGMG_W: CUP_Vgmg_HKGMG_veh {
        AI_DISPERSION;
    };
    class CUP_AGS30_W: CUP_Vhmg_AGS30_veh {
        AI_DISPERSION;
    };
    class CUP_AGS17_W: CUP_Vgmg_AGS17_veh {
        AI_DISPERSION;
    };
    class CUP_MK19_W: CUP_Vgmg_MK19_veh {
        AI_DISPERSION;
    };
    class CUP_M256_Cannon_W: CUP_Vcannon_M256_veh {
        AI_DISPERSION;
    };
    class CUP_M197_W: CUP_Vacannon_M197_veh {
        AI_DISPERSION;
    };
    class CUP_M242_W: CUP_Vacannon_M242_veh {
        AI_DISPERSION;
    };
    class CUP_KPVB_W: CUP_Vacannon_KPVB_veh {
        AI_DISPERSION;
    };
    class CUP_M230_W: CUP_Vacannon_M230_veh {
        AI_DISPERSION;
    };
    class CUP_2A14_W: CUP_Vacannon_2A14_veh {
        AI_DISPERSION;
    };
    class CUP_2A42_W: CUP_Vacannon_2A42_veh {
        AI_DISPERSION;
    };
    class CUP_GAU12_W: CUP_Vacannon_GAU12_veh {
        AI_DISPERSION;
    };
    class CUP_GSh302K_W: CUP_Vacannon_GSh302K_veh {
        AI_DISPERSION;
    };
    class weapon_Fighter_Gun20mm_AA: CannonCore {
        AI_DISPERSION;
    };
    class weapon_Fighter_Gun_30mm: CannonCore {
        AI_DISPERSION;
    };
    class MissileLauncher;
    class launcher_SPG9: MissileLauncher {
        AI_DISPERSION;
    };
    class cannon_20mm: autocannon_Base_F {
        AI_DISPERSION;
    };
    class cannon_125mm_advanced: cannon_125mm {
        AI_DISPERSION;
    };
    class MMG_01_vehicle: LMG_RCWS {
        AI_DISPERSION;
    };
    class MMG_02_vehicle;
    class MMG_02_coax: MMG_02_vehicle {
        AI_DISPERSION;
    };
    class autocannon_30mm_RCWS: autocannon_Base_F {
        AI_DISPERSION;
    };
    class HMG_127_AFV: HMG_127 {
        AI_DISPERSION;
    };
    class rhs_weap_pkt;
    class rhs_weap_pkt_bmd_coax: rhs_weap_pkt {
        AI_DISPERSION;
    };
    class rhs_weap_pkt_2s3: rhs_weap_pkt {
        AI_DISPERSION;
    };
    class rhs_weap_pkt_bmd_bow1: rhs_weap_pkt {
        AI_DISPERSION;
    };
    class rhs_weap_pkt_bmd_bow2: rhs_weap_pkt {
        AI_DISPERSION;
    };
    class rhs_weap_pkt_btr: rhs_weap_pkt {
        AI_DISPERSION;
    };
    class rhs_weap_pkt_btr80a: rhs_weap_pkt {
        AI_DISPERSION;
    };
    class rhs_weap_pkt_t90m_RWS: rhs_weap_pkt {
        AI_DISPERSION;
    };
    class rhs_weap_pktm;
    class rhs_weap_pktm_t14_RWS: rhs_weap_pktm {
        AI_DISPERSION;
    };
    class rhs_weap_DSHKM: LMG_RCWS {
        AI_DISPERSION;
    };
    class rhs_weap_dshkm_slow: rhs_weap_DSHKM {
        AI_DISPERSION;
    };
    class rhs_weap_nsvt: rhs_weap_DSHKM {
        AI_DISPERSION;
    };
    class rhs_weap_nsvt_effects;
    class rhs_weap_nsvt_t72: rhs_weap_nsvt_effects {
        AI_DISPERSION;
    };
    class rhs_weap_nsvt_obj681: rhs_weap_nsvt_effects {
        AI_DISPERSION;
    };
    class rhs_weap_nsvt_t80: rhs_weap_nsvt_effects {
        AI_DISPERSION;
    };
    class rhs_weap_nsvt_t90m_RWS: rhs_weap_nsvt_t72 {
        AI_DISPERSION;
    };
    class rhs_weap_kord: rhs_weap_nsvt_effects {
        AI_DISPERSION;
    };
    class rhs_weap_kpvt: MGun {
        AI_DISPERSION;
    };
    class rhs_weap_yakB: gatling_30mm {
        AI_DISPERSION;
    };
    class RHS_weap_Ags30: GMG_20mm {
        AI_DISPERSION;
    };
    class rhs_weap_pkm_tigr: rhs_weap_pkt {
        AI_DISPERSION;
    };
    class RHS_weap_Ags30_tigr: RHS_weap_Ags30 {
        AI_DISPERSION;
    };
    class rhs_weap_d81: cannon_120mm {
        AI_DISPERSION;
    };
    class rhs_weap_2a26: rhs_weap_d81 {
        AI_DISPERSION;
    };
    class rhs_weap_2a46_2: rhs_weap_d81 {
        AI_DISPERSION;
    };
    class rhs_weap_2a46m_2: rhs_weap_d81 {
        AI_DISPERSION;
    };
    class rhs_weap_2a46m: rhs_weap_2a46m_2 {
        AI_DISPERSION;
    };
    class rhs_weap_2a46m_4: rhs_weap_2a46m_2 {
        AI_DISPERSION;
    };
    class rhs_weap_2a46m_5: rhs_weap_2a46m_2 {
        AI_DISPERSION;
    };
    class rhs_weap_2a82: rhs_weap_2a46m_2 {
        AI_DISPERSION;
    };
    class rhs_weap_2a82_1m: rhs_weap_2a82 {
        AI_DISPERSION;
    };
    class rhs_weap_d10t2s_2: rhs_weap_d81 {
        AI_DISPERSION;
    };
    class rhs_weap_d10tg: rhs_weap_d10t2s_2 {
        AI_DISPERSION;
    };
    class rhs_weap_d10t2s: rhs_weap_d10t2s_2 {
        AI_DISPERSION;
    };
    class rhs_weap_u5ts: rhs_weap_d81 {
        AI_DISPERSION;
    };
    class rhs_weap_2a42_base;
    class rhs_weap_2a42: rhs_weap_2a42_base {
        AI_DISPERSION;
    };
    class rhs_weap_2a72_base;
    class rhs_weap_2a72: rhs_weap_2a72_base {
        AI_DISPERSION;
    };
    class rhs_weap_2a72_btr: rhs_weap_2a72_base {
        AI_DISPERSION;
    };
    class rhs_weap_2a70: rhs_weap_d81 {
        AI_DISPERSION;
    };
    class rhs_weap_2a28_base;
    class rhs_weap_2a28: rhs_weap_2a28_base {
        AI_DISPERSION;
    };
    class rhs_weap_2a41_base;
    class rhs_weap_2a41: rhs_weap_2a41_base {
        AI_DISPERSION;
    };
    class rhs_weap_gsh30: gatling_30mm {
        AI_DISPERSION;
    };
    class rhs_weap_gsh302: rhs_weap_gsh30 {
        AI_DISPERSION;
    };
    class rhs_weap_gsh301: rhs_weap_gsh30 {
        AI_DISPERSION;
    };
    class rhs_weap_gsh23l: rhs_weap_gsh30 {
        AI_DISPERSION;
    };
    class rhs_weap_gsh23lx2: rhs_weap_gsh23l {
        AI_DISPERSION;
    };
    class rhs_weap_azp23: CannonCore {
        AI_DISPERSION;
    };
    class rhs_weap_2a14: rhs_weap_azp23 {
        AI_DISPERSION;
    };
    class RocketPods;
    class rhs_weap_SPG9: RocketPods {
        AI_DISPERSION;
    };
    class rhs_weap_m256: cannon_120mm {
        AI_DISPERSION;
    };
    class mortar_155mm_AMOS;
    class cannon_155mm: mortar_155mm_AMOS {
        AI_DISPERSION;
    };
    class rhs_weap_m284: cannon_155mm {
        AI_DISPERSION;
    };
    class RHS_weap_M242BC: autocannon_30mm_CTWS {
        AI_DISPERSION;
    };
    class RHS_weap_M242BC_manual: RHS_weap_M242BC {
        AI_DISPERSION;
    };
    class RHS_M2_Abrams_Commander: HMG_M2 {
        AI_DISPERSION;
    };
    class RHS_M2_Abrams_Gunner: HMG_M2 {
        AI_DISPERSION;
    };
    class RHS_M2: HMG_M2 {
        AI_DISPERSION;
    };
    class RHS_M2_offroad: RHS_M2 {
        AI_DISPERSION;
    };
    class RHS_M2_M1117: RHS_M2 {
        AI_DISPERSION;
    };
    class RHS_MKV_M2_p: RHS_M2 {
        AI_DISPERSION;
    };
    class RHS_MKV_M2_s: RHS_MKV_M2_p {
        AI_DISPERSION;
    };
    class RHS_M2_CROWS_M151: RHS_M2 {
        AI_DISPERSION;
    };
    class RHS_M2_CROWS_M153: RHS_M2_CROWS_M151 {
        AI_DISPERSION;
    };
    class rhs_weap_gau21_1: RHS_M2 {
        AI_DISPERSION;
    };
    class rhs_weap_m240veh: LMG_M200 {
        AI_DISPERSION;
    };
    class rhs_weap_m240_abrams: rhs_weap_m240veh {
        AI_DISPERSION;
    };
    class rhs_weap_m240_m113: rhs_weap_m240veh {
        AI_DISPERSION;
    };
    class rhs_weap_m240_abrams_coax: rhs_weap_m240veh {
        AI_DISPERSION;
    };
    class rhs_weap_m240_bradley_coax: rhs_weap_m240veh {
        AI_DISPERSION;
    };
    class rhs_weap_m240H: rhs_weap_m240veh {
        AI_DISPERSION;
    };
    class rhs_weap_m240H_1: rhs_weap_m240H {
        AI_DISPERSION;
    };
    class rhs_weap_m240H_2: rhs_weap_m240H_1 {
        AI_DISPERSION;
    };
    class rhs_weap_m134_minigun_1: M134_minigun {
        AI_DISPERSION;
    };
    class rhs_weap_m134_minigun_2: rhs_weap_m134_minigun_1 {
        AI_DISPERSION;
    };
    class RHS_MKV_M134: rhs_weap_m134_minigun_1 {
        AI_DISPERSION;
    };
    class RHS_weap_m134_pylon: rhs_weap_m134_minigun_1 {
        AI_DISPERSION;
    };
    class rhs_weap_M197: gatling_30mm {
        AI_DISPERSION;
    };
    class rhs_weap_M301: rhs_weap_M197 {
        AI_DISPERSION;
    };
    class rhs_weap_M230: rhs_weap_M197 {
        AI_DISPERSION;
    };
    class RHS_weap_gau8: Gatling_30mm_Plane_CAS_01_F {
        AI_DISPERSION;
    };
    class RHS_weap_gau19: HMG_127 {
        AI_DISPERSION;
    };
    class RHS_MK19: GMG_20mm {
        AI_DISPERSION;
    };
    class RHS_MKV_MK19: RHS_MK19 {
        AI_DISPERSION;
    };
    class RHS_MK19_CROWS_M151: RHS_MK19 {
        AI_DISPERSION;
    };
    class RHS_MK19_CROWS_M153: RHS_MK19_CROWS_M151 {
        AI_DISPERSION;
    };
    class rhsusf_M61A2: weapon_Fighter_Gun20mm_AA {
        AI_DISPERSION;
    };
};
