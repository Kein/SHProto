#pragma once
#include "CoreMinimal.h"
#include "PlayAnimationData.h"
#include "SHWeaponPoseAnimations.generated.h"

class USHMovementAnimationsSetData;

USTRUCT(BlueprintType)
struct SHPROTO_API FSHWeaponPoseAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<USHMovementAnimationsSetData> AnimationsData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPlayAnimationData EquipWeaponAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPlayAnimationData UnequipWeaponAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPlayAnimationData ChangeWeaponUnequipAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPlayAnimationData ChangeWeaponEquipAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPlayAnimationData ChangeWeaponUnequipInAimAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPlayAnimationData ChangeWeaponEquipInAimAnimation;
    
    FSHWeaponPoseAnimations();
};

