#pragma once
#include "CoreMinimal.h"
#include "SHManagedInteractionSlotCleanupConfig.generated.h"

USTRUCT(BlueprintType)
struct FSHManagedInteractionSlotCleanupConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SimpleCleanupDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CleanupTargetRotationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CleanupMaxRotationAngleDifference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CleanupTargetMovementScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CleanupMaxMovementAngleDifference;
    
    SHPROTO_API FSHManagedInteractionSlotCleanupConfig();
};

