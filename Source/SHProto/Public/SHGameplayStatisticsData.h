#pragma once
#include "CoreMinimal.h"
#include "ECombatDifficulty.h"
#include "EPuzzlesDifficulty.h"
#include "ESHEndingType.h"
#include "SHGameplayStatisticsData.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHGameplayStatisticsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECombatDifficulty PlaythroughCombatDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPuzzlesDifficulty PlaythroughPuzzleDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESHEndingType PlaythroughEnding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SeenUniqueEndings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PlaytimeHours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PlaytimeMinutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PlaytimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TravelledDistanceInKilometers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ConsumableItemsPickedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MemosItemsPickedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LockedDoorAnimsPlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SeenMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EnemiesKilledByRanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EnemiesKilledByMelee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PlayerReceivedDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText FavoriteWeaponDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ShootsFired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DestroyedGlass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UsedHealingItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PlayerDeathsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PlayerDodgesCount;
    
    FSHGameplayStatisticsData();
};

