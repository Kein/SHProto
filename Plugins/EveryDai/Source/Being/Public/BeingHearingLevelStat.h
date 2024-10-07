#pragma once
#include "CoreMinimal.h"
#include "BeingStat.h"
#include "BeingHearingLevelStat.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingHearingLevelStat : public UBeingStat {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    float _HearingLevel;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    float _HearableNoiseLevel;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> _NoisesList;
    
    UPROPERTY(EditAnywhere)
    bool _IgnoreNoisesFromList;
    
public:
    UBeingHearingLevelStat(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetHearingLevel(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHearableNoiseLevel(float Value);
    
    UFUNCTION(BlueprintPure)
    float GetHearingLevelTheActor(AActor* Actor) const;
    
    UFUNCTION(BlueprintPure)
    float GetHearingLevel() const;
    
    UFUNCTION(BlueprintPure)
    float GetHearableNoiseLevel() const;
    
};

