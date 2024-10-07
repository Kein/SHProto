#pragma once
#include "CoreMinimal.h"
#include "BInputSource.h"
#include "BInputAxis.generated.h"

UCLASS(BlueprintType)
class PLAYER_API UBInputAxis : public UBInputSource {
    GENERATED_BODY()
public:
    UBInputAxis();

    UFUNCTION(BlueprintPure)
    float GetCurrentValue() const;
    
    UFUNCTION(BlueprintPure)
    FName GetAxisName() const;
    
};

