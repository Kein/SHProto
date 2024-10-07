#pragma once
#include "CoreMinimal.h"
#include "MinMaxVector2D.h"
#include "UObject/NoExportTypes.h"
#include "SHFleshLipCeilingTileShakePhysicsConfiguration.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FSHFleshLipCeilingTileShakePhysicsConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float TilePushFadeOutHalfTime;
    
    UPROPERTY(EditAnywhere)
    float TileForceAccumulationLimit;
    
    UPROPERTY(EditAnywhere)
    float TileForceAccumulationFadeOutHalfTime;
    
    UPROPERTY(EditAnywhere)
    float TileJumpRotationScale;
    
    UPROPERTY(EditAnywhere)
    float TileJumpLiftFrequency;
    
    UPROPERTY(EditAnywhere)
    float TileJumpFadeOutHalfTime;
    
    UPROPERTY(EditAnywhere)
    float TileJumpRotationsPerJump;
    
    UPROPERTY(EditAnywhere)
    float TileJumpRotationRandomizationScale;
    
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* TileParticles;
    
    UPROPERTY(EditAnywhere)
    FName TileParticlesAlphaParameterName;
    
    UPROPERTY(EditAnywhere)
    FMinMaxVector2D TileParticlesParameterRange;
    
    UPROPERTY(EditAnywhere)
    FTransform TileParticlesTransform;
    
    SHPROTO_API FSHFleshLipCeilingTileShakePhysicsConfiguration();
};

