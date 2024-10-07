#pragma once
#include "CoreMinimal.h"
#include "SHViewLookOperationSettings.h"
#include "SHViewLookOperation.generated.h"

class USHOperationEvents;

USTRUCT(BlueprintType)
struct FSHViewLookOperation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    USHOperationEvents* OperationEvents;
    
    UPROPERTY(Transient)
    FSHViewLookOperationSettings CurrentSettings;
    
public:
    SHPROTO_API FSHViewLookOperation();
};

