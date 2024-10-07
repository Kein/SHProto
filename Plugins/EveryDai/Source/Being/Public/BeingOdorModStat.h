#pragma once
#include "CoreMinimal.h"
#include "BeingOdorLevelStat.h"
#include "BeingOdorModStat.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingOdorModStat : public UBeingOdorLevelStat {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    int32 _ModLevel;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> _Modifiers;
    
    UBeingOdorModStat(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetModLevel(int32 Level);
    
};

