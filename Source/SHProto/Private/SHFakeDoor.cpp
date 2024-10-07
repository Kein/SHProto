#include "SHFakeDoor.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "PlaneSideDetectionComponent.h"
#include "SHAkFakeDoorComponent.h"
#include "SHGameplayMapObjectComponent.h"

ASHFakeDoor::ASHFakeDoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->PlaneSideDetector = CreateDefaultSubobject<UPlaneSideDetectionComponent>(TEXT("PlaneSideDetector"));
    this->FakeHitDetector = CreateDefaultSubobject<UBoxComponent>(TEXT("FakeHitDetector"));
    this->SHAkFakeDoorComponent = CreateDefaultSubobject<USHAkFakeDoorComponent>(TEXT("SHAkFakeDoorComponent"));
    this->GameplayMapObject = CreateDefaultSubobject<USHGameplayMapObjectComponent>(TEXT("GameplayMapObject"));
    this->AnimationsSetData = NULL;
    this->FakeHitDetector->SetupAttachment(PlaneSideDetector);
    this->PlaneSideDetector->SetupAttachment(RootComponent);
    this->SHAkFakeDoorComponent->SetupAttachment(RootComponent);
}

void ASHFakeDoor::SetEnabled(const UObject* Enabler, bool InEnabled) {
}

void ASHFakeDoor::ProcessFakeHitDetectorBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASHFakeDoor::OnAutoLockedDoorCheckAnimEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType) {
}

void ASHFakeDoor::HandleReceiveDamageEvent(USHCharacterPlayCombatComponent* CombatComp) {
}


