#include "SHDoorAttachment.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "SHAkDynamicTickComponent.h"
#include "SHInteractionGenericComponent.h"
#include "SHInteractionIconComponent.h"
#include "SHInteractionManagerComponent.h"
#include "SHRaycastDetectableComponent.h"

ASHDoorAttachment::ASHDoorAttachment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractionGeneric = CreateDefaultSubobject<USHInteractionGenericComponent>(TEXT("InteractionGeneric"));
    this->InteractionIcon = CreateDefaultSubobject<USHInteractionIconComponent>(TEXT("InteractionIcon"));
    this->InteractionDetectable = CreateDefaultSubobject<USHRaycastDetectableComponent>(TEXT("InteractionDetectable"));
    this->InteractionDetectableShape = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionDetectableShape"));
    this->AnimSpot = CreateDefaultSubobject<UCapsuleComponent>(TEXT("AnimSpot"));
    this->SHAkComponent = CreateDefaultSubobject<USHAkDynamicTickComponent>(TEXT("SHAkComponent"));
    this->InteractionManager = CreateDefaultSubobject<USHInteractionManagerComponent>(TEXT("InteractionManager"));
    this->InteractingCharacter = NULL;
    this->AnimSpot->SetupAttachment(RootComponent);
    this->InteractionDetectable->SetupAttachment(InteractionGeneric);
    this->InteractionDetectableShape->SetupAttachment(InteractionDetectable);
    this->InteractionGeneric->SetupAttachment(RootComponent);
    this->InteractionIcon->SetupAttachment(InteractionGeneric);
    this->SHAkComponent->SetupAttachment(RootComponent);
}

void ASHDoorAttachment::UnregisterInteractionAnimation(const FPlayAnimationData& AnimToPlay) {
}

void ASHDoorAttachment::RegisterInteractionAnimation(const FPlayAnimationData& AnimToPlay) {
}

void ASHDoorAttachment::PutCharacterOnSpotRequest(float InBlendInTime) {
}

void ASHDoorAttachment::ProcessReceiveDamageEvent(USHCharacterPlayCombatComponent* CombatComp) {
}

void ASHDoorAttachment::ProcessPutCharacterOnSpotFinished(bool WasCompleted) {
}

void ASHDoorAttachment::ProcessMovementSnapFinished(bool WasCompleted) {
}

void ASHDoorAttachment::ProcessInteractionManagerInitialized(USHInteractionManagerComponent* Manager) {
}

void ASHDoorAttachment::ProcessInteracted(USHInteractionGenericComponent* Generic, ASHCharacterPlay* Character) {
}

void ASHDoorAttachment::ProcessActionAnimEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType) {
}

bool ASHDoorAttachment::PlayInteractionAnimation(const FPlayAnimationData& AnimToPlay) {
    return false;
}





bool ASHDoorAttachment::IsProximityCharacterOnCorrectSide() const {
    return false;
}


