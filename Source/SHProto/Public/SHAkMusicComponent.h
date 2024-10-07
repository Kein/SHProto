#pragma once
#include "CoreMinimal.h"
#include "SHAkComponent.h"
#include "SHAkMusicComponent.generated.h"

class ASHMusicRTPCVolume;
class ASHMusicSwitchVolume;
class UAkRtpc;
class UAkSwitchValue;
class UObject;
class USHMusicComponentSettings;

UCLASS(ClassGroup=Custom, Within=SHCharacterPlay, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAkMusicComponent : public USHAkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHMusicComponentSettings* ComponentSettings;
    
    UPROPERTY(Transient)
    TArray<ASHMusicSwitchVolume*> MusicVolumes;
    
    UPROPERTY(Transient)
    TArray<ASHMusicRTPCVolume*> MusicRTPCVolumes;
    
    UPROPERTY(Transient)
    TSoftObjectPtr<UAkSwitchValue> CurrentPlayingMusicSwitch;
    
    UPROPERTY(Transient)
    TArray<UAkRtpc*> CurrentMusicRTPCs;
    
    UPROPERTY(Transient)
    TSoftObjectPtr<UAkSwitchValue> MusicOnLeaveSwitch;
    
public:
    USHAkMusicComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Exec)
    void SHDebug_Character_Music_ValuesDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Music_StopMusic();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Music_DrawDebug();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RequestMusicSwitch(UObject* InContext, UAkSwitchValue* InSwitch);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseRequestedMusicSwitch(UObject* InContext);
    
};

