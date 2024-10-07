#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SHBaseStagedAnimInstance.generated.h"

UCLASS(NonTransient)
class SHPROTO_API USHBaseStagedAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bPlayInteraction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAdvanceStage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bPlayFinish;
    
public:
    USHBaseStagedAnimInstance();

    UFUNCTION(BlueprintPure)
    bool CanAdvanceStage() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyStageAdvanced();
    
    UFUNCTION(BlueprintCallable)
    void ApplyInteractionStarted();
    
    UFUNCTION(BlueprintCallable)
    void ApplyInteractionFinished();
    
    UFUNCTION(BlueprintCallable)
    void ApplyInteractionBlendingOut();
    
};

