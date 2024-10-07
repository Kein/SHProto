#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MaiHealthChangeDelegate.h"
#include "MaiHealthChangeExternDelegate.h"
#include "MaiHealthEventDelegate.h"
#include "MaiHealth.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiHealth : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float _HealthMul[10];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 _MaxHealth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float _Health;
    
    UPROPERTY(EditAnywhere, SaveGame)
    bool _Immortal;
    
    UPROPERTY(BlueprintAssignable)
    FMaiHealthEvent OnDead;
    
    UPROPERTY(BlueprintAssignable)
    FMaiHealthEvent OnRevive;
    
    UPROPERTY(BlueprintAssignable)
    FMaiHealthChange OnHealthChange;
    
    UPROPERTY(BlueprintAssignable)
    FMaiHealthChangeExtern OnHealthChangeEx;
    
    UMaiHealth(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetImmortal(bool immortal);
    
    UFUNCTION(BlueprintCallable)
    void SetHealth(int32 NewHealth);
    
    UFUNCTION(BlueprintCallable)
    void Revive();
    
    UFUNCTION(BlueprintCallable)
    void ReceiveDamage(float Damage, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveCure(float cure, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void Kill();
    
    UFUNCTION(BlueprintPure)
    bool IsImmortal() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable)
    void Heal();
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxHealth() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHealthPercent() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHealth() const;
    
};

