#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESHHitReactionResponseType.h"
#include "SHHitReactionCooldownComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHHitReactionCooldownComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FName, float> NormalCooldowns;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FName, float> FalterCooldowns;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FName, float> StaggerCooldowns;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FName, float> KnockdownCooldowns;
    
    UPROPERTY(EditDefaultsOnly)
    bool PrintDebug;
    
    USHHitReactionCooldownComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCooldownTimerForHitReaction(ESHHitReactionResponseType Reaction, FName Variant);
    
    UFUNCTION(BlueprintPure)
    bool IsReactionOnCooldown(ESHHitReactionResponseType Reaction, FName Variant);
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetVariantsOnCooldown(ESHHitReactionResponseType Reaction);
    
};

