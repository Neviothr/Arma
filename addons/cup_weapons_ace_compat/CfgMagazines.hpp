// Extracted and edited from:
// https://steamcommunity.com/sharedfiles/filedetails/?id=549676314
class CfgMagazines
{

    /* **************************************************************************
     * 			ACE Explosives
     * ************************************************************************** */
    class CA_Magazine;
    class CUP_TimeBomb_M: CA_Magazine
    {
        scope = 1;
        ace_explosives_placeable = 1;  // Can be placed
        useAction = 0;  // Disable the vanilla interaction
        ace_explosives_SetupObject = "ACE_PipeBomb_place_CUP";  // The object placed before the explosive is armed
        class ACE_Triggers {  // Trigger configurations
            SupportedTriggers[] = {"Timer", "Command", "MK16_Transmitter", "DeadmanSwitch", "Cellphone"};  // Triggers that can be used
            class Timer {
                FuseTime = 0.5;  // Time for the fuse to burn
            };
            class Command {
                FuseTime = 0.5;
            };
            class MK16_Transmitter: Command {};
            class DeadmanSwitch: Command {};
        };
    };
    class CUP_Mine_M: CUP_TimeBomb_M
    {
        ace_explosives_placeable = 1;  // Can be placed
        useAction = 0;  // Disable the vanilla interaction
        ace_explosives_SetupObject = "ACE_Mine_place_CUP";  // The object placed before the explosive is armed
        class ACE_Triggers {  // Trigger configurations
            SupportedTriggers[] = {"PressurePlate"};  // Triggers that can be used
            class PressurePlate {
                digDistance = 0.08;
            };
        };
    };
    class CUP_MineE_M: CUP_TimeBomb_M
    {
        ace_explosives_placeable = 1;  // Can be placed
        useAction = 0;  // Disable the vanilla interaction
        ace_explosives_SetupObject = "ACE_MineE_place_CUP";  // The object placed before the explosive is armed
        class ACE_Triggers {  // Trigger configurations
            SupportedTriggers[] = {"PressurePlate"};  // Triggers that can be used
            class PressurePlate {
                digDistance = 0.06;
            };
        };
    };

    class CUP_IED_V1_M: CUP_Mine_M
    {
        ace_explosives_placeable = 1;  // Can be placed
        useAction = 0;  // Disable the vanilla interaction
        ace_explosives_SetupObject = "ACE_IED_V1_place_CUP";  // The object placed before the explosive is armed
        class ACE_Triggers {  // Trigger configurations
            SupportedTriggers[] = {"Timer", "Command", "MK16_Transmitter", "DeadmanSwitch", "Cellphone", "PressurePlate"};  // Triggers that can be used
        };
    };
    class CUP_IED_V2_M: CUP_IED_V1_M
    {
        useAction = 0;
        ace_explosives_SetupObject = "ACE_IED_V2_place_CUP";
    };
    class CUP_IED_V3_M: CUP_IED_V1_M
    {
        useAction = 0;
        ace_explosives_SetupObject = "ACE_IED_V3_place_CUP";
        class ACE_Triggers {  // Trigger configurations
            SupportedTriggers[] = {"Timer", "Command", "MK16_Transmitter", "DeadmanSwitch", "Cellphone", "PressurePlate"};  // Triggers that can be used
            class Timer {
                digDistance = 0.06;
            };
            class Command {
                digDistance = 0.06;
            };
            class MK16_Transmitter {
                digDistance = 0.06;
            };
            class DeadmanSwitch {
                digDistance = 0.06;
            };
            class Cellphone {
                digDistance = 0.06;
            };
            class PressurePlate {
                digDistance = 0.06;
            };
        };
    };
    class CUP_IED_V4_M: CUP_IED_V1_M
    {
        useAction = 0;
        ace_explosives_SetupObject = "ACE_IED_V4_place_CUP";
        class ACE_Triggers {  // Trigger configurations
            SupportedTriggers[] = {"Timer", "Command", "MK16_Transmitter", "DeadmanSwitch", "Cellphone", "PressurePlate"};  // Triggers that can be used
            class Timer {
                digDistance = 0.08;
            };
            class Command {
                digDistance = 0.08;
            };
            class MK16_Transmitter {
                digDistance = 0.08;
            };
            class DeadmanSwitch {
                digDistance = 0.08;
            };
            class Cellphone {
                digDistance = 0.08;
            };
            class PressurePlate {
                digDistance = 0.08;
            };
        };
    };
};
