#include "UtilityStatics.h"

UUtilityStatics::UUtilityStatics() {
}

bool UUtilityStatics::VectorMatchesCondition(const FDirectionCondition Condition, const FVector& Direction, bool AllowZeroVectorAtMaximumTolerance) {
    return false;
}

bool UUtilityStatics::RotatorMatchesCondition(const FDirectionCondition Condition, const FRotator& Direction) {
    return false;
}

bool UUtilityStatics::QuatMatchesCondition(const FDirectionCondition Condition, const FQuat& Direction) {
    return false;
}

FVector2D UUtilityStatics::ApplySimpleBentCurveVector2D(const FSimpleBentCurve Curve, const FVector2D& From, const FVector2D& To, float ALPHA) {
    return FVector2D{};
}

FVector UUtilityStatics::ApplySimpleBentCurveVector(const FSimpleBentCurve Curve, const FVector& From, const FVector& To, float ALPHA) {
    return FVector{};
}

void UUtilityStatics::ApplySimpleBentCurveTransform(FTransform& Transform, const FSimpleBentCurve Curve, const FTransform& From, const FTransform& To, float ALPHA) {
}

FRotator UUtilityStatics::ApplySimpleBentCurveRotator(const FSimpleBentCurve Curve, const FRotator& From, const FRotator& To, float ALPHA) {
    return FRotator{};
}

FQuat UUtilityStatics::ApplySimpleBentCurveQuat(const FSimpleBentCurve Curve, const FQuat& From, const FQuat& To, float ALPHA) {
    return FQuat{};
}

float UUtilityStatics::ApplySimpleBentCurveFloat(const FSimpleBentCurve Curve, float From, float To, float ALPHA) {
    return 0.0f;
}

float UUtilityStatics::ApplySimpleBentCurveAlpha(const FSimpleBentCurve Curve, float ALPHA) {
    return 0.0f;
}

bool UUtilityStatics::AnglesMatchCondition(const FDirectionCondition Condition, float YawAngle, float PitchAngle) {
    return false;
}


