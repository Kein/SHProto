#include "SHDoor.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "PlaneSideDetectionComponent.h"
#include "SHAkDoorComponent.h"
#include "SHAkPortalDoorComponent.h"
#include "SHDoorAnimationsComponent.h"
#include "SHDoorLockComponent.h"
#include "SHDoorMovementComponent.h"
#include "SHGameplayMapDoorComponent.h"
#include "SHInteractionGenericComponent.h"
#include "SHInteractionIconComponent.h"
#include "SHInteractionIconSlotComponent.h"
#include "SHInteractionManagerComponent.h"
#include "SHRaycastDetectableComponent.h"

ASHDoor::ASHDoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->FrameMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Frame"));
    this->DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door"));
    this->DoorMeshHandleSpotAbove = CreateDefaultSubobject<USceneComponent>(TEXT("DoorMeshHandleSpotAbove"));
    this->DoorMeshHandleSpotBelow = CreateDefaultSubobject<USceneComponent>(TEXT("DoorMeshHandleSpotBelow"));
    this->DoorPlaneSideDetectionComponent = CreateDefaultSubobject<UPlaneSideDetectionComponent>(TEXT("PlaneSideDetection"));
    this->InteractionGeneric = CreateDefaultSubobject<USHInteractionGenericComponent>(TEXT("InteractionGeneric"));
    this->InteractionProximitySphere = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionProximitySphere"));
    this->InteractionIcon = CreateDefaultSubobject<USHInteractionIconComponent>(TEXT("InteractionIcon"));
    this->InteractionDetectable = CreateDefaultSubobject<USHRaycastDetectableComponent>(TEXT("InteractionDetectable"));
    this->InteractionDetectableShape = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionDetectableShape"));
    this->InteractionIconSlotFront = CreateDefaultSubobject<USHInteractionIconSlotComponent>(TEXT("InteractionIconSlotFront"));
    this->InteractionIconSlotBack = CreateDefaultSubobject<USHInteractionIconSlotComponent>(TEXT("InteractionIconSlotBack"));
    this->PreHitDetector = CreateDefaultSubobject<UBoxComponent>(TEXT("PreHitDetector"));
    this->LockAnimSpotAbove = CreateDefaultSubobject<UCapsuleComponent>(TEXT("LockAnimSpotAbove"));
    this->LockAnimSpotBelow = CreateDefaultSubobject<UCapsuleComponent>(TEXT("LockAnimSpotBelow"));
    this->SHAkDoorComponent = CreateDefaultSubobject<USHAkDoorComponent>(TEXT("SHAkDoorComponent"));
    this->SHAkPortalBounds = CreateDefaultSubobject<UBoxComponent>(TEXT("PortalBounds"));
    this->SHAkPortalDoorComponent = CreateDefaultSubobject<USHAkPortalDoorComponent>(TEXT("PortalDoorComponent"));
    this->InteractionManager = CreateDefaultSubobject<USHInteractionManagerComponent>(TEXT("InteractionManager"));
    this->DoorLock = CreateDefaultSubobject<USHDoorLockComponent>(TEXT("DoorLock"));
    this->DoorAnimations = CreateDefaultSubobject<USHDoorAnimationsComponent>(TEXT("DoorAnimations"));
    this->DoorMovement = CreateDefaultSubobject<USHDoorMovementComponent>(TEXT("DoorMovement"));
    this->GameplayMapObject = CreateDefaultSubobject<USHGameplayMapDoorComponent>(TEXT("GameplayMapObject"));
    this->DoorMesh->SetupAttachment(FrameMesh);
    this->DoorMeshHandleSpotAbove->SetupAttachment(DoorMesh);
    this->DoorMeshHandleSpotBelow->SetupAttachment(DoorMesh);
    this->DoorPlaneSideDetectionComponent->SetupAttachment(DoorMesh);
    this->FrameMesh->SetupAttachment(RootComponent);
    this->InteractionDetectable->SetupAttachment(DoorMesh);
    this->InteractionDetectableShape->SetupAttachment(InteractionDetectable);
    this->InteractionGeneric->SetupAttachment(DoorMesh);
    this->InteractionIcon->SetupAttachment(InteractionGeneric);
    this->InteractionIconSlotBack->SetupAttachment(DoorMesh);
    this->InteractionIconSlotFront->SetupAttachment(DoorMesh);
    this->InteractionProximitySphere->SetupAttachment(FrameMesh);
    this->LockAnimSpotAbove->SetupAttachment(FrameMesh);
    this->LockAnimSpotBelow->SetupAttachment(FrameMesh);
    this->PreHitDetector->SetupAttachment(DoorPlaneSideDetectionComponent);
    this->SHAkDoorComponent->SetupAttachment(DoorMesh);
    this->SHAkPortalBounds->SetupAttachment(FrameMesh);
    this->SHAkPortalDoorComponent->SetupAttachment(SHAkPortalBounds);
}

void ASHDoor::ProcessInteractionManagerInitialized(USHInteractionManagerComponent* Manager) {
}

void ASHDoor::ProcessDoorAlphaChanged(USHDoorMovementBaseComponent* MovementComponent) {
}


