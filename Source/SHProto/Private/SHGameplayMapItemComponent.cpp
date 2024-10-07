#include "SHGameplayMapItemComponent.h"
#include "ESHMapObjectTypeEnum.h"

USHGameplayMapItemComponent::USHGameplayMapItemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->MapObjectType = ESHMapObjectTypeEnum::Collectable;
    this->bWantAdditionalGameplayMapHintSignObject = false;
    this->bWasAddedToMap = false;
}

void USHGameplayMapItemComponent::ProcessProximityBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult) {
}

void USHGameplayMapItemComponent::ProcessItemCollected(ASHItem* ItemPtr) {
}


