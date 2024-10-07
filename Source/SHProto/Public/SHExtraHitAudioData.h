#pragma once
#include "CoreMinimal.h"
#include "SHExtraHitAudioData.generated.h"

class UAkAudioEvent;
class UAkSwitchValue;

USTRUCT(BlueprintType)
struct FSHExtraHitAudioData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* AudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkSwitchValue* SwitchValue;
    
    SHPROTO_API FSHExtraHitAudioData();
};

