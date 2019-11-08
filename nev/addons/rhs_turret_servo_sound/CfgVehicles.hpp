class CfgVehicles {
    class LandVehicle;
    class Tank: LandVehicle {
        class NewTurret;
    };

    class Tank_F: Tank {
        class Turrets {
            class MainTurret: NewTurret {
                class Turrets {
                    class CommanderOptics;
                };
            };
        };
    };

    class rhs_tank_base: Tank_F {
        SERVO_SOUND
    };

    class rhs_t80b: rhs_tank_base {
        SERVO_SOUND
    };

    class rhs_t80bk: rhs_t80b {
        SERVO_SOUND
    };

    class rhs_t80bv: rhs_t80b {
        SERVO_SOUND
    };

    class rhs_t80bvk: rhs_t80bv {
        SERVO_SOUND
    };

    class rhs_t80: rhs_t80b {
        SERVO_SOUND
    };

    class rhs_t80a: rhs_t80bv {
        SERVO_SOUND
    };

    class rhs_t80u: rhs_t80a {
        SERVO_SOUND
    };

    class rhs_t80uk: rhs_t80u {
        SERVO_SOUND
    };

    class rhs_t80u45m: rhs_t80u {
        SERVO_SOUND
    };

    class rhs_t80ue1: rhs_t80a {
        SERVO_SOUND
    };

    class rhs_t80um: rhs_t80u {
        SERVO_SOUND
    };

    class rhs_a3t72tank_base: Tank_F {
        SERVO_SOUND
    };

    class rhs_t72ba_tv: rhs_a3t72tank_base {
        SERVO_SOUND
    };

    class rhs_t72bb_tv: rhs_a3t72tank_base {
        SERVO_SOUND
    };

    class rhs_t72bc_tv: rhs_a3t72tank_base {
        SERVO_SOUND
    };

    class rhs_t72bd_tv: rhs_a3t72tank_base {
        SERVO_SOUND
    };

    class rhs_t90_tv: rhs_t72bd_tv {
        SERVO_SOUND
    };

    class rhs_t90a_tv: rhs_t90_tv {
        SERVO_SOUND
    };

    class rhs_a3spruttank_base: Tank_F {
        SERVO_SOUND
    };

    class rhs_sprut_vdv: rhs_a3spruttank_base {
        SERVO_SOUND
    };

    class MBT_01_base_F: Tank_F {};
    class rhsusf_m1a1tank_base: MBT_01_base_F {
        SERVO_SOUND
    };

    class rhsusf_m1a1aimwd_usarmy: rhsusf_m1a1tank_base {
        SERVO_SOUND
    };

    class rhsusf_m1a1aimd_usarmy: rhsusf_m1a1tank_base {
        SERVO_SOUND
    };

    class rhsusf_m1a1aim_tuski_wd: rhsusf_m1a1tank_base {
        SERVO_SOUND
    };

    class rhsusf_m1a1aim_tuski_d: rhsusf_m1a1aim_tuski_wd {
        SERVO_SOUND
    };

    class rhsusf_m1a1fep_d: rhsusf_m1a1tank_base {
        SERVO_SOUND
    };

    class rhsusf_m1a1fep_wd: rhsusf_m1a1fep_d {
        SERVO_SOUND
    };

    class rhsusf_m1a1fep_od: rhsusf_m1a1fep_wd {
        SERVO_SOUND
    };

    class rhsusf_m1a2tank_base: rhsusf_m1a1tank_base {
        SERVO_SOUND
    };

    class rhsusf_m1a2sep1d_usarmy: rhsusf_m1a2tank_base {
        SERVO_SOUND
    };

    class rhsusf_m1a2sep1wd_usarmy: rhsusf_m1a2tank_base {
        SERVO_SOUND
    };

    class rhsusf_m1a2sep1tuskid_usarmy: rhsusf_m1a2tank_base {
        SERVO_SOUND
    };

    class rhsusf_m1a2sep1tuskiwd_usarmy: rhsusf_m1a2sep1tuskid_usarmy {
        SERVO_SOUND
    };

    class rhsusf_m1a2sep1tuskiiwd_usarmy: rhsusf_m1a2sep1tuskid_usarmy {
        SERVO_SOUND
    };

    class rhsusf_m1a2sep1tuskiid_usarmy: rhsusf_m1a2sep1tuskiiwd_usarmy {
        SERVO_SOUND
    };
};
