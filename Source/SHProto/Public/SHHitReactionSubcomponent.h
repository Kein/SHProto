#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "ESHHitReactionHitType.h"
#include "ESHHitReactionResponseType.h"
#include "SHAnimSubcomponentBase.h"
#include "SHHitReactionArtificialHitConfiguration.h"
#include "SHHitReactionConfiguration.h"
#include "SHHitReactionIdentifier.h"
#include "SHHitReactionResult.h"
#include "SHHitReactionStateSerializedData.h"
#include "SHHitReactionSubcomponentDeathEndedDelegate.h"
#include "SHHitReactionSubcomponentDeathFinishingDelegate.h"
#include "SHHitReactionSubcomponentDeathStartedDelegate.h"
#include "SHHitReactionSubcomponentFalterEndedDelegate.h"
#include "SHHitReactionSubcomponentFalterFinishingDelegate.h"
#include "SHHitReactionSubcomponentFalterStartedDelegate.h"
#include "SHHitReactionSubcomponentKnockdownEndedDelegate.h"
#include "SHHitReactionSubcomponentKnockdownFinishingDelegate.h"
#include "SHHitReactionSubcomponentKnockdownStartedDelegate.h"
#include "SHHitReactionSubcomponentNormalHitEndedDelegate.h"
#include "SHHitReactionSubcomponentNormalHitFinishingDelegate.h"
#include "SHHitReactionSubcomponentNormalHitStartedDelegate.h"
#include "SHHitReactionSubcomponentRequestsAIBlockingDelegate.h"
#include "SHHitReactionSubcomponentRequestsControllerRotationDelegate.h"
#include "SHHitReactionSubcomponentStaggerEndedDelegate.h"
#include "SHHitReactionSubcomponentStaggerFinishingDelegate.h"
#include "SHHitReactionSubcomponentStaggerStartedDelegate.h"
#include "SHHitReactionSubcomponentStateEndedDelegate.h"
#include "SHHitReactionSubcomponentStateFinishingDelegate.h"
#include "SHHitReactionSubcomponentStateStartedDelegate.h"
#include "SHHitReactionSubcomponentTwitchEndedDelegate.h"
#include "SHHitReactionSubcomponentTwitchFinishingDelegate.h"
#include "SHHitReactionSubcomponentTwitchStartedDelegate.h"
#include "SHHitReactionTypeDelayedHitReactions.h"
#include "SHHitReactionTypePermissionState.h"
#include "SHHitReactionSubcomponent.generated.h"

class AActor;
class UDamageType;
class USHHitReactionState;
class USHHitReactionStatesContext;
class USHHitReactionsSet;

