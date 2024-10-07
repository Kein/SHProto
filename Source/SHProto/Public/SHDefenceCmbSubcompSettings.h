#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHViewLookOperationSettings.h"
#include "SHDefenceCmbSubcompSettings.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHDefenceCmbSubcompSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDodgeUseViewSnapOnEnemy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDodgeViewSnapOnEnemyDurationAsAnimLengthMul;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DodgeViewSnapOnEnemyDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHViewLookOperationSettings DodgeViewSnapOnEnemySettings;
    
    USHDefenceCmbSubcompSettings();

};

