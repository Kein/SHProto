#include "InteriorExteriorManager.h"

UInteriorExteriorManager::UInteriorExteriorManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UInteriorExteriorManager* UInteriorExteriorManager::getInstance(UObject* WorldContext) {
    return NULL;
}

ESHInteriorExteriorStateEnum UInteriorExteriorManager::CalcInteriorExteriorState(AActor* Actor) const {
    return ESHInteriorExteriorStateEnum::Exterior;
}


