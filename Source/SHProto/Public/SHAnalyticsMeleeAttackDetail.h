#pragma once
#include "CoreMinimal.h"
#include "SHAnalyticsMeleeAttackDetail.generated.h"

USTRUCT(BlueprintType)
struct FSHAnalyticsMeleeAttackDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FString WeaponName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FString AttackRowName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool bHadTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool bIsSecondaryTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FString TargetObjectName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool bHitEnemy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    int32 HitEnemyResult;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FString HitObjectName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FString HitComponentName;
    
    SHPROTO_API FSHAnalyticsMeleeAttackDetail();
};

