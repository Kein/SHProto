#pragma once
#include "CoreMinimal.h"
#include "SHIntEndingFactor.h"
#include "SHAngelasKnifeInvestigationEndingFactor.generated.h"

UCLASS(CollapseCategories, DefaultToInstanced, EditInlineNew)
class SHPROTO_API USHAngelasKnifeInvestigationEndingFactor : public USHIntEndingFactor {
    GENERATED_BODY()
public:
    USHAngelasKnifeInvestigationEndingFactor();

    UFUNCTION(Exec)
    void SHDebug_Character_Endings_AngelasKnifeInvestigationEndingFactor_SetDebugValue(int32 InValue);
    
};

