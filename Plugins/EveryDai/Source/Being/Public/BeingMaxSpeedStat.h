#pragma once
#include "CoreMinimal.h"
#include "BeingStat.h"
#include "BeingMaxSpeedStat.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingMaxSpeedStat : public UBeingStat {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    float _MaxSpeed;
    
public:
    UBeingMaxSpeedStat(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMaxSpeed(float Value);
    
    UFUNCTION(BlueprintPure)
    float GetMaxSpeed() const;
    
};

