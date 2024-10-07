#pragma once
#include "CoreMinimal.h"
#include "SHStatisticsValueProcessor.h"
#include "SHCombatStatisticsValueProcessor.generated.h"

class ASHItemWeapon;
class USHRangedCmbSubcomp;

UCLASS()
class SHPROTO_API USHCombatStatisticsValueProcessor : public USHStatisticsValueProcessor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(SaveGame)
    int32 MeleeWeaponKillcount;
    
    UPROPERTY(SaveGame)
    int32 RangedWeaponKillcount;
    
    UPROPERTY(SaveGame)
    int32 RangedShootsFired;
    
    UPROPERTY(SaveGame)
    int32 PerformedDodges;
    
    UPROPERTY(SaveGame)
    int32 BrokenGlass;
    
    UPROPERTY(SaveGame)
    int32 HealsApplied;
    
    UPROPERTY(SaveGame)
    float ReceivedDamage;
    
    UPROPERTY(SaveGame)
    TMap<FName, int32> WeaponToKillsMap;
    
public:
    USHCombatStatisticsValueProcessor();

protected:
    UFUNCTION()
    void ProcessRangedFireSuccess(USHRangedCmbSubcomp* RangedCombatSubcomponent, ASHItemWeapon* ItemWeaponContext);
    
};

