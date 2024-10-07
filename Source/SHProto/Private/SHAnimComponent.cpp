#include "SHAnimComponent.h"
#include "Templates/SubclassOf.h"

USHAnimComponent::USHAnimComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->GameplayLinkedAnimInstDefaultClass = NULL;
    this->AnimInstance = NULL;
    this->AnimActionExe = NULL;
}

void USHAnimComponent::UnlinkGameplayAnimInst() {
}

void USHAnimComponent::SetAnimActionBlocked(const bool Blocked, const UObject* Object) {
}

UAnimInstance* USHAnimComponent::LinkGameplayAnimInst(TSubclassOf<UAnimInstance> InClass) {
    return NULL;
}

bool USHAnimComponent::IsInitialized() const {
    return false;
}

bool USHAnimComponent::IsGameplayLinkedAnimInstSupported() const {
    return false;
}

bool USHAnimComponent::IsAnimActionBlocked() const {
    return false;
}

FName USHAnimComponent::GetSkeletonSocketName(ESkeletonSockets SocketType) const {
    return NAME_None;
}

FVector USHAnimComponent::GetHipsForward() const {
    return FVector{};
}

FRotator USHAnimComponent::GetCharacterBodyRotation() const {
    return FRotator{};
}

FVector USHAnimComponent::GetCharacterBodyForward() const {
    return FVector{};
}

FTransform USHAnimComponent::GetBoneTransform(EBones BoneType, TEnumAsByte<ERelativeTransformSpace> Space) const {
    return FTransform{};
}

FRotator USHAnimComponent::GetBoneRotation(EBones BoneType, TEnumAsByte<ERelativeTransformSpace> TransformSpace) const {
    return FRotator{};
}

FVector USHAnimComponent::GetBoneRootLocation() const {
    return FVector{};
}

FName USHAnimComponent::GetBoneName(EBones BoneType) const {
    return NAME_None;
}

FVector USHAnimComponent::GetBoneLocation(EBones BoneType, TEnumAsByte<EBoneSpaces::Type> TransformSpace) const {
    return FVector{};
}

EBones USHAnimComponent::GetBoneFromName(FName BoneType) const {
    return EBones::Root;
}

USHAnimActionExecutiveBase* USHAnimComponent::GetAnimActionExe() const {
    return NULL;
}

USHAnimSubcomponentBase* USHAnimComponent::FindSubcomponentByClass(const TSubclassOf<USHAnimSubcomponentBase> SubcomponentClass) const {
    return NULL;
}

bool USHAnimComponent::CreateAnimActionExe(TSubclassOf<USHAnimActionExecutiveBase> AnimActionExeClass, UObject* InContextObject) {
    return false;
}


