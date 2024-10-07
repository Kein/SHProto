#pragma once
#include "CoreMinimal.h"
#include "SHEndingFactor.h"
#include "SHBlissEndingFactor.generated.h"

UCLASS()
class SHPROTO_API USHBlissEndingFactor : public USHEndingFactor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(SaveGame)
    bool bIsAllowedToAddValue;
    
    UPROPERTY(SaveGame)
    bool bValue;
    
public:
    USHBlissEndingFactor();

    UFUNCTION(Exec)
    void SHDebug_Character_Endings_Factors_BlissEnding_SetDebugValue(bool bInValue);
    
    UFUNCTION(Exec)
    void SHDebug_Character_Endings_Factors_BlissEnding_SetDebugIsAllowedToAddValue(bool bInValue);
    
};

