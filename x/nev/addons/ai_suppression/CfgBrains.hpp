class CfgBrains {
    class DefaultSoldierBrain {
        class Components {
            class AIBrainSuppressionComponent {
                worstDecreaseTime = 0.5;   // in seconds for 0.0 skill
                bestDecreaseTime = 0.5;    // in seconds for 1.0 skill
                causeExplosionWeight = 0;
            };

            class AIBrainAimingErrorComponent {
                worstDecreaseTime = 10; // how long (in seconds) it should take 0.0 skilled soldier to stabilize the aim completely
                bestDecreaseTime = 10;  // how long (in seconds) it should take 1.0 skilled soldier to stabilize the aim completely
                turningInfluence = 1.1; // importance of turning in algorithm, multiplier
            };
        };
    };
};
