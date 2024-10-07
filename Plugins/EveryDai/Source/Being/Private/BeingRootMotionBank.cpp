#include "BeingRootMotionBank.h"
#include "Templates/SubclassOf.h"

UBeingRootMotionBank::UBeingRootMotionBank(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_RootMotionData = NULL;
    this->_MinSpeed = 0.70f;
    this->_MaxSpeed = 1.60f;
    this->_SpeedStep = 0.10f;
    this->_DebugAssetRM = NULL;
    this->_DebugDrawSpeed = 1.00f;
    this->_DebugDrawBSYaw = 0.00f;
    this->_DebugDrawDuration = 10.00f;
    this->_DebugDrawOffset = 20.00f;
    this->_MaxStampCount = 1;
    this->_DebugTarget = NULL;
    this->_MaxFramesPerSecond = 60;
    this->_Precision = 0.00f;
}

bool UBeingRootMotionBank::TryGetRootMotionData(const UAnimSequence* Animation, FAnimationRootMotion& outdata, bool inActorRotation) const {
    return false;
}

void UBeingRootMotionBank::StampBS(const UBlendSpace* BlendSpace, float Yaw, FVector TargetLocation, FLinearColor Color) {
}

void UBeingRootMotionBank::Stamp(const UAnimSequence* Animation, FLinearColor Color) {
}

FVector UBeingRootMotionBank::GetLocalOffset(const UAnimSequence* Animation) const {
    return FVector{};
}

bool UBeingRootMotionBank::GetBoneMovement(const UAnimSequence* AnimationSequence, FName BoneName, FTransform& Movement) const {
    return false;
}

bool UBeingRootMotionBank::GetBoneInitialTransform(const UAnimSequence* AnimationSequence, FName BoneName, FTransform& Transform) const {
    return false;
}

bool UBeingRootMotionBank::GetBoneFinalTransform(const UAnimSequence* AnimationSequence, FName BoneName, FTransform& Transform) const {
    return false;
}

float UBeingRootMotionBank::FindBestSpeedForBlendSpace(const UBlendSpace* BlendSpace, FVector Location) const {
    return 0.0f;
}

float UBeingRootMotionBank::FindBestSpeedForAnim(const UAnimSequence* Animation, FVector Location) const {
    return 0.0f;
}

float UBeingRootMotionBank::FindBestAngleForBlendSpace(const UBlendSpace* BlendSpace, FVector Location) const {
    return 0.0f;
}

void UBeingRootMotionBank::DebugStamp() {
}

bool UBeingRootMotionBank::CanGoWithBlendspace(const UBlendSpace* BlendSpace, float Yaw, float Distance, TSubclassOf<UNavigationQueryFilter> filterClass) const {
    return false;
}

bool UBeingRootMotionBank::CanGoWithAnim(const UAnimSequence* Animation, float Distance, TSubclassOf<UNavigationQueryFilter> filterClass) const {
    return false;
}

bool UBeingRootMotionBank::CanGotoWithBlendspace(const UBlendSpace* BlendSpace, FVector Location, float Distance, TSubclassOf<UNavigationQueryFilter> filterClass) const {
    return false;
}


