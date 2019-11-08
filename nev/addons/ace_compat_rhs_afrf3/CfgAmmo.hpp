class CfgAmmo {
    class GrenadeHand;
    class rhs_ammo_rgd5: GrenadeHand {
        ace_frag_enabled = 1;
        ace_frag_metal = 200;
        ace_frag_charge = 110;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "3/5";
        ace_frag_classes[] = {"ACE_frag_small_HD"};
        ace_frag_skip = 0;
        ace_frag_force = 1;
    };

    class rhs_ammo_rgn_base: rhs_ammo_rgd5 {
        ace_frag_enabled = 1;
        ace_frag_metal = 193;
        ace_frag_charge = 97;
        ace_frag_gurney_c = 2800;
        ace_frag_gurney_k = "3/5";
        ace_frag_classes[] = {"ACE_frag_tiny_HD"};
        ace_frag_skip = 0;
        ace_frag_force = 1;
    };

    class rhs_ammo_rgn: rhs_ammo_rgn_base {
        // RGN is scripted grenade that deletes itself, which will break advanced throwing, replace with it's base
        ace_advanced_throwing_replaceWith = "rhs_ammo_rgn_base";
        ace_frag_enabled = 0;
        ace_frag_skip = 1;
        ace_frag_force = 0;
    };

    class rhs_ammo_rgn_sub: rhs_ammo_rgn_base {};
    class rhs_ammo_rgn_exp: rhs_ammo_rgn_base {};
    class rhs_ammo_fakel: GrenadeHand {
        ace_frag_enabled = 0;
        ace_frag_skip = 1;
        ace_frag_force = 0;
    };

    class rhs_ammo_fakels: rhs_ammo_fakel {};
    class rhs_ammo_zarya2: rhs_ammo_fakels {};
    class rhs_ammo_plamyam: rhs_ammo_fakels {};
    class RocketBase;
    class R_PG32V_F: RocketBase {};
    class rhs_rpg26_rocket: R_PG32V_F {};
    class rhs_rpg7v2_pg7vl: rhs_rpg26_rocket {};
    class rhs_rpg7v2_og7v: rhs_rpg7v2_pg7vl {
        ace_frag_enabled = 1;
        ace_frag_metal = 400;
        ace_frag_charge = 210;
        ace_frag_gurney_c = 2800;
        ace_frag_gurney_k = "3/5";
        ace_frag_classes[] = {"ACE_frag_medium_HD"};
        ace_frag_skip = 0;
        ace_frag_force = 1;
    };

    class rhs_rpg7v2_tbg7v: rhs_rpg7v2_pg7vl {
        ace_frag_enabled = 0;
        ace_frag_skip = 1;
        ace_frag_force = 0;
    };

    class rhs_rshg2_rocket: rhs_rpg7v2_tbg7v {
        ace_frag_enabled = 0;
        ace_frag_skip = 1;
        ace_frag_force = 0;
    };

    class G_40mm_HE;
    class rhs_g_vog25: G_40mm_HE {};
    class rhs_g_vg40tb: rhs_g_vog25 { //Thermobaric
        ace_frag_force = 0;
    };

    class rhs_g_vg40sz: rhs_g_vog25 { //Flashbang
        ace_frag_force = 0;
    };

    class rhs_g_gdm40: rhs_g_vog25 { //Smoke
        ace_frag_force = 0;
    };
    
    class rhs_g_vg40md_white: rhs_g_vog25 { //Smoke
        ace_frag_force = 0;
    };
};
