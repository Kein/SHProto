#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "MaiBlackboardInt.h"
#include "MaiBTDecorator_Priority.generated.h"

UCLASS()
class MAI_API UMaiBTDecorator_Priority : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMaiBlackboardInt _Chance;
    
    UMaiBTDecorator_Priority();

};

