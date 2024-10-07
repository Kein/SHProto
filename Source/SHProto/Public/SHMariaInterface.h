#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SHMariaInterface.generated.h"

UINTERFACE(Blueprintable)
class USHMariaInterface : public UInterface {
    GENERATED_BODY()
};

class ISHMariaInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeBlockingAiming(bool bShouldAimAt);
    
};

