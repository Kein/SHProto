#pragma once
#include "CoreMinimal.h"
#include "GraphObject.h"
#include "GameplayTagContainer.h"
#include "DialogEntity.h"
#include "NameSelector.h"
#include "Templates/SubclassOf.h"
#include "FlowAction.generated.h"

class AActor;
class UFlowItem;
class UObject;

UCLASS(Abstract, EditInlineNew)
class DIALOG_API UFlowAction : public UGraphObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UFlowItem* _Owner;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FNameSelector _Phase;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _Delay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _DoOnSkip: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _StopOnExit: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _StopOnContextFinish: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _OverrideDoOnSkip: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _CreateInstance: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditInstanceOnly)
    uint8 _NotifyTick: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditInstanceOnly)
    uint8 _NotifyStop: 1;
    
    UPROPERTY(BlueprintReadOnly)
    FDialogEntity _Entity;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag _ActorTag;
    
    UFlowAction();

    UFUNCTION(BlueprintPure)
    void GrabTargets(UObject* Context, TSubclassOf<AActor> aclass, TArray<AActor*>& Actors) const;
    
    UFUNCTION(BlueprintPure)
    UFlowItem* GetItemOwner() const;
    
    UFUNCTION(BlueprintCallable)
    void ActionFinish();
    
};