UCLASS(BlueprintType, EditInlineNew)
class SHPROTO_API USHHitReactionSubcomponent : public USHAnimSubcomponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSHHitReactionSubcomponentStateStarted EventHitReactionStateStarted;
    
    UPROPERTY(BlueprintAssignable)
    FSHHitReactionSubcomponentStateFinishing EventHitReactionStateFinishing;
    
    UPROPERTY(BlueprintAssignable)
    FSHHitReactionSubcomponentStateEnded EventHitReactionStateEnded;
    
    UPROPERTY(BlueprintAssignable)
    FSHHitReactionSubcomponentDeathStarted EventHitReactionDeathStarted;
    
    UPROPERTY(BlueprintAssignable)
    FSHHitReactionSubcomponentDeathFinishing EventHitReactionDeathFinishing;
    
    UPROPERTY(BlueprintAssignable)
    FSHHitReactionSubcomponentDeathEnded EventHitReactionDeathEnded;
    
    UPROPERTY(BlueprintAssignable)
    FSHHitReactionSubcomponentKnockdownStarted EventHitReactionKnockdownStarted;
    
    UPROPERTY(BlueprintAssignable)
    FSHHitReactionSubcomponentKnockdownFinishing EventHitReactionKnockdownFinishing;
    
    UPROPERTY(BlueprintAssignable)
    FSHHitReactionSubcomponentKnockdownEnded EventHitReactionKnockdownEnded;
    
    UPROPERTY(BlueprintAssignable)
    FSHHitReactionSubcomponentFalterStarted EventHitReactionFalterStarted;
    
    UPROPERTY(BlueprintAssignable)
    FSHHitReactionSubcomponentFalterFinishing EventHitReactionFalterFinishing;
    
    UPROPERTY(BlueprintAssignable)
    FSHHitReactionSubcomponentFalterEnded EventHitReactionFalterEnded;
    
    UPROPERTY(BlueprintAssignable)
    FSHHitReactionSubcomponentStaggerStarted EventHitReactionStaggerStarted;
    
    UPROPERTY(BlueprintAssignable)
    FSHHitReactionSubcomponentStaggerFinishing EventHitReactionStaggerFinishing;
    
    UPROPERTY(BlueprintAssignable)
    FSHHitReactionSubcomponentStaggerEnded EventHitReactionStaggerEnded;
    
    UPROPERTY(BlueprintAssignable)
    FSHHitReactionSubcomponentNormalHitStarted EventHitReactionNormalStarted;
    
    UPROPERTY(BlueprintAssignable)
    FSHHitReactionSubcomponentNormalHitFinishing EventHitReactionNormalFinishing;
    
    UPROPERTY(BlueprintAssignable)
    FSHHitReactionSubcomponentNormalHitEnded EventHitReactionNormalEnded;
    
    UPROPERTY(BlueprintAssignable)
    FSHHitReactionSubcomponentTwitchStarted EventHitReactionTwitchStarted;
    
    UPROPERTY(BlueprintAssignable)
    FSHHitReactionSubcomponentTwitchFinishing EventHitReactionTwitchFinishing;
    
    UPROPERTY(BlueprintAssignable)
    FSHHitReactionSubcomponentTwitchEnded EventHitReactionTwitchEnded;
    
    UPROPERTY(BlueprintAssignable)
    FSHHitReactionSubcomponentRequestsAIBlocking EventHitReactionsRequestAIBlocking;
    
    UPROPERTY(BlueprintAssignable)
    FSHHitReactionSubcomponentRequestsControllerRotation EventHitReactionsRequestAllowingControllerRotation;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<USHHitReactionsSet> HitReactionsSet;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool LoadHitReactionsOnStart;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDebugPrint;
    
    UPROPERTY(SaveGame)
    TArray<FSHHitReactionStateSerializedData> SerializedHitReactionStates;
    
    UPROPERTY()
    USHHitReactionsSet* LoadedHitReactionsSet;
    
    UPROPERTY()
    TSoftObjectPtr<USHHitReactionsSet> DelayedHitReactionsSet;
    
    UPROPERTY()
    TArray<FSHHitReactionTypePermissionState> HitReactionTypePermissions;
    
    UPROPERTY()
    TArray<FSHHitReactionTypeDelayedHitReactions> PermissionDelayedHitReactions;
    
    UPROPERTY()
    TArray<USHHitReactionState*> HitReactionStates;
    
    UPROPERTY()
    USHHitReactionStatesContext* HitReactionStatesContext;
    
    UPROPERTY()
    TArray<USHHitReactionState*> HitReactionStatesPool;
    
public:
    USHHitReactionSubcomponent();

    UFUNCTION(BlueprintCallable)
    void SetHitReactionsSet(TSoftObjectPtr<USHHitReactionsSet> InHitReactionsSet);
    
    UFUNCTION(BlueprintCallable)
    void SetHitReactionsDrawDebugEnabled(bool InDrawDebug);
    
    UFUNCTION(BlueprintCallable)
    void SetChangeHitReactionsSetDelayed(bool bInChangeHitReactionsSetDelayed);
    
    UFUNCTION(BlueprintPure)
    bool IsUsingHitReactionsSet(TSoftObjectPtr<USHHitReactionsSet> InHitReactionsSet, bool InCheckDelayedSet) const;
    
protected:
    UFUNCTION()
    void HitReactionStateFinishing(USHHitReactionState* InHitReactionState);
    
    UFUNCTION()
    void HitReactionStateEnded(USHHitReactionState* InHitReactionState);
    
