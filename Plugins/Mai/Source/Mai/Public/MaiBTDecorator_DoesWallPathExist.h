#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EMaiWallPathExistanceQueryType.h"
#include "Templates/SubclassOf.h"
#include "MaiBTDecorator_DoesWallPathExist.generated.h"

class UNavigationQueryFilter;

UCLASS()
class MAI_API UMaiBTDecorator_DoesWallPathExist : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKeyA;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKeyB;
    
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMaiWallPathExistanceQueryType::Type> PathQueryType;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavigationQueryFilter> filterClass;
    
    UMaiBTDecorator_DoesWallPathExist();

};

