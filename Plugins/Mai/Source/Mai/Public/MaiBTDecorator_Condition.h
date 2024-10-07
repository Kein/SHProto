#pragma once
#include "CoreMinimal.h"
#include "MaiBTDecorator_WithInterval.h"
#include "MaiBTDecorator_Condition.generated.h"

class UDaiCondition;

UCLASS()
class MAI_API UMaiBTDecorator_Condition : public UMaiBTDecorator_WithInterval {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UDaiCondition* _Condition;
    
    UMaiBTDecorator_Condition();

};

