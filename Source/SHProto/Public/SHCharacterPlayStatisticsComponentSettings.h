#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/DataTable.h"
#include "AchievementHandle.h"
#include "CollectionHandle.h"
#include "CounterHandle.h"
#include "ESHEndingType.h"
#include "SHCharacterPlayStatisticsComponentSettings.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHCharacterPlayStatisticsComponentSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAchievementHandle NewGamePlusCompletedAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ESHEndingType, FAchievementHandle> EndingToAchievementMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCollectionHandle SeenEndingsAchievementCollection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxHoursToGivePlaytimeAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAchievementHandle PlaytimeAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAchievementHandle FinishGameNoRangeWeaponAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCounterHandle UsedWeaponsAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FDataTableRowHandle> UsedWeaponsItemsRowHandlesWhitelist;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCounterHandle MeleeWeaponKillsAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCounterHandle RangedWeaponKillsAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCounterHandle ClosedDoorsTriedAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCounterHandle GlassDestroyedAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName KillingStompAttackRowName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCounterHandle KillingStompAttackAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAchievementHandle RadioSilenceAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle ChainsawItemDataRowHandle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAchievementHandle ChainsawCollectedAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCounterHandle ReflectionItemsPickedUpAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCounterHandle MemosItemsPickedUpAchievement;
    
    USHCharacterPlayStatisticsComponentSettings();

};

