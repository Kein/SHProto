#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/HitResult.h"
#include "GameplayTagContainer.h"
#include "EMaiAttackRange.h"
#include "MaiAttackBTNode.h"
#include "MaiAttackBeginDelegate.h"
#include "MaiAttackConfig.h"
#include "MaiAttackEndDelegate.h"
#include "MaiAttackerConfig.h"
#include "MaiDamageEnemyDelegate.h"
#include "Templates/SubclassOf.h"
#include "MaiAttackerComponent.generated.h"

class AActor;
class UBTCompositeNode;
class UBehaviorTree;
class UDamageType;
class UDataTable;
class UMaiAttack;
class UMaiAttackerComponent;
class UMaiIsLineToEnemyClearStat;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiAttackerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UMaiIsLineToEnemyClearStat* _CanMove;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UMaiIsLineToEnemyClearStat* _CanShoot;
    
    UPROPERTY(EditAnywhere)
    bool _AutoCombatRange;
    
    UPROPERTY(EditAnywhere)
    float _CombatRange;
    
    UPROPERTY()
    TArray<FName> _IgnoreLocks;
    
    UPROPERTY(EditAnywhere)
    UDataTable* _TableOfAttacks;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    UBehaviorTree* _AttacksTree;
    
    UPROPERTY(EditAnywhere)
    FMaiAttackerConfig _DifficultyConfig[10];
    
    UPROPERTY(EditAnywhere)
    FGameplayTag _AttacksTreeInjectTag;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag _BehaviorInjectTag;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag _CountersTreeInjectTag;
    
    UPROPERTY(EditAnywhere)
    FName _BBDelayAfterAttack;
    
    UPROPERTY(Transient)
    TMap<FName, FMaiAttackConfig> _Attacks;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Instanced)
    TMap<FName, UMaiAttack*> _SingleAttacks;
    
    UPROPERTY(AdvancedDisplay, EditInstanceOnly, Transient)
    TArray<FMaiAttackBTNode> _BTAttacks;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleInstanceOnly)
    UBTCompositeNode* _BTAttacksRoot;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleInstanceOnly)
    int32 _BlowImpactID;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleInstanceOnly)
    uint8 _ChaseMode: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Transient, VisibleInstanceOnly)
    UMaiAttack* _CurrentAttack;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleInstanceOnly)
    AActor* _AttackTarget;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleInstanceOnly)
    TArray<AActor*> _HittedActors;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleInstanceOnly)
    float _Cooldown;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleInstanceOnly)
    bool _ForceMiss;
    
    UPROPERTY(AdvancedDisplay, SaveGame, VisibleInstanceOnly)
    FName _NextAttackName;
    
    UPROPERTY(Transient)
    UMaiAttack* _NextAttack;
    
public:
    UPROPERTY(BlueprintAssignable)
    FMaiDamageEnemy DamageEnemy;
    
    UPROPERTY(BlueprintAssignable)
    FMaiAttackBegin OnAttackBegin;
    
    UPROPERTY(BlueprintAssignable)
    FMaiAttackEnd OnAttackEnd;
    
    UPROPERTY(BlueprintAssignable)
    FMaiAttackEnd OnAttackCleared;
    
    UMaiAttackerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TryApplyPhysicalDamage(AActor* enemy, FHitResult Hit);
    
    UFUNCTION(BlueprintCallable)
    bool TryApplyLogicalDamage(AActor* enemy, float Damage, int32 impactID);
    
    UFUNCTION(BlueprintCallable)
    void StopAttack(bool Aborted, FName attackName);
    
    UFUNCTION(BlueprintCallable)
    void StartBlow(int32 impactID);
    
    UFUNCTION(BlueprintCallable)
    void SelectAttack(AActor* enemy, FName attackName);
    
    UFUNCTION(BlueprintCallable)
    void RunPureAttack(AActor* enemy, FName attackName);
    
    UFUNCTION(BlueprintPure)
    bool IsMissed(AActor* enemy) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInAttackRange(AActor* enemy, float velocityScale) const;
    
    UFUNCTION(BlueprintCallable)
    void InjectBT(bool inject);
    
    UFUNCTION(BlueprintPure)
    bool HasHit() const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyValidAttack(AActor* enemy, EMaiAttackRange Range, bool checkCone, bool checkToken) const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentAttackTime() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetCurrentAttackTarget() const;
    
    UFUNCTION(BlueprintPure)
    EMaiAttackRange GetAttackRangeType(AActor* enemy, FName attackName) const;
    
    UFUNCTION(BlueprintCallable)
    static UMaiAttackerComponent* getAttacker(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void ForceNextAttack(FName attackName);
    
    UFUNCTION(BlueprintCallable)
    void ForceMiss(bool miss);
    
    UFUNCTION(BlueprintPure)
    UMaiAttack* FindBestAttack() const;
    
    UFUNCTION(BlueprintCallable)
    void FillAttacks();
    
    UFUNCTION(BlueprintCallable)
    void EndBlow(int32 impactID);
    
    UFUNCTION(BlueprintCallable)
    void EnableFocusOnEnemy(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void EnableChaseMode(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void DebugAttack(AActor* enemy);
    
    UFUNCTION(BlueprintCallable)
    void CleanUpAttack(FName attackName);
    
    UFUNCTION(BlueprintCallable)
    void ChangeAttacksBT(UBehaviorTree* attacksTree);
    
    UFUNCTION(BlueprintCallable)
    void BeginAttack();
    
    UFUNCTION(BlueprintCallable)
    bool ApplyDamage(AActor* enemy, FHitResult Hit, TSubclassOf<UDamageType> DamageType, float Damage, bool singleDamage);
    
};

