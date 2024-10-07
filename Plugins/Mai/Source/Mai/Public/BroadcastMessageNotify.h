#pragma once
#include "CoreMinimal.h"
#include "DaiNotify.h"
#include "MaiReceiverFilter.h"
#include "BroadcastMessageNotify.generated.h"

class UMaiMessage;

UCLASS(EditInlineNew)
class MAI_API UBroadcastMessageNotify : public UDaiNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UMaiMessage* _Message;
    
    UPROPERTY(EditAnywhere)
    FMaiReceiverFilter _Filter;
    
    UPROPERTY(EditAnywhere)
    float _SpreadingSpeed;
    
    UBroadcastMessageNotify();

};

