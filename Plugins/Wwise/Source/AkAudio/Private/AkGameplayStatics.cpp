#include "AkGameplayStatics.h"

UAkGameplayStatics::UAkGameplayStatics() {
}

void UAkGameplayStatics::UseReverbVolumes(bool inUseReverbVolumes, AActor* Actor) {
}

void UAkGameplayStatics::UseEarlyReflections(AActor* Actor, UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const FString& AuxBusName) {
}

void UAkGameplayStatics::UnloadInitBank() {
}

void UAkGameplayStatics::UnloadBankByName(const FString& BankName) {
}

void UAkGameplayStatics::StopProfilerCapture() {
}

void UAkGameplayStatics::StopOutputCapture() {
}

void UAkGameplayStatics::StopAllAmbientSounds(UObject* WorldContextObject) {
}

void UAkGameplayStatics::StopAll() {
}

void UAkGameplayStatics::StopActor(AActor* Actor) {
}

void UAkGameplayStatics::StartProfilerCapture(const FString& Filename) {
}

void UAkGameplayStatics::StartOutputCapture(const FString& Filename) {
}

void UAkGameplayStatics::StartAllAmbientSounds(UObject* WorldContextObject) {
}

UAkComponent* UAkGameplayStatics::SpawnAkComponentAttachedEx(USceneComponent* BaseComponent, UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, bool AutoPost, const FString& EventName, bool AutoDestroy, bool bAllowPositionTracking, float OcclusionRefreshInterval) {
    return NULL;
}

UAkComponent* UAkGameplayStatics::SpawnAkComponentAtLocationEx(UObject* WorldContextObject, UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, bool AutoPost, const FString& EventName, bool AutoDestroy, bool bAllowPositionTracking, float OcclusionRefreshInterval) {
    return NULL;
}

UAkComponent* UAkGameplayStatics::SpawnAkComponentAtLocation(UObject* WorldContextObject, UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, bool AutoPost, const FString& EventName, bool AutoDestroy, bool bAllowPositionTracking) {
    return NULL;
}

void UAkGameplayStatics::SetSwitch(UAkSwitchValue* SwitchValue, AActor* Actor, FName SwitchGroup, FName SwitchState) {
}

void UAkGameplayStatics::SetState(UAkStateValue* StateValue, FName StateGroup, FName State) {
}

void UAkGameplayStatics::SetSpeakerAngles(const TArray<float>& SpeakerAngles, float HeightAngle, const FString& DeviceShareSet) {
}

void UAkGameplayStatics::SetRTPCValueByPlayID(const FString& RTPCName, float RTPCValue, int32 PlayID, int32 InterpolationTimeMs) {
}

void UAkGameplayStatics::SetRTPCValue(UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, AActor* Actor, FName RTPC) {
}

void UAkGameplayStatics::SetReflectionsOrder(int32 Order, bool RefreshPaths) {
}

void UAkGameplayStatics::SetPortalToPortalObstruction(UAkPortalComponent* PortalComponent0, UAkPortalComponent* PortalComponent1, float ObstructionValue) {
}

void UAkGameplayStatics::SetPortalObstructionAndOcclusion(UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue) {
}

void UAkGameplayStatics::SetPanningRule(PanningRule PanRule) {
}

bool UAkGameplayStatics::SetOutputDeviceEffect(const FAkOutputDeviceID InDeviceID, const int32 InEffectIndex, const UAkEffectShareSet* InEffectShareSet) {
    return false;
}

void UAkGameplayStatics::SetOutputBusVolume(float BusVolume, AActor* Actor) {
}

bool UAkGameplayStatics::SetOfflineRenderingFrameTime(float FrameTimeInSeconds) {
    return false;
}

bool UAkGameplayStatics::SetOfflineRendering(bool bEnable) {
    return false;
}

void UAkGameplayStatics::SetOcclusionRefreshInterval(float RefreshInterval, AActor* Actor) {
}

void UAkGameplayStatics::SetMultiplePositions(UAkComponent* GameObjectAkComponent, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType) {
}

void UAkGameplayStatics::SetMultipleChannelMaskEmitterPositions(UAkComponent* GameObjectAkComponent, TArray<FAkChannelMask> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType) {
}

void UAkGameplayStatics::SetMultipleChannelEmitterPositions(UAkComponent* GameObjectAkComponent, TArray<AkChannelConfiguration> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType) {
}

void UAkGameplayStatics::SetGameObjectToPortalObstruction(UAkComponent* GameObjectAkComponent, UAkPortalComponent* PortalComponent, float ObstructionValue) {
}

void UAkGameplayStatics::SetDistanceProbe(AActor* Listener, AActor* DistanceProbe) {
}

void UAkGameplayStatics::SetCurrentAudioCultureAsync(const FString& AudioCulture, const FOnSetCurrentAudioCultureCallback& Completed) {
}

void UAkGameplayStatics::SetCurrentAudioCulture(const FString& AudioCulture, FLatentActionInfo LatentInfo, UObject* WorldContextObject) {
}

bool UAkGameplayStatics::SetBusEffectByName(const FString& InBusName, const int32 InEffectIndex, const UAkEffectShareSet* InEffectShareSet) {
    return false;
}

bool UAkGameplayStatics::SetBusEffectByID(const FAkUniqueID InBusID, const int32 InEffectIndex, const UAkEffectShareSet* InEffectShareSet) {
    return false;
}

