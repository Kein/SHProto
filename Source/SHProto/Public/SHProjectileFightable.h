#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SHMeleeAttackSecondaryTargetInterface.h"
#include "SHProjectile.h"
#include "SHProjectileFightable.generated.h"

class UObject;

UCLASS()
class ASHProjectileFightable : public ASHProjectile, public ISHMeleeAttackSecondaryTargetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxAllowedHeightDelta;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxAllowedDistanceToHitPoint2D;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle SecondaryAttackDataRowHandle;
    
public:
    ASHProjectileFightable(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDeactivated(const bool bDeactivated, const UObject* Object);
    
    UFUNCTION(BlueprintPure)
    bool IsDeactivated() const;
    

    // Fix for true pure virtual functions not being implemented
};

