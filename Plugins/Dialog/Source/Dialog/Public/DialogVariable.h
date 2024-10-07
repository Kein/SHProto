#pragma once
#include "CoreMinimal.h"
#include "DialogVariable.generated.h"

class UDialogVariableData;

USTRUCT()
struct FDialogVariable {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName _Name;
    
    UPROPERTY(EditAnywhere, Transient)
    UDialogVariableData* _Data;
    
    DIALOG_API FDialogVariable();
};

