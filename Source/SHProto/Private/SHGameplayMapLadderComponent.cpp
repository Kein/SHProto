#include "SHGameplayMapLadderComponent.h"
#include "ESHMapObjectTypeEnum.h"

USHGameplayMapLadderComponent::USHGameplayMapLadderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MapObjectType = ESHMapObjectTypeEnum::Ladder;
}

void USHGameplayMapLadderComponent::ProcessProximityBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult) {
}


