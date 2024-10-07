#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "SHItemAndQuantityHandle.h"
#include "SHDynamicItemsManager.generated.h"

class ASHDynamicItem;
class ASHItem;

UCLASS()
class ASHDynamicItemsManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TSet<TSoftObjectPtr<ASHDynamicItem>> ManagedDynamicItems;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TArray<FSHItemAndQuantityHandle> DynamicItemsDataQueue;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool bCollectDifferentItemData;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TArray<FDataTableRowHandle> DynamicDifferentItemDataToCollectQueue;
    
    UPROPERTY(SaveGame)
    int32 CurrentQueueIndex;
    
public:
    ASHDynamicItemsManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void ProcessItemCollected(ASHItem* ItemPtr);
    
};

