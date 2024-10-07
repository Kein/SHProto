#pragma once
#include "CoreMinimal.h"
#include "BeingStat.h"
#include "BeingVisionLevelStat.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingVisionLevelStat : public UBeingStat {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    float _VisionLevel;
    
    UBeingVisionLevelStat(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVisionLevel(float Value);
    
    UFUNCTION(BlueprintPure)
    float GetVisionLevelTheActor(AActor* Actor) const;
    
    UFUNCTION(BlueprintPure)
    float GetVisionLevel() const;
    
    UFUNCTION(BlueprintNativeEvent)
    float GetLevelOfVisionTheActor(AActor* Actor) const;
    
};

