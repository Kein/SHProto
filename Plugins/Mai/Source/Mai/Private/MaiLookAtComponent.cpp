#include "MaiLookAtComponent.h"

UMaiLookAtComponent::UMaiLookAtComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_LoseRanageExt = 20.00f;
    this->_HeadPitchOffset = 80.00f;
    this->_HeadYawOffset = 80.00f;
    this->_HeadRotationRate = 6.00f;
    this->_ConstantInterp = false;
    this->_Debug = false;
    this->_Enabled = true;
    this->_ExceedingLimit = false;
    this->_LookAtData.AddDefaulted(3);
    this->_CurrentPriority = -1;
}

void UMaiLookAtComponent::SetLookAtRotation(FRotator Rotation, float MaxRange, uint8 Priority) {
}

void UMaiLookAtComponent::LookAtLocation(FVector Location, float MaxRange, uint8 Priority) {
}

void UMaiLookAtComponent::LookAtComponent(USceneComponent* comp, float MaxRange, uint8 Priority) {
}

void UMaiLookAtComponent::LookAtActor(AActor* Actor, float MaxRange, uint8 Priority) {
}

bool UMaiLookAtComponent::IsLookAtEnabled() const {
    return false;
}

FRotator UMaiLookAtComponent::GetLookAtRotation(uint8 Priority) const {
    return FRotator{};
}

FVector UMaiLookAtComponent::GetLookAtLocation(uint8 Priority) const {
    return FVector{};
}

AActor* UMaiLookAtComponent::GetLookAtActor(uint8 Priority) const {
    return NULL;
}

FRotator UMaiLookAtComponent::GetHeadLocalRotation() const {
    return FRotator{};
}

void UMaiLookAtComponent::EnableLookAt(int32 Priority) {
}

void UMaiLookAtComponent::DisableLookAt(int32 Priority) {
}

void UMaiLookAtComponent::ClearLookAt(int32 Priority) {
}


