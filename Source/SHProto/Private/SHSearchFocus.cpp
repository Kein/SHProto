#include "SHSearchFocus.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "SHCineCameraComponent.h"
#include "SHFocusableComponent.h"
#include "SHGameplayMapFocusableComponent.h"
#include "SHInteractionGenericComponent.h"
#include "SHInteractionIconComponent.h"
#include "SHInteractionManagerComponent.h"
#include "SHRaycastDetectableComponent.h"

ASHSearchFocus::ASHSearchFocus(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->FocusExtraLightsContainer = CreateDefaultSubobject<USceneComponent>(TEXT("FocusExtraLightsContainer"));
    this->FocusCamera = CreateDefaultSubobject<USHCineCameraComponent>(TEXT("FocusCamera"));
    this->InteractionGeneric = CreateDefaultSubobject<USHInteractionGenericComponent>(TEXT("InteractionGeneric"));
    this->InteractionProximitySphere = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionProximitySphere"));
    this->InteractionIcon = CreateDefaultSubobject<USHInteractionIconComponent>(TEXT("InteractionIcon"));
    this->InteractionDetectable = CreateDefaultSubobject<USHRaycastDetectableComponent>(TEXT("InteractionDetectable"));
    this->InteractionDetectableShape = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionDetectableShape"));
    this->InteractionAnimSpot = CreateDefaultSubobject<UCapsuleComponent>(TEXT("InteractionAnimSpot"));
    this->InteractionManager = CreateDefaultSubobject<USHInteractionManagerComponent>(TEXT("InteractionManager"));
    this->FocusableComponent = CreateDefaultSubobject<USHFocusableComponent>(TEXT("FocusableComponent"));
    this->GameplayMapMarkerComponent = CreateDefaultSubobject<USHGameplayMapFocusableComponent>(TEXT("GameplayMapMarkerComponent"));
    this->bNoCompleteFoundItem = false;
    this->StageChangeAnimationTime = 0.30f;
    this->bTrackInteractingCharacter = false;
    this->bUseFocusCameraChangeTransformPerStage = false;
    this->StopAnimNotifiesAudioEvent = NULL;
    this->InteractingCharacter = NULL;
    this->LinkedAnimGraphInstance = NULL;
    this->FocusCamera->SetupAttachment(RootComponent);
    this->FocusExtraLightsContainer->SetupAttachment(RootComponent);
    this->InteractionAnimSpot->SetupAttachment(RootComponent);
    this->InteractionDetectable->SetupAttachment(InteractionGeneric);
    this->InteractionDetectableShape->SetupAttachment(InteractionDetectable);
    this->InteractionGeneric->SetupAttachment(RootComponent);
    this->InteractionIcon->SetupAttachment(InteractionGeneric);
    this->InteractionProximitySphere->SetupAttachment(InteractionGeneric);
}

void ASHSearchFocus::ProcessProximityEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void ASHSearchFocus::ProcessProximityBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult) {
}

void ASHSearchFocus::ProcessMoveCharacterToSpotFinished(bool WasCompleted) {
}

void ASHSearchFocus::ProcessInteractionManagerInitialized(USHInteractionManagerComponent* Manager) {
}

void ASHSearchFocus::ProcessInteractionGenericGrabbed(USHInteractionGenericComponent* Generic, ASHCharacterPlay* Character) {
}

void ASHSearchFocus::ProcessInteractingCharacterReceiveDamage(USHCharacterPlayCombatComponent* CombatComp) {
}

void ASHSearchFocus::ProcessInteractingCharacterCombatInputModeChanged(USHCharacterPlayCombatComponent* CombatComp) {
}

void ASHSearchFocus::ProcessFocusableInputActionEvent(ESHFocusableInputActionTypeEnum InputActionType, float KeyValue) {
}

void ASHSearchFocus::ProcessAnimInstStartedInteraction(USHSearchFocusAnimInstance* AnimInst) {
}

void ASHSearchFocus::ProcessAnimInstStageAdvanced(USHSearchFocusAnimInstance* AnimInst) {
}

bool ASHSearchFocus::IsInInteraction() const {
    return false;
}

int32 ASHSearchFocus::GetCurrentFocusStageIndex() const {
    return 0;
}


