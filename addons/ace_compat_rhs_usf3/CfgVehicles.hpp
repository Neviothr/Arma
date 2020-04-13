// https://github.com/acemod/ACE3/blob/master/optionals/compat_rhs_usf3/CfgVehicles.hpp
class CfgVehicles {
    class Items_base_F;
    class ACE_Explosives_Place: Items_base_F {
        class ACE_Actions {
            class ACE_MainActions;
        };
    };

    class ACE_Explosives_Place_rhsusf_m112_DemoCharge: ACE_Explosives_Place {
        displayName = "$STR_RHSUSF_M112_EXPLOSIVE_DISPLAY_NAME";
        model = "\rhsusf\addons\rhsusf_weapons\explosives\rhsusf_m112x1_e";
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "[-0.155,0,0.01]";
            };
        };
    };

    class ACE_Explosives_Place_rhsusf_m112x4_DemoCharge: ACE_Explosives_Place {
        displayName = "$STR_RHSUSF_M112X4_EXPLOSIVE_DISPLAY_NAME";
        model = "\rhsusf\addons\rhsusf_weapons\explosives\rhsusf_m112x4_e";
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "[-0.155,0.025,0.01]";
            };
        };
    };

    class ACE_Explosives_Place_rhs_mine_M19_Mine: ACE_Explosives_Place {
        displayName = "$STR_RHSUSF_M19_ATMINE_DISPLAY_NAME";
        model = "\rhsusf\addons\rhsusf_weapons\mines\rhsusf_m19_e";
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "[0.011,0.011,0.045]";
            };
        };
    };

    class ACE_Explosives_Place_rhsusf_mine_m14_mag_Mine: ACE_Explosives_Place {
        displayName = "$STR_RHSUSF_M14_APMINE_DISPLAY_NAME";
        model = "\rhsusf\addons\rhsusf_weapons\mines\rhsusf_m14_e";
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "[0.02,0.015,0.02]";
            };
        };
    };
};
