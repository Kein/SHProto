#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FoliageInstanceInfo.generated.h"

USTRUCT(BlueprintType)
struct FFoliageInstanceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector Scale3D;
    
    FOLIAGESTAMPS_API FFoliageInstanceInfo();
};

