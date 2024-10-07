#pragma once
#include "CoreMinimal.h"
#include "SHEndingValueProcessor.h"
#include "SHPlayerHealingExcessEndingValueProcessor.generated.h"

class USHCharacterPlayHealthComponent;

UCLASS()
class SHPROTO_API USHPlayerHealingExcessEndingValueProcessor : public USHEndingValueProcessor {
    GENERATED_BODY()
public:
    USHPlayerHealingExcessEndingValueProcessor();

protected:
    UFUNCTION()
    void ProcessHealthValueChangedDetailed(USHCharacterPlayHealthComponent* healthComponent, float ChangeDelta, float OldValue, float NewValue);
    
};

