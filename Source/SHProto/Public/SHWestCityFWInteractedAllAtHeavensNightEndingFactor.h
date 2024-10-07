#pragma once
#include "CoreMinimal.h"
#include "SHBoolEndingFactor.h"
#include "SHWestCityFWInteractedAllAtHeavensNightEndingFactor.generated.h"

UCLASS(CollapseCategories, DefaultToInstanced, EditInlineNew)
class SHPROTO_API USHWestCityFWInteractedAllAtHeavensNightEndingFactor : public USHBoolEndingFactor {
    GENERATED_BODY()
public:
    USHWestCityFWInteractedAllAtHeavensNightEndingFactor();

    UFUNCTION(Exec)
    void SHDebug_Character_Endings_WestCityFWInteractedAllAtHeavensNightEndingFactor_SetDebugValue(bool InValue);
    
};

