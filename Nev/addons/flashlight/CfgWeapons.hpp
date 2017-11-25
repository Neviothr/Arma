class CfgWeapons {
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryFlashLightItem_Base_F: InventoryItem_Base_F {};
	class acc_flashlight: ItemCore {
		class ItemInfo: InventoryFlashLightItem_Base_F {
			class FlashLight {
				color[] = {100, 150, 180}; // Colour of the light
				ambient[] = {180, 225, 270}; // I can't remember
				intensity = 100; // Brightness intensity
				size = 1;
				innerAngle = 40;
				outerAngle = 120;
				coneFadeCoef = 10;
				position = "flash dir";
				direction = "flash";
				useFlare = 1;
				flareSize = 1.4;
				flareMaxDistance = 100;
				dayLight = 1;
				class Attenuation {
					start = 0.25;
					constant = 0;
					linear = 0;
					quadratic = 1;
					hardLimitStart = 250;
					hardLimitEnd = 350;
				};
				scale[] = {0};
			};
		};
	};
};