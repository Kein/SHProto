#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "EBeingWalkingStance.h"
#include "MaiBTService_WalkingStanceScope.generated.h"

UCLASS()
class MAI_API UMaiBTService_WalkingStanceScope : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EBeingWalkingStance WalkingStance;
    
    UPROPERTY(EditAnywhere)
    uint8 Priority;
    
    UMaiBTService_WalkingStanceScope();

};

