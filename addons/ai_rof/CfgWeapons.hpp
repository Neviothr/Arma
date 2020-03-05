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
    class CUP_srifle_LeeEnfield: Rifle_Base_F {
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
        modes[] = {"FullAuto", "NEV_FullAuto"};
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
	class CUP_CZ_BREN2_762_14: CUP_CZ_BREN2_762_Base {
        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "NEV_FullAuto"};
        AI_ROF(FullAuto);
    };
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
/*
AI_DISPERSION;
CUP_arifle_AUG_A1
CUP_srifle_SVD
CUP_srifle_SVD_top_rail
CUP_srifle_SVD_des
CUP_srifle_SVD_wdl
CUP_srifle_SVD_des_top_rail
CUP_srifle_SVD_wdl_top_rail
CUP_lmg_UK59
CUP_srifle_VSSVintorez
CUP_srifle_VSSVintorez_top_rail
CUP_srifle_VSSVintorez_VFG
CUP_srifle_VSSVintorez_VFG_top_rail
CUP_srifle_VSSVintorez_flash
CUP_srifle_VSSVintorez_flash_top
CUP_arifle_AS_VAL
CUP_arifle_AS_VAL_top_rail
CUP_arifle_AS_VAL_VFG
CUP_arifle_AS_VAL_VFG_top_rail
CUP_arifle_AS_VAL_flash
CUP_arifle_AS_VAL_flash_top
CUP_arifle_SR3M_Vikhr
CUP_arifle_SR3M_Vikhr_top_rail
CUP_arifle_SR3M_Vikhr_VFG
CUP_arifle_SR3M_Vikhr_VFG_top_rail
CUP_arifle_X95
CUP_arifle_X95_Grippod
CUP_arifle_Fort224
CUP_arifle_Fort224_Grippod
CUP_arifle_Fort221
CUP_arifle_Fort222
CUP_arifle_AKM
CUP_arifle_AKM_GL
CUP_arifle_AKM_top_rail
CUP_arifle_AKM_GL_top_rail
CUP_arifle_AKM_Early
CUP_arifle_AKM_GL_Early
CUP_arifle_AKMN_railed
CUP_arifle_AKMN_railed_afg
CUP_arifle_AKMN_railed_desert
CUP_arifle_AKMN_railed_afg_desert
CUP_arifle_AKMS
CUP_arifle_AKMS_top_rail
CUP_arifle_AKMS_GL
CUP_arifle_AKMS_GL_top_rail
CUP_arifle_AKMS_Early
CUP_arifle_AKMS_GL_Early
CUP_arifle_AKS74U
CUP_arifle_AKS74U_top_rail
CUP_arifle_AKS74U_railed
CUP_arifle_AK47
CUP_arifle_AK47_GL
CUP_arifle_AK47_top_rail
CUP_arifle_AK47_GL_top_rail
CUP_arifle_AK47_Early
CUP_arifle_AK47_GL_Early
CUP_arifle_AKS
CUP_arifle_AKS_Gold
CUP_arifle_AKS_top_rail
CUP_arifle_AK74
CUP_arifle_AK74_GL
CUP_arifle_AK74_top_rail
CUP_arifle_AK74_GL_top_rail
CUP_arifle_AK74_Early
CUP_arifle_AK74_GL_Early
CUP_arifle_AKS74
CUP_arifle_AKS74_GL
CUP_arifle_AKS74_top_rail
CUP_arifle_AKS74_GL_top_rail
CUP_arifle_AKS74_Early
CUP_arifle_AKS74_GL_Early
CUP_arifle_AK74M
CUP_arifle_AK74M_GL
CUP_arifle_AK74M_top_rail
CUP_arifle_AK74M_GL_top_rail
CUP_arifle_AK74M_railed
CUP_arifle_AK74M_GL_railed
CUP_arifle_AK74M_railed_afg
CUP_arifle_AK74M_desert
CUP_arifle_AK74M_top_rail_desert
CUP_arifle_AK74M_railed_desert
CUP_arifle_AK74M_GL_desert
CUP_arifle_AK74M_GL_top_rail_desert
CUP_arifle_AK74M_GL_railed_desert
CUP_arifle_AK74M_railed_afg_desert
CUP_arifle_AK74M_camo
CUP_arifle_AK74M_top_rail_camo
CUP_arifle_AK74M_railed_camo
CUP_arifle_AK74M_GL_camo
CUP_arifle_AK74M_GL_top_rail_camo
CUP_arifle_AK74M_GL_railed_camo
CUP_arifle_AK74M_railed_afg_camo
CUP_arifle_AK101
CUP_arifle_AK101_GL
CUP_arifle_AK101_top_rail
CUP_arifle_AK101_GL_top_rail
CUP_arifle_AK101_railed
CUP_arifle_AK101_GL_railed
CUP_arifle_AK103
CUP_arifle_AK103_GL
CUP_arifle_AK103_top_rail
CUP_arifle_AK103_GL_top_rail
CUP_arifle_AK103_railed
CUP_arifle_AK103_GL_railed
CUP_arifle_AK107
CUP_arifle_AK107_GL
CUP_arifle_AK107_top_rail
CUP_arifle_AK107_GL_top_rail
CUP_arifle_AK107_railed
CUP_arifle_AK107_GL_railed
CUP_arifle_AK108
CUP_arifle_AK108_GL
CUP_arifle_AK108_top_rail
CUP_arifle_AK108_GL_top_rail
CUP_arifle_AK108_railed
CUP_arifle_AK108_GL_railed
CUP_arifle_AK109
CUP_arifle_AK109_GL
CUP_arifle_AK109_top_rail
CUP_arifle_AK109_GL_top_rail
CUP_arifle_AK109_railed
CUP_arifle_AK109_GL_railed
CUP_arifle_AK102
CUP_arifle_AK102_top_rail
CUP_arifle_AK102_railed
CUP_arifle_AK104
CUP_arifle_AK104_top_rail
CUP_arifle_AK104_railed
CUP_arifle_AK105
CUP_arifle_AK105_top_rail
CUP_arifle_AK105_railed
CUP_arifle_RPK74
CUP_arifle_RPK74_top_rail
CUP_arifle_RPK74_45
CUP_arifle_RPK74_45_top_rail
CUP_arifle_RPK74M
CUP_arifle_RPK74M_top_rail
CUP_arifle_RPK74M_railed
CUP_arifle_SAIGA_MK03
CUP_arifle_SAIGA_MK03_top_rail
CUP_arifle_SAIGA_MK03_Wood
CUP_arifle_SIAGE_MK03_Wood_top_rail
CUP_arifle_TYPE_56_2
CUP_arifle_TYPE_56_2_top_rail
CUP_arifle_TYPE_56_2_Early
CUP_srifle_AS50
CUP_srifle_AWM_des
CUP_srifle_AWM_wdl
CUP_srifle_G22_des
CUP_srifle_G22_wdl
CUP_smg_bizon
CUP_smg_vityaz
CUP_smg_vityaz_vfg
CUP_smg_vityaz_top_rail
CUP_smg_vityaz_vfg_top_rail
CUP_smg_vityaz_vfg_front_rail
CUP_smg_saiga9
CUP_arifle_CZ805_A2
CUP_arifle_CZ805_A1
CUP_arifle_CZ805_GL
CUP_arifle_CZ805_A2_blk
CUP_arifle_CZ805_A2_coyote
CUP_arifle_CZ805_A1_blk
CUP_arifle_CZ805_A1_coyote
CUP_arifle_CZ805_GL_blk
CUP_arifle_CZ805_GL_coyote
CUP_smg_EVO
CUP_arifle_FNFAL
CUP_arifle_FNFAL_railed
CUP_arifle_FNFAL_desert
CUP_arifle_FNFAL_railed_desert
CUP_arifle_FNFAL_sand
CUP_arifle_FNFAL_railed_sand
CUP_arifle_FNFAL_woodland
CUP_arifle_FNFAL_railed_woodland
CUP_arifle_FNFAL5061
CUP_arifle_FNFAL5061_rhodesian
CUP_arifle_FNFAL5061_wooden
CUP_arifle_FNFAL5062
CUP_arifle_FNFAL_OSW
CUP_arifle_G36A
CUP_arifle_G36A_camo
CUP_arifle_G36A_wdl
CUP_arifle_G36A_RIS
CUP_arifle_G36A_RIS_camo
CUP_arifle_G36A_RIS_wdl
CUP_arifle_AG36
CUP_arifle_AG36_camo
CUP_arifle_AG36_wdl
CUP_arifle_G36A_AG36_RIS
CUP_arifle_G36A_AG36_RIS_camo
CUP_arifle_G36A_AG36_RIS_wdl
CUP_arifle_G36K
CUP_arifle_G36K_camo
CUP_arifle_G36K_wdl
CUP_arifle_G36K_VFG
CUP_arifle_G36K_VFG_camo
CUP_arifle_G36K_VFG_wdl
CUP_arifle_G36K_RIS
CUP_arifle_G36K_RIS_camo
CUP_arifle_G36K_RIS_wdl
CUP_arifle_G36K_RIS_hex
CUP_arifle_G36K_AG36
CUP_arifle_G36K_AG36_camo
CUP_arifle_G36K_AG36_wdl
CUP_arifle_G36K_RIS_AG36
CUP_arifle_G36K_RIS_AG36_camo
CUP_arifle_G36K_RIS_AG36_wdl
CUP_arifle_G36K_RIS_AG36_hex
CUP_arifle_G36K_KSK
CUP_arifle_G36K_KSK_camo
CUP_arifle_G36K_KSK_hex
CUP_arifle_G36K_KSK_VFG
CUP_arifle_G36K_KSK_VFG_camo
CUP_arifle_G36K_KSK_VFG_hex
CUP_arifle_G36C
CUP_arifle_G36C_camo
CUP_arifle_G36C_wdl
CUP_arifle_G36C_hex
CUP_arifle_G36C_VFG
CUP_arifle_G36C_VFG_camo
CUP_arifle_G36C_VFG_wdl
CUP_arifle_G36C_VFG_hex
CUP_arifle_G36C_VFG_Carry
CUP_arifle_MG36
CUP_arifle_MG36_camo
CUP_arifle_MG36_wdl
CUP_arifle_MG36_hex
CUP_arifle_HK416_CQB_Black
CUP_arifle_HK416_CQB_Desert
CUP_arifle_HK416_CQB_Wood
CUP_arifle_HK416_Black
CUP_arifle_HK416_Desert
CUP_arifle_HK416_Wood
CUP_arifle_HK_M27
CUP_arifle_HK_M27_VFG
CUP_arifle_HK416_M203_Black
CUP_arifle_HK416_M203_Desert
CUP_arifle_HK416_M203_Wood
CUP_arifle_HK416_CQB_M203_Black
CUP_arifle_HK416_CQB_M203_Desert
CUP_arifle_HK416_CQB_M203_Wood
CUP_arifle_HK416_AGL_Black
CUP_arifle_HK416_AGL_Desert
CUP_arifle_HK416_AGL_Wood
CUP_arifle_HK416_CQB_AG36
CUP_arifle_HK416_CQB_AG36_Desert
CUP_arifle_HK416_CQB_AG36_Wood
CUP_arifle_HK_M27_AG36
CUP_arifle_HK417_20
CUP_arifle_HK417_20_Wood
CUP_arifle_HK417_20_Desert
CUP_arifle_HK417_12
CUP_arifle_HK417_12_Wood
CUP_arifle_HK417_12_Desert
CUP_arifle_HK417_12_M203
CUP_arifle_HK417_12_M203_Wood
CUP_arifle_HK417_12_M203_Desert
CUP_arifle_HK417_12_AG36
CUP_arifle_HK417_12_AG36_Wood
CUP_arifle_HK417_12_AG36_Desert
CUP_sgun_CZ584
CUP_sgun_CZ584_RIS
CUP_srifle_L129A1
CUP_srifle_L129A1_HG
CUP_arifle_L85A2
CUP_arifle_L85A2_G
CUP_arifle_L85A2_NG
CUP_arifle_L85A2_GL
CUP_arifle_L86A2
CUP_sgun_M1014
CUP_sgun_M1014_solidstock
CUP_sgun_M1014_vfg
CUP_sgun_M1014_Entry
CUP_sgun_M1014_Entry_vfg
CUP_srifle_M107_Base
CUP_srifle_M107_Desert
CUP_srifle_M107_Pristine
CUP_srifle_M107_Snow
CUP_srifle_M107_Woodland
CUP_srifle_M110
CUP_srifle_M110_black
CUP_srifle_M110_woodland
CUP_srifle_m110_kac
CUP_srifle_m110_kac_black
CUP_srifle_m110_kac_woodland
CUP_srifle_M14
CUP_arifle_M16A2
CUP_arifle_M16A2_GL
CUP_arifle_M16A4_Base
CUP_arifle_M16A4_Grip
CUP_arifle_M16A4_GL
CUP_arifle_XM16E1
CUP_arifle_M16A1
CUP_arifle_M16A1GL
CUP_arifle_M16A1GL_USA
CUP_arifle_M16A1GL_FS
CUP_arifle_Colt727
CUP_arifle_Colt727_M203
CUP_srifle_Mk12SPR
CUP_arifle_M4A1
CUP_arifle_M4A1_desert_carryhandle
CUP_arifle_M4A1_camo_carryhandle
CUP_arifle_M4A1_GL_carryhandle
CUP_arifle_M4A1_GL_carryhandle_camo
CUP_arifle_M4A1_GL_carryhandle_desert
CUP_arifle_M4A1_black
CUP_arifle_M4A1_camo
CUP_arifle_M4A1_desert
CUP_arifle_M4A1_BUIS_GL
CUP_arifle_M4A1_BUIS_camo_GL
CUP_arifle_M4A1_BUIS_desert_GL
CUP_arifle_M4A3_black
CUP_arifle_M4A3_desert
CUP_arifle_M4A3_camo
CUP_arifle_mk18_black
CUP_arifle_mk18_m203_black
CUP_arifle_SBR_black
CUP_arifle_SBR_od
CUP_lmg_M240
CUP_lmg_L7A2
CUP_lmg_L7A2_Flat
CUP_lmg_FNMAG
CUP_lmg_FNMAG_RIS
CUP_lmg_minimipara
CUP_lmg_minimi
CUP_lmg_m249_para
CUP_lmg_m249_para_gl
CUP_lmg_M249_E2
CUP_lmg_minimi_railed
CUP_lmg_m249_pip1
CUP_lmg_m249_pip2
CUP_lmg_m249_pip3
CUP_lmg_m249_pip4
CUP_lmg_m249_SQuantoon
CUP_lmg_L110A1
CUP_lmg_M60E4
CUP_lmg_M60E4_norail
CUP_lmg_M60
CUP_lmg_MG3
CUP_lmg_MG3_rail
CUP_lmg_Mk48
CUP_lmg_Mk48_des
CUP_lmg_Mk48_wdl
CUP_lmg_Mk48_tan
CUP_lmg_Mk48_od
CUP_lmg_Mk48_nohg
CUP_lmg_Mk48_nohg_des
CUP_lmg_Mk48_nohg_wdl
CUP_lmg_Mk48_nohg_tan
CUP_lmg_Mk48_nohg_od
CUP_smg_MP7
CUP_smg_MP7_desert
CUP_smg_MP7_woodland
CUP_lmg_PKM
CUP_lmg_Pecheneg
CUP_lmg_Pecheneg_desert
CUP_lmg_Pecheneg_woodland
CUP_arifle_Sa58P
CUP_arifle_Sa58P_des
CUP_arifle_Sa58P_woodland
CUP_arifle_Sa58V
CUP_arifle_Sa58V_camo
CUP_arifle_Sa58V_woodland
CUP_arifle_Sa58RIS1
CUP_arifle_Sa58RIS1_des
CUP_arifle_Sa58RIS1_woodland
CUP_arifle_Sa58RIS2_gl
CUP_arifle_Sa58RIS2_gl_desert
CUP_arifle_Sa58RIS2_gl_woodland
CUP_arifle_Sa58RIS2
CUP_arifle_Sa58RIS2_camo
CUP_arifle_Sa58RIS2_woodland
CUP_arifle_Sa58P_frontris
CUP_arifle_Sa58P_frontris_desert
CUP_arifle_Sa58P_frontris_woodland
CUP_smg_SA61
CUP_arifle_Mk16_STD
CUP_arifle_Mk16_STD_FG
CUP_arifle_Mk16_STD_SFG
CUP_arifle_Mk16_STD_EGLM
CUP_arifle_Mk16_SV
CUP_arifle_Mk16_CQC
CUP_arifle_Mk16_CQC_FG
CUP_arifle_Mk16_CQC_SFG
CUP_arifle_Mk16_CQC_EGLM
CUP_arifle_Mk16_CQC_black
CUP_arifle_Mk16_CQC_FG_black
CUP_arifle_Mk16_CQC_SFG_black
CUP_arifle_Mk16_CQC_EGLM_black
CUP_arifle_Mk16_STD_black
CUP_arifle_Mk16_STD_FG_black
CUP_arifle_Mk16_STD_SFG_black
CUP_arifle_Mk16_STD_EGLM_black
CUP_arifle_Mk16_SV_black
CUP_arifle_Mk16_CQC_woodland
CUP_arifle_Mk16_CQC_FG_woodland
CUP_arifle_Mk16_CQC_SFG_woodland
CUP_arifle_Mk16_CQC_EGLM_woodland
CUP_arifle_Mk16_STD_woodland
CUP_arifle_Mk16_STD_FG_woodland
CUP_arifle_Mk16_STD_SFG_woodland
CUP_arifle_Mk16_STD_EGLM_woodland
CUP_arifle_Mk16_SV_woodland
CUP_arifle_Mk17_CQC
CUP_arifle_Mk17_CQC_FG
CUP_arifle_Mk17_CQC_SFG
CUP_arifle_Mk17_CQC_EGLM
CUP_arifle_Mk17_STD
CUP_arifle_Mk17_STD_FG
CUP_arifle_Mk17_STD_SFG
CUP_arifle_Mk17_STD_EGLM
CUP_arifle_Mk20
CUP_arifle_Mk17_CQC_Black
CUP_arifle_Mk17_CQC_FG_black
CUP_arifle_Mk17_CQC_SFG_black
CUP_arifle_Mk17_CQC_EGLM_black
CUP_arifle_Mk17_STD_black
CUP_arifle_Mk17_STD_FG_black
CUP_arifle_Mk17_STD_SFG_black
CUP_arifle_Mk17_STD_EGLM_black
CUP_arifle_Mk20_black
CUP_arifle_Mk17_CQC_woodland
CUP_arifle_Mk17_CQC_FG_woodland
CUP_arifle_Mk17_CQC_SFG_woodland
CUP_arifle_Mk17_CQC_EGLM_woodland
CUP_arifle_Mk17_STD_woodland
CUP_arifle_Mk17_STD_FG_woodland
CUP_arifle_Mk17_STD_SFG_woodland
CUP_arifle_Mk17_STD_EGLM_woodland
CUP_arifle_Mk20_woodland
CUP_arifle_XM8_Carbine
CUP_arifle_XM8_Carbine_FG
CUP_arifle_XM8_Carbine_GL
CUP_arifle_xm8_sharpshooter
CUP_arifle_xm8_SAW
CUP_arifle_XM8_Compact
CUP_arifle_XM8_Compact_Rail
CUP_arifle_XM8_Railed
rhs_weap_kar98k
rhs_weap_m38
rhs_weap_m38_rail
rhs_weap_mosin_sbr
rhs_weap_m70ab2
rhs_weap_m70b1
rhs_weap_m92
rhs_weap_m76
rhs_weap_m21a
rhs_weap_m21a_pr
rhs_weap_m21s
rhs_weap_m21s_pr
rhs_weap_savz61
rhs_weap_savz58p
rhs_weap_savz58v
rhs_weap_savz58p_rail
rhs_weap_savz58v_rail
rhs_weap_savz58v_ris
rhs_weap_savz58p_black
rhs_weap_savz58v_black
rhs_weap_savz58p_rail_black
rhs_weap_savz58v_rail_black
rhs_weap_Izh18
rhs_weap_vhsd2
rhs_weap_vhsd2_bg
rhs_weap_vhsd2_ct15x
rhs_weap_vhsd2_bg_ct15x
rhs_weap_vhsk2
rhs_weap_m3a1
rhs_weap_m3a1_specops
rhs_weap_MP44
rhs_weap_m1garand_sa43
rhs_weap_mg42
rhs_weap_m79
rhs_weap_l1a1
rhs_weap_l1a1_wood
rhs_weap_m70b1n
rhs_weap_m70b3n
rhs_weap_m70b3n_pbg40
rhs_weap_m21a_pr_pbg40
rhs_weap_m21a_pbg40
rhs_weap_m82a1
rhs_weap_scorpion
rhs_weap_g36c
rhs_weap_g36kv
rhs_weap_g36kv_ag36
rhs_weap_SCARH_CQC
rhs_weap_SCARH_STD
rhs_weap_SCARH_LB
rhs_weap_SCARH_FDE_CQC
rhs_weap_SCARH_FDE_STD
rhs_weap_SCARH_FDE_LB
rhs_weap_m84
rhs_weap_minimi_para_railed

launch_NLAW_F
launch_RPG32_F
launch_B_Titan_F
launch_I_Titan_F
launch_O_Titan_F
launch_B_Titan_short_F
launch_I_Titan_short_F
launch_O_Titan_short_F
CUP_launch_M72A6
CUP_launch_M72A6_Special
CUP_launch_Igla
CUP_launch_Javelin
CUP_launch_M136
CUP_launch_M47
CUP_launch_MAAWS
CUP_launch_Metis
CUP_launch_NLAW
CUP_launch_RPG18
CUP_launch_Mk153Mod0
CUP_launch_Mk153Mod0_blk
CUP_launch_FIM92Stinger
CUP_launch_9K32Strela
launch_RPG32_ghex_F
launch_RPG7_F
launch_B_Titan_tna_F
launch_B_Titan_short_tna_F
launch_O_Titan_ghex_F
launch_O_Titan_short_ghex_F
launch_MRAWS_olive_F
launch_MRAWS_olive_rail_F
launch_MRAWS_green_F
launch_MRAWS_green_rail_F
launch_MRAWS_sand_F
launch_MRAWS_sand_rail_F
launch_O_Vorona_brown_F
launch_O_Vorona_green_F
launch_RPG32_green_F
launch_I_Titan_eaf_F
launch_B_Titan_olive_F
rhs_weap_rpg26
rhs_weap_rshg2
rhs_weap_rpg7
rhs_weap_igla
rhs_weap_smaw
rhs_weap_smaw_green
rhs_weap_maaws
rhs_weap_M136
rhs_weap_M136_hedp
rhs_weap_M136_hp
rhs_weap_m72a7
rhs_weap_fim92
rhs_weap_fgm148
CUP_launch_RPG7V
rhs_weap_rpg75
rhs_weap_panzerfaust60
rhs_weap_m80

hgun_ACPC2_F
hgun_P07_F
hgun_Pistol_heavy_01_F
hgun_Pistol_heavy_02_F
hgun_Rook40_F
hgun_Pistol_Signal_F
CUP_hgun_Compact
CUP_hgun_Duty
CUP_hgun_Phantom
hgun_P07_khk_F
hgun_Pistol_01_F
hgun_esd_01_F
hgun_Pistol_heavy_01_green_F
rhs_weap_pp2000_folded
rhs_weap_pya
rhs_weap_rsp30_white
rhs_weap_rsp30_red
rhs_weap_rsp30_green
rhs_weap_tr8
rhs_weap_makarov_pm
rhs_weap_pb_6p9
rhs_weap_6p53
rhs_weap_M320
rhsusf_weap_m1911a1
rhsusf_weap_glock17g4
rhsusf_weap_m9
CUP_hgun_Glock17
CUP_hgun_Glock17_blk
CUP_hgun_Glock17_tan
CUP_hgun_M9
CUP_hgun_Mac10
CUP_hgun_Makarov
CUP_hgun_PMM
CUP_hgun_MicroUzi
CUP_hgun_Mk23
CUP_hgun_PB6P9
CUP_hgun_TaurusTracker455
CUP_hgun_TaurusTracker455_gold
CUP_hgun_TEC9
CUP_hgun_Colt1911
CUP_hgun_Deagle
CUP_hgun_MP7
CUP_hgun_MP7_desert
CUP_hgun_MP7_woodland
CUP_hgun_SA61
rhs_weap_savz61_folded
rhs_weap_tt33
rhs_weap_type94_new
*/
    // Vehicle Weapons
    class MGun;
    class LMG_RCWS: MGun {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class MGunCore;
    class M134_minigun: MGunCore {
        modes[] = {"HighROF", "LowROF", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(HighROF);
    };
    class GMG_F;
    class GMG_20mm: GMG_F {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class GMG_40mm: GMG_F {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class CannonCore;
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
    class HMG_M2;
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
    class LMG_RCWS;
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
    class gatling_30mm;
    class rhs_weap_yakB: gatling_30mm {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class RHS_weap_Ags30: GMG_20mm {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class rhs_weap_pkt;
    class rhs_weap_pkm_tigr: rhs_weap_pkt {
        modes[] = {"manual", "close", "short", "medium", "far", "NEV_FullAuto"};
        AI_VEHICLE_ROF(manual);
    };
    class autocannon_30mm_CTWS;
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
    class rhs_weap_m134_minigun_1;
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
    class HMG_127;
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
};


