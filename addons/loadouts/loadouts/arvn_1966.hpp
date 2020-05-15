class GVAR(r) {
    uniformClass = "rhsgref_uniform_og107";
    backpack = "";
    linkedItems[] = {"rhsgref_alice_webbing", "rhsgref_helmet_M1_bare", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"rhs_weap_m1garand_sa43"};
    magazines[] = {
        LIST_11("rhsgref_8Rnd_762x63_M2B_M1rifle"),
        LIST_2("rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};

class GVAR(g) {
    uniformClass = "rhsgref_uniform_og107";
    backpack = "";
    linkedItems[] = {"rhsgref_alice_webbing", "rhsgref_helmet_M1_bare_alt01", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"rhs_weap_m79", "rhsusf_weap_m1911a1"};
    magazines[] = {
        LIST_12("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell"),
        "HandGrenade",
        "SmokeShell",
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
};

class GVAR(rat) {
    uniformClass = "rhsgref_uniform_og107";
    backpack = "";
    linkedItems[] = {"rhsgref_alice_webbing", "rhsgref_helmet_M1_painted", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"rhs_weap_m1garand_sa43", "rhs_weap_m72a7"};
    magazines[] = {
        LIST_11("rhsgref_8Rnd_762x63_M2B_M1rifle"),
        LIST_2("rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};

class GVAR(ar) {
    uniformClass = "rhsgref_uniform_og107";
    backpack = "rhsgref_hidf_alicepack";
    linkedItems[] = {"rhsgref_alice_webbing", "rhsgref_helmet_M1_painted_alt01", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"CUP_lmg_M60", "rhsusf_weap_m1911a1"};
    magazines[] = {
        LIST_4("rhsusf_100Rnd_762x51"),
        "HandGrenade",
        "SmokeShell",
        LIST_2("rhsusf_mag_7x45acp_MHP")
    };
};
