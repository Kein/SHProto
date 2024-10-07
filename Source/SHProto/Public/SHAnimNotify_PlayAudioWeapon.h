#pragma once
#include "CoreMinimal.h"
#include "SHAnimNotify_PlayAudio.h"
#include "SHAnimNotify_PlayAudioWeapon.generated.h"

class UAkAudioEvent;

UCLASS(CollapseCategories)
class SHPROTO_API USHAnimNotify_PlayAudioWeapon : public USHAnimNotify_PlayAudio {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* AudioEventToPlay;
    
    USHAnimNotify_PlayAudioWeapon();

};

