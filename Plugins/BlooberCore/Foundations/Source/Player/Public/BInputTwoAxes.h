#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BInputSource.h"
#include "BInputTwoAxes.generated.h"

UCLASS(BlueprintType)
class PLAYER_API UBInputTwoAxes : public UBInputSource {
    GENERATED_BODY()
public:
    UBInputTwoAxes();

    UFUNCTION(BlueprintPure)
    FName GetSecondAxisName() const;
    
    UFUNCTION(BlueprintPure)
    FName GetFirstAxisName() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetCurrentValue() const;
    
};

