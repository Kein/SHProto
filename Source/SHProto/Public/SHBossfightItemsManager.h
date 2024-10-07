#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ECombatDifficulty.h"
#include "SHBossfightItemsManager.generated.h"

class ASHItem;
class USHBossfightItemsManagerConfigDataAsset;

UCLASS(Abstract)
class SHPROTO_API ASHBossfightItemsManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TSet<ASHItem*> ManualSelectedItemsActorsToManage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ECombatDifficulty, USHBossfightItemsManagerConfigDataAsset*> ConfigurationDataAssets;
    
    UPROPERTY(SaveGame)
    TSet<FGuid> EnabledItemActorsGuids;
    
public:
    ASHBossfightItemsManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PerformManagementForPhase(int32 InPhaseIndex);
    
};