void UAkGameplayStatics::SetBusConfig(const FString& BusName, AkChannelConfiguration ChannelConfiguration) {
}

bool UAkGameplayStatics::SetAuxBusEffect(const UAkAuxBus* InAuxBus, const int32 InEffectIndex, const UAkEffectShareSet* InEffectShareSet) {
    return false;
}

bool UAkGameplayStatics::SetActorMixerEffect(const FAkUniqueID InAudioNodeID, const int32 InEffectIndex, const UAkEffectShareSet* InEffectShareSet) {
    return false;
}

int32 UAkGameplayStatics::SeekOnEvent(const FString& in_EventName, UAkComponent* in_pComponent, float in_fPercent, bool in_bSeekToNearestMarker, int32 InPlayingID) {
    return 0;
}

void UAkGameplayStatics::ResetRTPCValue(UAkRtpc* RTPCValue, int32 InterpolationTimeMs, AActor* Actor, FName RTPC) {
}

void UAkGameplayStatics::ReplaceMainOutput(const FAkOutputSettings& MainOutputSettings) {
}

bool UAkGameplayStatics::RenderNextNonRealtimeAudioFrame() {
    return false;
}

void UAkGameplayStatics::RemoveOutput(FAkOutputDeviceID in_OutputDeviceId) {
}

void UAkGameplayStatics::PostTrigger(UAkTrigger* TriggerValue, AActor* Actor, FName Trigger) {
}

void UAkGameplayStatics::PostEventByName(const FString& EventName, AActor* Actor, bool bStopWhenAttachedToDestroyed) {
}

void UAkGameplayStatics::PostEventAtLocationByName(const FString& EventName, FVector Location, FRotator Orientation, UObject* WorldContextObject) {
}

int32 UAkGameplayStatics::PostEventAtLocation(UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, const FString& EventName, UObject* WorldContextObject) {
    return 0;
}

int32 UAkGameplayStatics::PostEvent(UAkAudioEvent* AkEvent, AActor* Actor, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback, bool bStopWhenAttachedToDestroyed, const FString& EventName) {
    return 0;
}

void UAkGameplayStatics::PostAndWaitForEndOfEventAsync(UAkAudioEvent* AkEvent, AActor* Actor, int32& PlayingID, bool bStopWhenAttachedToDestroyed, FLatentActionInfo LatentInfo) {
}

int32 UAkGameplayStatics::PostAndWaitForEndOfEvent(UAkAudioEvent* AkEvent, AActor* Actor, bool bStopWhenAttachedToDestroyed, FLatentActionInfo LatentInfo) {
    return 0;
}

void UAkGameplayStatics::LoadInitBank() {
}

void UAkGameplayStatics::LoadBankByName(const FString& BankName) {
}

bool UAkGameplayStatics::IsGame(UObject* WorldContextObject) {
    return false;
}

bool UAkGameplayStatics::IsEditor() {
    return false;
}

void UAkGameplayStatics::GetSpeakerAngles(TArray<float>& SpeakerAngles, float& HeightAngle, const FString& DeviceShareSet) {
}

int32 UAkGameplayStatics::GetSampleRate() {
    return 0;
}

void UAkGameplayStatics::GetRTPCValue(UAkRtpc* RTPCValue, int32 PlayingID, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, AActor* Actor, FName RTPC) {
}

FString UAkGameplayStatics::GetCurrentAudioCulture() {
    return TEXT("");
}

TArray<FString> UAkGameplayStatics::GetAvailableAudioCultures() {
    return TArray<FString>();
}

UAkComponent* UAkGameplayStatics::GetAkComponentEx(USceneComponent* AttachToComponent, bool& ComponentCreated, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation::Type> LocationType, float CreatedComponentOcclusionRefreshInterval, bool bCreatedComponentAutoDestroy) {
    return NULL;
}

UAkComponent* UAkGameplayStatics::GetAkComponent(USceneComponent* AttachToComponent, bool& ComponentCreated, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation::Type> LocationType) {
    return NULL;
}

UObject* UAkGameplayStatics::GetAkAudioTypeUserData(const UAkAudioType* Instance, const UClass* Type) {
    return NULL;
}

void UAkGameplayStatics::ExecuteActionOnPlayingID(AkActionOnEventType ActionType, int32 PlayingID, int32 TransitionDuration, EAkCurveInterpolation FadeCurve) {
}

void UAkGameplayStatics::ExecuteActionOnEvent(UAkAudioEvent* AkEvent, AkActionOnEventType ActionType, AActor* Actor, int32 TransitionDuration, EAkCurveInterpolation FadeCurve, int32 PlayingID) {
}

int32 UAkGameplayStatics::ComponentSeekOnEvent(UAkComponent* in_pComponent, float in_fPercent, bool in_bSeekToNearestMarker, int32 InPlayingID) {
    return 0;
}

void UAkGameplayStatics::ClearSoundBanksAndMedia() {
}

void UAkGameplayStatics::ClearBanks() {
}

int32 UAkGameplayStatics::CheckPadHeadphonesStatus() {
    return 0;
}

void UAkGameplayStatics::CancelEventCallback(const FOnAkPostEventCallback& PostEventCallback) {
}

void UAkGameplayStatics::AddOutputCaptureMarker(const FString& MarkerText) {
}

void UAkGameplayStatics::AddOutput(const FAkOutputSettings& in_Settings, FAkOutputDeviceID& out_DeviceID, TArray<UAkComponent*>& in_ListenerIDs) {
}


