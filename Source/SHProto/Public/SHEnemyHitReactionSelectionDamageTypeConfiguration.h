#pragma once
#include "CoreMinimal.h"
#include "SHEnemyHitReactionSelectionDefaultHitBoneConfiguration.h"
#include "SHEnemyHitReactionSelectionDefaultHitReactionVariants.h"
#include "SHEnemyHitReactionSelectionHitBonesConfiguration.h"
#include "Templates/SubclassOf.h"
#include "SHEnemyHitReactionSelectionDamageTypeConfiguration.generated.h"

class UDamageType;

USTRUCT()
struct FSHEnemyHitReactionSelectionDamageTypeConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSHEnemyHitReactionSelectionHitBonesConfiguration> SpecificBonesResponse;
    
    UPROPERTY(EditDefaultsOnly)
    FSHEnemyHitReactionSelectionDefaultHitBoneConfiguration DefaultResponse;
    
    UPROPERTY(EditDefaultsOnly)
    FSHEnemyHitReactionSelectionDefaultHitReactionVariants DefaultHitReactionVariants;
    
    SHPROTO_API FSHEnemyHitReactionSelectionDamageTypeConfiguration();
};

