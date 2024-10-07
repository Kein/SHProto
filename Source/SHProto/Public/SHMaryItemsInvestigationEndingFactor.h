#pragma once
#include "CoreMinimal.h"
#include "SHIntEndingFactor.h"
#include "SHMaryItemsInvestigationEndingFactor.generated.h"

UCLASS(CollapseCategories, DefaultToInstanced, EditInlineNew)
class SHPROTO_API USHMaryItemsInvestigationEndingFactor : public USHIntEndingFactor {
    GENERATED_BODY()
public:
    USHMaryItemsInvestigationEndingFactor();

    UFUNCTION(Exec)
    void SHDebug_Character_Endings_MaryItemsInvestigationEndingFactor_SetDebugValue(int32 InValue);
    
};

