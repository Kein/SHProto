#pragma once
#include "CoreMinimal.h"
#include "BeingStat.h"
#include "BeingSpeedModStat.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingSpeedModStat : public UBeingStat {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    float _SpeedMod;
    
public:
    UBeingSpeedModStat(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSpeedMod(float Value);
    
    UFUNCTION(BlueprintPure)
    float GetSpeedMod() const;
    
};

