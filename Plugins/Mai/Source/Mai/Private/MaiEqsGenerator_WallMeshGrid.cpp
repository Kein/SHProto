#include "MaiEqsGenerator_WallMeshGrid.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvQueryItemType_WallPoint.h"

UMaiEqsGenerator_WallMeshGrid::UMaiEqsGenerator_WallMeshGrid() {
    this->ItemType = UEnvQueryItemType_WallPoint::StaticClass();
    this->_GenerateAround = UEnvQueryContext_Querier::StaticClass();
}


