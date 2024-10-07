#pragma once
#include "CoreMinimal.h"
#include "BeingStat.h"
#include "BeingAggroLevelStat.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingAggroLevelStat : public UBeingStat {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    float _AggroLevel;
    
    UBeingAggroLevelStat(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAggroLevel(float Value);
    
    UFUNCTION(BlueprintPure)
    float GetPersonalizedAggroLevel(AActor* Other) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    float GetLevelOfPersonalizedAggro(AActor* Other) const;
    
    UFUNCTION(BlueprintPure)
    float GetAggroLevel() const;
    
};

