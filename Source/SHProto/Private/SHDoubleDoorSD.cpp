#include "SHDoubleDoorSD.h"
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

ASHDoubleDoorSD::ASHDoubleDoorSD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->FrameMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Frame"));
    this->FramePlaneSideDetectionComponent = CreateDefaultSubobject<UPlaneSideDetectionComponent>(TEXT("FramePlaneSideDetectionComponent"));
    this->LeftDoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftDoor"));
    this->LeftDoorMeshHandleSpotAbove = CreateDefaultSubobject<USceneComponent>(TEXT("LeftDoorMeshHandleSpotAbove"));
    this->LeftDoorMeshHandleSpotBelow = CreateDefaultSubobject<USceneComponent>(TEXT("LeftDoorMeshHandleSpotBelow"));
    this->LeftDoorPlaneSideDetectionComponent = CreateDefaultSubobject<UPlaneSideDetectionComponent>(TEXT("LeftPlaneSideDetection"));
    this->LeftDoorPreHitDetector = CreateDefaultSubobject<UBoxComponent>(TEXT("LeftPreHitDetector"));
    this->RightDoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightDoor"));
    this->RightDoorMeshHandleSpotAbove = CreateDefaultSubobject<USceneComponent>(TEXT("RightDoorMeshHandleSpotAbove"));
    this->RightDoorMeshHandleSpotBelow = CreateDefaultSubobject<USceneComponent>(TEXT("RightDoorMeshHandleSpotBelow"));
    this->RightDoorPlaneSideDetectionComponent = CreateDefaultSubobject<UPlaneSideDetectionComponent>(TEXT("RightPlaneSideDetection"));
    this->RightDoorPreHitDetector = CreateDefaultSubobject<UBoxComponent>(TEXT("RightPreHitDetector"));
    this->InteractionGeneric = CreateDefaultSubobject<USHInteractionGenericComponent>(TEXT("InteractionGeneric"));
    this->InteractionProximitySphere = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionProximitySphere"));
    this->InteractionIcon = CreateDefaultSubobject<USHInteractionIconComponent>(TEXT("InteractionIcon"));
    this->InteractionDetectable = CreateDefaultSubobject<USHRaycastDetectableComponent>(TEXT("InteractionDetectable"));
    this->InteractionDetectableShape = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionDetectableShape"));
    this->InteractionIconSlotFront = CreateDefaultSubobject<USHInteractionIconSlotComponent>(TEXT("InteractionIconSlotFront"));
    this->InteractionIconSlotBack = CreateDefaultSubobject<USHInteractionIconSlotComponent>(TEXT("InteractionIconSlotBack"));
    this->LockAnimSpotAbove = CreateDefaultSubobject<UCapsuleComponent>(TEXT("LockAnimSpotAbove"));
    this->LockAnimSpotBelow = CreateDefaultSubobject<UCapsuleComponent>(TEXT("LockAnimSpotBelow"));
    this->LeftSHAkDoorComponent = CreateDefaultSubobject<USHAkDoorComponent>(TEXT("LeftSHAkDoorComponent"));
    this->RightSHAkDoorComponent = CreateDefaultSubobject<USHAkDoorComponent>(TEXT("RightSHAkDoorComponent"));
    this->SHAkPortalBounds = CreateDefaultSubobject<UBoxComponent>(TEXT("PortalBounds"));
    this->SHAkPortalDoorComponent = CreateDefaultSubobject<USHAkPortalDoorComponent>(TEXT("PortalDoorComponent"));
    this->InteractionManager = CreateDefaultSubobject<USHInteractionManagerComponent>(TEXT("InteractionManager"));
    this->DoorLock = CreateDefaultSubobject<USHDoorLockComponent>(TEXT("DoorLock"));
    this->DoorAnimations = CreateDefaultSubobject<USHDoorAnimationsComponent>(TEXT("DoorAnimations"));
    this->RightDoorMovement = CreateDefaultSubobject<USHDoorMovementComponent>(TEXT("RightDoorMovement"));
    this->LeftDoorMovement = CreateDefaultSubobject<USHDoorMovementComponent>(TEXT("LeftDoorMovement"));
    this->GameplayMapObject = CreateDefaultSubobject<USHGameplayMapDoorComponent>(TEXT("GameplayMapObject"));
    this->FrameMesh->SetupAttachment(RootComponent);
    this->FramePlaneSideDetectionComponent->SetupAttachment(FrameMesh);
    this->InteractionDetectable->SetupAttachment(FrameMesh);
    this->InteractionDetectableShape->SetupAttachment(InteractionDetectable);
    this->InteractionGeneric->SetupAttachment(FrameMesh);
    this->InteractionIcon->SetupAttachment(InteractionGeneric);
    this->InteractionIconSlotBack->SetupAttachment(FrameMesh);
    this->InteractionIconSlotFront->SetupAttachment(FrameMesh);
    this->InteractionProximitySphere->SetupAttachment(FrameMesh);
    this->LeftDoorMesh->SetupAttachment(FrameMesh);
    this->LeftDoorMeshHandleSpotAbove->SetupAttachment(LeftDoorMesh);
    this->LeftDoorMeshHandleSpotBelow->SetupAttachment(LeftDoorMesh);
    this->LeftDoorPlaneSideDetectionComponent->SetupAttachment(LeftDoorMesh);
    this->LeftDoorPreHitDetector->SetupAttachment(LeftDoorPlaneSideDetectionComponent);
    this->LeftSHAkDoorComponent->SetupAttachment(LeftDoorMesh);
    this->LockAnimSpotAbove->SetupAttachment(FrameMesh);
    this->LockAnimSpotBelow->SetupAttachment(FrameMesh);
    this->RightDoorMesh->SetupAttachment(FrameMesh);
    this->RightDoorMeshHandleSpotAbove->SetupAttachment(RightDoorMesh);
    this->RightDoorMeshHandleSpotBelow->SetupAttachment(RightDoorMesh);
    this->RightDoorPlaneSideDetectionComponent->SetupAttachment(RightDoorMesh);
    this->RightDoorPreHitDetector->SetupAttachment(RightDoorPlaneSideDetectionComponent);
    this->RightSHAkDoorComponent->SetupAttachment(RightDoorMesh);
    this->SHAkPortalBounds->SetupAttachment(FrameMesh);
    this->SHAkPortalDoorComponent->SetupAttachment(SHAkPortalBounds);
}

void ASHDoubleDoorSD::ProcessInteractionManagerInitialized(USHInteractionManagerComponent* Manager) {
}

void ASHDoubleDoorSD::ProcessDoorAlphaChanged(USHDoorMovementBaseComponent* MovementComponent) {
}


