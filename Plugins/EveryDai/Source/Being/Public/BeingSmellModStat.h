#pragma once
#include "CoreMinimal.h"
#include "BeingSmellLevelStat.h"
#include "BeingSmellModStat.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingSmellModStat : public UBeingSmellLevelStat {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    int32 _ModLevel;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> _Modifiers;
    
    UBeingSmellModStat(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetModLevel(int32 Level);
    
};

