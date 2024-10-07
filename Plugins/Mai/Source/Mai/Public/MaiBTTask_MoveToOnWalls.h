#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameplayTagContainer.h"
#include "MaiBTTask_MoveToOnWalls.generated.h"

class UMaiWallFollowing;

UCLASS(BlueprintType)
class MAI_API UMaiBTTask_MoveToOnWalls : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float _AcceptableRadius;
    
    UPROPERTY(EditAnywhere)
    uint8 _OverlapAgent: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 _OverlapGoal: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 _TrackMovingGoal: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 _ProjectGoalLocation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 _AllowStrafe: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float _ObservedBlackboardValueTolerance;
    
    UPROPERTY(EditAnywhere)
    bool _ObserveBlackboardValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _MoveToAP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag _ActionInjectionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _RunActionsOnReach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _StanceFromActionPoint;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector _AvoidActor;
    
    UPROPERTY(EditAnywhere)
    int32 _AvoidCountLimit;
    
    UPROPERTY(Instanced)
    UMaiWallFollowing* _Following;
    
    UMaiBTTask_MoveToOnWalls();

};

