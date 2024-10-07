#pragma once
#include "CoreMinimal.h"
#include "BoneRagdoll.h"
#include "SkeletonRagdollProfile.h"
#include "SkeletonRagdollProfileBonesDynamic.generated.h"

UCLASS()
class USkeletonRagdollProfileBonesDynamic : public USkeletonRagdollProfile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FBoneRagdoll> Bones;
    
public:
    USkeletonRagdollProfileBonesDynamic();

};

