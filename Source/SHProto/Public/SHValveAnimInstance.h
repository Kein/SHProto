#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SHValveAnimInstance.generated.h"

class USHValveAnimInstance;

UCLASS(NonTransient)
class SHPROTO_API USHValveAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSHValveAnimInstanceProgressPhaseChangeEvent, USHValveAnimInstance*, AnimInst, int32, PhaseNumber, bool, bHasStarted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHValveAnimInstanceEvent, USHValveAnimInstance*, AnimInst);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bPlayInteraction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bProcessInteraction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bFinishInteraction;
    
public:
    USHValveAnimInstance();

    UFUNCTION(BlueprintPure)
    bool CanReceiveInput() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyInteractionStarted();
    
    UFUNCTION(BlueprintCallable)
    void ApplyInteractionSecondPhaseStarted();
    
    UFUNCTION(BlueprintCallable)
    void ApplyInteractionSecondPhaseEnded();
    
    UFUNCTION(BlueprintCallable)
    void ApplyInteractionFirstPhaseStarted();
    
    UFUNCTION(BlueprintCallable)
    void ApplyInteractionFirstPhaseEnded();
    
    UFUNCTION(BlueprintCallable)
    void ApplyInteractionFinished();
    
    UFUNCTION(BlueprintCallable)
    void ApplyInteractionFinishBegin();
    
};

