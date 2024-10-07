#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "SHValve.h"
#include "SHValveWithRequiredItem.generated.h"

class ASHValveWithRequiredItem;

UCLASS(Abstract)
class ASHValveWithRequiredItem : public ASHValve {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FValveRequiredItemEvent, ASHValveWithRequiredItem*, ValveWithRequiredItem);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle RequiredItem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform AddingItemCameraRelTransform;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform RotatingValveCameraRelTransform;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseCorrectItemSelectedAudio;
    
public:
    UPROPERTY(BlueprintAssignable)
    FValveRequiredItemEvent RequiredItemAddedEvent;
    
protected:
    UPROPERTY(SaveGame)
    bool bHasAddedRequiredItem;
    
public:
    ASHValveWithRequiredItem(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ProcessRequiredItemAdded();
    
    UFUNCTION()
    void ProcessFocusableItemSelectedEvent(FName InItemName);
    
public:
    UFUNCTION(BlueprintPure)
    bool HasAddedRequiredItem() const;
    
};

