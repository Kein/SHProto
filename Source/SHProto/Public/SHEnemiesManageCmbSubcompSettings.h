#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHEnemiesManageCmbSubcompSettings.generated.h"

class UAkRtpc;

UCLASS(BlueprintType)
class SHPROTO_API USHEnemiesManageCmbSubcompSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InDangerOnDelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InDangerOffCooldownSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EnemyInSightClampRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EnemyInSightMinDirectionDotProduct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkRtpc* LoudnessMeterRtpcObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RequiredLoudnessMeterRtpcValue;
    
    USHEnemiesManageCmbSubcompSettings();

};

