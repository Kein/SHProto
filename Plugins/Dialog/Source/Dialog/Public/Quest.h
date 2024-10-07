#pragma once
#include "CoreMinimal.h"
#include "EQuestStatus.h"
#include "FlowTask.h"
#include "QuestObjective.h"
#include "QuestObjectiveID.h"
#include "Quest.generated.h"

class UDialogManager;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DIALOG_API UQuest : public UFlowTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EQuestStatus _Status;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FQuestObjective> _Objectives;
    
    UPROPERTY(VisibleAnywhere)
    int32 _StoryRecap;
    
private:
    UPROPERTY(Instanced, Transient)
    UDialogManager* _Manager;
    
public:
    UQuest(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Update();
    
    UFUNCTION(BlueprintCallable)
    void SetObjectiveStatus(const FQuestObjectiveID& objectiveID, EQuestStatus Status);
    
    UFUNCTION(BlueprintPure)
    bool HasActiveStoryRecap() const;
    
    UFUNCTION(BlueprintPure)
    FText GetStoryRecap() const;
    
    UFUNCTION(BlueprintPure)
    EQuestStatus GetObjectiveStatus(const FQuestObjectiveID& objectiveID) const;
    
    UFUNCTION(BlueprintPure)
    void GetObjectives(EQuestStatus Status, TArray<FQuestObjective>& objectives) const;
    
    UFUNCTION(BlueprintPure)
    FText GetName() const;
    
};

