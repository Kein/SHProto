#pragma once
#include "CoreMinimal.h"
#include "PlayAnimationData.h"
#include "SHItemWeaponRanged.h"
#include "SHItemWeaponRangedSingleAction.generated.h"

class UAnimationAsset;

UCLASS(Abstract)
class SHPROTO_API ASHItemWeaponRangedSingleAction : public ASHItemWeaponRanged {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimationAsset> SingleActionPrepareWeaponAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPlayAnimationData SingleActionPrepareAnimData;
    
public:
    ASHItemWeaponRangedSingleAction(const FObjectInitializer& ObjectInitializer);

};

