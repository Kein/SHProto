#include "SHElevatorInsidePanel.h"
#include "Components/BoxComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "SHAkElevatorInsidePanelComponent.h"
#include "SHFocusableComponent.h"
#include "SHInteractionGenericComponent.h"
#include "SHInteractionIconComponent.h"
#include "SHInteractionManagerComponent.h"
#include "SHRaycastDetectableComponent.h"

ASHElevatorInsidePanel::ASHElevatorInsidePanel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    this->InteractionGeneric = CreateDefaultSubobject<USHInteractionGenericComponent>(TEXT("InteractionGeneric"));
    this->InteractionProximitySphere = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionProximitySphere"));
    this->CharacterPlayTeleportToSpot = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CharacterPlayTeleportToSpot"));
    this->MariaTeleportToSpot = CreateDefaultSubobject<UCapsuleComponent>(TEXT("MariaTeleportToSpot"));
    this->InteractionIcon = CreateDefaultSubobject<USHInteractionIconComponent>(TEXT("InteractionIcon"));
    this->InteractionDetectable = CreateDefaultSubobject<USHRaycastDetectableComponent>(TEXT("InteractionDetectable"));
    this->InteractionDetectableShape = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionDetectableShape"));
    this->SHAkElevatorInsidePanel = CreateDefaultSubobject<USHAkElevatorInsidePanelComponent>(TEXT("SHAkElevatorInsidePanel"));
    this->InteractionManager = CreateDefaultSubobject<USHInteractionManagerComponent>(TEXT("InteractionManager"));
    this->FocusableManager = CreateDefaultSubobject<USHFocusableComponent>(TEXT("FocusableManager"));
    this->bOnlyOneTaskAtTimeMode = true;
    this->bRotateCharacterToDoors = true;
    this->RotateCharacterToDoorsSnapDuration = 0.00f;
    this->AttachmentHeight = 0.00f;
    this->Camera->SetupAttachment(RootComponent);
    this->CharacterPlayTeleportToSpot->SetupAttachment(RootComponent);
    this->InteractionDetectable->SetupAttachment(InteractionGeneric);
    this->InteractionDetectableShape->SetupAttachment(InteractionDetectable);
    this->InteractionGeneric->SetupAttachment(RootComponent);
    this->InteractionIcon->SetupAttachment(InteractionGeneric);
    this->InteractionProximitySphere->SetupAttachment(InteractionGeneric);
    this->MariaTeleportToSpot->SetupAttachment(RootComponent);
    this->SHAkElevatorInsidePanel->SetupAttachment(RootComponent);
}

void ASHElevatorInsidePanel::ProcessOrdersQueueChange(ASHElevatorEngine* InElevatorEnginePtr) {
}

void ASHElevatorInsidePanel::ProcessOrderCompleted(ASHElevatorEngine* InElevatorEnginePtr) {
}

void ASHElevatorInsidePanel::ProcessInteractionManagerInitialized(USHInteractionManagerComponent* Manager) {
}

void ASHElevatorInsidePanel::ProcessFocusableShown() {
}


