#pragma once
#include "CoreMinimal.h"
#include "SHFXMaterialModifierSubcompSettings.h"
#include "SHFXRaingWettingSubcompSettings.generated.h"

class UCurveFloat;
class UNiagaraSystem;

UCLASS()
class SHPROTO_API USHFXRaingWettingSubcompSettings : public USHFXMaterialModifierSubcompSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnableRainWetting;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TotalWettingTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TotalDryingTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* WetDryCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnableRainDripping;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UNiagaraSystem> RainDrippingTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName RainDrippingSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString RainDrippingSpawnRateParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString RainDrippingIntensityParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RainDrippingIntensityEvaluateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StopDrippingWetDryFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RainDrippingIntensityDiminishTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnableWading;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WadeDryingSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* WadeDryingCurveSlowdown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* WadeSharpnessCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* WadeOffsetWetCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WadeCurvesTimeLength;
    
    USHFXRaingWettingSubcompSettings();

};

