#pragma once
#include "CoreMinimal.h"
#include "SHAkComponent.h"
#include "Templates/SubclassOf.h"
#include "SHAkCharacterAudioComponent.generated.h"

class ASHCharacterPlay;
class UAkAudioEvent;
class USHAudioBreathingSettings;
class USHAudioHealthSettings;
class USHAudioInteractionSettings;
class USHAudioSpaceSettings;
class USHAudioStatesComponentSettings;
class USHCharacterAudioSubcomponentBase;
class USHEnvironmentComponentSettings;

UCLASS(ClassGroup=Custom, Within=SHCharacterPlay, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAkCharacterAudioComponent : public USHAkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* ReverbTestSoundEvent;
    
    UPROPERTY(EditDefaultsOnly)
    FName SocketAttachName;
    
    UPROPERTY(EditDefaultsOnly)
    USHAudioStatesComponentSettings* AudioStatesSettings;
    
    UPROPERTY(EditDefaultsOnly)
    USHEnvironmentComponentSettings* EnvironmentSettings;
    
    UPROPERTY(EditDefaultsOnly)
    USHAudioSpaceSettings* AudioSpaceSettings;
    
    UPROPERTY(EditDefaultsOnly)
    USHAudioBreathingSettings* AudioBreathingSettings;
    
    UPROPERTY(EditDefaultsOnly)
    USHAudioHealthSettings* AudioHealthSettings;
    
    UPROPERTY(EditDefaultsOnly)
    USHAudioInteractionSettings* AudioInteractionSettings;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
    UPROPERTY(Transient)
    TSet<USHCharacterAudioSubcomponentBase*> OwnedSubcomponents;
    
public:
    USHAkCharacterAudioComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Exec)
    void SHDebug_Character_Audio_ValuesDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Audio_StatesDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Audio_SetDangerState(int32 InDangerMode);
    
    UFUNCTION(Exec)
    void SHDebug_Character_Audio_SetCutsceneState(bool bEnable);
    
    UFUNCTION(Exec)
    void SHDebug_Character_Audio_SetBossState(bool bEnable);
    
    UFUNCTION(Exec)
    void SHDebug_Character_Audio_ReverbTestSound();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Audio_PortalsDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Audio_AVDebug();
    
    UFUNCTION(BlueprintPure)
    USHCharacterAudioSubcomponentBase* FindSubcomponentByClass(const TSubclassOf<USHCharacterAudioSubcomponentBase> SubcomponentClass) const;
    
};

