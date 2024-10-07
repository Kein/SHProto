#pragma once
#include "CoreMinimal.h"
#include "DialogObjectID.h"
#include "EQuestStatus.h"
#include "QuestObjective.h"
#include "QuestData.generated.h"

USTRUCT(BlueprintType)
struct FQuestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FDialogObjectID _QuestID;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    EQuestStatus _Status;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    TArray<FQuestObjective> _Objectives;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    int32 _StoryRecap;
    
    DIALOG_API FQuestData();
};

