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
		vegetation0[] = {"A3\Sounds_F\characters\movements\bush_001",magicVolumeValue,1,60};
		vegetation01[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley01",magicVolumeValue,1,60};
		vegetation02[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley02",magicVolumeValue,1,60};
		vegetation03[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley03",magicVolumeValue,1,60};
		vegetation04[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley04",magicVolumeValue,1,60};
		vegetation05[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley05",magicVolumeValue,1,60};
		vegetation06[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley06",magicVolumeValue,1,60};
		vegetation07[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley07",magicVolumeValue,1,60};
		vegetation08[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley08",magicVolumeValue,1,60};
		vegetation09[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley09",magicVolumeValue,1,60};
		vegetation1[] = {"A3\Sounds_F\characters\movements\bush_002",magicVolumeValue,1,60};
		vegetation10[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley10",magicVolumeValue,1,60};
		vegetation11[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley11",magicVolumeValue,1,60};
		vegetation12[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley12",magicVolumeValue,1,60};
		vegetation13[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley13",magicVolumeValue,1,60};
		vegetation14[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley14",magicVolumeValue,1,60};
		vegetation15[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley15",magicVolumeValue,1,60};
		vegetation16[] = {"A3\Sounds_F_Exp\characters\foley\vegetation\vegetation_foley16",magicVolumeValue,1,60};
		vegetation2[] = {"A3\Sounds_F\characters\movements\bush_003",magicVolumeValue,1,60};
		vegetation3[] = {"A3\Sounds_F\characters\movements\bush_004",magicVolumeValue,1,60};
		vegetation4[] = {"A3\Sounds_F\characters\movements\bush_005",magicVolumeValue,1,60};
		vegetation5[] = {"A3\Sounds_F\characters\movements\bush_006",magicVolumeValue,1,60};
		vegetation6[] = {"A3\Sounds_F\characters\movements\bush_007",magicVolumeValue,1,60};
		vegetation7[] = {"A3\Sounds_F\characters\movements\bush_008",magicVolumeValue,1,60};
		vegetation8[] = {"A3\Sounds_F\characters\movements\bush_009",magicVolumeValue,1,60};
		vegetation9[] = {"A3\Sounds_F\characters\movements\bush_010",magicVolumeValue,1,60};
		vegetationSounds[] = {"vegetation01",magicVolumeValue,"vegetation02",magicVolumeValue,"vegetation03",magicVolumeValue,"vegetation04",magicVolumeValue,"vegetation05",magicVolumeValue,"vegetation06",magicVolumeValue,"vegetation07",magicVolumeValue,"vegetation08",magicVolumeValue,"vegetation09",magicVolumeValue,"vegetation10",magicVolumeValue,"vegetation11",magicVolumeValue,"vegetation12",magicVolumeValue,"vegetation13",magicVolumeValue,"vegetation14",magicVolumeValue,"vegetation15",magicVolumeValue,"vegetation16",magicVolumeValue};

		class SoundGear {
			primary[] = {
				{"walk",{"A3\sounds_f\characters\movements\soldier_gear_walk_01",magicVolumeValue,1,30}},
				{"walk",{"A3\sounds_f\characters\movements\soldier_gear_walk_02",magicVolumeValue,1,30}},
				{"walk",{"A3\sounds_f\characters\movements\soldier_gear_walk_03",magicVolumeValue,1,30}},
				{"walk",{"A3\sounds_f\characters\movements\soldier_gear_walk_04",magicVolumeValue,1,30}},
				{"walk",{"A3\sounds_f\characters\movements\soldier_gear_walk_05",magicVolumeValue,1,30}},
				{"walk",{"A3\sounds_f\characters\movements\soldier_gear_walk_06",magicVolumeValue,1,30}},
				{"walk",{"A3\sounds_f\characters\movements\soldier_gear_walk_07",magicVolumeValue,1,30}},
				{"walk",{"A3\sounds_f\characters\movements\soldier_gear_walk_08",magicVolumeValue,1,30}},
				{"tactical",{"A3\sounds_f\characters\movements\soldier_gear_run_01",magicVolumeValue,1,35}},
				{"tactical",{"A3\sounds_f\characters\movements\soldier_gear_run_02",magicVolumeValue,1,35}},
				{"tactical",{"A3\sounds_f\characters\movements\soldier_gear_run_03",magicVolumeValue,1,35}},
				{"tactical",{"A3\sounds_f\characters\movements\soldier_gear_run_04",magicVolumeValue,1,35}},
				{"tactical",{"A3\sounds_f\characters\movements\soldier_gear_run_05",magicVolumeValue,1,35}},
				{"tactical",{"A3\sounds_f\characters\movements\soldier_gear_run_06",magicVolumeValue,1,35}},
				{"tactical",{"A3\sounds_f\characters\movements\soldier_gear_run_07",magicVolumeValue,1,35}},
				{"tactical",{"A3\sounds_f\characters\movements\soldier_gear_run_08",magicVolumeValue,1,35}},
				{"run",{"A3\sounds_f\characters\movements\soldier_gear_run_01",magicVolumeValue,1,35}},
				{"run",{"A3\sounds_f\characters\movements\soldier_gear_run_02",magicVolumeValue,1,35}},
				{"run",{"A3\sounds_f\characters\movements\soldier_gear_run_03",magicVolumeValue,1,35}},
				{"run",{"A3\sounds_f\characters\movements\soldier_gear_run_04",magicVolumeValue,1,35}},
				{"run",{"A3\sounds_f\characters\movements\soldier_gear_run_05",magicVolumeValue,1,35}},
				{"run",{"A3\sounds_f\characters\movements\soldier_gear_run_06",magicVolumeValue,1,35}},
				{"run",{"A3\sounds_f\characters\movements\soldier_gear_run_07",magicVolumeValue,1,35}},
				{"run",{"A3\sounds_f\characters\movements\soldier_gear_run_08",magicVolumeValue,1,35}},
				{"sprint",{"A3\sounds_f\characters\movements\soldier_gear_sprint_01",magicVolumeValue,1,45}},
				{"sprint",{"A3\sounds_f\characters\movements\soldier_gear_sprint_02",magicVolumeValue,1,45}},
				{"sprint",{"A3\sounds_f\characters\movements\soldier_gear_sprint_03",magicVolumeValue,1,45}},
				{"sprint",{"A3\sounds_f\characters\movements\soldier_gear_sprint_04",magicVolumeValue,1,45}},
				{"sprint",{"A3\sounds_f\characters\movements\soldier_gear_sprint_05",magicVolumeValue,1,45}},
				{"sprint",{"A3\sounds_f\characters\movements\soldier_gear_sprint_06",magicVolumeValue,1,45}},
				{"sprint",{"A3\sounds_f\characters\movements\soldier_gear_sprint_07",magicVolumeValue,1,45}},
				{"sprint",{"A3\sounds_f\characters\movements\soldier_gear_sprint_08",magicVolumeValue,1,45}}
			};

			secondary[] = {
				{"run",{"A3\sounds_F\dummysound",1,1,10}},
				{"run",{"A3\sounds_F\dummysound",1,1,10}},
				{"sprint",{"A3\sounds_F\dummysound",1,1,10}}
			};
		};
	};
};