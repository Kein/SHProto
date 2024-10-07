#include "DialogManager.h"
#include "FlowActionCaller.h"

UDialogManager::UDialogManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    // ENGINE_CHANGE
    this->bSaveGame = true;
    this->_DialogData = NULL;
    this->_ActionCaller = CreateDefaultSubobject<UFlowActionCaller>(TEXT("ActionCaller"));
    this->_UI = NULL;
    this->_Subtitles = NULL;
    this->_ResetOnEnd = true;
    this->_InteractiveTalk = NULL;
}

void UDialogManager::StopTalksWithLowerPriority(uint8 Priority, const UDialogTalk* ignore) {
}

void UDialogManager::SetVOSpeed(float Pitch) {
}

void UDialogManager::SetDialogUI(UDialogUI* UI) {
}

void UDialogManager::RemoveSubtitles(int32 Index) {
}

bool UDialogManager::HasAnyActiveTalk() const {
    return false;
}

UDialogTalk* UDialogManager::getInteractiveTalk() {
    return NULL;
}

void UDialogManager::GetActiveQuests(TArray<UQuest*>& quests) {
}

UDialogTalk* UDialogManager::FindSpeakerTalk(const UDialogSpeaker* speaker) {
    return NULL;
}

UQuest* UDialogManager::FindQuest(const FQuestID& QuestID) const {
    return NULL;
}

UDialogTalk* UDialogManager::FindDialogTalk(const FDialogObjectID& DialogID) {
    return NULL;
}

void UDialogManager::EndDialogTalk(const UDialogSpeaker* speaker, const UDialogTalk* ignore) {
}

UQuest* UDialogManager::beginQuest(const FQuestID& QuestID) {
    return NULL;
}

void UDialogManager::AddLineSubtitles(int32 Index, const FDialogLine& line) {
}


