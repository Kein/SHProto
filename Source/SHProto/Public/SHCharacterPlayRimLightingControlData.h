#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHCharacterPlayRimLightingControlData.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHCharacterPlayRimLightingControlData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_RimLightIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_RimLightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_RimLightETA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_RimLightBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_RimLightAngleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_RimLightAngleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RimLightIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor RimLightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RimLightETA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RimLightBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RimLightAngleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RimLightAngleMax;
    
    FSHCharacterPlayRimLightingControlData();
};

