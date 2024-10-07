#include "EnvQueryTest_MeatHealth.h"

UEnvQueryTest_MeatHealth::UEnvQueryTest_MeatHealth() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->TargetChunkCount = 0;
}


