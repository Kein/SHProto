#pragma once
#include "CoreMinimal.h"
#include "DialogNamespace.h"
#include "DialogGlobals.generated.h"

USTRUCT(BlueprintType)
struct FDialogGlobals {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FDialogNamespace> _Namespaces;
    
    DIALOG_API FDialogGlobals();
};

