#pragma once
#include "CoreMinimal.h"
#include "BeingStat.h"
#include "BeingNoiseLevelStat.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingNoiseLevelStat : public UBeingStat {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    float _NoiseLevel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> _MutedNoises;
    
public:
    UBeingNoiseLevelStat(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNoiseLevel(float Value);
    
    UFUNCTION(BlueprintPure)
    float IsNoiseMuted(FName NoiseTag) const;
    
    UFUNCTION(BlueprintPure)
    float GetNoiseLevel() const;
    
};

