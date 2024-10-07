#pragma once
#include "CoreMinimal.h"
#include "MinMaxVector2D.h"
#include "SHHitReactionCollisionConditionConfiguration.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHHitReactionCollisionConditionConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TraceRadiusScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bTraceComplex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName CollisionProfileName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRespectIgnoredCollisions;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMinMaxVector2D TraceCapsuleHeights;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TraceDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMinMaxVector2D RequiredCollisionDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DebugDrawDuration;
    
    FSHHitReactionCollisionConditionConfiguration();
};

