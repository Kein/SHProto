#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHHitReactionConfiguration.h"
#include "SHHitReactionConfig.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHHitReactionConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSHHitReactionConfiguration> HitReactionOptions;
    
    USHHitReactionConfig();

};

