#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CsvLocalization.generated.h"

USTRUCT(BlueprintType)
struct FCsvLocalization : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Comment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Source;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Translation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Changed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString OldSource;
    
    DIALOG_API FCsvLocalization();
};

