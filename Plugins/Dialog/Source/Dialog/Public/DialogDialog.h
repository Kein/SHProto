#pragma once
#include "CoreMinimal.h"
#include "DialogTalkID.h"
#include "DialogDialog.generated.h"

USTRUCT(BlueprintType)
struct DIALOG_API FDialogDialog : public FDialogTalkID {
    GENERATED_BODY()
public:
    FDialogDialog();
};

