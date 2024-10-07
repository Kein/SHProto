#include "MaiReincarnationComponent.h"

UMaiReincarnationComponent::UMaiReincarnationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    // ENGINE_CHANGE
    this->bSaveGame = true;
    this->_Data.AddDefaulted(1);
    this->_MaxNumber = 0;
    this->_ReviveCountLimit = true;
    this->_OverridenParams = false;
    this->_OverridenMaxNumber = 0;
    this->_ReviveCounter = 0;
    this->_EnterCounter = 0;
    this->_CalcEntrance = false;
}

void UMaiReincarnationComponent::SetOverrideData(uint8 maxReincarnationNumber, TArray<FMaiReincarnationInfo> Data) {
}

bool UMaiReincarnationComponent::Reincarnate(float healthPercent) {
    return false;
}

void UMaiReincarnationComponent::OnLeaveReincarnateArea() {
}

void UMaiReincarnationComponent::OnEnterReincarnateArea() {
}

uint8 UMaiReincarnationComponent::GetSeizuresNumber() const {
    return 0;
}

void UMaiReincarnationComponent::FillParams(UMaiReincarnationComponent* Other) {
}

void UMaiReincarnationComponent::EnableCalcEntrance() {
}

void UMaiReincarnationComponent::DecreaseEnterCounter() {
}

void UMaiReincarnationComponent::ClearOverrideData() {
}

bool UMaiReincarnationComponent::AllowReincarnation() const {
    return false;
}


