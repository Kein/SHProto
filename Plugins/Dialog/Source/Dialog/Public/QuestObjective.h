#pragma once
#include "CoreMinimal.h"
#include "EQuestStatus.h"
#include "QuestObjective.generated.h"

USTRUCT(BlueprintType)
struct FQuestObjective {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    int32 _ObjectiveID;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    EQuestStatus _Status;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText _Name;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText _Description;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    bool _IsHidden;
    
    DIALOG_API FQuestObjective();
};

