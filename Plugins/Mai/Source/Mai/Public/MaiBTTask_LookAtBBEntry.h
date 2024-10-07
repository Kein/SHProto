#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "EMaiFocusType.h"
#include "MaiBTTask_LookAtBBEntry.generated.h"

UCLASS(Config=Engine)
class MAI_API UMaiBTTask_LookAtBBEntry : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    float Precision;
    
    UPROPERTY(EditAnywhere)
    EMaiFocusType _FocusType;
    
public:
    UMaiBTTask_LookAtBBEntry();

};

