#pragma once
#include "CoreMinimal.h"
#include "AnimationStateMachineLibrary.h"
#include "Animation/AnimExecutionContext.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Animation/InputScaleBias.h"
#include "Animation/InputScaleBias.h"
#include "CharacterAnimationExtrasStatics.generated.h"

class UAnimInstance;
class UObject;

UCLASS(BlueprintType)
class CHARACTERANIMATIONEXTRAS_API UCharacterAnimationExtrasStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCharacterAnimationExtrasStatics();

    UFUNCTION(BlueprintPure)
    static float GetStateWeight(const FAnimUpdateContext& UpdateContext, const FAnimationStateResultReference& Node);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetAlphaFloatBlend(UObject* WorldContextObject, UPARAM(Ref) FInputScaleBiasClamp& AlphaFloatBlend, float FloatValue);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetAlphaBoolBlend(UObject* WorldContextObject, UPARAM(Ref) FInputAlphaBoolBlend& AlphaBoolBlend, bool Enabled);
    
    UFUNCTION(BlueprintPure)
    static bool EnsureLogError(UAnimInstance* AnimInstance, bool Valid, const FString& MessageText);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyScaleToMorphTarget(UAnimInstance* AnimInstance, const TMap<FName, float>& CurveAndScale, float ALPHA, UPARAM(Ref) UAnimInstance*& AnimInstanceContext);
    
};

