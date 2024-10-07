#pragma once
#include "CoreMinimal.h"
#include "SHBonePhysicsPhysicsBlendInput.generated.h"

USTRUCT(BlueprintType)
struct FSHBonePhysicsPhysicsBlendInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PhysicsBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PhysicsDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PhysicsFadeOutCurveBend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PhysicsProfileOverride;
    
    SHPROTO_API FSHBonePhysicsPhysicsBlendInput();
};

