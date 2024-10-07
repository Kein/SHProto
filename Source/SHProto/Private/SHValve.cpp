#include "SHValve.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "SHAkValveComponent.h"
#include "SHCineCameraComponent.h"
#include "SHFocusableComponent.h"
#include "SHInteractionGenericComponent.h"
#include "SHInteractionIconComponent.h"
#include "SHInteractionManagerComponent.h"
#include "SHRaycastDetectableComponent.h"

ASHValve::ASHValve(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->ValveMeshPivot = CreateDefaultSubobject<USceneComponent>(TEXT("ValveMeshPivot"));
    this->ValveMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ValveMesh"));
    this->FocusCamera = CreateDefaultSubobject<USHCineCameraComponent>(TEXT("FocusCamera"));
    this->InteractionGeneric = CreateDefaultSubobject<USHInteractionGenericComponent>(TEXT("InteractionGeneric"));
    this->InteractionProximitySphere = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionProximitySphere"));
    this->InteractionIcon = CreateDefaultSubobject<USHInteractionIconComponent>(TEXT("InteractionIcon"));
    this->InteractionDetectable = CreateDefaultSubobject<USHRaycastDetectableComponent>(TEXT("InteractionDetectable"));
    this->InteractionDetectableShape = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionDetectableShape"));
    this->InteractionAnimSpot = CreateDefaultSubobject<UCapsuleComponent>(TEXT("InteractionAnimSpot"));
    this->FlashlightFocusSpot = CreateDefaultSubobject<USceneComponent>(TEXT("FlashlightFocusSpot"));
    this->SHAkValve = CreateDefaultSubobject<USHAkValveComponent>(TEXT("SHAkValve"));
    this->InteractionManager = CreateDefaultSubobject<USHInteractionManagerComponent>(TEXT("InteractionManager"));
    this->FocusableComponent = CreateDefaultSubobject<USHFocusableComponent>(TEXT("FocusableComponent"));
    this->RequiredRotatedAngle = 360.00f;
    this->ValveTurnFirstPhaseAngleCurve = NULL;
    this->ValveTurnSecondPhaseAngleCurve = NULL;
    this->InteractingCharacter = NULL;
    this->LinkedAnimGraphInstance = NULL;
    this->TotalRotatedAngle = 0.00f;
    this->FlashlightFocusSpot->SetupAttachment(RootComponent);
    this->FocusCamera->SetupAttachment(RootComponent);
    this->InteractionAnimSpot->SetupAttachment(RootComponent);
    this->InteractionDetectable->SetupAttachment(InteractionGeneric);
    this->InteractionDetectableShape->SetupAttachment(InteractionDetectable);
    this->InteractionGeneric->SetupAttachment(RootComponent);
    this->InteractionIcon->SetupAttachment(InteractionGeneric);
    this->InteractionProximitySphere->SetupAttachment(InteractionGeneric);
    this->SHAkValve->SetupAttachment(RootComponent);
    this->ValveMesh->SetupAttachment(ValveMeshPivot);
    this->ValveMeshPivot->SetupAttachment(RootComponent);
}

void ASHValve::RequestAbortInteraction() {
}

void ASHValve::ProcessProximityEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void ASHValve::ProcessProximityBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult) {
}

void ASHValve::ProcessMoveCharacterToSpotFinished(bool WasCompleted) {
}

void ASHValve::ProcessInteractionManagerInitialized(USHInteractionManagerComponent* Manager) {
}

void ASHValve::ProcessInteractionGenericGrabbed(USHInteractionGenericComponent* Generic, ASHCharacterPlay* Character) {
}

void ASHValve::ProcessInteractingCharacterReceiveDamage(USHCharacterPlayCombatComponent* CombatComp) {
}

void ASHValve::ProcessInteractingCharacterCombatInputModeChanged(USHCharacterPlayCombatComponent* CombatComp) {
}

void ASHValve::ProcessFocusableInputActionEvent(ESHFocusableInputActionTypeEnum InputActionType, float KeyValue) {
}

void ASHValve::ProcessAnimInstStartedInteraction(USHValveAnimInstance* AnimInstPtr) {
}

void ASHValve::ProcessAnimInstFinishedInteraction(USHValveAnimInstance* AnimInstPtr) {
}

void ASHValve::ProcessAnimInstChangedProgressPhase(USHValveAnimInstance* AnimInstPtr, int32 InPhaseNumber, bool bHasStarted) {
}

void ASHValve::ProcessAnimInstBeginFinishInteraction(USHValveAnimInstance* AnimInstPtr) {
}

bool ASHValve::IsInInteraction() const {
    return false;
}

bool ASHValve::IsCompleted() const {
    return false;
}

float ASHValve::GetTotalRotatedAngle() const {
    return 0.0f;
}

int32 ASHValve::GetCurrentPhaseNumber() const {
    return 0;
}


