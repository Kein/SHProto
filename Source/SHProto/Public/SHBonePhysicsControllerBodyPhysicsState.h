#pragma once
#include "CoreMinimal.h"
#include "SHBonePhysicsControllerBodyPhysicsBlendState.h"
#include "SHBonePhysicsControllerBodyPhysicsState.generated.h"

USTRUCT()
struct FSHBonePhysicsControllerBodyPhysicsState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(SaveGame)
    FName p_CollisionBody;
    
    UPROPERTY(Transient)
    float p_CurrentBlendWeight;
    
    UPROPERTY(SaveGame)
    float p_CachedCurrentBlendWeight;
    
    UPROPERTY(SaveGame)
    FName p_CachedCurrentPhysicsOverrideProfile;
    
    UPROPERTY(SaveGame)
    bool p_bNeedsPhysicsProfileOverrideUpdate;
    
    UPROPERTY(SaveGame)
    TArray<FSHBonePhysicsControllerBodyPhysicsBlendState> p_PhysicsBlendStateStacks;
    
public:
    SHPROTO_API FSHBonePhysicsControllerBodyPhysicsState();
};

