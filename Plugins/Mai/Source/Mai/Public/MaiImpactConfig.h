#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "MaiImpactConfig.generated.h"

class UDamageType;

USTRUCT(BlueprintType)
struct FMaiImpactConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool _PhysicalHit;
    
    UPROPERTY(EditAnywhere)
    bool _OverrideImpactAngle;
    
    UPROPERTY(EditAnywhere)
    bool _OverrideImpactRange;
    
    UPROPERTY(EditAnywhere)
    bool _OverrideImpactDir;
    
    UPROPERTY(EditAnywhere)
    float _ImpactAngle;
    
    UPROPERTY(EditAnywhere)
    float _ImpactRange;
    
    UPROPERTY(EditAnywhere)
    float _ImpactDir;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDamageType> _DamageType;
    
    UPROPERTY(EditAnywhere)
    bool _OverrideDamage;
    
    UPROPERTY(EditAnywhere)
    FInt32Range _Damage;
    
    MAI_API FMaiImpactConfig();
};

