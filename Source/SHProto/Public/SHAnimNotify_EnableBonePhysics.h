#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ESHAnimNotifyEnableBonePhysicsForceApplicationTarget.h"
#include "SHBonePhysicsPhysicsBlendInput.h"
#include "SHAnimNotify_EnableBonePhysics.generated.h"

UCLASS(CollapseCategories)
class SHPROTO_API USHAnimNotify_EnableBonePhysics : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> BoneNames;
    
    UPROPERTY(EditAnywhere)
    int32 ActivateParentBodyLevelsAbove;
    
    UPROPERTY(EditAnywhere)
    FSHBonePhysicsPhysicsBlendInput PhysicsBlend;
    
    UPROPERTY(EditAnywhere)
    bool AllowRootPhysics;
    
    UPROPERTY(EditAnywhere)
    FName PhysicsIdentifier;
    
    UPROPERTY(EditAnywhere)
    FVector ApplyLocalForce;
    
    UPROPERTY(EditAnywhere)
    ESHAnimNotifyEnableBonePhysicsForceApplicationTarget ForceApplicationTarget;
    
    UPROPERTY(EditAnywhere)
    float ApplyForceToChildrenMultiplier;
    
    USHAnimNotify_EnableBonePhysics();

};

