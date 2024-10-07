#pragma once
#include "CoreMinimal.h"
#include "SHEndingValueProcessor.h"
#include "SHMariaReceivedDamageEndingValueProcessor.generated.h"

class UMaiHealth;

UCLASS()
class SHPROTO_API USHMariaReceivedDamageEndingValueProcessor : public USHEndingValueProcessor {
    GENERATED_BODY()
public:
    USHMariaReceivedDamageEndingValueProcessor();

protected:
    UFUNCTION()
    void ProcessMariaHealthChanged(UMaiHealth* healthComponent, int32 PreviousHealthValue);
    
};

