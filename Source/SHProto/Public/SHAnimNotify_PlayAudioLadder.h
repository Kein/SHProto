#pragma once
#include "CoreMinimal.h"
#include "SHAnimNotify_PlayAudio.h"
#include "SHAnimNotify_PlayAudioLadder.generated.h"

class UAkAudioEvent;

UCLASS(CollapseCategories)
class SHPROTO_API USHAnimNotify_PlayAudioLadder : public USHAnimNotify_PlayAudio {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* AudioEventToPlay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName SoundPositionSocketName;
    
    USHAnimNotify_PlayAudioLadder();

};

