#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MaterialCtrl.h"
#include "MaterialCtrlParam.h"
#include "MaterialParamsSplineCtrlEx.generated.h"

class UCurveBase;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MATERIALSSPLINECTRL_API UMaterialParamsSplineCtrlEx : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FMaterialCtrl> Materials;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, EditFixedSize)
    TArray<FMaterialCtrlParam> Parameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    float TimeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    bool DynamicChangesCheck;
    
    UMaterialParamsSplineCtrlEx(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetParamValueScaleByName(FName Name, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetParamSpeedScaleByName(FName Name, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetParamLoopAroundByName(FName Name, bool State);
    
    UFUNCTION(BlueprintCallable)
    void SetParamCurveByName(FName Name, UCurveBase* PCurve);
    
    UFUNCTION(BlueprintCallable)
    void ResetTime();
    
    UFUNCTION(BlueprintCallable)
    void ForceBindingsUpdate();
    
};

