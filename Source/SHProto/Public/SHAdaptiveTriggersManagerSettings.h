#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/DataTable.h"
#include "SHAdaptiveTriggerFeedbackData.h"
#include "SHAdaptiveTriggerWeaponData.h"
#include "SHAdaptiveTriggersManagerSettings.generated.h"

UCLASS()
class SHPROTO_API USHAdaptiveTriggersManagerSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FDataTableRowHandle> WeaponUsingWeaponSettings_HeavyRanged;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FDataTableRowHandle> WeaponUsingWeaponSettings_LightRanged;
    
    UPROPERTY(EditDefaultsOnly)
    FSHAdaptiveTriggerWeaponData RightTriggerSettings_LightRangedWeapon;
    
    UPROPERTY(EditDefaultsOnly)
    FSHAdaptiveTriggerWeaponData RightTriggerSettings_HeavyRangedWeapon;
    
    UPROPERTY(EditDefaultsOnly)
    FSHAdaptiveTriggerFeedbackData RightTriggerSettings_MeleeWeapon;
    
    UPROPERTY(EditDefaultsOnly)
    FSHAdaptiveTriggerWeaponData RightTriggerSettings_NoWeapon;
    
    UPROPERTY(EditDefaultsOnly)
    FSHAdaptiveTriggerFeedbackData RightTriggerSettings_Custom_Boat;
    
    UPROPERTY(EditDefaultsOnly)
    FSHAdaptiveTriggerFeedbackData LeftTiggerSettings_LightRanged;
    
    UPROPERTY(EditDefaultsOnly)
    FSHAdaptiveTriggerFeedbackData LeftTiggerSettings_HeavyRanged;
    
    UPROPERTY(EditDefaultsOnly)
    FSHAdaptiveTriggerFeedbackData LeftTiggerSettings_NoWeapon;
    
    UPROPERTY(EditDefaultsOnly)
    FSHAdaptiveTriggerFeedbackData LeftTriggerSettings_Custom_Boat;
    
    USHAdaptiveTriggersManagerSettings();

};

