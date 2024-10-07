#pragma once
#include "CoreMinimal.h"
#include "SHPukePuddleBase.h"
#include "SHPukePuddle.generated.h"

class ACharacter;

UCLASS(Abstract)
class ASHPukePuddle : public ASHPukePuddleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _SmokeDensity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _CloseDistFactor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _Damage;
    
public:
    ASHPukePuddle(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsPuddleDamageActive() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void HandleApplyDamage(ACharacter* DamagedCharacter);
    
};

