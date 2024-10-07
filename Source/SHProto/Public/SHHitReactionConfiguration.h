#pragma once
#include "CoreMinimal.h"
#include "SHHitReactionAnimationConfiguration.h"
#include "SHHitReactionConfigurationConditions.h"
#include "SHHitReactionPhysicsConfiguration.h"
#include "SHHitReactionRotationConfiguration.h"
#include "SHHitReactionStateConfiguration.h"
#include "SHHitReactionConfiguration.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHHitReactionConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString DebugReactionName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHHitReactionConfigurationConditions Conditions;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHHitReactionStateConfiguration HitReactionState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSHHitReactionAnimationConfiguration> Animations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSHHitReactionAnimationConfiguration> FinishingAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSHHitReactionAnimationConfiguration> TwitchAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHHitReactionRotationConfiguration RotationConfiguration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHHitReactionPhysicsConfiguration Physics;
    
    FSHHitReactionConfiguration();
};

