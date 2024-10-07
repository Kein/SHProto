#pragma once
#include "CoreMinimal.h"
#include "DirectionCondition.h"
#include "MinMaxVector2D.h"
#include "UObject/NoExportTypes.h"
#include "SHHitReactionCollisionConditionConfiguration.h"
#include "SHHitReactionConfigurationConditions.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHHitReactionConfigurationConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PassChance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDirectionCondition HitDirection;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDirectionCondition ImpactDirection;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDirectionCondition ForceDirection;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDirectionCondition TargetMovementDirection;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FMinMaxVector2D TargetMovementVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSHHitReactionCollisionConditionConfiguration> CollisionTraces;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSHHitReactionCollisionConditionConfiguration> RequiredCollisionTraces;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSHHitReactionCollisionConditionConfiguration> PreventingCollisionTraces;
    
    UPROPERTY(BlueprintReadOnly)
    bool bAllowForDirectionalHits;
    
    UPROPERTY(BlueprintReadOnly)
    bool bAllowForSurfaceHits;
    
    UPROPERTY(BlueprintReadOnly)
    bool bAllowForRadialHits;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCheckWallAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D OnWallAngle;
    
    FSHHitReactionConfigurationConditions();
};

