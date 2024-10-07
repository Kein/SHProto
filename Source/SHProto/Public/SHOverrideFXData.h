#pragma once
#include "CoreMinimal.h"
#include "SHOverrideFXData.generated.h"

class UAkAudioEvent;
class USHSystemFXDataMappings;

USTRUCT(BlueprintType)
struct SHPROTO_API FSHOverrideFXData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseOverrideTraceHitFXMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<USHSystemFXDataMappings> OverrideTraceHitFXMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseOverrideHitFXSpawnerAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> OverrideHitFXSpawnerAkAudioEvent;
    
    FSHOverrideFXData();
};

