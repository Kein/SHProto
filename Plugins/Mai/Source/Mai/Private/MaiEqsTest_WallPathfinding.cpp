#include "MaiEqsTest_WallPathfinding.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UMaiEqsTest_WallPathfinding::UMaiEqsTest_WallPathfinding() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->_TestMode = EMaiEnvTestPathfinding::PathExist;
    this->_Context = UEnvQueryContext_Querier::StaticClass();
    this->_StraightPath = false;
    this->_FilterClass = NULL;
}


