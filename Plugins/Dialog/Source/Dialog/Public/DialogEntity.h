#pragma once
#include "CoreMinimal.h"
#include "DialogObjectID.h"
#include "DialogEntity.generated.h"

USTRUCT(BlueprintType)
struct DIALOG_API FDialogEntity : public FDialogObjectID {
    GENERATED_BODY()
public:
    FDialogEntity();
};
FORCEINLINE uint32 GetTypeHash(const FDialogEntity) { return 0; }

