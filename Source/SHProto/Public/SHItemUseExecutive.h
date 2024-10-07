#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESHUseFinishType.h"
#include "SHItemDataStruct.h"
#include "SHItemUseExeCustomSetupData.h"
#include "SHMovementDataStruct.h"
#include "SHItemUseExecutive.generated.h"

class ACharacter;
class ASHItemBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SHPROTO_API USHItemUseExecutive : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseCustomSetupData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSHItemUseExeCustomSetupData> OverrideDataRows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowCombatInterupt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookAtAlphaBlendInSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookAtAlphaBlendOutSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowHoldingWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseCustomMovementData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHMovementDataStruct MovementData;
    
    UPROPERTY(Transient)
    ACharacter* OwnerCharacter;
    
public:
    USHItemUseExecutive();

    UFUNCTION(BlueprintPure)
    bool WasBreakRequested() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UseBreak();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PreItemDespawn(ASHItemBase* ItemPtr);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUse();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemSpawn(ASHItemBase* ItemPtr);
    
public:
    UFUNCTION(BlueprintPure)
    ACharacter* GetOwnerCharacter() const;
    
    UFUNCTION(BlueprintPure)
    FSHItemDataStruct GetItemData() const;
    
    UFUNCTION(BlueprintPure)
    FName GetItemContext() const;
    
    UFUNCTION(BlueprintPure)
    ASHItemBase* GetItem(int32 ForIndex) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void Finish(ESHUseFinishType FinishType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ApplyItem();
    
};

