#pragma once
#include "CoreMinimal.h"
#include "FlowGlobal.generated.h"

class UDialogData;

USTRUCT(BlueprintType)
struct FFlowGlobal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDialogData* _DialogData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName _Name;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 _TypeID;
    
    DIALOG_API FFlowGlobal();
};

