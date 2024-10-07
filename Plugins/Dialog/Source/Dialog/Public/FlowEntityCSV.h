#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FlowEntityCSV.generated.h"

USTRUCT(BlueprintType)
struct FFlowEntityCSV : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString ID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Template;
    
    DIALOG_API FFlowEntityCSV();
};

