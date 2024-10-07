#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHCollectedItemData.h"
#include "Templates/SubclassOf.h"
#include "SHCharacterPlayItemsComponent.generated.h"

class ASHCharacterPlay;
class ASHItem;
class ASHItemEquipment;
class ASHItemExecutiveBase;
class ASHItemInvestigationExecutive;
class UObject;
class USHCharacterPlayCombatComponent;
class USHCharacterPlayItemsComponent;
class USHItemUseExecutive;

UCLASS(BlueprintType, ClassGroup=Custom, Within=SHCharacterPlay, meta=(BlueprintSpawnableComponent))
class USHCharacterPlayItemsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSHItemsComponentWithContextEvent, USHCharacterPlayItemsComponent*, ComponentPtr, FName, ItemContext);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHItemsComponentEvent, USHCharacterPlayItemsComponent*, ComponentPtr);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ASHItem> DefaultItemClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USHItemUseExecutive> NotesExecutiveClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ASHItemInvestigationExecutive> ItemInvestigationExeClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ASHItemInvestigationExecutive> ReadableItemInvestigationExeClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ASHItemInvestigationExecutive> MapItemInvestigationExeClass;
    
    UPROPERTY(BlueprintAssignable, EditDefaultsOnly)
    FSHItemsComponentWithContextEvent OnCollectedItemInvestigatedBlueprintEvent;
    
    UPROPERTY(BlueprintAssignable, EditDefaultsOnly)
    FSHItemsComponentWithContextEvent OnEquipmentItemSpawnedBlueprintEvent;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
    UPROPERTY(Transient)
    USHItemUseExecutive* ItemUseExe;
    
    UPROPERTY(Transient)
    ASHItemExecutiveBase* ItemExecutive;
    
    UPROPERTY(Transient)
    TArray<ASHItemEquipment*> EquipmentActors;
    
    UPROPERTY(SaveGame)
    TArray<FSHCollectedItemData> CollectedItems;
    
    UPROPERTY(SaveGame)
    TArray<FName> SkipInvestigationItems;
    
    UPROPERTY(SaveGame)
    TMap<FName, bool> EquipmentStateValues;
    
    UPROPERTY(SaveGame)
    TArray<FName> NewCollectedItems;
    
public:
    USHCharacterPlayItemsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Exec)
    void SHDebug_Character_Items_ValuesDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Items_UnlimitedAmmo();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Items_RemoveAllItems();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Items_PerformNotesScribble();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Items_GiveAllWeapons();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Items_GiveAllReflections();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Items_GiveAllMaps();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Items_GiveAllItems();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Items_GiveAllEquipment();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Items_GiveAllConsumables();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Items_GiveAllCombineables();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Items_Give(const FString& ItemRowName);
    
    UFUNCTION(BlueprintCallable)
    void SetUseItemBlocked(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetInvestigateItemBlocked(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItem(const FName ItemDataRowName, const int32 ItemQuantity, const bool RemoveNewItemFlag);
    
protected:
    UFUNCTION()
    void ProcessOwnerReceivedDamage(USHCharacterPlayCombatComponent* CombatComp);
    
    UFUNCTION()
    void ProcessOwnerCombatInputModeChanged(USHCharacterPlayCombatComponent* CombatComp);
    
public:
    UFUNCTION(BlueprintCallable)
    void OverrideFlashlightPocketState(bool InShouldBeOpened, const UObject* Object);
    
    UFUNCTION(BlueprintPure)
    bool IsUseItemBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInvestigateItemBlocked() const;
    
    UFUNCTION(BlueprintCallable)
    bool InvestigateCollectedItemRequest(const FName& InItemDataRowName);
    
    UFUNCTION(BlueprintPure)
    bool HasItem(const FName ItemDataRowName) const;
    
    UFUNCTION(BlueprintPure)
    ASHItemExecutiveBase* GetItemExecutive();
    
    UFUNCTION(BlueprintPure)
    int32 GetItemCount(const FName ItemDataRowName) const;
    
    UFUNCTION(BlueprintCallable)
    void CollectItem(const FName ItemDataRowName, int32 ItemQuantity, const bool AddNewItemFlag);
    
};

