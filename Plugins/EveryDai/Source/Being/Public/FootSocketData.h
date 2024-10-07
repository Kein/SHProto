#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "FootSocketData.generated.h"

USTRUCT(BlueprintType)
struct FFootSocketData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FHitResult _FootHit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FHitResult _DropHit;
    
    BEING_API FFootSocketData();
};

