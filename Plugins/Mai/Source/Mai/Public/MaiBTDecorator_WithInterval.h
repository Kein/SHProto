#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "MaiBTDecorator_WithInterval.generated.h"

UCLASS(Abstract)
class MAI_API UMaiBTDecorator_WithInterval : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Interval;
    
    UPROPERTY(EditAnywhere)
    float RandomDeviation;
    
    UMaiBTDecorator_WithInterval();

};

