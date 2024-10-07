#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SHProtoCurveUtils.generated.h"

class UCurveBase;
class UCurveFloat;
class UCurveVector;

UCLASS(BlueprintType)
class SHPROTO_API USHProtoCurveUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USHProtoCurveUtils();

    UFUNCTION(BlueprintCallable)
    static float GetMinTime(UCurveFloat* Curve);
    
    UFUNCTION(BlueprintCallable)
    static float GetMaxTime(UCurveFloat* Curve);
    
    UFUNCTION(BlueprintCallable)
    static void ClearCurveValues(UCurveBase* Curve);
    
    UFUNCTION(BlueprintCallable)
    static void AddVectorCurveValue(UCurveVector* Curve, FVector Value, float Time);
    
    UFUNCTION(BlueprintCallable)
    static void AddCurveValue(UCurveFloat* Curve, float Value, float Time);
    
};

