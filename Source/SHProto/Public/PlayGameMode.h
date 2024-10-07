#pragma once
#include "CoreMinimal.h"
#include "SHGameMode.h"
#include "Templates/SubclassOf.h"
#include "PlayGameMode.generated.h"

class UAnalyticsGameplayRecorderComponent;
class UAnalyticsPerformanceRecorderComponent;
class UBeingFootstepManagerComponent;
class UPlayTimeComponent;
class USHAkAmbientSoundManagerComponent;
class USHAkComponentsPoolManagerComponent;
class USHAkPortalManagerComponent;
class USHAkSpatialAudioVolumeManagerComponent;
class USHAsyncLoaderComponent;
class USHDoorsManagerComponent;
class USHFXManagerComponent;
class USHFlickeringLightManagerComponent;
class USHFogManager;
class USHFreezingManagerComponent;
class USHGameplayControllerEffectsManager;
class USHInteractionIconManagerComponent;
class USHRainManagerComponent;
class USHTimeManagerComponent;
class USHWaterManagerComponent;
class UUserWidget;

UCLASS(NonTransient, Config=Engine)
class APlayGameMode : public ASHGameMode {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGameReadyToPlayEvent);
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHTimeManagerComponent* TimeManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHInteractionIconManagerComponent* IconManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHAsyncLoaderComponent* AsyncLoader;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UAnalyticsGameplayRecorderComponent* AnalyticsGameplayRecorder;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UAnalyticsPerformanceRecorderComponent* AnalyticsPerformanceRecorder;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHGameplayControllerEffectsManager* GameplayControllerEffectsManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBeingFootstepManagerComponent* FootstepManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHFXManagerComponent* SHFXManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHFogManager* SHFogManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHWaterManagerComponent* SHWaterManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHRainManagerComponent* SHRainManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHFreezingManagerComponent* SHFreezingManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHAkAmbientSoundManagerComponent* AkAmbientSoundManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHAkComponentsPoolManagerComponent* AkComponentsPoolManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHAkSpatialAudioVolumeManagerComponent* AkSpatialAudioVolumeManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHAkPortalManagerComponent* AkPortalManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHFlickeringLightManagerComponent* FlickeringLightManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHDoorsManagerComponent* DoorsManager;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<TSubclassOf<UUserWidget>> DemoLockedAreaMessages;
    
public:
    UPROPERTY(BlueprintAssignable)
    FGameReadyToPlayEvent OnGameIsReadyToPlay;
    
protected:
    UPROPERTY(Instanced, Transient)
    TArray<UUserWidget*> DemoLockedAreaMessageWidgets;
    
    UPROPERTY(Instanced)
    UPlayTimeComponent* PlayTimeComponent;
    
public:
    APlayGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Exec)
    void SHDebug_World_DumpAllLevels();
    
    UFUNCTION(Exec)
    void SHDebug_World_DumpAllActors();
    
    UFUNCTION(BlueprintPure)
    bool IsReadyToPlay() const;
    
    UFUNCTION()
    void EndFakeLoading();
    
};

