#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EMaiAttackDodgeReaction.h"
#include "EMaiAttackFocus.h"
#include "EMaiAttackInitialStance.h"
#include "EMaiAttackSnap.h"
#include "EMaiAttackStatus.h"
#include "EMaiToken.h"
#include "MaiImpactConfig.h"
#include "Templates/SubclassOf.h"
#include "MaiAttack.generated.h"

class AAIController;
class AActor;
class ACharacter;
class UBehaviorTree;
class UDamageType;
class UMaiAttackerComponent;

UCLASS(Blueprintable, EditInlineNew)
class MAI_API UMaiAttack : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool _CheckAttackCone;
    
    UPROPERTY(EditAnywhere)
    FFloatRange _AttackRange;
    
    UPROPERTY(EditAnywhere)
    float _AttackDir;
    
    UPROPERTY(EditAnywhere)
    float _AttackAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMaiToken _TokenType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMaiAttackInitialStance _InitialStance;
    
    UPROPERTY(EditAnywhere)
    UBehaviorTree* _Behavior;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer _AnimTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _PureAttackRange;
    
    UPROPERTY(EditAnywhere)
    float _FocusCharging;
    
    UPROPERTY(EditAnywhere)
    FFloatRange _FocusRate;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEasingFunc::Type> _FocusFunc;
    
    UPROPERTY(EditAnywhere)
    EMaiAttackFocus _FocusMode;
    
    UPROPERTY(EditAnywhere)
    EMaiAttackSnap _SnapMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMaiAttackDodgeReaction _DodgeReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _TimeToDodgeBeforeHit;
    
    UPROPERTY(AdvancedDisplay, VisibleInstanceOnly)
    bool _AllowDodgeReaction;
    
    UPROPERTY(EditAnywhere)
    bool _CheckImpactCone;
    
    UPROPERTY(EditAnywhere)
    float _ImpactDir;
    
    UPROPERTY(EditAnywhere)
    float _ImpactAngle;
    
    UPROPERTY(EditAnywhere)
    float _ImpactRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMaiImpactConfig> _AltImpacts;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDamageType> _DamageType;
    
    UPROPERTY(EditAnywhere)
    FInt32Range _Damage;
    
    UPROPERTY(EditAnywhere)
    bool _CheckCooldown;
    
    UPROPERTY(EditAnywhere)
    FFloatRange _Cooldown;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleInstanceOnly)
    float _CooldownValue;
    
    UPROPERTY(EditAnywhere)
    FFloatRange _DelayAfterAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _EndWithMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _RangedAttack;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleInstanceOnly)
    uint8 _EnabledFocus: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleInstanceOnly)
    uint8 _EnabledSnap: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleInstanceOnly)
    uint8 _DuringBlow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleInstanceOnly)
    uint8 _AttackCommited: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleInstanceOnly)
    float _AttackTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleInstanceOnly)
    float _LastHitTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleInstanceOnly)
    float _NextHitTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleInstanceOnly)
    EMaiAttackStatus _AttackStatus;
    
public:
    UMaiAttack();

    UFUNCTION(BlueprintCallable)
    void SetSnapMode(EMaiAttackSnap Mode);
    
    UFUNCTION(BlueprintCallable)
    void SetLogicalImpact(bool Enable, float Range, float Angle, float dir);
    
    UFUNCTION(BlueprintCallable)
    void SetFocus(EMaiAttackFocus Mode, float charging);
    
    UFUNCTION(BlueprintCallable)
    void SetDamage(TSubclassOf<UDamageType> DamageType, int32 Min, int32 Max);
    
    UFUNCTION(BlueprintCallable)
    void SetCooldown(float Min, float Max);
    
    UFUNCTION(BlueprintCallable)
    void SetBehavior(UBehaviorTree* Behavior, TArray<FGameplayTag> animTags);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackRange(float Min, float Max);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackCone(float Angle, float dir);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackCommited();
    
    UFUNCTION(BlueprintCallable)
    void SetAllowDodgeReaction(bool allow);
    
    UFUNCTION(BlueprintImplementableEvent)
    void LoadRowHandle(const FDataTableRowHandle& AttackRow);
    
    UFUNCTION(BlueprintPure)
    bool IsSnapping() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFocusing() const;
    
    UFUNCTION(BlueprintPure)
    ACharacter* GetOwnerCH() const;
    
    UFUNCTION(BlueprintPure)
    AAIController* GetOwnerAI() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetOwnerActor() const;
    
    UFUNCTION(BlueprintPure)
    float GetImpactRange(int32 impactID) const;
    
    UFUNCTION(BlueprintPure)
    float GetImpactDir(int32 impactID) const;
    
    UFUNCTION(BlueprintPure)
    float GetImpactAngle(int32 impactID) const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UDamageType> GetDamageType(int32 impactID) const;
    
    UFUNCTION(BlueprintPure)
    float GetDamage(int32 impactID) const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetAttackTarget() const;
    
    UFUNCTION(BlueprintPure)
    void GetAttackRange(float& Min, float& Max) const;
    
    UFUNCTION(BlueprintPure)
    UMaiAttackerComponent* GetAttackerComponent() const;
    
    UFUNCTION(BlueprintPure)
    bool GetAllowDodgeReaction() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void EventTickAttack(AActor* Owner, float DeltaSeconds);
    
    UFUNCTION(BlueprintNativeEvent)
    void EventStopAttack(AActor* Owner, bool Aborted);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventStartBlow(AActor* Owner, int32 impactID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventInitAttack(AActor* Owner);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventEndBlow(AActor* Owner);
    
    UFUNCTION(BlueprintNativeEvent)
    void EventBeginAttack(AActor* Owner);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventAttackMiss(AActor* Owner);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventAttackHit(AActor* Owner);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventAllowDodge(AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    void EndAttack(bool Abort);
    
    UFUNCTION(BlueprintCallable)
    void EnableSnap();
    
    UFUNCTION(BlueprintCallable)
    void EnableFocus();
    
    UFUNCTION(BlueprintCallable)
    void DisableSnap();
    
    UFUNCTION(BlueprintCallable)
    void DisableFocus();
    
};

