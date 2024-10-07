#pragma once
#include "CoreMinimal.h"
#include "MinMaxVector2D.h"
#include "UObject/NoExportTypes.h"
#include "SHHitReactionBonePhysicsConfiguration.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHHitReactionBonePhysicsConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector AdditionalActorSpaceForce;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector ActorSpaceForceMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector BoneSpaceForceMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bApplyForceAtBoneLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ChildBodiesForceMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOnlyApplyForceToDirectChildren;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bApplyForceAtChildLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RandomForceDirectionOffsetAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMinMaxVector2D RandomForceMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMinMaxVector2D ForceLimit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ActivatePhysicsForParentBoneLevelAbove;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BonePhysicsBlend;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BonePhysicsDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BonePhysicsCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAllowRootBonePhysics;
    
    FSHHitReactionBonePhysicsConfiguration();
};

