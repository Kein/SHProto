#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHHitReactionBodyMapBoneResponse.h"
#include "SHHitReactionsBodyMap.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHHitReactionsBodyMap : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSHHitReactionBodyMapBoneResponse> BoneHitReactionResponses;
    
    USHHitReactionsBodyMap();

};

