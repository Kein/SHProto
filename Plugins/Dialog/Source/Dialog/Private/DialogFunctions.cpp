#include "DialogFunctions.h"

UDialogFunctions::UDialogFunctions() {
}

UDialogTalk* UDialogFunctions::tryPlayTalk(UObject* Context, AActor* caller, AActor* speaker, FDialogFullInfo& Info) {
    return NULL;
}

UDialogTalk* UDialogFunctions::tryPlayAnyTalk(UObject* Context, AActor* caller, AActor* speaker, TArray<FDialogFullInfo>& infos) {
    return NULL;
}

void UDialogFunctions::stopDialogTalk(UDialogTalk* Dialog) {
}

void UDialogFunctions::setFlowInteger(const FFlowInteger& globalID, int32 Value) {
}

void UDialogFunctions::setFlowBoolean(const FFlowBoolean& globalID, bool Value) {
}

UDialogSpeaker* UDialogFunctions::selectRandomSpeaker(const TArray<UDialogSpeaker*>& speakers) {
    return NULL;
}

FQuestObjectiveID UDialogFunctions::selectQuestObjectiveID(UDialogData* Data, FQuestObjectiveID objectiveID) {
    return FQuestObjectiveID{};
}

FQuestID UDialogFunctions::selectQuestID(UDialogData* Data, FQuestID QuestID) {
    return FQuestID{};
}

UDialogSpeaker* UDialogFunctions::selectNearestSpeaker(const TArray<UDialogSpeaker*>& speakers, FVector Origin) {
    return NULL;
}

FFlowInteger UDialogFunctions::selectFlowInteger(UDialogData* Data, FFlowInteger globalID) {
    return FFlowInteger{};
}

FFlowBoolean UDialogFunctions::selectFlowBoolean(UDialogData* Data, FFlowBoolean globalID) {
    return FFlowBoolean{};
}

FDialogLine UDialogFunctions::selectDialogLineID(UDialogData* Data, FDialogLine dialogLineID) {
    return FDialogLine{};
}

FDialogDialog UDialogFunctions::selectDialogID(UDialogData* Data, FDialogDialog DialogID) {
    return FDialogDialog{};
}

FDialogHub UDialogFunctions::selectDialogHubID(UDialogData* Data, FDialogHub dialogHubID) {
    return FDialogHub{};
}

FDialogEntryID UDialogFunctions::selectDialogEntryID(UDialogData* Data, FDialogEntryID DialogEntryID) {
    return FDialogEntryID{};
}

FDialogEntity UDialogFunctions::selectDialogEntityID(UDialogData* Data, FDialogEntity dialogEntityID) {
    return FDialogEntity{};
}

void UDialogFunctions::resumeDialogTalk(UDialogTalk* Dialog) {
}

void UDialogFunctions::preloadVOs(TArray<FDialogTalkID> talkIDs) {
}

void UDialogFunctions::preloadVO(const FDialogTalkID& talkID) {
}

UDialogTalk* UDialogFunctions::playTalk(const TArray<AActor*>& speakers, const FDialogTalkID& talkID, FDialogInfo Info, UObject* Context) {
    return NULL;
}

UDialogTalk* UDialogFunctions::playSpeakerDialog(AActor* caller, UDialogSpeaker* speaker, UObject* Context) {
    return NULL;
}

UDialogTalk* UDialogFunctions::playMonologSingleLine(UObject* WorldContextObject, const FDialogLine& dialogLineID, AActor* speaker, ERange subtitleRange, float overridenSubtitleRange) {
    return NULL;
}

UDialogTalk* UDialogFunctions::playMonologFromLine(UObject* WorldContextObject, const FDialogLine& dialogLineID, AActor* speaker, ERange subtitleRange, float overridenSubtitleRange) {
    return NULL;
}

UDialogTalk* UDialogFunctions::playMonolog(AActor* speaker, const FDialogLine& lineID, FDialogInfo Info, UObject* Context) {
    return NULL;
}

UDialogTalk* UDialogFunctions::playDialogTalk(AActor* caller, AActor* speaker, const FDialogDialog& DialogID, FDialogInfo Info, UObject* Context) {
    return NULL;
}

UDialogTalk* UDialogFunctions::playDialogFromLine(AActor* caller, AActor* speaker, const FDialogLine& dialogLineID, FDialogInfo Info, UObject* Context) {
    return NULL;
}

