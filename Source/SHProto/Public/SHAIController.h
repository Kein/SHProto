#pragma once
#include "CoreMinimal.h"
#include "MaiControllerExt.h"
#include "ESHAIBehaviors.h"
#include "SHAIController.generated.h"

class UMaiAggroMeter;
class UObject;

UCLASS()
class SHPROTO_API ASHAIController : public AMaiControllerExt {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    ESHAIBehaviors _BehaviorType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 _ChanceToBeAttacked;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UMaiAggroMeter* AggroMeterComponent;
    
public:
    ASHAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetBehaviorType(ESHAIBehaviors Behavior);
    
    UFUNCTION(BlueprintPure)
    bool IsInLockedState() const;
    
    UFUNCTION(BlueprintPure)
    ESHAIBehaviors GetBehaviorType() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearBehaviorType(ESHAIBehaviors Behavior);
    
    UFUNCTION(BlueprintCallable)
    void ChangeLockedState(const bool bNewLockedState, const UObject* Object);
    
};

