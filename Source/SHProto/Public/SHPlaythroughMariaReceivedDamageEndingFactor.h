#pragma once
#include "CoreMinimal.h"
#include "SHIntEndingFactor.h"
#include "SHPlaythroughMariaReceivedDamageEndingFactor.generated.h"

UCLASS(CollapseCategories, DefaultToInstanced, EditInlineNew)
class SHPROTO_API USHPlaythroughMariaReceivedDamageEndingFactor : public USHIntEndingFactor {
    GENERATED_BODY()
public:
    USHPlaythroughMariaReceivedDamageEndingFactor();

    UFUNCTION(Exec)
    void SHDebug_Character_Endings_PlaythroughMariaReceivedDamageEndingFactor_SetDebugValue(int32 InValue);
    
};

