#pragma once
#include "CoreMinimal.h"
#include "BInputSourceReceiver.generated.h"

class IInputReceiver;
class UInputReceiver;

USTRUCT(BlueprintType)
struct PLAYER_API FBInputSourceReceiver {
    GENERATED_BODY()
public:
    UPROPERTY()
    TScriptInterface<IInputReceiver> Receiver;
    
    UPROPERTY()
    int32 Priority;
    
    FBInputSourceReceiver();
};

