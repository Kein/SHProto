#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EffectHandle.h"
#include "SHEndingValueProcessor.h"
#include "SHStompedDeadEnemiesEndingValueProcessor.generated.h"

class AActor;
class ASHItemWeapon;
class ASHItemWeaponMelee;
class USHMeleeCmbSubcomp;

UCLASS(BlueprintType)
class SHPROTO_API USHStompedDeadEnemiesEndingValueProcessor : public USHEndingValueProcessor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle StompAttackDataRowHandle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RequiredMinBloodPuddleProgressAlpha;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEffectHandle LightEffect;
    
public:
    USHStompedDeadEnemiesEndingValueProcessor();

protected:
    UFUNCTION()
    void ProcessPrimaryAttackStarted(USHMeleeCmbSubcomp* MeleeCombat, ASHItemWeapon* ItemWeaponContext);
    
    UFUNCTION()
    void ProcessDeadEnemyDamaged(ASHItemWeaponMelee* MeleeWeapon, AActor* DamagedActorContext);
    
};

