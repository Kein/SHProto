#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "Animation/PoseSnapshot.h"
#include "AnimNode_CreatePoseSnapshot.generated.h"

USTRUCT(BlueprintType)
struct CHARACTERANIMATIONEXTRAS_API FAnimNode_CreatePoseSnapshot : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SnapshotName;
    
private:
    UPROPERTY()
    FPoseSnapshot Snapshot;
    
public:
    FAnimNode_CreatePoseSnapshot();
};

