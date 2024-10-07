#pragma once
#include "CoreMinimal.h"
#include "EMaiAggroStance.h"
#include "ESHHitReactionResponseType.h"
#include "SHAnimComponent.h"
#include "SHBonePhysicsControllerSettingsProfile.h"
#include "SHEnemyDeathEndedDelegate.h"
#include "SHEnemyDeathStartedDelegate.h"
#include "SHEnemyFalterEndedDelegate.h"
#include "SHEnemyFalterStartedDelegate.h"
#include "SHEnemyKnockdownEndedDelegate.h"
#include "SHEnemyKnockdownStartedDelegate.h"
#include "SHEnemyNormalHitEndedDelegate.h"
#include "SHEnemyNormalHitStartedDelegate.h"
#include "SHEnemyStaggerEndedDelegate.h"
#include "SHEnemyStaggerStartedDelegate.h"
#include "SHEnemyTwitchesEndedDelegate.h"
#include "SHEnemyTwitchesStartedDelegate.h"
#include "SHHitReactionResultBonePhysics.h"
#include "SHRagDollSubcompSettings.h"
#include "Templates/SubclassOf.h"
#include "SHEnemyAnimComponent.generated.h"

class AAIController;
class ACharacter;
class AController;
class APawn;
class UPhysicalAnimationProfileDA;
class USHHitReactionState;
class USHHitReactionSubcomponent;
class USHHitReactionsSet;
class USHMonsterLocomotionAnimInstance;
class USHReviveAnimationsDA;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHEnemyAnimComponent : public USHAnimComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSHEnemyDeathStarted EventDeathHitReactionStarted;
    
    UPROPERTY(BlueprintAssignable)
    FSHEnemyDeathEnded EventDeathHitReactionEnded;
    
    UPROPERTY(BlueprintAssignable)
    FSHEnemyKnockdownStarted EventKnockdownHitReactionStarted;
    
    UPROPERTY(BlueprintAssignable)
    FSHEnemyKnockdownEnded EventKnockdownHitReactionEnded;
    
    UPROPERTY(BlueprintAssignable)
    FSHEnemyFalterStarted EventFalterHitReactionStarted;
    
    UPROPERTY(BlueprintAssignable)
    FSHEnemyFalterEnded EventFalterHitReactionEnded;
    
    UPROPERTY(BlueprintAssignable)
    FSHEnemyStaggerStarted EventStaggerHitReactionStarted;
    
    UPROPERTY(BlueprintAssignable)
    FSHEnemyStaggerEnded EventStaggerHitReactionEnded;
    
    UPROPERTY(BlueprintAssignable)
    FSHEnemyNormalHitStarted EventNormalHitReactionStarted;
    
    UPROPERTY(BlueprintAssignable)
    FSHEnemyNormalHitEnded EventNormalHitReactionEnded;
    
    UPROPERTY(BlueprintAssignable)
    FSHEnemyTwitchesStarted EventTwitchHitReactionStarted;
    
    UPROPERTY(BlueprintAssignable)
    FSHEnemyTwitchesEnded EventTwitchHitReactionEnded;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UPhysicalAnimationProfileDA* PhysicalAnimationProfileDA;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USHReviveAnimationsDA* ReviveAnimationsDA;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USHHitReactionsSet* HitReactionsSet;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EMaiAggroStance, TSubclassOf<USHMonsterLocomotionAnimInstance>> LocomotionAnimInstances;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHRagDollSubcompSettings RagDollSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHBonePhysicsControllerSettingsProfile BonePhysicsSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDrawHitReactionsDebug;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bPrintBonePhysicsStates;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDrawRagdollPose;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DrawStreamedRagdollPoseDuration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDrawBoneAppliedPhysicsForces;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DrawBoneAppliedPhysicsForcesScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDrawBoneActivePhysicsForces;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DrawBoneActivePhysicsForcesScale;
    
    UPROPERTY(Transient)
    ACharacter* OwnerCharacter;
    
    UPROPERTY(Transient)
    AAIController* OwnerController;
    
    UPROPERTY(Transient)
    USHHitReactionSubcomponent* CachedHitReactionsSubcomponent;
    
public:
    USHEnemyAnimComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLyingState(bool InIsLying, bool InIsTransforming);
    
protected:
    UFUNCTION()
    void ProcessHitReactionStateStartedEvent(USHHitReactionSubcomponent* InHitReactionComponent, USHHitReactionState* InHitReactionState);
    
    UFUNCTION()
    void ProcessHitReactionStateEndedEvent(USHHitReactionSubcomponent* InHitReactionComponent, USHHitReactionState* InHitReactionState);
    
    UFUNCTION()
    bool ProcessHitReactionBonePhysicsRequestEvent(USHHitReactionSubcomponent* InHitReactionComponent, const FSHHitReactionResultBonePhysics& InBonePhysics);
    
    UFUNCTION()
    void ProcessEnemyBehaviorStanceChangedEvent(EMaiAggroStance NewAggroStance);
    
    UFUNCTION()
    void OnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInTwitchState(bool InIncludeFinishing) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInStaggerState(bool InIncludeFinishing) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInNormalHitState(bool InIncludeFinishing) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInKnockdownState(bool InIncludeFinishing) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInFalterState(bool InIncludeFinishing) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInDeathState(bool InIncludeFinishing) const;
    
    UFUNCTION(BlueprintPure)
    void GetActiveHitReactionVariants(ESHHitReactionResponseType InHitReactionType, TArray<FName>& OutHitReactionVariants) const;
    
};

