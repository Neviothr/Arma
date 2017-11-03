class CfgAmmo {
	class FlareCore;
	class FlareBase;
	class Flare_82mm_AMOS_White: FlareCore {
		timeToLive = 40;
		brightness = 4000;
		intensity  = 5000000;
		coefGravity = 0.25;
	};
	class F_40mm_White: FlareBase {
		timeToLive = 40;
		brightness = 4000;
		intensity  = 5000000;
		coefGravity = 0.25;
	};
	class F_20mm_White: FlareBase {
		timeToLive = 40;
		brightness = 4000; // 8 (1250:1)
		intensity  = 5000000; // 10000
		coefGravity = 0.25;
	};
	class F_Signal_Green: FlareBase {
		timeToLive = 40;
		brightness = 4000;
		intensity  = 5000000;
		coefGravity = 0.25;
	};
	class SmokeShell;
    class G_40mm_Smoke: SmokeShell {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.3;
    };
};
