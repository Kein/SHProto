#pragma once
#include "CoreMinimal.h"
#include "DialogObjectID.h"
#include "QuestObjectiveID.generated.h"

USTRUCT(BlueprintType)
struct DIALOG_API FQuestObjectiveID : public FDialogObjectID {
    GENERATED_BODY()
public:
    FQuestObjectiveID();
};

