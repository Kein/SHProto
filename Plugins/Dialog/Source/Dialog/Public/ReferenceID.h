#pragma once
#include "CoreMinimal.h"
#include "DialogObjectID.h"
#include "ReferenceID.generated.h"

USTRUCT(BlueprintType)
struct DIALOG_API FReferenceID : public FDialogObjectID {
    GENERATED_BODY()
public:
    FReferenceID();
};

