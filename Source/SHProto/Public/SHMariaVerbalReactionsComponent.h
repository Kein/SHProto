#pragma once
#include "CoreMinimal.h"
#include "DialogTalkID.h"
#include "Components/ActorComponent.h"
#include "SHMariaVerbalReactionsComponent.generated.h"

class ASHAICharacter;
class ASHItemWeapon;
class UObject;
class USHMariaCombatComponent;
class USHMeleeCmbSubcomp;
class USHRangedCmbSubcomp;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHMariaVerbalReactionsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxAllowedCoreDistance2D;
    
    UPROPERTY(Transient)
    ASHAICharacter* OwnerAICharacter;
    
    UPROPERTY(SaveGame)
    bool bIsCompleted;
    
public:
    USHMariaVerbalReactionsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetGeneralBlocked(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetDangerModeChangedCommentBlocked(const bool Blocked, const UObject* Object);
    
protected:
    UFUNCTION()
    void ProcessPlayerRangedFireSuccess(USHRangedCmbSubcomp* RangedCombatSubcomponent, ASHItemWeapon* ItemWeaponContext);
    
    UFUNCTION()
    void ProcessPlayerRangedAimPointingActorChanged(USHRangedCmbSubcomp* RangedCombatSubcomponent);
    
    UFUNCTION()
    void ProcessPlayerMeleeSecondaryAttackStarted(USHMeleeCmbSubcomp* MeleeCombatSubcomponent, ASHItemWeapon* ItemWeaponContext);
    
    UFUNCTION()
    void ProcessPlayerMeleePrimaryAttackStarted(USHMeleeCmbSubcomp* MeleeCombatSubcomponent, ASHItemWeapon* ItemWeaponContext);
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkAsCompleted();
    
    UFUNCTION(BlueprintPure)
    bool IsPlayerCombatStateConditionsMeet() const;
    
    UFUNCTION(BlueprintPure)
    bool IsGeneralBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDangerModeChangedCommentBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCutsceneStateConditionsMeet() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCoreDistance2DConditionsMeet() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCompleted() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBehaviourStateConditionsMeet() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void HandlePlayerRangedFireSuccess(USHRangedCmbSubcomp* RangedCombatSubcomponent, ASHItemWeapon* ItemWeaponContext);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandlePlayerMeleeSecondaryAttackStarted(USHMeleeCmbSubcomp* MeleeCombatSubcomponent, ASHItemWeapon* ItemWeaponContext);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandlePlayerMeleePrimaryAttackStarted(USHMeleeCmbSubcomp* MeleeCombatSubcomponent, ASHItemWeapon* ItemWeaponContext);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleMariaInDangerModeChanged(USHMariaCombatComponent* CombatComponent);
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<FDialogTalkID> GetDialogsToPreload();
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<FString> GenerateCustomValuesDebug();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool AreCustomConditionsMeet() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool AreAllConditionsMeet() const;
    
};

