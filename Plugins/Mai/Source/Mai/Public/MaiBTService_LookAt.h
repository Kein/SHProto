#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "EMaiFocusType.h"
#include "MaiBTService_LookAt.generated.h"

UCLASS()
class MAI_API UMaiBTService_LookAt : public UBTService_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    uint8 _Priority;
    
    UPROPERTY(EditAnywhere)
    EMaiFocusType _FocusType;
    
    UPROPERTY(EditAnywhere)
    bool _CheckConeRange;
    
    UPROPERTY(EditAnywhere)
    float _ConeRange;
    
public:
    UMaiBTService_LookAt();

};

