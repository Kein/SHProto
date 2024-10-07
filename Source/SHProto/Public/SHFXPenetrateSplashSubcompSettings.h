#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHFXPenetrateSplashSubcompSettings.generated.h"

class ASHSystemFXBase;
class USHSystemFXData;

UCLASS(BlueprintType)
class SHPROTO_API USHFXPenetrateSplashSubcompSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnableEnemyPenetrate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHSystemFXData* PenetrateFXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<ASHSystemFXBase> PenetrateFXSpawnerClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool OverridePenetrateFadeOut;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PenetrateFadeOutDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PenetrateFadeOutDuration;
    
    USHFXPenetrateSplashSubcompSettings();

};

