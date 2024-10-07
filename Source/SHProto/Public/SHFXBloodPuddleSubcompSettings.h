#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHFXBloodPuddleSubcompSettings.generated.h"

class ASHBloodPuddle;

UCLASS(BlueprintType)
class SHPROTO_API USHFXBloodPuddleSubcompSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnableBloodPuddle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<ASHBloodPuddle> BloodPuddleClass;
    
    UPROPERTY(EditAnywhere)
    float DelayToSpawnPuddle;
    
    UPROPERTY(EditAnywhere)
    float DamageAddsToPuddleValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool OverridePuddleFadeAway;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PuddleFadeAwayTime;
    
    USHFXBloodPuddleSubcompSettings();

};

