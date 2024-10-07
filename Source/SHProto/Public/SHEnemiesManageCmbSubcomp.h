#pragma once
#include "CoreMinimal.h"
#include "SHCombatSubcomponentBase.h"
#include "SHEnemiesManageCmbSubcomp.generated.h"

class ACharacter;
class APawn;
class UObject;
class USHEnemiesManageCmbSubcompSettings;

UCLASS(EditInlineNew)
class SHPROTO_API USHEnemiesManageCmbSubcomp : public USHCombatSubcomponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    USHEnemiesManageCmbSubcompSettings* Settings;
    
public:
    USHEnemiesManageCmbSubcomp();

    UFUNCTION(Exec)
    void SHDebug_Character_Combat_ForceDangerMode(bool Force, bool ForcedValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomInDanger(const bool NewValue, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void RefreshInDangerInstant(const UObject* Object);
    
    UFUNCTION(BlueprintPure)
    bool IsInDanger() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDangerModeForced() const;
    
    UFUNCTION(BlueprintPure)
    bool HasPrimaryEnemyAggro(bool RequireAggressiveBehaviorStance) const;
    
    UFUNCTION(BlueprintPure)
    bool HasEnemyAggro(APawn* CheckedEnemy, bool RequireAggressiveBehaviorStance) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyEnemyAggro(bool RequireAggressiveBehaviorStance) const;
    
    UFUNCTION(BlueprintPure)
    TArray<ACharacter*> GetNearbyEnemies() const;
    
    UFUNCTION(BlueprintPure)
    TArray<ACharacter*> GetNearbyDeadEnemies() const;
    
    UFUNCTION(BlueprintPure)
    TArray<ACharacter*> FindNearbyEnemies(float InRadius, float InMaxDeltaHeight) const;
    
    UFUNCTION(BlueprintPure)
    TArray<ACharacter*> FindNearbyDeadEnemies(float InRadius, float InMaxDeltaHeight) const;
    
    UFUNCTION(BlueprintCallable)
    void EnableInDangerModeOverride(bool Override, bool Value);
    
};

