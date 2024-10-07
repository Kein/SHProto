#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHCharacterPlayLightingControlData.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHCharacterPlayLightingControlData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideGlobalIntensityMul;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GlobalIntensityMul;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideGlobalColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor GlobalColor;
    
    FSHCharacterPlayLightingControlData();
};

