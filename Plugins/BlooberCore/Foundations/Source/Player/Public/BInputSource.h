#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BInputSourceReceiver.h"
#include "BInputSource.generated.h"

class UInputEventState;

UCLASS(Abstract, DefaultToInstanced)
class PLAYER_API UBInputSource : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UInputEventState* InputEventState;
    
    UPROPERTY()
    TArray<FBInputSourceReceiver> Receivers;
    
public:
    UBInputSource();

};

