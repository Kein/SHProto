#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESHAnimEndType.h"
#include "ESHHitReactionResponseType.h"
#include "PlayAnimationData.h"
#include "SHHitReactionIdentifier.h"
#include "SHHitReactionState.generated.h"

class UAnimMontage;
class USHAnimMontagePlayer;
class USHHitReactionStatesContext;

UCLASS(BlueprintType, Within=SHHitReactionSubcomponent)
class SHPROTO_API USHHitReactionState : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    USHHitReactionStatesContext* HitReactionStateContext;
    
    UPROPERTY()
    TArray<USHAnimMontagePlayer*> BoundAnimations;
    
    UPROPERTY()
    TArray<FPlayAnimationData> FinishingAnimations;
    
public:
    USHHitReactionState();

    UFUNCTION(BlueprintCallable)
    bool StartFinishingState();
    
    UFUNCTION(BlueprintPure)
    bool IsStateInProgress(bool InIncludeFinishing) const;
    
    UFUNCTION(BlueprintPure)
    bool IsStateFinishing() const;
    
    UFUNCTION(BlueprintPure)
    bool HasStateStarted() const;
    
    UFUNCTION(BlueprintPure)
    bool HasStateEnded() const;
    
    UFUNCTION(BlueprintPure)
    FName GetStateHitReactionVariant() const;
    
    UFUNCTION(BlueprintPure)
    ESHHitReactionResponseType GetStateHitReactionType() const;
    
    UFUNCTION(BlueprintPure)
    void GetStateHitReactionIdentifier(FSHHitReactionIdentifier& OutIdentifier) const;
    
    UFUNCTION(BlueprintPure)
    float GetRemainingStateDuration() const;
    
    UFUNCTION(BlueprintCallable)
    bool CancelState(bool InInstant);
    
protected:
    UFUNCTION()
    void BoundAnimationEnded(UAnimMontage* InMontage, ESHAnimEndType InAnimEndType);
    
    UFUNCTION()
    void BoundAnimationBlendingOut(UAnimMontage* InMontage, ESHAnimEndType InAnimEndType);
    
};

