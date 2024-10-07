#pragma once
#include "CoreMinimal.h"
#include "DialogObjectID.h"
#include "QuestID.generated.h"

USTRUCT(BlueprintType)
struct DIALOG_API FQuestID : public FDialogObjectID {
    GENERATED_BODY()
public:
    FQuestID();
};

