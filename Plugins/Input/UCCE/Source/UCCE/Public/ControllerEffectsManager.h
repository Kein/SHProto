#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/PlayerController.h"
#include "Engine/EngineTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DynamicForceFeedbackBPHandle.h"
#include "EffectHandle.h"
#include "GamePadUsageDelegateDelegate.h"
#include "ControllerEffectsManager.generated.h"

class AActor;
class APlayerController;
class UAkAudioEvent;
class UAkRtpc;
class UForceFeedbackAttenuation;
class UForceFeedbackComponent;
class UForceFeedbackEffect;
class USceneComponent;
class UTriggerEffect;

UCLASS(BlueprintType)
class UCCE_API UControllerEffectsManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGamePadUsageDelegate BP_OnGamePadUsageOffCountdownStarted;
    
    UPROPERTY(BlueprintAssignable)
    FGamePadUsageDelegate BP_OnGamePadUsageOffCountdownInterrupted;
    
    UPROPERTY(BlueprintAssignable)
    FGamePadUsageDelegate BP_OnGamePadUsageOff;
    
protected:
    UPROPERTY(Transient)
    TWeakObjectPtr<APlayerController> PlayerController;
    
    UPROPERTY(Transient)
    UAkAudioEvent* WWiseMotionStopEvent;
    
    UPROPERTY(Transient)
    UAkRtpc* WWiseMotionScaleRTPC;
    
    UPROPERTY(Transient)
    UAkRtpc* WWiseMotionCtrlTypeRTPC;
    
public:
    UControllerEffectsManager();

    UFUNCTION(BlueprintCallable)
    void TurnOffTriggerEffect();
    
    UFUNCTION(BlueprintCallable)
    void TriggerEvent(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void StopSpecialEffect(FEffectHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    void StopForceFeedback(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    UForceFeedbackComponent* SpawnForceFeedbackAttached(UForceFeedbackEffect* ForceFeedbackEffect, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, bool bLooping, float IntensityMultiplier, float StartTime, UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    UForceFeedbackComponent* SpawnForceFeedbackAtLocation(UForceFeedbackEffect* ForceFeedbackEffect, FVector Location, FRotator Rotation, bool bLooping, float IntensityMultiplier, float StartTime, UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerLightColor(FColor Color);
    
    UFUNCTION(BlueprintCallable)
    void ResetPersistentEvents();
    
    UFUNCTION(BlueprintCallable)
    void ResetControllerLightColor();
    
    UFUNCTION(BlueprintCallable)
    void ResetAllStates(bool PersistentEvents);
    
    UFUNCTION(BlueprintCallable)
    void PlaySpecialEffect(FEffectHandle Handle, bool Loop, int32 Variant);
    
protected:
    UFUNCTION()
    void OnActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void K2_UpdateDynamicForceFeedback(FDynamicForceFeedbackBPHandle InHandle, float Intensity, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall);
    
    UFUNCTION(BlueprintCallable)
    void K2_StoptDynamicForceFeedback(FDynamicForceFeedbackBPHandle InHandle, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall);
    
    UFUNCTION(BlueprintCallable)
    void K2_StartDynamicForceFeedback(FDynamicForceFeedbackBPHandle& InHandle, float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall);
    
public:
    UFUNCTION(BlueprintCallable)
    void K2_SetTriggerEffect(UTriggerEffect* effect);
    
    UFUNCTION(BlueprintCallable)
    void K2_PlayForceFeedback(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused);
    
protected:
    UFUNCTION(BlueprintCallable)
    void K2_PlayDynamicForceFeedback(FDynamicForceFeedbackBPHandle& InHandle, float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, TEnumAsByte<EDynamicForceFeedbackAction::Type> action);
    
    UFUNCTION()
    void HandleControllerConnectionChange(EInputDeviceConnectionState InputDeviceConnectionState, FPlatformUserId PlatformUserId, FInputDeviceId InputDeviceId);
    
public:
    UFUNCTION(BlueprintCallable)
    void ForceStopForceFeedbackEffects();
    
};

