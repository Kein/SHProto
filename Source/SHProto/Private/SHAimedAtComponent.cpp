#include "SHAimedAtComponent.h"

USHAimedAtComponent::USHAimedAtComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsAlloweedToBeShoot = true;
    this->bCanTickWhileNotBeingAimedAt = false;
}

void USHAimedAtComponent::StartBeingAimedAt(AActor* InAimingActor, AActor* InAimedWithActor) {
}

void USHAimedAtComponent::ResetAimedAtDuration() {
}

bool USHAimedAtComponent::IsBeingAimedAt() const {
    return false;
}

bool USHAimedAtComponent::IsAlloweedToBeShoot() const {
    return false;
}

float USHAimedAtComponent::GetBeingAimedAtDuration() const {
    return 0.0f;
}

AActor* USHAimedAtComponent::GetAimingActor() const {
    return NULL;
}

AActor* USHAimedAtComponent::GetAimedWithActor() const {
    return NULL;
}

void USHAimedAtComponent::EndBeingAimedAt(AActor* InAimingActor) {
}


