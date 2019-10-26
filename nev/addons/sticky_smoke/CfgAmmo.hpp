class CfgAmmo {
	class Grenade;
	class GrenadeHand: Grenade {};
	class SmokeShell: GrenadeHand {
		simulation = "shotSmoke";
		deflecting = 0;
		deflectionSlowDown = 0;
	};
};
