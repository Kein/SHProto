#include "SHTraversalLadder.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "SHGameplayMapLadderComponent.h"
#include "SHInteractionGenericComponent.h"
#include "SHInteractionIconComponent.h"
#include "SHInteractionManagerComponent.h"
#include "SHRaycastDetectableComponent.h"

ASHTraversalLadder::ASHTraversalLadder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LadderMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LadderMesh"));
    this->InteractionGenericAbove = CreateDefaultSubobject<USHInteractionGenericComponent>(TEXT("InteractionGenericAbove"));
    this->InteractionProximitySphereAbove = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionProximitySphereAbove"));
    this->InteractionIconAbove = CreateDefaultSubobject<USHInteractionIconComponent>(TEXT("InteractionIconAbove"));
    this->InteractionDetectableAbove = CreateDefaultSubobject<USHRaycastDetectableComponent>(TEXT("InteractionDetectableAbove"));
    this->InteractionDetectableShapeAbove = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionDetectableShapeAbove"));
    this->InteractionGenericBelow = CreateDefaultSubobject<USHInteractionGenericComponent>(TEXT("InteractionGenericBelow"));
    this->InteractionProximitySphereBelow = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionProximitySphereBelow"));
    this->InteractionIconBelow = CreateDefaultSubobject<USHInteractionIconComponent>(TEXT("InteractionIconBelowBelow"));
    this->InteractionDetectableBelow = CreateDefaultSubobject<USHRaycastDetectableComponent>(TEXT("InteractionDetectableBelow"));
    this->InteractionDetectableShapeBelow = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionDetectableShapeBelow"));
    this->GameplayMapObject = CreateDefaultSubobject<USHGameplayMapLadderComponent>(TEXT("GameplayMapObject"));
    this->InteractionManagerAbove = CreateDefaultSubobject<USHInteractionManagerComponent>(TEXT("InteractionManagerAbove"));
    this->InteractionManagerBelow = CreateDefaultSubobject<USHInteractionManagerComponent>(TEXT("InteractionManagerBelow"));
    this->StepsNum = 3;
    this->InteractingCharacter = NULL;
    this->LinkedTraversalLadderAnimGraphInstance = NULL;
    this->InteractionDetectableAbove->SetupAttachment(InteractionGenericAbove);
    this->InteractionDetectableBelow->SetupAttachment(InteractionGenericBelow);
    this->InteractionDetectableShapeAbove->SetupAttachment(InteractionDetectableAbove);
    this->InteractionDetectableShapeBelow->SetupAttachment(InteractionDetectableBelow);
    this->InteractionGenericAbove->SetupAttachment(RootComponent);
    this->InteractionGenericBelow->SetupAttachment(RootComponent);
    this->InteractionIconAbove->SetupAttachment(InteractionGenericAbove);
    this->InteractionIconBelow->SetupAttachment(InteractionGenericBelow);
    this->InteractionProximitySphereAbove->SetupAttachment(InteractionGenericAbove);
    this->InteractionProximitySphereBelow->SetupAttachment(InteractionGenericBelow);
    this->LadderMesh->SetupAttachment(RootComponent);
}

void ASHTraversalLadder::ProcessSlideSnapEnd(bool WasCompleted) {
}

void ASHTraversalLadder::ProcessMovementSnapEnd(bool WasCompleted) {
}

void ASHTraversalLadder::ProcessLookAtRotationAbsoluteEnd(bool WasCompleted) {
}

void ASHTraversalLadder::ProcessInteractionManagerBelowInitialized(USHInteractionManagerComponent* Manager) {
}

void ASHTraversalLadder::ProcessInteractionManagerAboveInitialized(USHInteractionManagerComponent* Manager) {
}

void ASHTraversalLadder::ProcessInteract(USHInteractionGenericComponent* Generic, ASHCharacterPlay* Character) {
}

void ASHTraversalLadder::ProcessEndTraversalStart() {
}

void ASHTraversalLadder::ProcessEndTraversalFinish() {
}



FTransform ASHTraversalLadder::ComputeStepWorldTransformClosestTo(const FVector& InWorldLoc) const {
    return FTransform{};
}


