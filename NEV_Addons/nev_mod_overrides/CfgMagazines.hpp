class CfgMagazines {
	class Default;
	class CA_Magazine;
	class 20Rnd_762x51_Mag;
	class 30Rnd_556x45_Stanag;
	class 30Rnd_9x21_Mag;
	class RH_20Rnd_762x51_AR10: 20Rnd_762x51_Mag {
		displayName = "7.62mm 20Rnd AR10 Mag";
		picture = "\rh_m4\inv\m_ar10.paa";
		model = "\RH_m4\mags\mag_ar10.p3d";
		ammo = "RH_762x51_B_M80A1";
		initSpeed = 820;
	};
	class RH_20Rnd_762x51_M80A1: 20Rnd_762x51_Mag {
		displayName = "7.62mm 20Rnd M110 Mag M80A1";
		picture = "\rh_m4\inv\m_m110.paa";
		model = "\RH_m4\mags\mag_sr25.p3d";
		ammo = "RH_762x51_B_M80A1";
		initSpeed = 784;
	};
	class RH_20Rnd_762x51_Mk316LR: 20Rnd_762x51_Mag {
		displayName = "7.62mm 20Rnd M110 Mag Mk316LR";
		picture = "\rh_m4\inv\m_m110.paa";
		model = "\RH_m4\mags\mag_sr25.p3d";
		ammo = "RH_762x51_B_Mk316LR";
		initSpeed = 784;
	};
	class RH_20Rnd_762x51_Mk319: 20Rnd_762x51_Mag {
		displayName = "7.62mm 20Rnd SR25EC Mag Mk319";
		picture = "\rh_m4\inv\m_m110.paa";
		model = "\RH_m4\mags\mag_sr25.p3d";
		ammo = "RH_762x51_B_Mk319";
		initSpeed = 784;
	};
	class RH_20Rnd_762x51_LFMJSB: 20Rnd_762x51_Mag {
		displayName = "7.62mm 20Rnd M110 Mag LFMJSB";
		picture = "\rh_m4\inv\m_m110.paa";
		model = "\RH_m4\mags\mag_sr25.p3d";
		ammo = "RH_762x51_B_LFMJSB";
		initSpeed = 339.85199;
	};
	class RH_30Rnd_68x43_FMJ: 30Rnd_556x45_Stanag {
		displayName = "6.8x43mm SPC 30rnd STANAG Mag FMJ";
		descriptionShort = "Caliber: 6.8x43 mm FMJ<br/>Rounds: 30<br/>Used in: M4A6/M16A6";
		model = "\RH_m4\mags\mag_m16.p3d";
		ammo = "RH_68x43_B_FMJ";
		mass = 10;
		initSpeed = 810;
	};
	class RH_30Rnd_68x43_Match: 30Rnd_556x45_Stanag {
		displayName = "6.8x43mm SPC 30rnd STANAG Mag Match";
		descriptionShort = "Caliber: 6.8x43 mm Match<br/>Rounds: 30<br/>Used in: M4A6/M16A6";
		model = "\RH_m4\mags\mag_m16.p3d";
		ammo = "RH_68x43_B_Match";
		mass = 10;
		initSpeed = 810;
	};
	class RH_60Rnd_556x45_M855A1: 30Rnd_556x45_Stanag {
		displayName = "5.56mm 60rnd STANAG Mag M855A1";
		picture = "\rh_m4\inv\m_mag60.paa";
		displayNameShort = "M855A1 EPR";
		model = "\RH_m4\mags\mag5_60.p3d";
		ammo = "RH_556x45_B_M855A1";
		count = 60;
		mass = 20;
		initSpeed = 920;
	};
	class RH_60Rnd_556x45_Mk318: 30Rnd_556x45_Stanag {
		displayName = "5.56mm 60rnd STANAG Mag Mk318";
		picture = "\rh_m4\inv\m_mag60.paa";
		displayNameShort = "Mk318";
		model = "\RH_m4\mags\mag5_60.p3d";
		ammo = "RH_556x45_B_Mk318";
		count = 60;
		mass = 20;
		initSpeed = 920;
	};
	class RH_60Rnd_556x45_Mk262: 30Rnd_556x45_Stanag {
		displayName = "5.56mm 60rnd STANAG Mag Mk262";
		picture = "\rh_m4\inv\m_mag60.paa";
		displayNameShort = "Mk262";
		model = "\RH_m4\mags\mag5_60.p3d";
		ammo = "RH_556x45_B_Mk262";
		count = 60;
		mass = 20;
		initSpeed = 930;
	};
	class RH_30Rnd_556x45_M855A1: 30Rnd_556x45_Stanag {
		displayName = "5.56mm 30rnd STANAG Mag M855A1";
		displayNameShort = "M855A1 EPR";
		model = "\RH_m4\mags\mag_m16.p3d";
		ammo = "RH_556x45_B_M855A1";
		initSpeed = 920;
	};
	class RH_30Rnd_556x45_Mk318: 30Rnd_556x45_Stanag {
		displayName = "5.56mm 30rnd STANAG Mag Mk318";
		displayNameShort = "Mk318";
		model = "\RH_m4\mags\mag_m16.p3d";
		ammo = "RH_556x45_B_Mk318";
		initSpeed = 920;
	};
	class RH_30Rnd_556x45_Mk262: 30Rnd_556x45_Stanag {
		displayName = "5.56mm 30rnd STANAG Mag Mk262";
		displayNameShort = "Mk262";
		model = "\RH_m4\mags\mag_m16.p3d";
		ammo = "RH_556x45_B_Mk262";
		initSpeed = 930;
	};
	class RH_20Rnd_556x45_M855A1: 30Rnd_556x45_Stanag {
		displayName = "5.56mm 20rnd STANAG Mag M855A1";
		displayNameShort = "M855A1 EPR";
		picture = "\A3\weapons_f\data\ui\m_20stanag_CA.paa";
		model = "\RH_m4\mags\mag_m16a1.p3d";
		ammo = "RH_556x45_B_M855A1";
		count = 20;
		mass = 6;
		initSpeed = 920;
	};
	class RH_20Rnd_556x45_Mk318: 30Rnd_556x45_Stanag {
		displayName = "5.56mm 20rnd STANAG Mag Mk318";
		displayNameShort = "Mk318";
		picture = "\A3\weapons_f\data\ui\m_20stanag_CA.paa";
		model = "\RH_m4\mags\mag_m16a1.p3d";
		ammo = "RH_556x45_B_Mk318";
		count = 20;
		mass = 6;
		initSpeed = 920;
	};
	class RH_20Rnd_556x45_Mk262: 30Rnd_556x45_Stanag {
		displayName = "5.56mm 20rnd STANAG Mag Mk262";
		displayNameShort = "Mk262";
		picture = "\A3\weapons_f\data\ui\m_20stanag_CA.paa";
		model = "\RH_m4\mags\mag_m16a1.p3d";
		ammo = "RH_556x45_B_Mk262";
		count = 20;
		mass = 6;
		initSpeed = 930;
	};
	class RH_30Rnd_762x35_FMJ: 30Rnd_556x45_Stanag {
		displayName = ".300 AAC Blackout 30rnd STANAG Mag FMJ";
		descriptionShort = "Caliber: .300 AAC FMJ<br/>Rounds: 30<br/>Used in: AAC Honey Badger";
		model = "\RH_m4\mags\mag_hb.p3d";
		ammo = "RH_762x35_B_FMJ";
		initSpeed = 675;
	};
	class RH_30Rnd_762x35_Match: 30Rnd_556x45_Stanag {
		displayName = ".300 AAC Blackout 30rnd STANAG Mag Match";
		descriptionShort = "Caliber: .300 AAC Match<br/>Rounds: 30<br/>Used in: AAC Honey Badger";
		model = "\RH_m4\mags\mag_hb.p3d";
		ammo = "RH_762x35_B_Match";
		initSpeed = 675;
	};
	class RH_30Rnd_762x35_MSB: 30Rnd_556x45_Stanag {
		displayName = ".300 AAC Blackout 30rnd STANAG Mag MSB";
		descriptionShort = "Caliber: .300 AAC MSB<br/>Rounds: 30<br/>Used in: AAC Honey Badger";
		model = "\RH_m4\mags\mag_hb.p3d";
		ammo = "RH_762x35_B_MSB";
		initSpeed = 290;
	};
	class RH_32Rnd_9mm_M822: 30Rnd_9x21_Mag {
		displayName = "9mm AR magazine M822";
		picture = "\rh_m4\inv\m_ar9.paa";
		descriptionShort = "Caliber: 9mm M822<br/>Rounds: 32<br/>Used in: SBR9";
		model = "\RH_m4\mags\mag_9mm.p3d";
		ammo = "RH_9x19_B_M822";
		initSpeed = 370;
	};
	class RH_32Rnd_9mm_HP: 30Rnd_9x21_Mag {
		displayName = "9mm AR magazine HP";
		picture = "\rh_m4\inv\m_ar9.paa";
		descriptionShort = "Caliber: 9mm HP<br/>Rounds: 32&<br/>Used in: SBR9";
		model = "\RH_m4\mags\mag_9mm.p3d";
		ammo = "RH_9x19_B_HP";
		initSpeed = 370;
	};
	class RH_32Rnd_9mm_HPSB: 30Rnd_9x21_Mag {
		displayName = "9mm AR magazine HPSB";
		picture = "\rh_m4\inv\m_ar9.paa";
		descriptionShort = "Caliber: 9mm HPSB<br/>Rounds: 32<br/>Used in: SBR9";
		model = "\RH_m4\mags\mag_9mm.p3d";
		ammo = "RH_9x19_B_HPSB";
		initSpeed = 333;
	};
};