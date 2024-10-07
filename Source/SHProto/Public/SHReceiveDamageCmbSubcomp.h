#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESHAnimEndType.h"
#include "PlayAnimationData.h"
#include "SHCombatSubcomponentBase.h"
#include "Templates/SubclassOf.h"
#include "SHReceiveDamageCmbSubcomp.generated.h"

class UAnimMontage;
class UDamageType;
class UObject;

UCLASS(EditInlineNew)
class SHPROTO_API USHReceiveDamageCmbSubcomp : public USHCombatSubcomponentBase {
    GENERATED_BODY()
public:
    USHReceiveDamageCmbSubcomp();

    UFUNCTION(BlueprintCallable)
    bool SynchroReceiveDamage(const UObject* Object, const FPlayAnimationData& AnimData);
    
    UFUNCTION(BlueprintCallable)
    void SetReceiveStunDamageBlocked(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetReceiveSoftDamageBlocked(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetReceiveContinuousDamageBlocked(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    float ReceiveDamage(float DamageValue, const UObject* Object, const FVector& HitDirection, const TSubclassOf<UDamageType>& DamageType);
    
protected:
    UFUNCTION()
    void OnReceiveDamageEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsReceiveStunDamageBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsReceiveSoftDamageBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsReceiveContinuousDamageBlocked() const;
    
};

