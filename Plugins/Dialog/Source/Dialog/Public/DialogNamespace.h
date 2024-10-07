#pragma once
#include "CoreMinimal.h"
#include "DialogVariable.h"
#include "DialogNamespace.generated.h"

USTRUCT()
struct FDialogNamespace {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName _Name;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FDialogVariable> _Variables;
    
    DIALOG_API FDialogNamespace();
};

