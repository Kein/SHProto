#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Templates/SubclassOf.h"
#include "MsgStartBlowReceiverInterface.generated.h"

class AActor;
class UDamageType;
class UMaiMessage;

UINTERFACE(Blueprintable, MinimalAPI)
class UMsgStartBlowReceiverInterface : public UInterface {
    GENERATED_BODY()
};

class IMsgStartBlowReceiverInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveStartBlowMsg(UMaiMessage* Message, AActor* attacker, TSubclassOf<UDamageType> DamageType);
    
};

