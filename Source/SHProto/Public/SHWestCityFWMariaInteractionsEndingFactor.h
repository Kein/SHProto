#pragma once
#include "CoreMinimal.h"
#include "SHBoolEndingFactor.h"
#include "SHWestCityFWMariaInteractionsEndingFactor.generated.h"

UCLASS(CollapseCategories, DefaultToInstanced, EditInlineNew)
class SHPROTO_API USHWestCityFWMariaInteractionsEndingFactor : public USHBoolEndingFactor {
    GENERATED_BODY()
public:
    USHWestCityFWMariaInteractionsEndingFactor();

    UFUNCTION(Exec)
    void SHDebug_Character_Endings_WestCityFWMariaInteractionsEndingFactor_SetDebugValue(bool InValue);
    
};

