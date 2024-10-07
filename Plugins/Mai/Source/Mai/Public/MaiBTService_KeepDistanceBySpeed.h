#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "MaiBTService_KeepDistanceBySpeed.generated.h"

UCLASS()
class MAI_API UMaiBTService_KeepDistanceBySpeed : public UBTService_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector _IdealLocation;
    
    UPROPERTY(EditAnywhere)
    float _LocationOffset;
    
    UPROPERTY(EditAnywhere)
    float _SpeedInterpolation;
    
    UPROPERTY(EditAnywhere)
    float _MinSpeed;
    
    UPROPERTY(EditAnywhere)
    bool _Debug;
    
public:
    UMaiBTService_KeepDistanceBySpeed();

};

