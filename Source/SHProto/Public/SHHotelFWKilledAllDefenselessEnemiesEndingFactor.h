#pragma once
#include "CoreMinimal.h"
#include "SHBoolEndingFactor.h"
#include "SHHotelFWKilledAllDefenselessEnemiesEndingFactor.generated.h"

UCLASS(CollapseCategories, DefaultToInstanced, EditInlineNew)
class SHPROTO_API USHHotelFWKilledAllDefenselessEnemiesEndingFactor : public USHBoolEndingFactor {
    GENERATED_BODY()
public:
    USHHotelFWKilledAllDefenselessEnemiesEndingFactor();

    UFUNCTION(Exec)
    void SHDebug_Character_Endings_HotelFWKilledAllDefenselessEnemiesEndingFactor_SetDebugValue(bool InValue);
    
};

