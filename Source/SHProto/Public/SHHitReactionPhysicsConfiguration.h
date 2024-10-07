#pragma once
#include "CoreMinimal.h"
#include "SHHitReactionBonePhysicsConfiguration.h"
#include "SHHitReactionPhysicsConfiguration.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHHitReactionPhysicsConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ForceMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHHitReactionBonePhysicsConfiguration HitBonePhysics;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FSHHitReactionBonePhysicsConfiguration> AdditionalBonePhysics;
    
    FSHHitReactionPhysicsConfiguration();
};

