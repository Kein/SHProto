#pragma once
#include "CoreMinimal.h"
#include "DialogTalkID.h"
#include "DialogLine.generated.h"

USTRUCT(BlueprintType)
struct DIALOG_API FDialogLine : public FDialogTalkID {
    GENERATED_BODY()
public:
    FDialogLine();
};

