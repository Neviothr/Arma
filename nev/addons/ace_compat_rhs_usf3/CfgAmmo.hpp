class CfgAmmo {
    class GrenadeHand;
    class rhs_ammo_mk3a2: GrenadeHand {
        ace_frag_enabled = 0;
        ace_frag_skip = 1;
        ace_frag_force = 0;
    };

    class rhs_ammo_m84: GrenadeHand {
        ace_frag_enabled = 0;
        ace_frag_skip = 1;
        ace_frag_force = 0;
    };

    class rhs_ammo_m7a3_cs: GrenadeHand {
        ace_frag_enabled = 0;
        ace_frag_skip = 1;
        ace_frag_force = 0;
    };

    class GrenadeHand_stone;
    class rhs_ammo_m69: GrenadeHand_stone {
        ace_frag_enabled = 0;
        ace_frag_skip = 1;
        ace_frag_force = 0;
    };

    class rhs_ammo_m67: GrenadeHand {
        ace_frag_enabled = 1;
        ace_frag_metal = 213;
        ace_frag_charge = 185;
        ace_frag_gurney_c = 2700;
        ace_frag_gurney_k = "3/5";
        ace_frag_classes[] = {"ACE_frag_medium_HD"};
        ace_frag_skip = 0;
        ace_frag_force = 1;
    };

    class RocketBase;
    class rhs_ammo_M136_rocket: RocketBase {};
    class rhs_ammo_M136_hedp_rocket: rhs_ammo_M136_rocket {
        ace_frag_enabled = 1;
        ace_frag_metal = 330;
        ace_frag_charge = 280;
        ace_frag_gurney_c = 2800;
        ace_frag_gurney_k = "3/5";
        ace_frag_classes[] = {"ACE_frag_medium_HD"};
        ace_frag_skip = 0;
        ace_frag_force = 1;
    };
};
