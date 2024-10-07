#pragma once
#include "CoreMinimal.h"
#include "SHHitReactionTypePermissionState.generated.h"

class USHHitReactionConfig;

USTRUCT(BlueprintType)
struct SHPROTO_API FSHHitReactionTypePermissionState {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FName> DontDelayVariants;
    
    UPROPERTY()
    TSoftObjectPtr<USHHitReactionConfig> OverrideConfig;
    
    FSHHitReactionTypePermissionState();
};

