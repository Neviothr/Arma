class CfgMovesBasic {
    class Actions {
        // jump animation - WEAPON RAISED - RUNNING
        class RifleStandActionsNoAdjust;
        class RifleStandActionsRunF: RifleStandActionsNoAdjust {
            getOver = "AovrPercMrunSrasWrflDf";
        };
        class RifleStandActionsRunFL: RifleStandActionsNoAdjust {
            getOver = "AovrPercMrunSrasWrflDf";
        };
        class RifleStandActionsRunFR: RifleStandActionsNoAdjust {
            getOver = "AovrPercMrunSrasWrflDf";
        };

        // jump animation - WEAPON RAISED - SPRINTING
        class RifleStandEvasiveActionsF: RifleStandActionsNoAdjust {
            getOver = "AovrPercMrunSrasWrflDf";
        };
        class RifleStandEvasiveActionsFL: RifleStandActionsNoAdjust {
            getOver = "AovrPercMrunSrasWrflDf";
        };
        class RifleStandEvasiveActionsFR: RifleStandActionsNoAdjust {
            getOver = "AovrPercMrunSrasWrflDf";
        };

        // jump animation - WEAPON LOWERED - RUNNING
        class RifleLowStandActionsNoAdjust;
        class RifleLowStandActionsRunF: RifleLowStandActionsNoAdjust {
            getOver = "AovrPercMrunSrasWrflDf";
        };
        class RifleLowStandActionsRunFL: RifleLowStandActionsNoAdjust {
            getOver = "AovrPercMrunSrasWrflDf";
        };
        class RifleLowStandActionsRunFR: RifleLowStandActionsNoAdjust {
            getOver = "AovrPercMrunSrasWrflDf";
        };
    };
};

class CfgMovesMaleSdr: CfgMovesBasic {
    class StandBase;
    class States {
        // jumping. don't force awkward freelook in mid air.
        class AovrPercMstpSrasWrflDf;
        class AovrPercMrunSrasWrflDf: AovrPercMstpSrasWrflDf {
            forceAim = 0;
        };

        // replace link of vault with jump animation
        class AmovPercMstpSrasWrflDnon;
        class AmovPercMrunSrasWrflDf: AmovPercMstpSrasWrflDnon {
            InterpolateTo[] = {
                "AovrPercMrunSrasWrflDf", 0.22,
                "AmovPercMrunSlowWrflDf", 0.025,
                "AmovPercMwlkSrasWrflDf", 0.025,
                "AmovPknlMrunSrasWrflDf", 0.03,
                "AmovPercMrunSlowWrflDf_AmovPpneMstpSrasWrflDnon", 0.02,
                "AmovPercMevaSrasWrflDf", 0.025,
                "Unconscious", 0.01,
                "AmovPercMtacSrasWrflDf", 0.02,
                "AmovPercMrunSrasWrflDfl", 0.02,
                "AmovPercMrunSrasWrflDfl_ldst", 0.02,
                "AmovPercMrunSrasWrflDfr", 0.02,
                "AmovPercMrunSrasWrflDfr_ldst", 0.02,
                "AmovPercMstpSrasWrflDnon", 0.02,
                "AmovPercMrunSrasWrflDl", 0.02,
                "AmovPercMrunSrasWrflDbl", 0.02,
                "AmovPercMrunSrasWrflDb", 0.02,
                "AmovPercMrunSrasWrflDbr", 0.02,
                "AmovPercMrunSrasWrflDr", 0.02,
                "AmovPknlMstpSlowWrflDnon_relax", 0.1,
                "AmovPercMrunSrasWrflDf_ldst", 0.02,
                "AmovPercMrunSrasWrflDf", 0.02
            };
        };
    };
};
