#include "SHMeatConveyorBase.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"

ASHMeatConveyorBase::ASHMeatConveyorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    // FIXME
    // this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    // this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    // this->RailStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RailStaticMeshComponent"));
    // this->RailStaticMeshComponent->SetupAttachment(RootComponent);
    // this->SplineComponent->SetupAttachment(RootComponent);
    this->ConveyorMovementCurve = NULL;
    this->TimeBetweenMovements = 2.50f;
    this->MaxPushableDistance = 500.00f;
    this->WorkingAreaRadius = 10.00f;
    this->WorkingAreaHeightOffset = 0.00f;
    this->MinPushableChunkAmount = 1;
}


void ASHMeatConveyorBase::StartMovementRoutine() {
}

bool ASHMeatConveyorBase::IsMovementRoutineRequested() const {
    return false;
}

bool ASHMeatConveyorBase::IsInMotion() const {
    return false;
}

bool ASHMeatConveyorBase::IsCharacterInWorkArea(ACharacter* InCharacter, bool AllowCapsuleTouch) const {
    return false;
}

void ASHMeatConveyorBase::FinishMovementRoutine(const bool bInstant) {
}



