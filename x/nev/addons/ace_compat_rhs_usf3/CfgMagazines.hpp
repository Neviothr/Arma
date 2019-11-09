class CfgMagazines {
    class CA_Magazine;
    class VehicleMagazine;
    class rhs_mag_30Rnd_556x45_M855A1_Stanag;
    class rhsusf_100Rnd_556x45_soft_pouch: rhs_mag_30Rnd_556x45_M855A1_Stanag {
        ace_isbelt = 1;
    };

    class rhsusf_50Rnd_762x51: CA_Magazine {
        ace_isbelt = 1;
    };

    class rhs_mag_100rnd_127x99_mag: VehicleMagazine {
        ace_isbelt = 1;
    };
    
    class RHS_48Rnd_40mm_MK19: VehicleMagazine {
        ace_isbelt = 1;
    };

    class CA_LauncherMagazine;
    class rhs_mag_smaw_SR: CA_LauncherMagazine {
        ace_overpressure_priority = 99;
        ace_overpressure_angle = 0;
        ace_overpressure_range = 0;
        ace_overpressure_damage = 0;
    };
};
