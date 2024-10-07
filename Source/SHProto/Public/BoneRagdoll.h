#pragma once
#include "CoreMinimal.h"
#include "EBones.h"
#include "BoneRagdoll.generated.h"

USTRUCT(BlueprintType)
struct FBoneRagdoll {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBones bone;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bOverrideSettings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float BlendPhysicTargetScale;
    
    SHPROTO_API FBoneRagdoll();
};