public:
    UFUNCTION(BlueprintPure)
    bool HasHitReactionStatesOfTypeInProgress(ESHHitReactionResponseType InResponseType, bool InIncludeFinishing, bool InIncludeDelayed) const;
    
    UFUNCTION(BlueprintPure)
    bool HasHitReactionStatesOfTypeAndVariantInProgress(ESHHitReactionResponseType InResponseType, FName InResponseVariant, bool InIncludeFinishing, bool InIncludeDelayed) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyOfHitReactionStatesOfTypeInProgress(bool InDeath, bool InKnockdown, bool InFalter, bool InStagger, bool InNormal, bool InTwitch, bool InIncludeFinishing, bool InIncludeDelayed) const;
    
    UFUNCTION(BlueprintCallable)
    void FinishHitReactionsOfTypes(bool InDeath, bool InKnockdown, bool InFalter, bool InStagger, bool InNormal, bool InTwitch);
    
    UFUNCTION(BlueprintCallable)
    void FinishHitReactionsOfTypeAndVariant(ESHHitReactionResponseType InResponseType, FName InResponseVariant);
    
    UFUNCTION(BlueprintCallable)
    void FinishHitReactionsOfType(ESHHitReactionResponseType InResponseType);
    
    UFUNCTION(BlueprintCallable)
    void FinishAllHitReactions();
    
    UFUNCTION(BlueprintPure)
    void FindAllHitReactionStateIdentifiers(TArray<FSHHitReactionIdentifier>& OutHitReactionIdentifiers, bool InIncludeFinishing, bool InIncludeDelayed) const;
    
    UFUNCTION(BlueprintPure)
    void FindActiveHitReactionVariants(ESHHitReactionResponseType InResponseType, TArray<FName>& OutHitReactionVariants, bool InIncludeFinishing, bool InIncludeDelayed) const;
    
    UFUNCTION(BlueprintCallable)
    void EnableHitReactionTypeDelay(ESHHitReactionResponseType InResponseType, const TArray<FName>& InDontDelayVariants);
    
    UFUNCTION(BlueprintCallable)
    void DisableHitReactionTypeDelay(ESHHitReactionResponseType InResponseType, bool InApplyDelayedHitReactions, const TArray<FName>& InDontApplyVariants);
    
    UFUNCTION(BlueprintPure)
    bool ChooseHitReaction(FSHHitReactionConfiguration& OutHitReactionConfiguration, const UDamageType* InDamageType, ESHHitReactionResponseType InResponseType, FName InResponseVariant, float InForce, ESHHitReactionHitType InHitType, FVector InSourceLocation, AActor* InDamageCauser, const FHitResult& HitInfo) const;
    
    UFUNCTION(BlueprintCallable)
    bool ChooseAndApplyHitReaction(FSHHitReactionResult& OutHitReactionResult, const UDamageType* InDamageType, ESHHitReactionResponseType InResponseType, FName InResponseVariant, float InDurationLimit, float InForce, ESHHitReactionHitType InHitType, FVector InSourceLocation, AActor* InDamageCauser, const FHitResult& HitInfo);
    
    UFUNCTION(BlueprintCallable)
    void CancelHitReactionsOfTypes(bool InDeath, bool InKnockdown, bool InFalter, bool InStagger, bool InNormal, bool InTwitch, bool InInstant);
    
    UFUNCTION(BlueprintCallable)
    void CancelHitReactionsOfTypeAndVariant(ESHHitReactionResponseType InResponseType, FName InResponseVariant, bool InInstant);
    
    UFUNCTION(BlueprintCallable)
    void CancelHitReactionsOfType(ESHHitReactionResponseType InResponseType, bool InInstant);
    
    UFUNCTION(BlueprintCallable)
    void CancelAllHitReactions(bool InInstant);
    
    UFUNCTION(BlueprintPure)
    bool AreHitReactionsWantingDisabledAI() const;
    
    UFUNCTION(BlueprintPure)
    bool AreHitReactionsPreventingControllerRotation() const;
    
    UFUNCTION(BlueprintPure)
    bool AreHitReactionsOfTypeDelayed(ESHHitReactionResponseType InResponseType);
    
    UFUNCTION(BlueprintCallable)
    bool ApplyHitReaction(FSHHitReactionResult& OutHitReactionResult, const UDamageType* InDamageType, ESHHitReactionResponseType InResponseType, FName InResponseVariant, float InDurationLimit, float InForce, ESHHitReactionHitType InHitType, FVector InSourceLocation, AActor* InDamageCauser, const FHitResult& HitInfo, const FSHHitReactionConfiguration& InHitReactionConfiguration);
    
    UFUNCTION(BlueprintCallable)
    bool ApplyArtificialHitReaction(FSHHitReactionResult& OutHitReactionResult, const FSHHitReactionArtificialHitConfiguration& InArtificialHitReactionConfiguration);
    
};

