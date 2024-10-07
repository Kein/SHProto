#pragma once
#include "CoreMinimal.h"
#include "BeingHearingLevelStat.h"
#include "BeingHearingModStat.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingHearingModStat : public UBeingHearingLevelStat {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    int32 _ModLevel;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> _Modifiers;
    
    UBeingHearingModStat(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetModLevel(int32 Level);
    
};

