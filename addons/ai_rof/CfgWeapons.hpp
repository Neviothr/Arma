class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons {
    // Manually add the "NEV_FullAuto" firemode to modes[] array because += operator doesn't work reliably.
    // Handheld Weapons
    class DMR_01_base_F;
    class srifle_DMR_01_F: DMR_01_base_F {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium"};
        AI_ROF(FullAuto);
    };
    class EBR_base_F;
    class srifle_EBR_F: EBR_base_F {
        modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium"};
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
        modes[] = {"manual", "close", "short", "medium", "far_optic1", "far_optic2"};
        AI_ROF(manual);
    };
    class LMG_Zafir_F: Rifle_Long_Base_F {
       modes[] = {"FullAuto", "Single", "close", "short", "medium", "far_optic1", "far_optic2"};
       AI_ROF(FullAuto);
    };
    class arifle_Katiba_Base_F;
    class arifle_Katiba_F: arifle_Katiba_Base_F {
       modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium"};
       AI_ROF(FullAuto);
    };
    class arifle_Katiba_C_F: arifle_Katiba_Base_F {
       modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium"};
       AI_ROF(FullAuto);
    };
    class arifle_Katiba_GL_F: arifle_Katiba_Base_F {
       modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "fullauto_medium"};
       AI_ROF(FullAuto);
    };
    class mk20_base_F;
    class arifle_Mk20_F: mk20_base_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2"};
       AI_ROF(FullAuto);
    };
    class arifle_Mk20_plain_F: arifle_Mk20_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2"};
       AI_ROF(FullAuto);
    };
    class arifle_Mk20C_F: mk20_base_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2"};
       AI_ROF(FullAuto);
    };
    class arifle_Mk20C_plain_F: arifle_Mk20C_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2"};
       AI_ROF(FullAuto);
    };
    class arifle_Mk20_GL_F: mk20_base_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2"};
       AI_ROF(FullAuto);
    };
    class arifle_Mk20_GL_plain_F: arifle_Mk20_GL_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2"};
       AI_ROF(FullAuto);
    };
    class arifle_MX_Base_F;
    class arifle_MXC_F: arifle_MX_Base_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2"};
       AI_ROF(FullAuto);
    };
    class arifle_MX_F: arifle_MX_Base_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2"};
       AI_ROF(FullAuto);
    };
    class arifle_MX_GL_F: arifle_MX_Base_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2"};
       AI_ROF(FullAuto);
    };
    class arifle_MX_SW_F: arifle_MX_Base_F {
        modes[] = {"manual", "single", "close", "short", "medium", "far_optic1", "far_optic2"};
        AI_ROF(manual);
    };
    class arifle_MXM_F: arifle_MX_Base_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2"};
       AI_ROF(FullAuto);
    };
    class arifle_MXC_Black_F: arifle_MXC_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2"};
       AI_ROF(FullAuto);
    };
    class arifle_MX_Black_F: arifle_MX_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2"};
       AI_ROF(FullAuto);
    };
    class arifle_MX_GL_Black_F: arifle_MX_GL_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2"};
       AI_ROF(FullAuto);
    };
    class arifle_MX_SW_Black_F: arifle_MX_SW_F {
        modes[] = {"manual", "single", "close", "short", "medium", "far_optic1", "far_optic2"};
        AI_ROF(manual);
    };
    class arifle_MXM_Black_F: arifle_MXM_F {
       modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2"};
       AI_ROF(FullAuto);
    };
    class SDAR_base_F;
    class arifle_SDAR_F: SDAR_base_F {
        modes[] = {"Single", "Burst", "FullAuto"};
        AI_ROF(FullAuto);
    };
    class Tavor_base_F;
    class arifle_TRG21_F: Tavor_base_F {
        __modes__[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium"};
        AI_ROF(FullAuto);
    };
    class arifle_TRG20_F: Tavor_base_F {
        __modes__[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium"};
        AI_ROF(FullAuto);
    };
    class arifle_TRG21_GL_F: arifle_TRG21_F {
        __modes__[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium"};
        AI_ROF(FullAuto);
    };
    class pdw2000_base_F;
    class hgun_PDW2000_F: pdw2000_base_F {
        __modes__[] = {"Single", "Burst", "FullAuto"};
        AI_ROF(FullAuto);
    };
    class SMG_01_Base;
    class SMG_01_F: SMG_01_Base {
        __modes__[] = {"Single", "Burst", "FullAuto"};
        AI_ROF(FullAuto);
    };
    class SMG_02_base_F;
    class SMG_02_F: SMG_02_base_F {
        __modes__[] = {"Single", "Burst", "FullAuto"};
        AI_ROF(FullAuto);
    };
    class CUP_srifle_CZ750_Base;
    class CUP_srifle_CZ750: CUP_srifle_CZ750_Base {
        AI_DISPERSION;
    };
    class CUP_arifle_G3_Base;
    class CUP_arifle_G3A3_ris: CUP_arifle_G3_Base {
        __modes__[] = {"Single", "Fullauto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G3A3_ris_vfg: CUP_arifle_G3_Base {
        __modes__[] = {"Single", "Fullauto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G3A3_modern_ris: CUP_arifle_G3A3_ris {
        __modes__[] = {"Single", "Fullauto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G3A3_ris_black: CUP_arifle_G3A3_ris {
        __modes__[] = {"Single", "Fullauto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G3A3_ris_vfg_black: CUP_arifle_G3A3_ris_vfg {
        __modes__[] = {"Single", "Fullauto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium"};
        AI_ROF(FullAuto);
    };
    class CUP_arifle_G3A3_modern_ris_black: CUP_arifle_G3A3_modern_ris {
        __modes__[] = {"Single", "Fullauto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium"};
        AI_ROF(FullAuto);
    };
    class CUP_srifle_CZ550_base;
    class CUP_srifle_CZ550: CUP_srifle_CZ550_base {
        AI_DISPERSION;
    };
    class CUP_srifle_CZ550_rail: CUP_srifle_CZ550_base {
        AI_DISPERSION;
    };



































    // Vehicle Weapons
    class LMG_RCWS: MGun {
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
};


