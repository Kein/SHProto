#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHStressCmbSubcompSettings.generated.h"

class UAkAudioEvent;

UCLASS(BlueprintType)
class SHPROTO_API USHStressCmbSubcompSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LevelThreshold_Light;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LevelThreshold_Medium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LevelThreshold_High;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CloseEnemyClampRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DefaultReactionChance_Medium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* AkEventReaction_Medium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DefaultReactionChance_High;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* AkEventReaction_High;
    
    USHStressCmbSubcompSettings();

};

