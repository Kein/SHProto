#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SHJumpIntoHoleAnimInstance.generated.h"

class USHJumpIntoHoleAnimInstance;

UCLASS(NonTransient)
class SHPROTO_API USHJumpIntoHoleAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHJumpIntoHoleAnimInstanceEvent, USHJumpIntoHoleAnimInstance*, AnimInst);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bPlayInteraction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAdvanceStage;
    
public:
    USHJumpIntoHoleAnimInstance();

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

