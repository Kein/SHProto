#pragma once
#include "CoreMinimal.h"
#include "SHItemAndQuantityHandle.h"
#include "SHItemBase.h"
#include "SHLookAtActorInterface.h"
#include "SHItem.generated.h"

class ASHItem;
class UBoxComponent;
class USHGameplayMapItemComponent;
class USHInteractionGenericComponent;
class USHInteractionIconComponent;
class USHInteractionManagerComponent;
class USHItemEmissiveDataHelper;
class USHRaycastDetectableComponent;
class USphereComponent;

UCLASS(Abstract)
class SHPROTO_API ASHItem : public ASHItemBase, public ISHLookAtActorInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHItemEvent, ASHItem*, ItemPtr);
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHInteractionGenericComponent* InteractionGeneric;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USphereComponent* InteractionProximitySphere;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHInteractionIconComponent* InteractionIcon;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHRaycastDetectableComponent* InteractionDetectable;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UBoxComponent* InteractionDetectableShape;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHInteractionManagerComponent* InteractionManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHGameplayMapItemComponent* GameplayMapObject;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHItemEmissiveDataHelper* EmissiveDataHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCollectDifferentItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Quantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSHItemAndQuantityHandle> DifferentItemsToCollect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ForceGrabOnly;
    
    UPROPERTY(SaveGame)
    bool bWasCollected;
    
public:
    ASHItem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool WasCollected() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintImplementableCollected();
    

    // Fix for true pure virtual functions not being implemented
};

