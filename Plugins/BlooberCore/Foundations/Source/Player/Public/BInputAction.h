#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "BInputSource.h"
#include "BInputAction.generated.h"

UCLASS(BlueprintType)
class PLAYER_API UBInputAction : public UBInputSource {
    GENERATED_BODY()
public:
    UBInputAction();

    UFUNCTION(BlueprintPure)
    bool IsReleased() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPressed() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRepeatCount() const;
    
    UFUNCTION(BlueprintPure)
    FKey GetLastPressedKey() const;
    
};

