#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SHOperationEvents.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOperationEvent, bool, WasCompleted);

UCLASS()
class SHPROTO_API USHOperationEvents : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOperationEvent OnFinished;
    
    USHOperationEvents();

};

