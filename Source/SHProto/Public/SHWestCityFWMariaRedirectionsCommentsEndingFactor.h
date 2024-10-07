#pragma once
#include "CoreMinimal.h"
#include "SHIntEndingFactor.h"
#include "SHWestCityFWMariaRedirectionsCommentsEndingFactor.generated.h"

UCLASS(CollapseCategories, DefaultToInstanced, EditInlineNew)
class SHPROTO_API USHWestCityFWMariaRedirectionsCommentsEndingFactor : public USHIntEndingFactor {
    GENERATED_BODY()
public:
    USHWestCityFWMariaRedirectionsCommentsEndingFactor();

    UFUNCTION(Exec)
    void SHDebug_Character_Endings_WestCityFWMariaRedirectionsCommentsEndingFactor_SetDebugValue(int32 InValue);
    
};

