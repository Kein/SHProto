#include "SHGameplayMapSavePointComponent.h"
#include "ESHMapObjectTypeEnum.h"

USHGameplayMapSavePointComponent::USHGameplayMapSavePointComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MapObjectType = ESHMapObjectTypeEnum::SavePoint;
}


