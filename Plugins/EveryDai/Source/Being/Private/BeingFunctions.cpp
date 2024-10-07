#include "BeingFunctions.h"

UBeingFunctions::UBeingFunctions() {
}

void UBeingFunctions::tickableFloatTick(FTickableFloat& tfloat, float deltasec) {
}

void UBeingFunctions::tickableFloatSetWithStep(FTickableFloat& tfloat, float Value, float Step) {
}

void UBeingFunctions::tickableFloatSetInTime(FTickableFloat& tfloat, float Value, float Duration) {
}

void UBeingFunctions::tickableFloatSet(FTickableFloat& tfloat, float Value) {
}

float UBeingFunctions::tickableFloatGet(const FTickableFloat& tfloat) {
    return 0.0f;
}

void UBeingFunctions::setRootMotionTranslationScale(APawn* Being, float Scale) {
}

void UBeingFunctions::setMoveIgnoreMask(AActor* Actor, uint8 Mask) {
}

void UBeingFunctions::setMaskFilter(AActor* Actor, uint8 maskFilter) {
}

void UBeingFunctions::setComponentMoveIgnoreMask(UPrimitiveComponent* Primitive, uint8 Mask) {
}

void UBeingFunctions::setComponentMaskFilter(UPrimitiveComponent* Primitive, uint8 maskFilter) {
}

void UBeingFunctions::putOnGround(APawn* Being, float Time) {
}

void UBeingFunctions::MuteFootsteps(APawn* Being, bool mute) {
}

FQuat UBeingFunctions::makeQuatFromAxes(FVector Forward, FVector Right, FVector Up) {
    return FQuat{};
}

bool UBeingFunctions::isFollowingAPath(const APawn* Being) {
    return false;
}

void UBeingFunctions::IgnoreNextFalling(APawn* Being) {
}

EBeingWalkType UBeingFunctions::getWalkingStanceType(EBeingWalkingStance stance) {
    return EBeingWalkType::WALK;
}

EBeingWalkingStance UBeingFunctions::getWalkingStanceEnum(APawn* Being) {
    return EBeingWalkingStance::UNDEFINED;
}

FVector UBeingFunctions::GetRequestedVelocity(const APawn* Being) {
    return FVector{};
}

APawn* UBeingFunctions::getPawn(AActor* Actor) {
    return NULL;
}

FVector UBeingFunctions::getGroundLocation(AActor* Actor) {
    return FVector{};
}

FVector UBeingFunctions::getDesiredVelocity(const APawn* Being) {
    return FVector{};
}

AController* UBeingFunctions::GetController(AActor* Actor) {
    return NULL;
}

void UBeingFunctions::forceYawRotation(APawn* Being, float DeltaSeconds, float localYaw, float clampYaw, float interpSpeed) {
}

void UBeingFunctions::forceRollRotation(APawn* Being, float DeltaSeconds, float localYaw, float yawMul, float interpSpeed) {
}

bool UBeingFunctions::findLocationNearWall(APawn* Being, float minDistance, FVector& Location) {
    return false;
}

float UBeingFunctions::findDistanceToWall(APawn* Being, FVector InLocation, FVector& nearestPoint) {
    return 0.0f;
}

void UBeingFunctions::fastRotate(APawn* Being, float DeltaSeconds, float localYaw, float minYaw, float maxYaw, float interpSpeed) {
}

void UBeingFunctions::clearWalkingStanceEnum(APawn* Being, uint8 Priority) {
}

bool UBeingFunctions::changeWalkingStanceEnum(APawn* Being, EBeingWalkingStance stance, uint8 Priority) {
    return false;
}

FRotator UBeingFunctions::changeRotationSpace(FVector Forward, FVector Right, FVector Up, FRotator Rotation) {
    return FRotator{};
}

FVector UBeingFunctions::changeDirectionSpace(FVector Forward, FVector Right, FVector Up, FVector Direction) {
    return FVector{};
}


