class CfgVehicles {
    class LandVehicle;
    class Car: LandVehicle {
        UNFLIP_ACTION;
    };
    class Motorcycle: LandVehicle {
        UNFLIP_ACTION;
    };
    class StaticWeapon: LandVehicle {
        UNFLIP_ACTION;
    };
    class Tank: LandVehicle {
        UNFLIP_ACTION;
    };
    class Air;
    class Helicopter: Air {
        UNFLIP_ACTION;
    };
    class Plane: Air {
        UNFLIP_ACTION;
    };
    class Ship;
    class Ship_F: Ship {
        UNFLIP_ACTION;
    };
};
