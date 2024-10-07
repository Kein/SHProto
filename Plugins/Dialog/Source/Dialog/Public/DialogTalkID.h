#pragma once
#include "CoreMinimal.h"
#include "DialogObjectID.h"
#include "DialogTalkID.generated.h"

USTRUCT(BlueprintType)
struct DIALOG_API FDialogTalkID : public FDialogObjectID {
    GENERATED_BODY()
public:
    FDialogTalkID();
};

