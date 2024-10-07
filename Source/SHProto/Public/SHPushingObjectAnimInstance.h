#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "SHPushingObjectAnimInstance.generated.h"

UCLASS(NonTransient)
class SHPROTO_API USHPushingObjectAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bPlayInteraction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bFinishInteraction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsMovementBlocked;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector CurrentInputValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector AnimSpotRelativeToHandleLoc;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FVector> SupportedInputs;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FVector> DebugImporantRelativeToHandleSpots;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DebugHandleShapeRadius;
    
public:
    USHPushingObjectAnimInstance();

    UFUNCTION(BlueprintImplementableEvent)
    void OnAbortedBP();
    
protected:
    UFUNCTION(BlueprintPure)
    FVector GetBlockedInputValue() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyMovementStopped(const FVector StoppedMovementInput);
    
    UFUNCTION(BlueprintCallable)
    void ApplyInteractionStarted();
    
    UFUNCTION(BlueprintCallable)
    void ApplyInteractionFinishFired();
    
    UFUNCTION(BlueprintCallable)
    void ApplyInteractionFinished();
    
    UFUNCTION(BlueprintCallable)
    void ApplyAnyMovementStarted();
    
};

