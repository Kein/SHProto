#include "SHJumpIntoHole.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "SHCineCameraComponent.h"
#include "SHFocusableComponent.h"
#include "SHInteractionGenericComponent.h"
#include "SHInteractionIconComponent.h"
#include "SHInteractionManagerComponent.h"
#include "SHRaycastDetectableComponent.h"

ASHJumpIntoHole::ASHJumpIntoHole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->FocusCamera = CreateDefaultSubobject<USHCineCameraComponent>(TEXT("FocusCamera"));
    this->InteractionGeneric = CreateDefaultSubobject<USHInteractionGenericComponent>(TEXT("InteractionGeneric"));
    this->InteractionProximitySphere = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionProximitySphere"));
    this->InteractionIcon = CreateDefaultSubobject<USHInteractionIconComponent>(TEXT("InteractionIcon"));
    this->InteractionDetectable = CreateDefaultSubobject<USHRaycastDetectableComponent>(TEXT("InteractionDetectable"));
    this->InteractionDetectableShape = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionDetectableShape"));
    this->InteractionAnimSpot = CreateDefaultSubobject<UCapsuleComponent>(TEXT("InteractionAnimSpot"));
    this->TeleportToOnPlayingEndComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("TeleportToOnPlayingEndComponent"));
    this->FlashlightFocusSpot = CreateDefaultSubobject<USceneComponent>(TEXT("FlashlightFocusSpot"));
    this->InteractionManager = CreateDefaultSubobject<USHInteractionManagerComponent>(TEXT("InteractionManager"));
    this->FocusableComponent = CreateDefaultSubobject<USHFocusableComponent>(TEXT("FocusableComponent"));
    this->StageChangeAnimationTime = 0.30f;
    this->bUseCameraFadingOnTeleport = true;
    this->CameraFadeInTime = 0.30f;
    this->CameraFadeKeepTime = 0.00f;
    this->CameraFadeOutTime = 0.50f;
    this->bUseFocusCameraChangeTransformPerStage = false;
    this->bUseFocusTracking = true;
    this->InteractingCharacter = NULL;
    this->LinkedAnimGraphInstance = NULL;
    this->AnimMontagePlayer = NULL;
    this->FlashlightFocusSpot->SetupAttachment(RootComponent);
    this->FocusCamera->SetupAttachment(RootComponent);
    this->InteractionAnimSpot->SetupAttachment(RootComponent);
    this->InteractionDetectable->SetupAttachment(InteractionGeneric);
    this->InteractionDetectableShape->SetupAttachment(InteractionDetectable);
    this->InteractionGeneric->SetupAttachment(RootComponent);
    this->InteractionIcon->SetupAttachment(InteractionGeneric);
    this->InteractionProximitySphere->SetupAttachment(InteractionGeneric);
    this->TeleportToOnPlayingEndComponent->SetupAttachment(RootComponent);
}

void ASHJumpIntoHole::ProcessProximityEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void ASHJumpIntoHole::ProcessProximityBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult) {
}

void ASHJumpIntoHole::ProcessMoveCharacterToSpotFinished(bool WasCompleted) {
}

void ASHJumpIntoHole::ProcessLandCameraAnimBlendOutOrEnd() {
}

void ASHJumpIntoHole::ProcessLandAnimEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType) {
}

void ASHJumpIntoHole::ProcessJumpAnimEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType) {
}

void ASHJumpIntoHole::ProcessInteractionManagerInitialized(USHInteractionManagerComponent* Manager) {
}

void ASHJumpIntoHole::ProcessInteractionGenericGrabbed(USHInteractionGenericComponent* Generic, ASHCharacterPlay* Character) {
}

void ASHJumpIntoHole::ProcessInteractingCharacterReceiveDamage(USHCharacterPlayCombatComponent* CombatComp) {
}

void ASHJumpIntoHole::ProcessInteractingCharacterCombatInputModeChanged(USHCharacterPlayCombatComponent* CombatComp) {
}

void ASHJumpIntoHole::ProcessFocusableInputActionEvent(ESHFocusableInputActionTypeEnum InputActionType, float KeyValue) {
}

void ASHJumpIntoHole::ProcessAnimInstStartedInteraction(USHJumpIntoHoleAnimInstance* AnimInst) {
}

void ASHJumpIntoHole::ProcessAnimInstStageAdvanced(USHJumpIntoHoleAnimInstance* AnimInst) {
}

bool ASHJumpIntoHole::IsInInteraction() const {
    return false;
}

int32 ASHJumpIntoHole::GetCurrentFocusStageIndex() const {
    return 0;
}


