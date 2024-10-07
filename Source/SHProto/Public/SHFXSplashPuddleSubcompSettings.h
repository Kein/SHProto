#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "SHFXSplashPuddleSubcompSettings.generated.h"

class ASHSystemFXBase;
class USHSystemFXData;

UCLASS(BlueprintType)
class SHPROTO_API USHFXSplashPuddleSubcompSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnableSplashPuddle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHSystemFXData* SplashPuddleFXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<ASHSystemFXBase> SplashPuddleFXSpawnerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D DelayToSpawnSplashPuddle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool OverrideSplashPuddleFadeOut;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SplashPuddleFadeOutDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SplashPuddleFadeOutDuration;
    
    USHFXSplashPuddleSubcompSettings();

};

