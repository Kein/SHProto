#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESHCombatPoseType.h"
#include "ItemQuickGrabAnimationData.h"
#include "SHDodgeActionDataStruct.h"
#include "SHWeaponPoseAnimations.h"
#include "SHItemWeaponDataStruct.generated.h"

class ASHItemWeapon;
class USHCrosshairWidgetBase;
class USHHitReactionMaps;

USTRUCT(BlueprintType)
struct SHPROTO_API FSHItemWeaponDataStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<ASHItemWeapon> CustomClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USHHitReactionMaps* HitReactionMaps;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ESHCombatPoseType, FSHWeaponPoseAnimations> Animations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ESHCombatPoseType, FSHDodgeActionDataStruct> DodgesMapping;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ESHCombatPoseType, FItemQuickGrabAnimationData> ItemQuickGrabMapping;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<USHCrosshairWidgetBase> CrosshairWidgetClass;
    
    FSHItemWeaponDataStruct();
};

