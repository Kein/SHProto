#pragma once
#include "CoreMinimal.h"
#include "BeingStat.h"
#include "BeingSmellLevelStat.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingSmellLevelStat : public UBeingStat {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    float _SmellLevel;
    
public:
    UBeingSmellLevelStat(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSmellLevel(float Value);
    
    UFUNCTION(BlueprintPure)
    float GetSmellLevel() const;
    
};

