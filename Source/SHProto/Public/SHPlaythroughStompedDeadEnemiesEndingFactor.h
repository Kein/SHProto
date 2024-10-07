#pragma once
#include "CoreMinimal.h"
#include "SHIntEndingFactor.h"
#include "SHPlaythroughStompedDeadEnemiesEndingFactor.generated.h"

UCLASS(CollapseCategories, DefaultToInstanced, EditInlineNew)
class SHPROTO_API USHPlaythroughStompedDeadEnemiesEndingFactor : public USHIntEndingFactor {
    GENERATED_BODY()
public:
    USHPlaythroughStompedDeadEnemiesEndingFactor();

    UFUNCTION(Exec)
    void SHDebug_Character_Endings_PlaythroughStompedDeadEnemiesEndingFactor_SetDebugValue(int32 InValue);
    
};

