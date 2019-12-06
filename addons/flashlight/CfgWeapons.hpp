class CfgWeapons {
    class ItemCore;
    class InventoryItem_Base_F;
    class InventoryFlashLightItem_Base_F: InventoryItem_Base_F {};
    class acc_flashlight: ItemCore {
        class ItemInfo: InventoryFlashLightItem_Base_F {
            class FlashLight {
                color[] = {180, 160, 130};
                ambient[] = {0.9, 0.81, 0.7};
                intensity = 400;
                size = 1;
                innerAngle = 5;
                outerAngle = 100;
                coneFadeCoef = 8;
                position = "flash dir";
                direction = "flash";
                useFlare = 1;
                flareSize = 1.4;
                flareMaxDistance = 100;
                dayLight = 0;

                class Attenuation {
                    start = 0;
                    constant = 0.5;
                    linear = 0.1;
                    quadratic = 0.2;
                    hardLimitStart = 27;
                    hardLimitEnd = 34;
                };
                
                scale[] = {0};
            };
        };
    };
};