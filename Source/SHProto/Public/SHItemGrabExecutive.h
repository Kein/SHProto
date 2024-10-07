#pragma once
#include "CoreMinimal.h"
#include "SHItemExecutiveBase.h"
#include "SHItemGrabExecutive.generated.h"

UCLASS()
class SHPROTO_API ASHItemGrabExecutive : public ASHItemExecutiveBase {
    GENERATED_BODY()
public:
    ASHItemGrabExecutive(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnGrabStarted();
    
};

