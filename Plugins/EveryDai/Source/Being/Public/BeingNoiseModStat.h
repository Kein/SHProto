#pragma once
#include "CoreMinimal.h"
#include "BeingNoiseLevelStat.h"
#include "BeingNoiseModStat.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingNoiseModStat : public UBeingNoiseLevelStat {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    int32 _ModLevel;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> _Modifiers;
    
    UBeingNoiseModStat(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetModLevel(int32 Level);
    
};

