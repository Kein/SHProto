#pragma once
#include "CoreMinimal.h"
#include "EMaiAggroStance.h"
#include "SHNPCAnimInstance.h"
#include "SHMonsterAnimInstance.generated.h"

UCLASS(NonTransient)
class SHPROTO_API USHMonsterAnimInstance : public USHNPCAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    EMaiAggroStance aggroStance;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsOtherWorldEnemy;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsLying;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsTransforming;
    
public:
    USHMonsterAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetEnemyReviveSeizuresToBePlayed(float InSeizuresCount);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemyIsOtherWorld(bool InEnemyIsOW);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnTransformationToStandingStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnTransformationToStandingFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnTransformationToLyingStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnTransformationToLyingFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnStanceChangedToNeutral();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnStanceChangedToMaximum();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnStanceChangedToCautious();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnStanceChangedToAggressive();
    
    UFUNCTION(BlueprintPure)
    bool IsTransformingToStanding() const;
    
    UFUNCTION(BlueprintPure)
    bool IsTransformingToLying() const;
    
    UFUNCTION(BlueprintPure)
    bool IsStanding(bool IncludeTransformingInto, bool IncludeTransformingOutOf) const;
    
    UFUNCTION(BlueprintPure)
    bool IsOtherWorldEnemy() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLying(bool IncludeTransformingInto, bool IncludeTransformingOutOf) const;
    
public:
    UFUNCTION(BlueprintPure)
    float GetRemainingReviveSeizuresCount() const;
    
    UFUNCTION(BlueprintCallable)
    bool DecrementReviveSeizure(float InReduceSeizuresCount);
    
};

