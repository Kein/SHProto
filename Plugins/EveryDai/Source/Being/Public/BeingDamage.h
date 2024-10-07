#pragma once
#include "CoreMinimal.h"
#include "GameFramework/DamageType.h"
#include "GameplayTagContainer.h"
#include "BeingDamage.generated.h"

UCLASS()
class BEING_API UBeingDamage : public UDamageType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _KnockDownChance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _BreakBlock: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _CanKill: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _Finisher: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _PureDamage: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _DeadlyDamage: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _StunDamage: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _AcidDamage: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer _GameplayTags;
    
    UBeingDamage();

};

