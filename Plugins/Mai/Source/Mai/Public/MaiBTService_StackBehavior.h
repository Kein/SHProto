#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "MaiBTService_StackBehavior.generated.h"

UCLASS()
class MAI_API UMaiBTService_StackBehavior : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName behaviorName;
    
    UMaiBTService_StackBehavior();

};

