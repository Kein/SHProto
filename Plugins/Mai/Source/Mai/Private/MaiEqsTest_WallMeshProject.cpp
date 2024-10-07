#include "MaiEqsTest_WallMeshProject.h"

UMaiEqsTest_WallMeshProject::UMaiEqsTest_WallMeshProject() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->ProjectDown = 128.00f;
    this->ProjectUp = 128.00f;
    this->ExtentX = 0.00f;
}


