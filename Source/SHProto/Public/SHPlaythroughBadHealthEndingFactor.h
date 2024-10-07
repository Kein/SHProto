#pragma once
#include "CoreMinimal.h"
#include "SHFloatEndingFactor.h"
#include "SHPlaythroughBadHealthEndingFactor.generated.h"

UCLASS(CollapseCategories, DefaultToInstanced, EditInlineNew)
class SHPROTO_API USHPlaythroughBadHealthEndingFactor : public USHFloatEndingFactor {
    GENERATED_BODY()
public:
    USHPlaythroughBadHealthEndingFactor();

    UFUNCTION(Exec)
    void SHDebug_Character_Endings_PlaythroughBadHealthEndingFactor_SetDebugValue(float InValue);
    
};

