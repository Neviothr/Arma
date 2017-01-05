// Can be included in other modfolders c_veh_transport when needed

// Parts
#define DEFAULT_TRANSPORT_MAGAZINES ACE_M_MAG(ACE_Rope_TOW_M_5,1); ACE_M_MAG(SmokeShell,2); ACE_M_MAG(SmokeShellGreen,2)

#define TRANSPORT_MAX transportMaxMagazines = 9999; transportMaxWeapons = 9999; transportMaxBackpacks = 9999

// Stretcher for MEDICAL vehicles
#define MEDIC_TRANSPORT_WEAPONS ACE_M_WEP(ACE_Stretcher,2)

// Medic Supplies for vehicles
#define MEDIC_TRANSPORT_MAGAZINES ACE_M_MAG(ACE_Bandage,30); ACE_M_MAG(ACE_LargeBandage,15); ACE_M_MAG(ACE_Morphine,15); ACE_M_MAG(ACE_Epinephrine,15); ACE_M_MAG(ACE_Medkit,5); ACE_M_MAG(ACE_Bodybag,5); ACE_M_MAG(ACE_Tourniquet,5)
// Medic Supplies for MASH & Fieldhospital
#define MEDIC_TRANSPORT_MAGAZINES_MASH ACE_M_MAG(ACE_Bandage,100); ACE_M_MAG(ACE_LargeBandage,50); ACE_M_MAG(ACE_Morphine,50); ACE_M_MAG(ACE_Epinephrine,50); ACE_M_MAG(ACE_Medkit,25); ACE_M_MAG(ACE_Bodybag,10); ACE_M_MAG(ACE_Tourniquet,25)


// TODO: Default Side transport weaps+mags
#define WEST_TRANSPORT_WEAPONS
#define WEST_TRANSPORT_MAGAZINES ACE_M_MAG(HandGrenade_West,2)

#define EAST_TRANSPORT_WEAPONS
#define EAST_TRANSPORT_MAGAZINES ACE_M_MAG(HandGrenade_East,2)

#define ALL_DEFAULTS TRANSPORT_MAX


// TODO: Tanks/Air need special consideration

// Sets

#define ALL_DEFAULT_EMPTY		ALL_DEFAULTS; \
		class TransportWeapons {}; \
		class TransportMagazines {}

#define ALL_DEFAULT		ALL_DEFAULTS; \
		class TransportWeapons {}; \
		class TransportMagazines { \
			DEFAULT_TRANSPORT_MAGAZINES; \
		}

// Stuff for vehicles
#define MEDIC_DEFAULT		ALL_DEFAULTS; \
		class TransportWeapons { \
			MEDIC_TRANSPORT_WEAPONS; \
		}; \
		class TransportMagazines { \
			DEFAULT_TRANSPORT_MAGAZINES; \
			MEDIC_TRANSPORT_MAGAZINES; \
		}

// Stuff for Mash and Field Hospital
#define MEDIC_DEFAULT_STATIC	ALL_DEFAULTS; \
		class TransportWeapons { \
			MEDIC_TRANSPORT_WEAPONS; \
		}; \
		class TransportMagazines { \
			MEDIC_TRANSPORT_MAGAZINES_MASH; \
		}

// No idea what this is for
#define MEDIC_B_DEFAULT		ALL_DEFAULTS; \
		class TransportWeapons { \
			MEDIC_TRANSPORT_WEAPONS; \
		}; \
		class TransportMagazines { \
			MEDIC_TRANSPORT_MAGAZINES; \
		}


#define WEST_DEFAULT		ALL_DEFAULTS; \
		class TransportWeapons {}; \
		class TransportMagazines { \
			DEFAULT_TRANSPORT_MAGAZINES; \
		}

#define EAST_DEFAULT		TRANSPORT_MAX; \
		class TransportWeapons {}; \
		class TransportMagazines { \
			DEFAULT_TRANSPORT_MAGAZINES; \
		}


// Custom

#define WEST_TOW 		ALL_DEFAULTS; \
		class TransportWeapons {}; \
		class TransportMagazines { \
			DEFAULT_TRANSPORT_MAGAZINES; \
			ACE_M_MAG(ACE_TOW_CSWDM,5); \
		}
		
#define WEST_STINGER		ALL_DEFAULTS; \
		class TransportWeapons {}; \
		class TransportMagazines { \
			DEFAULT_TRANSPORT_MAGAZINES; \
			ACE_M_MAG(ACE_Stinger_CSWDM,4); \
		}
/*
#define WEST_STINGER_STATIC		ALL_DEFAULTS; \
		class TransportWeapons {}; \
		class TransportMagazines { \
			DEFAULT_TRANSPORT_MAGAZINES; \
			ACE_M_MAG(ACE_Stinger_CSWDM,2); \
		}
*/		
#define EAST_STRELA 		ALL_DEFAULTS; \
		class TransportWeapons {}; \
		class TransportMagazines { \
			DEFAULT_TRANSPORT_MAGAZINES; \
			ACE_M_MAG(ACE_9M31_CSWDM,2); \
		}
/*
#define EAST_IGLA_STATIC 		ALL_DEFAULTS; \
		class TransportWeapons {}; \
		class TransportMagazines { \
			DEFAULT_TRANSPORT_MAGAZINES; \
			ACE_M_MAG(ACE_9K38_CSWDM,2); \
		}
*/
#define EAST_MALYUTKA		ALL_DEFAULTS; \
		class TransportWeapons {}; \
		class TransportMagazines { \
			DEFAULT_TRANSPORT_MAGAZINES; \
			ACE_M_MAG(ACE_AT3C_CSWDM,4); \
		}

#define EAST_MALYUTKA_P		ALL_DEFAULTS; \
		class TransportWeapons {}; \
		class TransportMagazines { \
			DEFAULT_TRANSPORT_MAGAZINES; \
			ACE_M_MAG(ACE_AT3P_CSWDM,4); \
		}

#define EAST_KONKURS		ALL_DEFAULTS; \
		class TransportWeapons {}; \
		class TransportMagazines { \
			DEFAULT_TRANSPORT_MAGAZINES; \
			ACE_M_MAG(ACE_Konkurs_CSWDM,4); \
		}

#define EAST_KONKURS_M		ALL_DEFAULTS; \
		class TransportWeapons {}; \
		class TransportMagazines { \
			DEFAULT_TRANSPORT_MAGAZINES; \
			ACE_M_MAG(ACE_KonkursM_CSWDM,4); \
		}		
