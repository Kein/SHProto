#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpecialEvent.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASE_API FSpecialEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDateTime FromDate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDateTime ToDate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UTCDate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IgnoreYear;
    
    FSpecialEvent();
};

