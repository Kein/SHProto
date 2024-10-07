#pragma once
#include "CoreMinimal.h"
#include "VolumeData.generated.h"

USTRUCT(BlueprintType)
struct FVolumeData {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Volume;
    
    UPROPERTY()
    bool IsMuted;
    
    GAMEBASE_API FVolumeData();
};

