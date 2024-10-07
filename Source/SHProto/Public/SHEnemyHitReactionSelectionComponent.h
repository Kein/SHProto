#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/HitResult.h"
#include "EMaiAggroStance.h"
#include "ESHHitReactionSelectionHitResponseType.h"
#include "SHEnemyHitReactionSelectionAllowedStates.h"
#include "SHEnemyHitReactionSelectionBoneGroup.h"
#include "SHHitReactionIdentifier.h"
#include "SHEnemyHitReactionSelectionComponent.generated.h"

class AActor;
class ISHHitReactionSelectionHitReactionBlockerInterface;
class USHHitReactionSelectionHitReactionBlockerInterface;
class UDamageType;
class USEnemyHitReactionSelection;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHEnemyHitReactionSelectionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    USEnemyHitReactionSelection* HitReactionSelectionConfiguration;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSHEnemyHitReactionSelectionBoneGroup> BoneGroups;
    
    UPROPERTY(EditDefaultsOnly)
    bool bPrintDebug;
    
public:
    USHEnemyHitReactionSelectionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartHitResponseVariantCooldowns(ESHHitReactionSelectionHitResponseType InHitResponse, FName InVariantName, float InAdditionalDuration, bool InResetCurrent);
    
    UFUNCTION(BlueprintCallable)
    void StartHitResponseDefaultCooldownCounter(ESHHitReactionSelectionHitResponseType InHitResponse, float InCooldownTime, bool InResetCurrent);
    
    UFUNCTION(BlueprintCallable)
    void StartHitResponseCooldownCounter(FName InCounterName, float InCooldownTime, bool InResetCurrent);
    
    UFUNCTION(BlueprintCallable)
    void SetPrintHitReactionSelectionDebug(bool InPrintDebug);
    
    UFUNCTION(BlueprintCallable)
    void SetHitReactionSelectionConfiguration(USEnemyHitReactionSelection* InConfiguration);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllActiveCountedHits();
    
    UFUNCTION(BlueprintCallable)
    void ResetActiveCountedHitsOfCounterName(FName InConsecutiveHitsCounterName);
    
    UFUNCTION(BlueprintCallable)
    void RemoveHitReactionsBlocker(TScriptInterface<ISHHitReactionSelectionHitReactionBlockerInterface> InHitReactionsBlocker);
    
    UFUNCTION(BlueprintPure)
    bool IsUsingHitReactionSelectionConfiguration(USEnemyHitReactionSelection* InConfiguration) const;
    
    UFUNCTION(BlueprintCallable)
    void IncrementActiveCountedHitsByDamage(int32 InHitIdentifier, const UDamageType* InDamageType, FName InHitBoneName, int32 InHitBoneShapeIndex);
    
    UFUNCTION(BlueprintPure)
    float GetHitResponseDefaultCooldownRemainingTime(ESHHitReactionSelectionHitResponseType InHitResponse) const;
    
    UFUNCTION(BlueprintPure)
    float GetHitResponseCooldownRemainingTime(ESHHitReactionSelectionHitResponseType InHitResponse, FName InVariantName) const;
    
    UFUNCTION(BlueprintPure)
    float GetHitResponseCooldownCounterRemainingTime(FName InCounterName) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetActiveCountedHitsOfTimerUsedByBoneGroup(FName InBonesGroupName) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetActiveCountedHitsOfTimerUsedByBone(FName InBoneName, int32 InBoneShapeIndex) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetActiveCountedHitsOfCounterName(FName InConsecutiveHitsCounterName) const;
    
    UFUNCTION(BlueprintPure)
    FName FindHitsCounterNameUsedByBonesGroup(FName InBonesGroupName) const;
    
    UFUNCTION(BlueprintPure)
    FName FindHitsCounterNameUsedByBone(FName InBoneName, int32 InBoneShapeIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void DecideHitResponse(float& OutDamageMultiplier, float& OutMaximumRemainingHealthFraction, ESHHitReactionSelectionHitResponseType& OutHitResponseType, FName& OutHitResponseVariant, float& OutHitResponseDurationLimit, FName& OutDeathVariant, TArray<FName>& OutResetConsecutiveHitCounters, const FVector& InDamageSourceLocation, const FHitResult& InHitInfo, const UDamageType* InDamageType, AActor* InDamageCauser, EMaiAggroStance InAggressionLevel, float InHealthFraction, const TArray<FSHHitReactionIdentifier>& InActiveHitReactions, const FSHEnemyHitReactionSelectionAllowedStates& InAllowedStates);
    
    UFUNCTION(BlueprintCallable)
    bool CountReceivedHitAndDecideResponse(float& OutDamageMultiplier, float& OutMaximumRemainingHealthFraction, ESHHitReactionSelectionHitResponseType& OutHitResponseType, FName& OutHitResponseVariant, float& OutHitResponseDurationLimit, FName& OutDeathVariant, const FVector& InDamageSourceLocation, const FHitResult& InHitInfo, const UDamageType* InDamageType, AActor* InDamageCauser, int32 InHitIdentifier, EMaiAggroStance InAggressionLevel, float InHealthFraction, const TArray<FSHHitReactionIdentifier>& InActiveHitReactions, const FSHEnemyHitReactionSelectionAllowedStates& InAllowedStates);
    
    UFUNCTION(BlueprintCallable)
    void AddHitReactionsBlocker(TScriptInterface<ISHHitReactionSelectionHitReactionBlockerInterface> InHitReactionsBlocker);
    
};

