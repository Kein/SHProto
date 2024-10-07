#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "BlooberNiagaraAkAudioPlayer.generated.h"

class UAkAudioEvent;

UCLASS(EditInlineNew)
class BLOOBERWWISE_API UBlooberNiagaraAkAudioPlayer : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* SoundToPlay;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> StrParameterNames;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bLimitPlaysPerTick;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 MaxPlaysPerTick;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bStopWhenComponentIsDestroyed;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bAllowLoopingOneShotSounds;
    
    UBlooberNiagaraAkAudioPlayer();

};

