#include "SHAnimationStatics.h"

USHAnimationStatics::USHAnimationStatics() {
}

bool USHAnimationStatics::VerifyBlendSpaceSamplesMinimumDuration(UBlendSpace* InBlendSpace, float InMinimumAllowedDuration, const FString& InDebugWarningMessage) {
    return false;
}

bool USHAnimationStatics::VerifyBlendSpaceSamplesMaximumDuration(UBlendSpace* InBlendSpace, float InMaximumAllowedDuration, const FString& InDebugWarningMessage) {
    return false;
}

bool USHAnimationStatics::VerifyBlendSpaceSamplesDifference(UBlendSpace* InBlendSpace, float InMaximumAllowedDifference, const FString& InDebugWarningMessage) {
    return false;
}

bool USHAnimationStatics::HasActiveRotateInPlaceCurve(UAnimInstance* InAnimInstance) {
    return false;
}

float USHAnimationStatics::FindPlayTimeOfBlendSpaceForInput(UBlendSpace* InBlendSpace, const FVector& InInput) {
    return 0.0f;
}

float USHAnimationStatics::FindMinimumPlayTimeOfBlendSpace(UBlendSpace* InBlendSpace) {
    return 0.0f;
}

float USHAnimationStatics::FindMaximumPlayTimeOfBlendSpace(UBlendSpace* InBlendSpace) {
    return 0.0f;
}

float USHAnimationStatics::FindAveragePlayTimeOfBlendSpace(UBlendSpace* InBlendSpace) {
    return 0.0f;
}


