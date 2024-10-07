#include "MaiManager.h"
#include "MaiDebugger.h"

UMaiManager::UMaiManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_DebuggerClass = AMaiDebugger::StaticClass();
    this->_Debugger = NULL;
}

void UMaiManager::SetPartyAttitude(uint8 partyID1, uint8 partyID2, EPartyAttitude attitude) {
}

void UMaiManager::SetNavigationForStreamingLevel(bool set) {
}

void UMaiManager::NegateBool(const FString& VariableName) {
}

void UMaiManager::LockNavMeshGeneration(bool lock, FName Reason) {
}

EPartyAttitude UMaiManager::GetPartyAttitude(uint8 partyID1, uint8 partyID2) const {
    return EPartyAttitude::Unknown;
}

EMaiDifficultyLevel UMaiManager::getDifficultyLevel(const UObject* WorldContext) {
    return EMaiDifficultyLevel::NONE;
}


