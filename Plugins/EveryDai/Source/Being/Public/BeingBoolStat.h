#pragma once
#include "CoreMinimal.h"
#include "BeingStat.h"
#include "BeingBoolStat.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingBoolStat : public UBeingStat {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    bool _BoolStat;
    
public:
    UBeingBoolStat(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetBoolStat(bool stat);
    
    UFUNCTION(BlueprintPure)
    bool GetBoolStat() const;
    
};

