#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MsgEndBlowReceiverInterface.generated.h"

class AActor;
class UMaiMessage;

UINTERFACE(Blueprintable, MinimalAPI)
class UMsgEndBlowReceiverInterface : public UInterface {
    GENERATED_BODY()
};

class IMsgEndBlowReceiverInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveEndBlowMsg(UMaiMessage* Message, AActor* attacker);
    
};

