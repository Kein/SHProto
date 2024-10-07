#include "MaiEqsTest_Trace2.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UMaiEqsTest_Trace2::UMaiEqsTest_Trace2() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->OverrideChannel = false;
    this->TraceCollisionChannel = ECC_WorldStatic;
    this->Context = UEnvQueryContext_Querier::StaticClass();
}


