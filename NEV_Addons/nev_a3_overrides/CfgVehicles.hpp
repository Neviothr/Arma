class CfgVehicles {
	class Air;
	class Helicopter_Base_H;
	class Plane_Base_F;
	class Land;
	class Man: Land {};
	class Helicopter: Air {
		explosionShielding = 0.5;
		epeImpulseDamageCoef = 0;
		crewCrashProtection = 1;
	};
	class Plane: Air {
		explosionShielding = 0.5;
		epeImpulseDamageCoef = 0;
		crewCrashProtection = 1;
	};
	class Heli_Light_01_base_F: Helicopter_Base_H {
		epeImpulseDamageCoef = 0;
	};
	class Plane_CAS_01_base_F: Plane_Base_F {
		epeImpulseDamageCoef = 0;
	};
	class Plane_CAS_02_base_F: Plane_Base_F {
		epeImpulseDamageCoef = 0;
	};
	class Plane_Fighter_03_base_F: Plane_Base_F {
		epeImpulseDamageCoef = 0;
	};
	class CAManBase: Man {
		vegetation0[] = {"A3\Sounds_F\characters\movements\bush_001", 0.251189 * VEGETATION_MULTIPLIER, 1, 60};
		vegetation01[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley01", 0.446684 * VEGETATION_MULTIPLIER, 1, 60};
		vegetation02[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley02", 0.446684 * VEGETATION_MULTIPLIER, 1, 60};
		vegetation03[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley03", 0.446684 * VEGETATION_MULTIPLIER, 1, 60};
		vegetation04[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley04", 0.446684 * VEGETATION_MULTIPLIER, 1, 60};
		vegetation05[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley05", 0.446684 * VEGETATION_MULTIPLIER, 1, 60};
		vegetation06[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley06", 0.446684 * VEGETATION_MULTIPLIER, 1, 60};
		vegetation07[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley07", 0.446684 * VEGETATION_MULTIPLIER, 1, 60};
		vegetation08[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley08", 0.446684 * VEGETATION_MULTIPLIER, 1, 60};
		vegetation09[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley09", 0.446684 * VEGETATION_MULTIPLIER, 1, 60};
		vegetation1[] = {"A3\Sounds_F\characters\movements\bush_002", 0.316228 * VEGETATION_MULTIPLIER, 1, 60};
		vegetation10[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley10", 0.446684 * VEGETATION_MULTIPLIER, 1, 60};
		vegetation11[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley11", 0.446684 * VEGETATION_MULTIPLIER, 1, 60};
		vegetation12[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley12", 0.446684 * VEGETATION_MULTIPLIER, 1, 60};
		vegetation13[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley13", 0.446684 * VEGETATION_MULTIPLIER, 1, 60};
		vegetation14[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley14", 0.446684 * VEGETATION_MULTIPLIER, 1, 60};
		vegetation15[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley15", 0.446684 * VEGETATION_MULTIPLIER, 1, 60};
		vegetation16[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley16", 0.446684 * VEGETATION_MULTIPLIER, 1, 60};
		vegetation2[] = {"A3\Sounds_F\characters\movements\bush_003", 0.316228 * VEGETATION_MULTIPLIER, 1, 60};
		vegetation3[] = {"A3\Sounds_F\characters\movements\bush_004", 0.316228 * VEGETATION_MULTIPLIER, 1, 60};
		vegetation4[] = {"A3\Sounds_F\characters\movements\bush_005", 0.316228 * VEGETATION_MULTIPLIER, 1, 60};
		vegetation5[] = {"A3\Sounds_F\characters\movements\bush_006", 0.316228 * VEGETATION_MULTIPLIER, 1, 60};
		vegetation6[] = {"A3\Sounds_F\characters\movements\bush_007", 0.316228 * VEGETATION_MULTIPLIER, 1, 60};
		vegetation7[] = {"A3\Sounds_F\characters\movements\bush_008", 0.316228 * VEGETATION_MULTIPLIER, 1, 60};
		vegetation8[] = {"A3\Sounds_F\characters\movements\bush_009", 0.316228 * VEGETATION_MULTIPLIER, 1, 60};
		vegetation9[] = {"A3\Sounds_F\characters\movements\bush_010", 0.316228 * VEGETATION_MULTIPLIER, 1, 60};
		vegetationSounds[] = {"vegetation01", 0.0625 * VEGETATION_MULTIPLIER, "vegetation02", 0.0625 * VEGETATION_MULTIPLIER, "vegetation03", 0.0625 * VEGETATION_MULTIPLIER, "vegetation04", 0.0625 * VEGETATION_MULTIPLIER, "vegetation05", 0.0625 * VEGETATION_MULTIPLIER, "vegetation06", 0.0625 * VEGETATION_MULTIPLIER, "vegetation07", 0.0625 * VEGETATION_MULTIPLIER, "vegetation08", 0.0625 * VEGETATION_MULTIPLIER, "vegetation09", 0.0625 * VEGETATION_MULTIPLIER, "vegetation10", 0.0625 * VEGETATION_MULTIPLIER, "vegetation11", 0.0625 * VEGETATION_MULTIPLIER, "vegetation12", 0.0625 * VEGETATION_MULTIPLIER, "vegetation13", 0.0625 * VEGETATION_MULTIPLIER, "vegetation14", 0.0625 * VEGETATION_MULTIPLIER, "vegetation15", 0.0625 * VEGETATION_MULTIPLIER, "vegetation16", 0.0625 * VEGETATION_MULTIPLIER};

		class SoundGear {
			primary[] = {
				{"walk", {"A3\sounds_f\characters\movements\soldier_gear_walk_01", 0.0398107 * GEAR_MULTIPLIER, 1, 30}},
				{"walk", {"A3\sounds_f\characters\movements\soldier_gear_walk_02", 0.0398107 * GEAR_MULTIPLIER, 1, 30}},
				{"walk", {"A3\sounds_f\characters\movements\soldier_gear_walk_03", 0.0398107 * GEAR_MULTIPLIER, 1, 30}},
				{"walk", {"A3\sounds_f\characters\movements\soldier_gear_walk_04", 0.0398107 * GEAR_MULTIPLIER, 1, 30}},
				{"walk", {"A3\sounds_f\characters\movements\soldier_gear_walk_05", 0.0398107 * GEAR_MULTIPLIER, 1, 30}},
				{"walk", {"A3\sounds_f\characters\movements\soldier_gear_walk_06", 0.0398107 * GEAR_MULTIPLIER, 1, 30}},
				{"walk", {"A3\sounds_f\characters\movements\soldier_gear_walk_07", 0.0398107 * GEAR_MULTIPLIER, 1, 30}},
				{"walk", {"A3\sounds_f\characters\movements\soldier_gear_walk_08", 0.0398107 * GEAR_MULTIPLIER, 1, 30}},
				{"tactical", {"A3\sounds_f\characters\movements\soldier_gear_run_01", 0.0446684 * GEAR_MULTIPLIER, 1, 35}},
				{"tactical", {"A3\sounds_f\characters\movements\soldier_gear_run_02", 0.0446684 * GEAR_MULTIPLIER, 1, 35}},
				{"tactical", {"A3\sounds_f\characters\movements\soldier_gear_run_03", 0.0446684 * GEAR_MULTIPLIER, 1, 35}},
				{"tactical", {"A3\sounds_f\characters\movements\soldier_gear_run_04", 0.0446684 * GEAR_MULTIPLIER, 1, 35}},
				{"tactical", {"A3\sounds_f\characters\movements\soldier_gear_run_05", 0.0446684 * GEAR_MULTIPLIER, 1, 35}},
				{"tactical", {"A3\sounds_f\characters\movements\soldier_gear_run_06", 0.0446684 * GEAR_MULTIPLIER, 1, 35}},
				{"tactical", {"A3\sounds_f\characters\movements\soldier_gear_run_07", 0.0446684 * GEAR_MULTIPLIER, 1, 35}},
				{"tactical", {"A3\sounds_f\characters\movements\soldier_gear_run_08", 0.0446684 * GEAR_MULTIPLIER, 1, 35}},
				{"run", {"A3\sounds_f\characters\movements\soldier_gear_run_01", 0.0501187 * GEAR_MULTIPLIER, 1, 35}},
				{"run", {"A3\sounds_f\characters\movements\soldier_gear_run_02", 0.0501187 * GEAR_MULTIPLIER, 1, 35}},
				{"run", {"A3\sounds_f\characters\movements\soldier_gear_run_03", 0.0501187 * GEAR_MULTIPLIER, 1, 35}},
				{"run", {"A3\sounds_f\characters\movements\soldier_gear_run_04", 0.0501187 * GEAR_MULTIPLIER, 1, 35}},
				{"run", {"A3\sounds_f\characters\movements\soldier_gear_run_05", 0.0501187 * GEAR_MULTIPLIER, 1, 35}},
				{"run", {"A3\sounds_f\characters\movements\soldier_gear_run_06", 0.0501187 * GEAR_MULTIPLIER, 1, 35}},
				{"run", {"A3\sounds_f\characters\movements\soldier_gear_run_07", 0.0501187 * GEAR_MULTIPLIER, 1, 35}},
				{"run", {"A3\sounds_f\characters\movements\soldier_gear_run_08", 0.0501187 * GEAR_MULTIPLIER, 1, 35}},
				{"sprint", {"A3\sounds_f\characters\movements\soldier_gear_sprint_01", 0.0707946 * GEAR_MULTIPLIER, 1, 45}},
				{"sprint", {"A3\sounds_f\characters\movements\soldier_gear_sprint_02", 0.0707946 * GEAR_MULTIPLIER, 1, 45}},
				{"sprint", {"A3\sounds_f\characters\movements\soldier_gear_sprint_03", 0.0707946 * GEAR_MULTIPLIER, 1, 45}},
				{"sprint", {"A3\sounds_f\characters\movements\soldier_gear_sprint_04", 0.0707946 * GEAR_MULTIPLIER, 1, 45}},
				{"sprint", {"A3\sounds_f\characters\movements\soldier_gear_sprint_05", 0.0707946 * GEAR_MULTIPLIER, 1, 45}},
				{"sprint", {"A3\sounds_f\characters\movements\soldier_gear_sprint_06", 0.0707946 * GEAR_MULTIPLIER, 1, 45}},
				{"sprint", {"A3\sounds_f\characters\movements\soldier_gear_sprint_07", 0.0707946 * GEAR_MULTIPLIER, 1, 45}},
				{"sprint", {"A3\sounds_f\characters\movements\soldier_gear_sprint_08", 0.0707946 * GEAR_MULTIPLIER, 1, 45}}
			};
		};
	};
};