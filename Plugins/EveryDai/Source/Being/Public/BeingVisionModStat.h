#pragma once
#include "CoreMinimal.h"
#include "BeingVisionLevelStat.h"
#include "BeingVisionModStat.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingVisionModStat : public UBeingVisionLevelStat {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    int32 _ModLevel;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> _Modifiers;
    
    UBeingVisionModStat(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetModLevel(int32 Level);
    
};

