#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHHitReactionResultBonePhysics.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHHitReactionResultBonePhysics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector ForceLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector Force;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName BoneName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ActivatePhysicsForParentBoneLevelAbove;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ChildBodiesForceMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOnlyApplyForceToDirectChildren;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bApplyForceAtChildLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BonePhysicsBlend;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BonePhysicsDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BonePhysicsCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAllowRootBonePhysics;
    
    FSHHitReactionResultBonePhysics();
};

