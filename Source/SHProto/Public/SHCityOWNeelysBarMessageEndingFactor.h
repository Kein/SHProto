#pragma once
#include "CoreMinimal.h"
#include "SHBoolEndingFactor.h"
#include "SHCityOWNeelysBarMessageEndingFactor.generated.h"

UCLASS(CollapseCategories, DefaultToInstanced, EditInlineNew)
class SHPROTO_API USHCityOWNeelysBarMessageEndingFactor : public USHBoolEndingFactor {
    GENERATED_BODY()
public:
    USHCityOWNeelysBarMessageEndingFactor();

    UFUNCTION(Exec)
    void SHDebug_Character_Endings_CityOWNeelysBarMessageEndingFactor_SetDebugValue(bool InValue);
    
};

