#include "SHSlidingDoor.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "PlaneSideDetectionComponent.h"
#include "SHAkPortalDoorComponent.h"
#include "SHAkSlidingDoorComponent.h"
#include "SHGameplayMapDoorComponent.h"
#include "SHInteractionGenericComponent.h"
#include "SHInteractionIconComponent.h"
#include "SHInteractionIconSlotComponent.h"
#include "SHInteractionManagerComponent.h"
#include "SHRaycastDetectableComponent.h"
#include "SHSlidingDoorAnimationsComponent.h"
#include "SHSlidingDoorLockComponent.h"
#include "SHSlidingDoorMovementComponent.h"

ASHSlidingDoor::ASHSlidingDoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->FrameMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Frame"));
    this->DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door"));
    this->DoorPlaneSideDetectionComponent = CreateDefaultSubobject<UPlaneSideDetectionComponent>(TEXT("PlaneSideDetection"));
    this->InteractionGeneric = CreateDefaultSubobject<USHInteractionGenericComponent>(TEXT("InteractionGeneric"));
    this->InteractionProximitySphere = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionProximitySphere"));
    this->InteractionIcon = CreateDefaultSubobject<USHInteractionIconComponent>(TEXT("InteractionIcon"));
    this->InteractionDetectable = CreateDefaultSubobject<USHRaycastDetectableComponent>(TEXT("InteractionDetectable"));
    this->InteractionDetectableShape = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionDetectableShape"));
    this->InteractionIconSlotFront = CreateDefaultSubobject<USHInteractionIconSlotComponent>(TEXT("InteractionIconSlotFront"));
    this->InteractionIconSlotBack = CreateDefaultSubobject<USHInteractionIconSlotComponent>(TEXT("InteractionIconSlotBack"));
    this->PreHitDetector = NULL;
    this->LockAnimSpotAbove = CreateDefaultSubobject<UCapsuleComponent>(TEXT("LockAnimSpotAbove"));
    this->LockAnimSpotBelow = CreateDefaultSubobject<UCapsuleComponent>(TEXT("LockAnimSpotBelow"));
    this->SHAkSlidingDoorComponent = CreateDefaultSubobject<USHAkSlidingDoorComponent>(TEXT("SHAkSlidingDoorComponent"));
    this->SHAkPortalBounds = CreateDefaultSubobject<UBoxComponent>(TEXT("PortalBounds"));
    this->SHAkPortalDoorComponent = CreateDefaultSubobject<USHAkPortalDoorComponent>(TEXT("PortalDoorComponent"));
    this->InteractionManager = CreateDefaultSubobject<USHInteractionManagerComponent>(TEXT("InteractionManager"));
    this->LockComponent = CreateDefaultSubobject<USHSlidingDoorLockComponent>(TEXT("LockComponent"));
    this->DoorAnimationsComponent = CreateDefaultSubobject<USHSlidingDoorAnimationsComponent>(TEXT("DoorAnimationsComponent"));
    this->DoorMovement = CreateDefaultSubobject<USHSlidingDoorMovementComponent>(TEXT("DoorMovement"));
    this->GameplayMapObject = CreateDefaultSubobject<USHGameplayMapDoorComponent>(TEXT("GameplayMapObject"));
    this->DoorMesh->SetupAttachment(FrameMesh);
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
    this->SHAkPortalBounds->SetupAttachment(FrameMesh);
    this->SHAkPortalDoorComponent->SetupAttachment(SHAkPortalBounds);
    this->SHAkSlidingDoorComponent->SetupAttachment(DoorMesh);
}

void ASHSlidingDoor::ProcessInteractionManagerInitialized(USHInteractionManagerComponent* Manager) {
}

void ASHSlidingDoor::ProcessDoorAlphaChanged(USHDoorMovementBaseComponent* MovementComponent) {
}


