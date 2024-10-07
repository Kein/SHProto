#pragma once
#include "CoreMinimal.h"
#include "DialogTalkID.h"
#include "DialogHub.generated.h"

USTRUCT(BlueprintType)
struct DIALOG_API FDialogHub : public FDialogTalkID {
    GENERATED_BODY()
public:
    FDialogHub();
};

