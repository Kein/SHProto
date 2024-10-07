#pragma once
#include "CoreMinimal.h"
#include "MeleeDamage.h"
#include "UObject/NoExportTypes.h"
#include "SHMeleeBaseDamage.generated.h"

UCLASS()
class SHPROTO_API USHMeleeBaseDamage : public UMeleeDamage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator HitDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HitRotationRatio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsGroundHit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DamageMultiplier;
    
    USHMeleeBaseDamage();

};

