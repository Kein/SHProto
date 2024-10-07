#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SHAnimationStatics.generated.h"

class UAnimInstance;
class UBlendSpace;

UCLASS(BlueprintType)
class USHAnimationStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USHAnimationStatics();

    UFUNCTION(BlueprintCallable)
    static bool VerifyBlendSpaceSamplesMinimumDuration(UBlendSpace* InBlendSpace, float InMinimumAllowedDuration, const FString& InDebugWarningMessage);
    
    UFUNCTION(BlueprintCallable)
    static bool VerifyBlendSpaceSamplesMaximumDuration(UBlendSpace* InBlendSpace, float InMaximumAllowedDuration, const FString& InDebugWarningMessage);
    
    UFUNCTION(BlueprintCallable)
    static bool VerifyBlendSpaceSamplesDifference(UBlendSpace* InBlendSpace, float InMaximumAllowedDifference, const FString& InDebugWarningMessage);
    
    UFUNCTION(BlueprintCallable)
    static bool HasActiveRotateInPlaceCurve(UAnimInstance* InAnimInstance);
    
    UFUNCTION(BlueprintCallable)
    static float FindPlayTimeOfBlendSpaceForInput(UBlendSpace* InBlendSpace, const FVector& InInput);
    
    UFUNCTION(BlueprintCallable)
    static float FindMinimumPlayTimeOfBlendSpace(UBlendSpace* InBlendSpace);
    
    UFUNCTION(BlueprintCallable)
    static float FindMaximumPlayTimeOfBlendSpace(UBlendSpace* InBlendSpace);
    
    UFUNCTION(BlueprintCallable)
    static float FindAveragePlayTimeOfBlendSpace(UBlendSpace* InBlendSpace);
    
};

