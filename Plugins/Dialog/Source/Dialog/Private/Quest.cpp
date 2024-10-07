#include "Quest.h"

UQuest::UQuest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_Status = EQuestStatus::UNKNOWN;
    this->_StoryRecap = 0;
    this->_Manager = NULL;
}

void UQuest::Update() {
}

void UQuest::SetObjectiveStatus(const FQuestObjectiveID& objectiveID, EQuestStatus Status) {
}

bool UQuest::HasActiveStoryRecap() const {
    return false;
}

FText UQuest::GetStoryRecap() const {
    return FText::GetEmpty();
}

EQuestStatus UQuest::GetObjectiveStatus(const FQuestObjectiveID& objectiveID) const {
    return EQuestStatus::UNKNOWN;
}

void UQuest::GetObjectives(EQuestStatus Status, TArray<FQuestObjective>& objectives) const {
}

FText UQuest::GetName() const {
    return FText::GetEmpty();
}


