#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "MaiBTService_BlueprintBase.h"
#include "MaiBTService_AbandonAP.generated.h"

UCLASS()
class MAI_API UMaiBTService_AbandonAP : public UMaiBTService_BlueprintBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector _ActionPoint;
    
public:
    UMaiBTService_AbandonAP();

};

