#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EMaiNodePathExistanceQueryType.h"
#include "Templates/SubclassOf.h"
#include "MaiBTDecorator_DoesNodePathExist.generated.h"

class UNavigationQueryFilter;

UCLASS()
class MAI_API UMaiBTDecorator_DoesNodePathExist : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKeyA;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKeyB;
    
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMaiNodePathExistanceQueryType::Type> PathQueryType;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavigationQueryFilter> filterClass;
    
    UMaiBTDecorator_DoesNodePathExist();

};

