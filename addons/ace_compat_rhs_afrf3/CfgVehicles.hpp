class CfgVehicles {
    class LandVehicle;
    class Tank: LandVehicle {
        class NewTurret;
    };

    class Tank_F: Tank {
        class Turrets {
            class MainTurret: NewTurret {
                class Turrets {
                    class CommanderOptics;
                };
            };
        };
    };

    class Car: LandVehicle {
        class ACE_Actions {
            class ACE_MainActions {};
        };
    };

    class Car_F: Car {
        class ViewPilot;
        class NewTurret;
    };

    class Wheeled_APC_F: Car_F {
        class NewTurret;
        class Turrets {
            class MainTurret: NewTurret {
                class ViewOptics;
            };
        };
        class CommanderOptics;
    };
    class Air;
    class Helicopter: Air {
        class Turrets;
    };
    class Helicopter_Base_F: Helicopter {
        class Turrets: Turrets {
            class MainTurret;
        };
    };

    class APC_Tracked_02_base_F: Tank_F {
        class Turrets: Turrets {
            class MainTurret: MainTurret {};
        };
    };

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

    class StaticMortar: StaticWeapon {};
    class rhs_2b14_82mm_Base: StaticMortar {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "";
                selection = ""; // no good selections for this mortar
            };
        };
    };
};
