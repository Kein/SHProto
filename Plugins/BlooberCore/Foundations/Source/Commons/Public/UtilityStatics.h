#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DirectionCondition.h"
#include "SimpleBentCurve.h"
#include "UtilityStatics.generated.h"

UCLASS(BlueprintType)
class COMMONS_API UUtilityStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUtilityStatics();

    UFUNCTION(BlueprintPure)
    static bool VectorMatchesCondition(const FDirectionCondition Condition, const FVector& Direction, bool AllowZeroVectorAtMaximumTolerance);
    
    UFUNCTION(BlueprintPure)
    static bool RotatorMatchesCondition(const FDirectionCondition Condition, const FRotator& Direction);
    
    UFUNCTION(BlueprintPure)
    static bool QuatMatchesCondition(const FDirectionCondition Condition, const FQuat& Direction);
    
    UFUNCTION(BlueprintPure)
    static FVector2D ApplySimpleBentCurveVector2D(const FSimpleBentCurve Curve, const FVector2D& From, const FVector2D& To, float ALPHA);
    
    UFUNCTION(BlueprintPure)
    static FVector ApplySimpleBentCurveVector(const FSimpleBentCurve Curve, const FVector& From, const FVector& To, float ALPHA);
    
    UFUNCTION(BlueprintPure)
    static void ApplySimpleBentCurveTransform(FTransform& Transform, const FSimpleBentCurve Curve, const FTransform& From, const FTransform& To, float ALPHA);
    
    UFUNCTION(BlueprintPure)
    static FRotator ApplySimpleBentCurveRotator(const FSimpleBentCurve Curve, const FRotator& From, const FRotator& To, float ALPHA);
    
    UFUNCTION(BlueprintPure)
    static FQuat ApplySimpleBentCurveQuat(const FSimpleBentCurve Curve, const FQuat& From, const FQuat& To, float ALPHA);
    
    UFUNCTION(BlueprintPure)
    static float ApplySimpleBentCurveFloat(const FSimpleBentCurve Curve, float From, float To, float ALPHA);
    
    UFUNCTION(BlueprintPure)
    static float ApplySimpleBentCurveAlpha(const FSimpleBentCurve Curve, float ALPHA);
    
    UFUNCTION(BlueprintPure)
    static bool AnglesMatchCondition(const FDirectionCondition Condition, float YawAngle, float PitchAngle);
    
};

