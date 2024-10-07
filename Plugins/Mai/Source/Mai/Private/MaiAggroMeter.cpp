#include "MaiAggroMeter.h"

UMaiAggroMeter::UMaiAggroMeter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    // ENGINE_CHANGE
    this->bSaveGame = true;
    this->_WeakSenses[0] = 1;
    this->_WeakSenses[1] = 1;
    this->_WeakSenses[2] = 1;
    this->_WeakSenses[3] = 1;
    this->_WeakSenses[4] = 1;
    this->_WeakSenses[5] = 1;
    this->_WeakSenses[6] = 1;
    this->_Aggro = 0.00f;
    this->_TimeSinceLastAccumulate = 0.00f;
    this->_BehaviorStance = EMaiAggroStance::Max;
    this->_Controller = NULL;
}

void UMaiAggroMeter::WeakDisableGain(bool disable, FName Reason) {
}

void UMaiAggroMeter::SetBehaviorStance(EMaiAggroStance stance) {
}

void UMaiAggroMeter::SetAggro(float NewAggro, bool Force) {
}

void UMaiAggroMeter::RemoveGainMod(UDaiFloatModifier* mod, EMaiSenseType sense, FName Name) {
}

void UMaiAggroMeter::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus) {
}

bool UMaiAggroMeter::IsNeutral() const {
    return false;
}

bool UMaiAggroMeter::IsCautious() const {
    return false;
}

bool UMaiAggroMeter::IsAggroGainDisabled() const {
    return false;
}

bool UMaiAggroMeter::IsAggressive() const {
    return false;
}

float UMaiAggroMeter::GetStanceMinAggro(EMaiAggroStance stance) const {
    return 0.0f;
}

float UMaiAggroMeter::GetStanceMaxAggro(EMaiAggroStance stance) const {
    return 0.0f;
}

EMaiAggroStance UMaiAggroMeter::GetStance() const {
    return EMaiAggroStance::Neutral;
}

EMaiSenseType UMaiAggroMeter::getSenseTypeForStimulus(UObject* WorldContextObject, const FAIStimulus& Stimulus) {
    return EMaiSenseType::Any;
}

AActor* UMaiAggroMeter::GetMostHated() const {
    return NULL;
}

FString UMaiAggroMeter::GetDebugText() const {
    return TEXT("");
}

FColor UMaiAggroMeter::GetDebugColor() const {
    return FColor{};
}

EMaiAggroStance UMaiAggroMeter::GetBehaviorStance() const {
    return EMaiAggroStance::Neutral;
}

UMaiAggroMeter* UMaiAggroMeter::getAggroMeter(AActor* Actor) {
    return NULL;
}

float UMaiAggroMeter::GetAggro() const {
    return 0.0f;
}

void UMaiAggroMeter::DisableGain(bool disable, FName Reason) {
}

void UMaiAggroMeter::DisableDecay(bool disable, FName Reason) {
}

void UMaiAggroMeter::ClearWeakDisableGain() {
}

void UMaiAggroMeter::AddGainMod(UDaiFloatModifier* mod, EMaiSenseType sense, FName Name) {
}

void UMaiAggroMeter::AddAggro(float Aggro, bool Force) {
}