UDialogTalk* UDialogFunctions::playActorDialog(AActor* caller, AActor* speaker, UObject* Context) {
    return NULL;
}

void UDialogFunctions::pauseDialogTalk(UDialogTalk* Dialog) {
}

bool UDialogFunctions::isValidFlowObjectID(const FDialogObjectID& A) {
    return false;
}

bool UDialogFunctions::isValidFlowGlobal(const FFlowGlobal& globalID) {
    return false;
}

FText UDialogFunctions::getTranslationText(UObject* WorldContextObject, const FFlowText& Text) {
    return FText::GetEmpty();
}

UFlowTemplate* UDialogFunctions::getTemplateObject(const FDialogObjectID& ObjectID) {
    return NULL;
}

FString UDialogFunctions::getTechnicalName(const FDialogObjectID& ObjectID) {
    return TEXT("");
}

FDialogEntity UDialogFunctions::getSpeakerEntity(const FDialogLine& lineID) {
    return FDialogEntity{};
}

FText UDialogFunctions::getLocalizedTextByKey(UObject* WorldContextObject, const FDialogObjectID& ObjectID, const FString& Key) {
    return FText::GetEmpty();
}

FText UDialogFunctions::getLocalizedText(UObject* WorldContextObject, const FFlowText& Text) {
    return FText::GetEmpty();
}

UFlowItem* UDialogFunctions::getItemObject(const FDialogObjectID& ObjectID) {
    return NULL;
}

UDialogTalk* UDialogFunctions::getInteractiveTalk(UObject* WorldContextObject) {
    return NULL;
}

FGuid UDialogFunctions::getGUID(const FDialogObjectID& ObjectID) {
    return FGuid{};
}

int32 UDialogFunctions::getFlowInteger(const FFlowInteger& globalID) {
    return 0;
}

bool UDialogFunctions::getFlowBoolean(const FFlowBoolean& globalID) {
    return false;
}

FString UDialogFunctions::getDisplayName(const FDialogObjectID& ObjectID) {
    return TEXT("");
}

FColor UDialogFunctions::getDisplayColor(const FDialogObjectID& ObjectID) {
    return FColor{};
}

UDialogManager* UDialogFunctions::getDialogManager(UObject* WorldContextObject) {
    return NULL;
}

TArray<UDialogSpeaker*> UDialogFunctions::getAllSpeakers(UObject* Context, const TArray<AActor*>& onlyFromActors) {
    return TArray<UDialogSpeaker*>();
}

void UDialogFunctions::finishObjective(UObject* WorldContextObject, const FQuestObjectiveID& objectiveID, EQuestResult Result) {
}

TArray<UDialogSpeaker*> UDialogFunctions::filterSpeakersByVoice(const TArray<UDialogSpeaker*>& speakers, const FDialogEntity& entity) {
    return TArray<UDialogSpeaker*>();
}

TArray<UDialogSpeaker*> UDialogFunctions::filterSpeakersByGameplayTags(const TArray<UDialogSpeaker*>& speakers, const FGameplayTagContainer& Tags) {
    return TArray<UDialogSpeaker*>();
}

TArray<UDialogSpeaker*> UDialogFunctions::filterSpeakersByEntity(const TArray<UDialogSpeaker*>& speakers, const FDialogEntity& entity, bool checkVoices) {
    return TArray<UDialogSpeaker*>();
}

TArray<UDialogSpeaker*> UDialogFunctions::filterSpeakersByDistance(const TArray<UDialogSpeaker*>& speakers, float maxDistToPlayer) {
    return TArray<UDialogSpeaker*>();
}

bool UDialogFunctions::equalFlowObjectID(const FDialogObjectID& A, const FDialogObjectID& B) {
    return false;
}

void UDialogFunctions::destroySpeaker(UDialogSpeaker* speaker) {
}

void UDialogFunctions::clearVOsCache(TArray<FDialogTalkID> talkIDs) {
}

void UDialogFunctions::clearVOCache(const FDialogTalkID& talkID) {
}

bool UDialogFunctions::canPlayTalk(const TArray<AActor*>& speakers, const FDialogTalkID& talkID, FDialogInfo Info, UObject* Context) {
    return false;
}

UQuest* UDialogFunctions::beginQuest(UObject* WorldContextObject, const FQuestID& QuestID) {
    return NULL;
}


