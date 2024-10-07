#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EPointSelection.h"
#include "MaiBTService_SelectNextAP.generated.h"

UCLASS()
class MAI_API UMaiBTService_SelectNextAP : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector _ActionPoint;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector _WorkLocation;
    
    UPROPERTY(EditAnywhere)
    EPointSelection _SelectionMethod;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector _SelectionOrigin;
    
public:
    UMaiBTService_SelectNextAP();

};

