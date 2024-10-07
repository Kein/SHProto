#pragma once
#include "CoreMinimal.h"
#include "SHHitReactionBodyMapBoneResponse.generated.h"

class USHHitReactionConfig;

USTRUCT(BlueprintType)
struct SHPROTO_API FSHHitReactionBodyMapBoneResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName BoneName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BoneShapeIndex;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USHHitReactionConfig* HitReactionConfig;
    
    FSHHitReactionBodyMapBoneResponse();
};

