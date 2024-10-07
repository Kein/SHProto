#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHHitReactionArtificialHitConfiguration.h"
#include "SHHitReactionArtificialConfig.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHHitReactionArtificialConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHHitReactionArtificialHitConfiguration HitReaction;
    
    USHHitReactionArtificialConfig();

};

