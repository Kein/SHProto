#include "ControllerEffectsManager.h"

UControllerEffectsManager::UControllerEffectsManager() {
    this->WWiseMotionStopEvent = NULL;
    this->WWiseMotionScaleRTPC = NULL;
    this->WWiseMotionCtrlTypeRTPC = NULL;
}

void UControllerEffectsManager::TurnOffTriggerEffect() {
}

void UControllerEffectsManager::TriggerEvent(FName Name) {
}

void UControllerEffectsManager::StopSpecialEffect(FEffectHandle Handle) {
}

void UControllerEffectsManager::StopForceFeedback(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag) {
}

UForceFeedbackComponent* UControllerEffectsManager::SpawnForceFeedbackAttached(UForceFeedbackEffect* ForceFeedbackEffect, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, bool bLooping, float IntensityMultiplier, float StartTime, UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy) {
    return NULL;
}

UForceFeedbackComponent* UControllerEffectsManager::SpawnForceFeedbackAtLocation(UForceFeedbackEffect* ForceFeedbackEffect, FVector Location, FRotator Rotation, bool bLooping, float IntensityMultiplier, float StartTime, UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy) {
    return NULL;
}

void UControllerEffectsManager::SetControllerLightColor(FColor Color) {
}

void UControllerEffectsManager::ResetPersistentEvents() {
}

void UControllerEffectsManager::ResetControllerLightColor() {
}

void UControllerEffectsManager::ResetAllStates(bool PersistentEvents) {
}

void UControllerEffectsManager::PlaySpecialEffect(FEffectHandle Handle, bool Loop, int32 Variant) {
}

void UControllerEffectsManager::OnActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void UControllerEffectsManager::K2_UpdateDynamicForceFeedback(FDynamicForceFeedbackBPHandle InHandle, float Intensity, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall) {
}

void UControllerEffectsManager::K2_StoptDynamicForceFeedback(FDynamicForceFeedbackBPHandle InHandle, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall) {
}

void UControllerEffectsManager::K2_StartDynamicForceFeedback(FDynamicForceFeedbackBPHandle& InHandle, float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall) {
}

void UControllerEffectsManager::K2_SetTriggerEffect(UTriggerEffect* effect) {
}

void UControllerEffectsManager::K2_PlayForceFeedback(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused) {
}

void UControllerEffectsManager::K2_PlayDynamicForceFeedback(FDynamicForceFeedbackBPHandle& InHandle, float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, TEnumAsByte<EDynamicForceFeedbackAction::Type> action) {
}

void UControllerEffectsManager::HandleControllerConnectionChange(EInputDeviceConnectionState InputDeviceConnectionState, FPlatformUserId PlatformUserId, FInputDeviceId InputDeviceId) {
}

void UControllerEffectsManager::ForceStopForceFeedbackEffects() {
}


