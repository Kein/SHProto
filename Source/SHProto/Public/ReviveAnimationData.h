#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EBones.h"
#include "ERevivePose.h"
#include "ReviveAnimationData.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FReviveAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimationAsset* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector HipsForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector HipsRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector HipsUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EBones, FVector> BoneDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERevivePose RevivePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ActorForwardBasedOnHips;
    
    SHPROTO_API FReviveAnimationData();
};

