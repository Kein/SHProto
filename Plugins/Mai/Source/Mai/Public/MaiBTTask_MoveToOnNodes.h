#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "UObject/NoExportTypes.h"
#include "EMaiOnPathFail.h"
#include "MaiBTTask_MoveToOnNodes.generated.h"

class UMaiNodeFollowing;

UCLASS(BlueprintType)
class MAI_API UMaiBTTask_MoveToOnNodes : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float _AcceptableRadius;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float _ObservedBlackboardValueTolerance;
    
    UPROPERTY(EditAnywhere)
    bool _ObserveBlackboardValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMaiOnPathFail _OnPathFail;
    
    UPROPERTY()
    FVector _TargetLocation;
    
    UPROPERTY(Instanced)
    UMaiNodeFollowing* _Following;
    
    UMaiBTTask_MoveToOnNodes();

};

