#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DataState.h"
#include "DialogGlobalEventDelegate.h"
#include "DialogLine.h"
#include "DialogObjectID.h"
#include "EventAnyDialogDelegate.h"
#include "EventAnyLineDelegate.h"
#include "QuestBeginDelegate.h"
#include "QuestData.h"
#include "QuestFinishDelegate.h"
#include "QuestID.h"
#include "DialogManager.generated.h"

class UDialogData;
class UDialogSpeaker;
class UDialogSubtitles;
class UDialogTalk;
class UDialogUI;
class UFlowActionCaller;
class UQuest;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DIALOG_API UDialogManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogData* _DialogData;
    
    UPROPERTY(AdvancedDisplay, Instanced, VisibleAnywhere)
    TArray<UDialogSpeaker*> _AllSpeakers;
    
    UPROPERTY(AdvancedDisplay, Instanced, VisibleAnywhere)
    TArray<UDialogSpeaker*> _PlayerSpeakers;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleInstanceOnly)
    UFlowActionCaller* _ActionCaller;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UDialogUI* _UI;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UDialogSubtitles* _Subtitles;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool _ResetOnEnd;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Instanced, VisibleAnywhere)
    TArray<UDialogTalk*> _DialogTalks;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Instanced, VisibleAnywhere)
    UDialogTalk* _InteractiveTalk;
    
    UPROPERTY(AdvancedDisplay, SaveGame, VisibleAnywhere)
    TArray<UDialogData*> _DialogDataList;
    
public:
    UPROPERTY(BlueprintAssignable)
    FDialogGlobalEvent _OnDialogBegin;
    
    UPROPERTY(BlueprintAssignable)
    FDialogGlobalEvent _OnDialogFinish;
    
    UPROPERTY(BlueprintAssignable)
    FEventAnyDialog OnAnyDialogBegin;
    
    UPROPERTY(BlueprintAssignable)
    FEventAnyDialog OnAnyDialogEnd;
    
    UPROPERTY(BlueprintAssignable)
    FEventAnyLine OnAnyLineBegin;
    
    UPROPERTY(BlueprintAssignable)
    FEventAnyLine OnAnyLineEnd;
    
private:
    UPROPERTY(SaveGame)
    TMap<UDialogData*, FDataState> _DialogDataSaveGame;
    
public:
    UPROPERTY(SaveGame)
    TArray<FQuestData> _QuestsData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Instanced, VisibleAnywhere)
    TArray<UQuest*> _Quests;
    
    UPROPERTY(BlueprintAssignable)
    FQuestBegin _OnQuestBegin;
    
    UPROPERTY(BlueprintAssignable)
    FQuestFinish _OnQuestFinish;
    
    UPROPERTY(BlueprintAssignable)
    FQuestBegin _OnObjectiveBegin;
    
    UPROPERTY(BlueprintAssignable)
    FQuestFinish _OnObjectiveFinish;
    
    UDialogManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopTalksWithLowerPriority(uint8 Priority, const UDialogTalk* ignore);
    
    UFUNCTION(BlueprintCallable)
    void SetVOSpeed(float Pitch);
    
    UFUNCTION(BlueprintCallable)
    void SetDialogUI(UDialogUI* UI);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSubtitles(int32 Index);
    
    UFUNCTION(BlueprintPure)
    bool HasAnyActiveTalk() const;
    
    UFUNCTION(BlueprintPure)
    UDialogTalk* getInteractiveTalk();
    
    UFUNCTION(BlueprintPure)
    void GetActiveQuests(TArray<UQuest*>& quests);
    
    UFUNCTION(BlueprintPure)
    UDialogTalk* FindSpeakerTalk(const UDialogSpeaker* speaker);
    
    UFUNCTION(BlueprintPure)
    UQuest* FindQuest(const FQuestID& QuestID) const;
    
    UFUNCTION(BlueprintPure)
    UDialogTalk* FindDialogTalk(const FDialogObjectID& DialogID);
    
    UFUNCTION(BlueprintCallable)
    void EndDialogTalk(const UDialogSpeaker* speaker, const UDialogTalk* ignore);
    
    UFUNCTION(BlueprintCallable)
    UQuest* beginQuest(const FQuestID& QuestID);
    
    UFUNCTION(BlueprintCallable)
    void AddLineSubtitles(int32 Index, const FDialogLine& line);
    
};

