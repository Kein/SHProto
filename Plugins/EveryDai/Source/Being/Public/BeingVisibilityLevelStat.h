#pragma once
#include "CoreMinimal.h"
#include "BeingStat.h"
#include "BeingVisibilityLevelStat.generated.h"

class USceneComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingVisibilityLevelStat : public UBeingStat {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    float _VisibilityLevel;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Instanced, VisibleAnywhere)
    TArray<USceneComponent*> _VisibleParts;
    
    UBeingVisibilityLevelStat(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVisibilityLevel(float Value);
    
    UFUNCTION(BlueprintPure)
    float GetVisibilityLevel() const;
    
};

