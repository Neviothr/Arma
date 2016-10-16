class CfgPatches
{
	class nev_uglBounce
	{
        name = "UGL Round Bounce Reducer";
        author = "Neviothr";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_Weapons_F"};
	};
};

class CfgAmmo {
    class SmokeShell;
    class G_40mm_Smoke : SmokeShell {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.3;
    };
};
