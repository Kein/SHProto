#include "SHCharacterLookAtLogicComponent.h"

USHCharacterLookAtLogicComponent::USHCharacterLookAtLogicComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CharacterLookAtTypesPriorities.AddDefaulted(2);
    this->DefaultLookAtTargetScoreFunctionClass = NULL;
    this->DefaultLookAtTargetScoreFunction = NULL;
}

void USHCharacterLookAtLogicComponent::StopLookAtComponent(USceneComponent* TargetComponent, float BlendOutSpeed) {
}

void USHCharacterLookAtLogicComponent::StopLookAtActor(AActor* TargetActor, float BlendOutSpeed) {
}

void USHCharacterLookAtLogicComponent::ResetLookAtLogic(float BlendOutSpeed) {
}

void USHCharacterLookAtLogicComponent::LookAtComponent(USceneComponent* TargetComponent, TSoftClassPtr<USHLookAtTypeID> LookAtTypeID, float BlendSpeed) {
}

void USHCharacterLookAtLogicComponent::LookAtActor(AActor* TargetActor, TSoftClassPtr<USHLookAtTypeID> LookAtTypeID, float BlendSpeed) {
}

USHLookAtTargetProvider* USHCharacterLookAtLogicComponent::GetLookAtTargetProvider(const TSoftClassPtr<USHLookAtTypeID>& LookAtTypeID) const {
    return NULL;
}

USceneComponent* USHCharacterLookAtLogicComponent::GetCurrentLookAtTarget() const {
    return NULL;
}


