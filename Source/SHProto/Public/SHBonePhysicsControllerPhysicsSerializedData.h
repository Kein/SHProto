#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHBonePhysicsControllerBodyPhysicsState.h"
#include "SHBonePhysicsControllerPhysicsSerializedData.generated.h"

USTRUCT(BlueprintType)
struct FSHBonePhysicsControllerPhysicsSerializedData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(SaveGame)
    TArray<FSHBonePhysicsControllerBodyPhysicsState> p_BodyPhysicsStates;
    
    UPROPERTY(SaveGame)
    TArray<FTransform> p_BoneTransforms;
    
public:
    SHPROTO_API FSHBonePhysicsControllerPhysicsSerializedData();
};

