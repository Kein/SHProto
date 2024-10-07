#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MessageReceiverInterface.generated.h"

class UMaiMessage;

UINTERFACE(Blueprintable, MinimalAPI)
class UMessageReceiverInterface : public UInterface {
    GENERATED_BODY()
};

class IMessageReceiverInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveMessage(UMaiMessage* Message);
    
};

