class CfgVehicles {
    class LandVehicle;
    class Car: LandVehicle {
        class ACE_Actions {
            class ACE_MainActions {
                class GVAR(cargoAction) {
                    displayName = "Transfer Cargo";
                    condition = "true";
                    statement = "";
                    icon = "a3\ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa";
                    insertChildren = QUOTE(_this call DFUNC(addCargoActions));
                };
            };
        };
    };

    class Tank: LandVehicle {
        class ACE_Actions {
            class ACE_MainActions {
                class GVAR(cargoAction) {
                    displayName = "Transfer Cargo";
                    condition = "true";
                    statement = "";
                    icon = "a3\ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa";
                    insertChildren = QUOTE(_this call DFUNC(addCargoActions));
                };
            };
        };
    };

    class Ship;
    class Ship_F: Ship {
        class ACE_Actions {
            class ACE_MainActions {
                class GVAR(cargoAction) {
                    displayName = "Transfer Cargo";
                    condition = "true";
                    statement = "";
                    icon = "a3\ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa";
                    insertChildren = QUOTE(_this call DFUNC(addCargoActions));
                };
            };
        };
    };

    class Air;
    class Helicopter: Air {
        class ACE_Actions {
            class ACE_MainActions {
                class GVAR(cargoAction) {
                    displayName = "Transfer Cargo";
                    condition = "true";
                    statement = "";
                    icon = "a3\ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa";
                    insertChildren = QUOTE(_this call DFUNC(addCargoActions));
                };
            };
        };
    };

    class Plane: Air {
        class ACE_Actions {
            class ACE_MainActions {
                class GVAR(cargoAction) {
                    displayName = "Transfer Cargo";
                    condition = "true";
                    statement = "";
                    icon = "a3\ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa";
                    insertChildren = QUOTE(_this call DFUNC(addCargoActions));
                };
            };
        };
    };

    class ThingX;
    class ReammoBox_F: ThingX {
        class ACE_Actions {
            class ACE_MainActions {
                class GVAR(cargoAction) {
                    displayName = "Transfer Cargo";
                    condition = "true";
                    statement = "";
                    icon = "a3\ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa";
                    insertChildren = QUOTE(_this call DFUNC(addCargoActions));
                };
            };
        };
    };
};
