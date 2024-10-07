#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SkeletonRagdollProfileData.h"
#include "SkeletonRagdollProfilesDA.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USkeletonRagdollProfilesDA : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSkeletonRagdollProfileData> Profiles;
    
    USkeletonRagdollProfilesDA();

};

