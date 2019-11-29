class CfgVehicles {
    class ACE_Explosives_Place;
    class ACE_PipeBomb_place_CUP: ACE_Explosives_Place {
        displayName = "Satchel Charge"; // Name of the item
        model = "\CUP\Weapons\CUP_Weapons_Put\CUP_Satchel.p3d"; // Path to your model
        ace_explosives_offset[] = {0, 0, 0}; // Offset of the interaction point from the model in meters on the X,Y,Z axis.
    };

    class ACE_Mine_place_CUP: ACE_Explosives_Place {
        displayName = "AT-15 Anti-Tank Mine"; // Name of the item
        model = "\CUP\Weapons\CUP_Weapons_Put\CUP_AT15.p3d"; // Path to your model
        ace_explosives_offset[] = {0, 0, 0}; // Offset of the interaction point from the model in meters on the X,Y,Z axis.
    };

    class ACE_MineE_place_CUP: ACE_Explosives_Place {
        displayName = "TM46 Anti-Tank Mine"; // Name of the item
        model = "\CUP\Weapons\CUP_Weapons_Put\CUP_TM46.p3d"; // Path to your model
        ace_explosives_offset[] = {0, 0, 0}; // Offset of the interaction point from the model in meters on the X,Y,Z axis.
    };

    class ACE_IED_V1_place_CUP: ACE_Explosives_Place {
        displayName = "IED"; // Name of the item
        model = "\CUP\Weapons\CUP_Weapons_Put\CUP_IED_V1.p3d"; // Path to your model
        ace_explosives_offset[] = {0, 0, 0}; // Offset of the interaction point from the model in meters on the X,Y,Z axis.
    };

    class ACE_IED_V2_place_CUP: ACE_IED_V1_place_CUP {
        model = "\CUP\Weapons\CUP_Weapons_Put\CUP_IED_V2.p3d";
    };

    class ACE_IED_V3_place_CUP: ACE_IED_V1_place_CUP {
        model = "\CUP\Weapons\CUP_Weapons_Put\CUP_IED_V3.p3d";
    };

    class ACE_IED_V4_place_CUP: ACE_IED_V1_place_CUP {
        model = "\CUP\Weapons\CUP_Weapons_Put\CUP_IED_V4.p3d";
    };
};
