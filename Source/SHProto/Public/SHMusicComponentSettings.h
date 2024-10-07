#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHSwitchesPrioritiesMusicData.h"
#include "SHMusicComponentSettings.generated.h"

class UAkAudioEvent;

UCLASS(BlueprintType)
class SHPROTO_API USHMusicComponentSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSHSwitchesPrioritiesMusicData> SwitchesPrioritiesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* AudioEvent_PlayMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* AudioEvent_StopMusic;
    
    USHMusicComponentSettings();

};

