class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons {
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
};
