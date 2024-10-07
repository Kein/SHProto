#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FlowItemCSV.generated.h"

USTRUCT(BlueprintType)
struct FFlowItemCSV : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Parent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Type;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString speaker;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Text;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Param0;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Inputs;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Outputs;
    
    DIALOG_API FFlowItemCSV();
};

