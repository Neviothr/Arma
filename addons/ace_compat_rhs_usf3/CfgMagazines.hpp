class cfgMagazines {
    class CA_LauncherMagazine;
    class rhs_mag_smaw_SR: CA_LauncherMagazine {
        ace_overpressure_priority = 99;
        ace_overpressure_angle = 0;
        ace_overpressure_range = 0;
        ace_overpressure_damage = 0;
    };

    class rhsusf_m112_mag: CA_Magazine {
        ace_explosives_DelayTime = 1;
        ace_explosives_Placeable = 1;
        ace_explosives_SetupObject = "ACE_Explosives_Place_rhsusf_m112_DemoCharge";
        useAction = 0;
        class ACE_Triggers {
            SupportedTriggers[] = {"Timer", "Command", "MK16_Transmitter", "DeadmanSwitch"};
            class Timer {
                FuseTime = 0.5;
            };
            class Command {
                FuseTime = 0.5;
            };
            class MK16_Transmitter: Command {};
            class DeadmanSwitch: Command {};
        };
    };

    class rhsusf_m112x4_mag: rhsusf_m112_mag {
        ace_explosives_DelayTime = 1;
        ace_explosives_Placeable = 1;
        ace_explosives_SetupObject = "ACE_Explosives_Place_rhsusf_m112x4_DemoCharge";
        useAction = 0;
        class ACE_Triggers {
            SupportedTriggers[] = {"Timer", "Command", "MK16_Transmitter", "DeadmanSwitch"};
            class Timer {
                FuseTime = 0.5;
            };
            class Command {
                FuseTime = 0.5;
            };
            class MK16_Transmitter: Command {};
            class DeadmanSwitch: Command {};
        };
    };

    class ATMine_Range_Mag;
    class rhs_mine_M19_mag: ATMine_Range_Mag {
        ace_explosives_SetupObject = "ACE_Explosives_Place_rhs_mine_M19_Mine";
        class ACE_Triggers {
            SupportedTriggers[] = {"PressurePlate"};
            class PressurePlate {
                digDistance = 0.075;
            };
        };
    };

    class rhsusf_mine_m14_mag: ATMine_Range_Mag {
        ace_explosives_SetupObject = "ACE_Explosives_Place_rhsusf_mine_m14_mag_Mine";
        class ACE_Triggers {
            SupportedTriggers[] = {"PressurePlate"};
            class PressurePlate {
                digDistance = 0.03;
            };
        };
    };
};
