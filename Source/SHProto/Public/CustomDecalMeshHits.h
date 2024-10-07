#pragma once
#include "CoreMinimal.h"
#include "CustomDecalHitData.h"
#include "CustomDecalMeshHits.generated.h"

USTRUCT(BlueprintType)
struct FCustomDecalMeshHits {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FCustomDecalHitData> DecalHits;
    
    SHPROTO_API FCustomDecalMeshHits();
};

