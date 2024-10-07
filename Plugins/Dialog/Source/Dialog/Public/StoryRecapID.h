#pragma once
#include "CoreMinimal.h"
#include "DialogObjectID.h"
#include "StoryRecapID.generated.h"

USTRUCT(BlueprintType)
struct DIALOG_API FStoryRecapID : public FDialogObjectID {
    GENERATED_BODY()
public:
    FStoryRecapID();
};

