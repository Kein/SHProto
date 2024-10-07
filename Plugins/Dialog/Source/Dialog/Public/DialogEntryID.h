#pragma once
#include "CoreMinimal.h"
#include "DialogTalkID.h"
#include "DialogEntryID.generated.h"

USTRUCT(BlueprintType)
struct DIALOG_API FDialogEntryID : public FDialogTalkID {
    GENERATED_BODY()
public:
    FDialogEntryID();
};

