#pragma once
#include "CoreMinimal.h"
#include "SHAnimActionExecutiveBase.h"
#include "Templates/SubclassOf.h"
#include "SHStagedAnimActionExecutive.generated.h"

class USHBaseStagedAnimInstance;

UCLASS(EditInlineNew)
class SHPROTO_API USHStagedAnimActionExecutive : public USHAnimActionExecutiveBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USHBaseStagedAnimInstance> GameplayStagedAnimInstClass;
    
    UPROPERTY(Transient)
    USHBaseStagedAnimInstance* LinkedStagedAnimInst;
    
public:
    USHStagedAnimActionExecutive();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnimInstStageAdvanced();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnimInstInteractionStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnimInstInteractionFinishStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnimInstInteractionFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnimInstInteractionBlendingOut();
    
public:
    UFUNCTION(BlueprintPure)
    USHBaseStagedAnimInstance* GetLinkedStagedAnimInst();
    
    UFUNCTION(BlueprintCallable)
    bool AdvanceStageRequest();
    
};

