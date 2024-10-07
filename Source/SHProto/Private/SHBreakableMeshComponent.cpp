#include "SHBreakableMeshComponent.h"

USHBreakableMeshComponent::USHBreakableMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->StartFromIndex = -1;
    this->bHideAfterLastBreakStep = false;
    this->bIsPenetrable = false;
    this->bCanBreakByDamage = true;
    this->bUseDamageTypesWhitelist = false;
}

bool USHBreakableMeshComponent::ManualBreakRequest(const UObject* Requester) {
    return false;
}

bool USHBreakableMeshComponent::IsLastBrokenStep(int32 CheckedIndex) const {
    return false;
}

bool USHBreakableMeshComponent::IsAfterLastBrokenStep(int32 CheckedIndex) const {
    return false;
}

int32 USHBreakableMeshComponent::GetCurrentBrokenIndex() const {
    return 0;
}


