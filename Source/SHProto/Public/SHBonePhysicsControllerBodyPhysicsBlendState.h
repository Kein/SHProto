#pragma once
#include "CoreMinimal.h"
#include "SHBonePhysicsControllerBodyPhysicsBlendState.generated.h"

USTRUCT()
struct FSHBonePhysicsControllerBodyPhysicsBlendState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(SaveGame)
    FName p_IdentifierName;
    
    UPROPERTY(SaveGame)
    float p_MaximumPhysicsBlendWeight;
    
    UPROPERTY(SaveGame)
    float p_CurrentPhysicsBlendWeight;
    
    UPROPERTY(SaveGame)
    float p_FadeOutTime;
    
    UPROPERTY(SaveGame)
    float p_CurrentFadeOutProgess;
    
    UPROPERTY(SaveGame)
    float p_FadeOutCurveBend;
    
    UPROPERTY(SaveGame)
    FName p_PhysicsProfileOverride;
    
public:
    SHPROTO_API FSHBonePhysicsControllerBodyPhysicsBlendState();
};

