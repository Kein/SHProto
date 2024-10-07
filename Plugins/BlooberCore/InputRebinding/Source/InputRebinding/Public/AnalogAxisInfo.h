#pragma once
#include "CoreMinimal.h"
#include "UE4InputHandle.h"
#include "AnalogAxisInfo.generated.h"

USTRUCT(BlueprintType)
struct INPUTREBINDING_API FAnalogAxisInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(EditAnywhere)
    FText Description;
    
    UPROPERTY(EditAnywhere)
    FUE4InputHandle XAxisHandle;
    
    UPROPERTY(EditAnywhere)
    FUE4InputHandle YAxisHandle;
    
    FAnalogAxisInfo();
};

