#include "SHGameplayMapObstacleComponent.h"
#include "ESHMapObjectTypeEnum.h"

USHGameplayMapObstacleComponent::USHGameplayMapObstacleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MapObjectType = ESHMapObjectTypeEnum::Obstacle;
}


