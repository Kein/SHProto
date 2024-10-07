#include "SHGameplayMapFocusableComponent.h"
#include "ESHMapObjectTypeEnum.h"

USHGameplayMapFocusableComponent::USHGameplayMapFocusableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->MapObjectType = ESHMapObjectTypeEnum::Puzzle;
    this->FocusableCustomOffset = 0;
    this->bWantAdditionalGameplayMapHintObject = false;
    this->bWasFocusableAddedToMap = false;
    this->bWasHintAddedToMap = false;
}

void USHGameplayMapFocusableComponent::ProcessProximityBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult) {
}

void USHGameplayMapFocusableComponent::ProcessFocusableSolvedEvent(USHFocusableComponent* FocusableComponentPtr) {
}

void USHGameplayMapFocusableComponent::ProcessFocusableShownEvent(USHFocusableComponent* FocusableComponentPtr) {
}


