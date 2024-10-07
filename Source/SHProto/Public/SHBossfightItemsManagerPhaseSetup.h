#pragma once
#include "CoreMinimal.h"
#include "SHItemAndQuantityHandle.h"
#include "SHBossfightItemsManagerPhaseSetup.generated.h"

USTRUCT(BlueprintType)
struct FSHBossfightItemsManagerPhaseSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSHItemAndQuantityHandle> RequiredItemQuantities;
    
    SHPROTO_API FSHBossfightItemsManagerPhaseSetup();
};

