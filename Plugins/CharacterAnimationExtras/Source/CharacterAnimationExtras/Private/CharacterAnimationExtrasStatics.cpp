#include "CharacterAnimationExtrasStatics.h"

UCharacterAnimationExtrasStatics::UCharacterAnimationExtrasStatics() {
}

float UCharacterAnimationExtrasStatics::GetStateWeight(const FAnimUpdateContext& UpdateContext, const FAnimationStateResultReference& Node) {
    return 0.0f;
}

float UCharacterAnimationExtrasStatics::GetAlphaFloatBlend(UObject* WorldContextObject, FInputScaleBiasClamp& AlphaFloatBlend, float FloatValue) {
    return 0.0f;
}

float UCharacterAnimationExtrasStatics::GetAlphaBoolBlend(UObject* WorldContextObject, FInputAlphaBoolBlend& AlphaBoolBlend, bool Enabled) {
    return 0.0f;
}

bool UCharacterAnimationExtrasStatics::EnsureLogError(UAnimInstance* AnimInstance, bool Valid, const FString& MessageText) {
    return false;
}

void UCharacterAnimationExtrasStatics::ApplyScaleToMorphTarget(UAnimInstance* AnimInstance, const TMap<FName, float>& CurveAndScale, float ALPHA, UAnimInstance*& AnimInstanceContext) {
}


