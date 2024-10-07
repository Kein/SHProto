#include "MaiActionPoint.h"
#include "Components/ArrowComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TextRenderComponent.h"
#include "MaiAreaComponent.h"

AMaiActionPoint::AMaiActionPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MarkerMesh"));
    this->_MarkerMesh = (UStaticMeshComponent*)RootComponent;
    this->_WorkArea = CreateDefaultSubobject<UMaiAreaComponent>(TEXT("WorkArea"));
    this->_Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("RotationArrow"));
    this->_Text = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Text"));
    this->_HasTravelConditions = false;
    this->_IsGraphPoint = false;
    this->_OldConditionClass = NULL;
    this->_NewConditionClass = NULL;
    this->_Radius = -1.00f;
    this->_WalkingStanceEnum = EBeingWalkingStance::UNDEFINED;
    this->_MaxUsers = 1;
    this->_UseCounter = 0;
    this->_UseOnce = false;
    this->_Weight = 1;
    this->_Enabled = true;
    this->_Skipable = true;
    this->_PlacedInWorld = false;
    this->_WaypointOnly = false;
    this->_MoveExaclyToAP = false;
    this->_StopsToAction = true;
    this->_RotateToAction = false;
    this->_RotateToActionPrecision = 10.00f;
    this->_Arrow->SetupAttachment(RootComponent);
    this->_Text->SetupAttachment(RootComponent);
    this->_WorkArea->SetupAttachment(RootComponent);
}

void AMaiActionPoint::Used() {
}

void AMaiActionPoint::ResetUseCounter() {
}

void AMaiActionPoint::PrepareToWork_Implementation(AMaiController* User) {
}






bool AMaiActionPoint::IsVisibleFrom(const FVector& Location, float defaultVisibilityRange, float perceptionMod) const {
    return false;
}

bool AMaiActionPoint::IsUsableBy_Implementation(AMaiController* User) const {
    return false;
}

bool AMaiActionPoint::IsUsable() const {
    return false;
}

bool AMaiActionPoint::InDetectionArea(const FVector& Location, float areaExtent) const {
    return false;
}

bool AMaiActionPoint::HasAnyWork() const {
    return false;
}

uint8 AMaiActionPoint::GetWeight() const {
    return 0;
}

UMaiActionSequenceComponent* AMaiActionPoint::GetSequence(FName sequenceTag) const {
    return NULL;
}

FRotator AMaiActionPoint::GetActionRotation() const {
    return FRotator{};
}

bool AMaiActionPoint::CanBeUsedBy(AMaiController* User) const {
    return false;
}


