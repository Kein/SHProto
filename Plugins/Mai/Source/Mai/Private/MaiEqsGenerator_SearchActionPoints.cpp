#include "MaiEqsGenerator_SearchActionPoints.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"
#include "MaiActionPoint.h"

UMaiEqsGenerator_SearchActionPoints::UMaiEqsGenerator_SearchActionPoints() {
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
    this->_SearchCenter = UEnvQueryContext_Querier::StaticClass();
    this->_PointClass = AMaiActionPoint::StaticClass();
    this->_CheckWeight = true;
    this->_CheckConditions = true;
}


