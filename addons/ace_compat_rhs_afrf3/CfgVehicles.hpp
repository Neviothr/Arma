class CfgVehicles {
    class LandVehicle;
    class StaticWeapon: LandVehicle {
        class ACE_Actions {
            class ACE_MainActions;
        };
    };

    class StaticMGWeapon: StaticWeapon {};
    class AT_01_base_F: StaticMGWeapon {};
     class rhs_SPG9_base: AT_01_base_F {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "";
            };
        };
    };

    class rhs_Kornet_Base: AT_01_base_F {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "";
                selection = "tripod";
            };
        };
    };
};
