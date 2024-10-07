#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MsgMadeDodgeReceiverInterface.generated.h"

class AActor;
class UMaiMessage;

UINTERFACE(Blueprintable, MinimalAPI)
class UMsgMadeDodgeReceiverInterface : public UInterface {
    GENERATED_BODY()
};

class IMsgMadeDodgeReceiverInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveMadeDodgeMsg(UMaiMessage* Message, AActor* sender);
    
};

