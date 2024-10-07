#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESHItemTypeEnum.h"
#include "SHCollectedItemData.h"
#include "SHItemsStorageConfig.h"
#include "SHItemsStorageComponent.generated.h"

class ACharacter;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHItemsStorageComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSHCollectedItemData> BeginPlayStoredItems;
    
    UPROPERTY(SaveGame)
    TArray<FSHCollectedItemData> StoredItems;
    
public:
    USHItemsStorageComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StoreSpecified(ACharacter* InteractingCharacter, const TArray<FSHCollectedItemData>& ItemsToStore);
    
    UFUNCTION(BlueprintCallable)
    void StoreAllByConfig(ACharacter* InteractingCharacter, const FSHItemsStorageConfig& ItemsStorageConfig);
    
    UFUNCTION(BlueprintCallable)
    void StoreAll(ACharacter* InteractingCharacter, const TArray<FName>& SkipItems, const TArray<ESHItemTypeEnum>& SkipItemsCategories);
    
    UFUNCTION(BlueprintCallable)
    void RetrieveSpecified(ACharacter* InteractingCharacter, const TArray<FSHCollectedItemData>& ItemsToRetrieve);
    
    UFUNCTION(BlueprintCallable)
    void RetrieveAllByConfig(ACharacter* InteractingCharacter, const FSHItemsStorageConfig& ItemsStorageConfig);
    
    UFUNCTION(BlueprintCallable)
    void RetrieveAll(ACharacter* InteractingCharacter);
    
    UFUNCTION(BlueprintPure)
    bool IsStorageEmpty() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FSHCollectedItemData> GetCurrentItems() const;
    
};

