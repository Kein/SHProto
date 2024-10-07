#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "DialogDialog.h"
#include "DialogEntity.h"
#include "DialogEntryID.h"
#include "DialogFullInfo.h"
#include "DialogHub.h"
#include "DialogInfo.h"
#include "DialogLine.h"
#include "DialogObjectID.h"
#include "DialogTalkID.h"
#include "EQuestResult.h"
#include "ERange.h"
#include "FlowBoolean.h"
#include "FlowGlobal.h"
#include "FlowInteger.h"
#include "FlowText.h"
#include "QuestID.h"
#include "QuestObjectiveID.h"
#include "DialogFunctions.generated.h"

class AActor;
class UDialogData;
class UDialogManager;
class UDialogSpeaker;
class UDialogTalk;
class UFlowItem;
class UFlowTemplate;
class UObject;
class UQuest;

UCLASS(BlueprintType)
class DIALOG_API UDialogFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDialogFunctions();

    UFUNCTION(BlueprintCallable)
    static UDialogTalk* tryPlayTalk(UObject* Context, AActor* caller, AActor* speaker, UPARAM(Ref) FDialogFullInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    static UDialogTalk* tryPlayAnyTalk(UObject* Context, AActor* caller, AActor* speaker, UPARAM(Ref) TArray<FDialogFullInfo>& infos);
    
    UFUNCTION(BlueprintCallable)
    static void stopDialogTalk(UDialogTalk* Dialog);
    
    UFUNCTION(BlueprintCallable)
    static void setFlowInteger(const FFlowInteger& globalID, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void setFlowBoolean(const FFlowBoolean& globalID, bool Value);
    
    UFUNCTION(BlueprintPure)
    static UDialogSpeaker* selectRandomSpeaker(const TArray<UDialogSpeaker*>& speakers);
    
    UFUNCTION(BlueprintPure)
    static FQuestObjectiveID selectQuestObjectiveID(UDialogData* Data, FQuestObjectiveID objectiveID);
    
    UFUNCTION(BlueprintPure)
    static FQuestID selectQuestID(UDialogData* Data, FQuestID QuestID);
    
    UFUNCTION(BlueprintPure)
    static UDialogSpeaker* selectNearestSpeaker(const TArray<UDialogSpeaker*>& speakers, FVector Origin);
    
    UFUNCTION(BlueprintPure)
    static FFlowInteger selectFlowInteger(UDialogData* Data, FFlowInteger globalID);
    
    UFUNCTION(BlueprintPure)
    static FFlowBoolean selectFlowBoolean(UDialogData* Data, FFlowBoolean globalID);
    
    UFUNCTION(BlueprintPure)
    static FDialogLine selectDialogLineID(UDialogData* Data, FDialogLine dialogLineID);
    
    UFUNCTION(BlueprintPure)
    static FDialogDialog selectDialogID(UDialogData* Data, FDialogDialog DialogID);
    
    UFUNCTION(BlueprintPure)
    static FDialogHub selectDialogHubID(UDialogData* Data, FDialogHub dialogHubID);
    
    UFUNCTION(BlueprintPure)
    static FDialogEntryID selectDialogEntryID(UDialogData* Data, FDialogEntryID DialogEntryID);
    
    UFUNCTION(BlueprintPure)
    static FDialogEntity selectDialogEntityID(UDialogData* Data, FDialogEntity dialogEntityID);
    
    UFUNCTION(BlueprintCallable)
    static void resumeDialogTalk(UDialogTalk* Dialog);
    
    UFUNCTION(BlueprintCallable)
    static void preloadVOs(TArray<FDialogTalkID> talkIDs);
    
    UFUNCTION(BlueprintCallable)
    static void preloadVO(const FDialogTalkID& talkID);
    
    UFUNCTION(BlueprintCallable)
    static UDialogTalk* playTalk(const TArray<AActor*>& speakers, const FDialogTalkID& talkID, FDialogInfo Info, UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static UDialogTalk* playSpeakerDialog(AActor* caller, UDialogSpeaker* speaker, UObject* Context);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDialogTalk* playMonologSingleLine(UObject* WorldContextObject, const FDialogLine& dialogLineID, AActor* speaker, ERange subtitleRange, float overridenSubtitleRange);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDialogTalk* playMonologFromLine(UObject* WorldContextObject, const FDialogLine& dialogLineID, AActor* speaker, ERange subtitleRange, float overridenSubtitleRange);
    
    UFUNCTION(BlueprintCallable)
    static UDialogTalk* playMonolog(AActor* speaker, const FDialogLine& lineID, FDialogInfo Info, UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static UDialogTalk* playDialogTalk(AActor* caller, AActor* speaker, const FDialogDialog& DialogID, FDialogInfo Info, UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static UDialogTalk* playDialogFromLine(AActor* caller, AActor* speaker, const FDialogLine& dialogLineID, FDialogInfo Info, UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static UDialogTalk* playActorDialog(AActor* caller, AActor* speaker, UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static void pauseDialogTalk(UDialogTalk* Dialog);
    
    UFUNCTION(BlueprintPure)
    static bool isValidFlowObjectID(const FDialogObjectID& A);
    
    UFUNCTION(BlueprintPure)
    static bool isValidFlowGlobal(const FFlowGlobal& globalID);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText getTranslationText(UObject* WorldContextObject, const FFlowText& Text);
    
    UFUNCTION(BlueprintPure)
    static UFlowTemplate* getTemplateObject(const FDialogObjectID& ObjectID);
    
    UFUNCTION(BlueprintPure)
    static FString getTechnicalName(const FDialogObjectID& ObjectID);
    
    UFUNCTION(BlueprintPure)
    static FDialogEntity getSpeakerEntity(const FDialogLine& lineID);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText getLocalizedTextByKey(UObject* WorldContextObject, const FDialogObjectID& ObjectID, const FString& Key);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText getLocalizedText(UObject* WorldContextObject, const FFlowText& Text);
    
    UFUNCTION(BlueprintPure)
    static UFlowItem* getItemObject(const FDialogObjectID& ObjectID);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDialogTalk* getInteractiveTalk(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FGuid getGUID(const FDialogObjectID& ObjectID);
    
    UFUNCTION(BlueprintPure)
    static int32 getFlowInteger(const FFlowInteger& globalID);
    
    UFUNCTION(BlueprintPure)
    static bool getFlowBoolean(const FFlowBoolean& globalID);
    
    UFUNCTION(BlueprintPure)
    static FString getDisplayName(const FDialogObjectID& ObjectID);
    
    UFUNCTION(BlueprintPure)
    static FColor getDisplayColor(const FDialogObjectID& ObjectID);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDialogManager* getDialogManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static TArray<UDialogSpeaker*> getAllSpeakers(UObject* Context, const TArray<AActor*>& onlyFromActors);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void finishObjective(UObject* WorldContextObject, const FQuestObjectiveID& objectiveID, EQuestResult Result);
    
    UFUNCTION(BlueprintPure)
    static TArray<UDialogSpeaker*> filterSpeakersByVoice(const TArray<UDialogSpeaker*>& speakers, const FDialogEntity& entity);
    
    UFUNCTION(BlueprintPure)
    static TArray<UDialogSpeaker*> filterSpeakersByGameplayTags(const TArray<UDialogSpeaker*>& speakers, const FGameplayTagContainer& Tags);
    
    UFUNCTION(BlueprintPure)
    static TArray<UDialogSpeaker*> filterSpeakersByEntity(const TArray<UDialogSpeaker*>& speakers, const FDialogEntity& entity, bool checkVoices);
    
    UFUNCTION(BlueprintPure)
    static TArray<UDialogSpeaker*> filterSpeakersByDistance(const TArray<UDialogSpeaker*>& speakers, float maxDistToPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool equalFlowObjectID(const FDialogObjectID& A, const FDialogObjectID& B);
    
    UFUNCTION(BlueprintCallable)
    static void destroySpeaker(UDialogSpeaker* speaker);
    
    UFUNCTION(BlueprintCallable)
    static void clearVOsCache(TArray<FDialogTalkID> talkIDs);
    
    UFUNCTION(BlueprintCallable)
    static void clearVOCache(const FDialogTalkID& talkID);
    
    UFUNCTION(BlueprintPure)
    static bool canPlayTalk(const TArray<AActor*>& speakers, const FDialogTalkID& talkID, FDialogInfo Info, UObject* Context);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UQuest* beginQuest(UObject* WorldContextObject, const FQuestID& QuestID);
    
};

