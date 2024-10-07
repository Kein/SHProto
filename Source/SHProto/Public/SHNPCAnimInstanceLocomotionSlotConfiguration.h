#pragma once
#include "CoreMinimal.h"
#include "SHNPCAnimInstanceLocomotionSlotConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FSHNPCAnimInstanceLocomotionSlotConfiguration {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FName LocomotionTag;
    
    UPROPERTY(EditDefaultsOnly)
    FName LocomotionSnapshotName;
    
public:
    SHPROTO_API FSHNPCAnimInstanceLocomotionSlotConfiguration();
};

