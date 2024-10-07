#include "SHElevatorFloorDoor.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "SHAkElevatorFloorDoorComponent.h"
#include "SHInteractionGenericComponent.h"
#include "SHInteractionIconComponent.h"
#include "SHInteractionManagerComponent.h"
#include "SHRaycastDetectableComponent.h"

ASHElevatorFloorDoor::ASHElevatorFloorDoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->InteractionGeneric = CreateDefaultSubobject<USHInteractionGenericComponent>(TEXT("InteractionGeneric"));
    this->InteractionProximitySphere = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionProximitySphere"));
    this->InteractionIcon = CreateDefaultSubobject<USHInteractionIconComponent>(TEXT("InteractionIcon"));
    this->InteractionDetectable = CreateDefaultSubobject<USHRaycastDetectableComponent>(TEXT("InteractionDetectable"));
    this->InteractionDetectableShape = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionDetectableShape"));
    this->SHAkElevatorFloorDoor = CreateDefaultSubobject<USHAkElevatorFloorDoorComponent>(TEXT("SHAkElevatorFloorDoor"));
    this->InteractionManager = CreateDefaultSubobject<USHInteractionManagerComponent>(TEXT("InteractionManager"));
    this->AssignedFloor = 0;
    this->InteractionDetectable->SetupAttachment(InteractionGeneric);
    this->InteractionDetectableShape->SetupAttachment(InteractionDetectable);
    this->InteractionGeneric->SetupAttachment(RootComponent);
    this->InteractionIcon->SetupAttachment(InteractionGeneric);
    this->InteractionProximitySphere->SetupAttachment(InteractionGeneric);
    this->SHAkElevatorFloorDoor->SetupAttachment(RootComponent);
}

void ASHElevatorFloorDoor::ProcessInteractionManagerInitialized(USHInteractionManagerComponent* Manager) {
}


void ASHElevatorFloorDoor::HandleOrdersQueueChange(ASHElevatorEngine* InElevatorEnginePtr) {
}

void ASHElevatorFloorDoor::HandleOrderCompleted(ASHElevatorEngine* InElevatorEnginePtr) {
}

void ASHElevatorFloorDoor::HandleInteract(USHInteractionGenericComponent* Generic, ASHCharacterPlay* Character) {
}

void ASHElevatorFloorDoor::HandleEngineDestroy(AActor* DestroyedActor) {
}

void ASHElevatorFloorDoor::HandleDoorNewRequest(ASHElevatorEngine* InElevatorEnginePtr) {
}

void ASHElevatorFloorDoor::HandleDoorCollisionInterupted(ASHElevatorEngine* InElevatorEnginePtr) {
}

void ASHElevatorFloorDoor::HandleDoorAlphaChanged(ASHElevatorEngine* InElevatorEnginePtr, float Value) {
}


