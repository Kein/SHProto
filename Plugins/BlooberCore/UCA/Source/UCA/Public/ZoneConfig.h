#pragma once
#include "CoreMinimal.h"
#include "ZoneConfig.generated.h"

USTRUCT(BlueprintType)
struct FZoneConfig {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName Name;
    
    UCA_API FZoneConfig();
};

