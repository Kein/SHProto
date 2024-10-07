#pragma once
#include "CoreMinimal.h"
#include "SHIntEndingFactor.h"
#include "SHPlaythroughKilledEnemiesEndingFactor.generated.h"

UCLASS(CollapseCategories, DefaultToInstanced, EditInlineNew)
class SHPROTO_API USHPlaythroughKilledEnemiesEndingFactor : public USHIntEndingFactor {
    GENERATED_BODY()
public:
    USHPlaythroughKilledEnemiesEndingFactor();

    UFUNCTION(Exec)
    void SHDebug_Character_Endings_PlaythroughKilledEnemiesEndingFactor_SetDebugValue(int32 InValue);
    
};

