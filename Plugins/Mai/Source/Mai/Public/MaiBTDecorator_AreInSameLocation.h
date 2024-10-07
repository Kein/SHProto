#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EDaiDistanceType.h"
#include "MaiBTDecorator_WithInterval.h"
#include "MaiBlackboardFloat.h"
#include "MaiBTDecorator_AreInSameLocation.generated.h"

UCLASS()
class MAI_API UMaiBTDecorator_AreInSameLocation : public UMaiBTDecorator_WithInterval {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMaiBlackboardFloat AcceptableRadius;
    
    UPROPERTY(EditAnywhere)
    EDaiDistanceType GeometricDistanceType;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKeyA;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKeyB;
    
    UPROPERTY(EditAnywhere)
    bool _IncludeOverlapA;
    
    UPROPERTY(EditAnywhere)
    bool _IncludeOverlapB;
    
    UMaiBTDecorator_AreInSameLocation();

};

