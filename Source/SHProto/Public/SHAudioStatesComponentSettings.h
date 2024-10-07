#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHAudioStatesComponentSettings.generated.h"

class UAkAudioEvent;
class UAkStateValue;

UCLASS(BlueprintType)
class SHPROTO_API USHAudioStatesComponentSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CombatStateCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DangerStateCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkStateValue* AudioState_Calm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkStateValue* AudioState_Danger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkStateValue* AudioState_Combat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkStateValue* AudioState_In_Bossfight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkStateValue* AudioState_Out_Bossfight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* AudioEvent_StopFleshLipEnviroEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* AudioEvent_StopFleshLipMusicEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkStateValue* AudioState_In_Cutscene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkStateValue* AudioState_Out_Cutscene;
    
    USHAudioStatesComponentSettings();

};

