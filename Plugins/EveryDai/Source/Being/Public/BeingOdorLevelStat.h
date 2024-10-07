#pragma once
#include "CoreMinimal.h"
#include "BeingStat.h"
#include "BeingOdorLevelStat.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingOdorLevelStat : public UBeingStat {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    float _OdorLevel;
    
public:
    UBeingOdorLevelStat(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetOdorLevel(float Value);
    
    UFUNCTION(BlueprintPure)
    float GetOdorLevel() const;
    
};

