#pragma once
#include "CoreMinimal.h"
#include "BeingMaxSpeedStat.h"
#include "EBeingWalkingStance.h"
#include "BeingMaxWalkSpeedStat.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingMaxWalkSpeedStat : public UBeingMaxSpeedStat {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EBeingWalkingStance> _Priorities;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    uint8 _StancePriority;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    EBeingWalkingStance _WalkingStance;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EBeingWalkingStance, float> _MaxSpeeds;
    
    UBeingMaxWalkSpeedStat(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWalkingStance(EBeingWalkingStance stance, uint8 Priority);
    
    UFUNCTION(BlueprintCallable)
    void OverrideSpeedValues(const TMap<EBeingWalkingStance, float>& maxSpeeds);
    
    UFUNCTION(BlueprintPure)
    EBeingWalkingStance GetWalkingStance() const;
    
    UFUNCTION(BlueprintPure)
    float GetTotalMaxSpeed() const;
    
};

