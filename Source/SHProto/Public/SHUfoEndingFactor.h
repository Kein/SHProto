#pragma once
#include "CoreMinimal.h"
#include "ESHUfoEndingInteraction.h"
#include "SHEndingFactor.h"
#include "SHUfoEndingFactor.generated.h"

UCLASS()
class SHPROTO_API USHUfoEndingFactor : public USHEndingFactor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(SaveGame)
    TMap<ESHUfoEndingInteraction, bool> InteractionToValueMap;
    
public:
    USHUfoEndingFactor();

    UFUNCTION(Exec)
    void SHDebug_Character_Endings_Factors_UFOEnding_SetDebugValue(int32 InInteractionIndex);
    
    UFUNCTION(Exec)
    void SHDebug_Character_Endings_Factors_UFOEnding_DrawDebug();
    
};

