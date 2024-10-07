#pragma once
#include "CoreMinimal.h"
#include "SHIntEndingFactor.h"
#include "SHPlaythroughHealingExcessEndingFactor.generated.h"

UCLASS(CollapseCategories, DefaultToInstanced, EditInlineNew)
class SHPROTO_API USHPlaythroughHealingExcessEndingFactor : public USHIntEndingFactor {
    GENERATED_BODY()
public:
    USHPlaythroughHealingExcessEndingFactor();

    UFUNCTION(Exec)
    void SHDebug_Character_Endings_PlaythroughHealingExcessEndingFactor_SetDebugValue(int32 InValue);
    
};

