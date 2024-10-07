#include "SHGameplayMapObjectComponent.h"

USHGameplayMapObjectComponent::USHGameplayMapObjectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MapObjectType = ESHMapObjectTypeEnum::None;
}

void USHGameplayMapObjectComponent::SendObjectDataToGameplayMap(int32 DataValue) const {
}

void USHGameplayMapObjectComponent::SendDynamicObjectDataToGameplayMap(FVector WorldLoc, int32 DataValue) const {
}


