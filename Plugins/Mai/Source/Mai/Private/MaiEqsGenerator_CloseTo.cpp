#include "MaiEqsGenerator_CloseTo.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"

UMaiEqsGenerator_CloseTo::UMaiEqsGenerator_CloseTo() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->_SearchCenter = UEnvQueryContext_Querier::StaticClass();
}


