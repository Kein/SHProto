#pragma once
#include "CoreMinimal.h"
#include "SHEndingFactor.h"
#include "SHAlreadySeenEndingsEndingFactor.generated.h"

UCLASS(CollapseCategories, DefaultToInstanced, EditInlineNew)
class SHPROTO_API USHAlreadySeenEndingsEndingFactor : public USHEndingFactor {
    GENERATED_BODY()
public:
    USHAlreadySeenEndingsEndingFactor();

    UFUNCTION(Exec)
    void SHDebug_Character_Endings_Factors_AlreadySeenEndings_SetDebugValue(int32 InValue);
    
};

