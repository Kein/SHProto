#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SHSearchFocusAnimInstance.generated.h"

class USHSearchFocusAnimInstance;

UCLASS(NonTransient)
class SHPROTO_API USHSearchFocusAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHSearchFocusAnimInstanceEvent, USHSearchFocusAnimInstance*, AnimInst);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bPlayInteraction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAdvanceStage;
    
public:
    USHSearchFocusAnimInstance();

    UFUNCTION(BlueprintPure)
    bool CanReceiveInput() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyStageAdvanced();
    
    UFUNCTION(BlueprintCallable)
    void ApplyInteractionStartedAndItsFinalStage();
    
    UFUNCTION(BlueprintCallable)
    void ApplyInteractionStarted();
    
    UFUNCTION(BlueprintCallable)
    void ApplyFinalStageReached();
    
};

