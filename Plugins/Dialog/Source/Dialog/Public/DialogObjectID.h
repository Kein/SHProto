#pragma once
#include "CoreMinimal.h"
#include "FlowObjectID.h"
#include "DialogObjectID.generated.h"

USTRUCT(BlueprintType)
struct DIALOG_API FDialogObjectID : public FFlowObjectID {
    GENERATED_BODY()
public:
    FDialogObjectID();
};
FORCEINLINE uint32 GetTypeHash(const FDialogObjectID) { return 0; }

