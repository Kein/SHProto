#pragma once
#include "CoreMinimal.h"
#include "EStruggleInputSize.h"
#include "EStruggleInputVisibility.h"
#include "StruggleInputData.generated.h"

USTRUCT(BlueprintType)
struct FStruggleInputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EStruggleInputVisibility Visibility;
    
    UPROPERTY(BlueprintReadOnly)
    EStruggleInputSize Size;
    
    SHPROTO_API FStruggleInputData();
};

