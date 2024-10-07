#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MaterialCtrlParam.h"
#include "MaterialCtrlParamForcedBounds.h"
#include "MaterialParamsSplineCtrl.generated.h"

class UCurveBase;
class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MATERIALSSPLINECTRL_API UMaterialParamsSplineCtrl : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UMaterialInterface* PreviousMaterial;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* Material;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    UMaterialInstanceDynamic* DynamicMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, EditFixedSize)
    TArray<FMaterialCtrlParam> Parameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    float TimeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    float TargetBoundsScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    bool DynamicChangesCheck;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    TArray<FMaterialCtrlParamForcedBounds> BoundComponents;
    
    UMaterialParamsSplineCtrl(const FObjectInitializer& ObjectInitializer);

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
    
};

