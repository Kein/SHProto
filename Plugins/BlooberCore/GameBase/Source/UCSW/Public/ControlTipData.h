#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InputCoreTypes.h"
#include "UE4InputHandle.h"
#include "ControlTipData.generated.h"

USTRUCT(BlueprintType)
struct FControlTipData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FUE4InputHandle> Inputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FKey> Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText TooltipKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText TooltipButtons;
    
    UCSW_API FControlTipData();
};

