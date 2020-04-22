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

    // https://github.com/acemod/ACE3/pull/6029/files#diff-862801d9b09964647e9ad6134b3cab17
    class Man;
    class CAManBase: Man {
        class ACE_Actions {
            class ACE_MainActions {
                class GVAR(Gear) {
                    displayName = "Gear";
                    condition = QUOTE(isNull objectParent _target && {!alive _target || {_target getVariable [ARR_2('ACE_isUnconscious',false)]} || {lifeState _target == 'INCAPACITATED'}});
                    statement = QUOTE(_player action [ARR_2(QUOTE(QUOTE(Gear)),_target)]);
                    icon = "\A3\ui_f\data\igui\cfg\actions\gear_ca.paa";
                };
            };
        };
    };

    // weapons dropped from dead body
    class WeaponHolderSimulated: ThingX {
        class ACE_Actions {
            class ACE_MainActions {
                displayName = "Main Action";
                distance = 3;
                position = QUOTE(_target worldToModel ASLToAGL getPosASL _target);

                class GVAR(Gear) {
                    displayName = "Gear";
                    statement = QUOTE(_player action [ARR_2(QUOTE(QUOTE(Gear)),_target)]);
                    icon = "\A3\ui_f\data\igui\cfg\actions\gear_ca.paa";
                };
            };
        };

        // https://github.com/acemod/ACE3/pull/6029/files#diff-47692e66fccef08a9edfb180394c7556
        ace_dragging_canCarry = 1;
        ace_dragging_carryPosition[] = {0,0.5,1.3};
        ace_dragging_carryDirection = 0;

        // z-position floats from -1.2 to >0
        // it's OK for carrying but odd for dragging
        // needs workaround to drag correctly. Disabled ATM
        ace_dragging_canDrag = 0;
        ace_dragging_dragPosition[] = {0,1,0};
        ace_dragging_dragDirection = 0;
    };

    class ReammoBox;
    // dropped weapons/gear
    class WeaponHolder: ReammoBox {
        class ACE_Actions {
            class ACE_MainActions {
                displayName = "Main Action";
                distance = 3;
                position = QUOTE(_target worldToModel ASLToAGL getPosASL _target);

                class GVAR(Gear) {
                    displayName = "Gear";
                    statement = QUOTE(_player action [ARR_2(QUOTE(QUOTE(Gear)),_target)]);
                    icon = "\A3\ui_f\data\igui\cfg\actions\gear_ca.paa";
                };
            };
        };
    };

    // https://github.com/acemod/ACE3/pull/6029/files#diff-47692e66fccef08a9edfb180394c7556
    ace_dragging_canCarry = 1;
    ace_dragging_carryPosition[] = {0,0.5,1};
    ace_dragging_carryDirection = 0;

    ace_dragging_canDrag = 1;
    ace_dragging_dragPosition[] = {0,1,0};
    ace_dragging_dragDirection = 0;
};
