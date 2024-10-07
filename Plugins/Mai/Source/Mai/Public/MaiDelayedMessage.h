#pragma once
#include "CoreMinimal.h"
#include "MaiDelayedMessage.generated.h"

class UMaiMessage;

USTRUCT(BlueprintType)
struct MAI_API FMaiDelayedMessage {
    GENERATED_BODY()
public:
    UPROPERTY()
    UMaiMessage* _Message;
    
    FMaiDelayedMessage();
};

