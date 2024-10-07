#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHHitReactionVariantConfig.h"
#include "SHHitReactionsSet.generated.h"

class UObject;

UCLASS(BlueprintType)
class SHPROTO_API USHHitReactionsSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSHHitReactionVariantConfig> DeathVariantHitReactions;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSHHitReactionVariantConfig> KnockdownVariantHitReactions;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSHHitReactionVariantConfig> FalterVariantHitReactions;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSHHitReactionVariantConfig> StaggerVariantHitReactions;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSHHitReactionVariantConfig> NormalVariantHitReactions;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSHHitReactionVariantConfig> TwitchVariantHitReactions;
    
    USHHitReactionsSet();

    UFUNCTION(BlueprintPure)
    TArray<TSoftObjectPtr<UObject>> GetDeathSoftObjects() const;
    
};

