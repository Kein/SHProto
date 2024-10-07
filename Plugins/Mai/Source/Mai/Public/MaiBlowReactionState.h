#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "MaiHitDifficulty.h"
#include "MaiState.h"
#include "Templates/SubclassOf.h"
#include "MaiBlowReactionState.generated.h"

class AActor;
class APawn;
class UDamageType;
class UMaiMessage;

UCLASS(EditInlineNew)
class MAI_API UMaiBlowReactionState : public UMaiState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMaiHitDifficulty _DifficultyConfig[10];
    
    UPROPERTY(BlueprintReadOnly)
    uint8 _HitCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _HitResetCooldown;
    
    UPROPERTY(BlueprintReadOnly)
    FTimerHandle _HitResetHandle;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool _CaptureBlowMSG;
    
    UMaiBlowReactionState();

    UFUNCTION()
    void ResetHitCounter();
    
    UFUNCTION(BlueprintCallable)
    void OverrideChanceArray(TArray<uint8> _Chances);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGotHit(APawn* enemy, TSubclassOf<UDamageType> damageClass);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnemyBlow(APawn* enemy, TSubclassOf<UDamageType> damageClass);
    
    UFUNCTION(BlueprintCallable)
    void OnBlowStartMSG(UMaiMessage* msg, AActor* attacker, TSubclassOf<UDamageType> damageClass);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseHits();
    
    UFUNCTION(BlueprintPure)
    uint8 GetChance() const;
    
};

