#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "StanceRange.h"
#include "MaiBTService_KeepDistance.generated.h"

UCLASS()
class MAI_API UMaiBTService_KeepDistance : public UBTService_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FStanceRange> _Ranges;
    
public:
    UMaiBTService_KeepDistance();

};

