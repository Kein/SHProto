#pragma once
#include "CoreMinimal.h"
#include "EBInputActionChangeType.h"
#include "InputReceiver.h"
#include "SHInputReceiver.generated.h"

class UBInputAction;
class UInputEventState;

UINTERFACE(Blueprintable)
class USHInputReceiver : public UInputReceiver {
    GENERATED_BODY()
};

class ISHInputReceiver : public IInputReceiver {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void ProcessDodgeInputAction(UBInputAction* InputSource, UInputEventState* State, const EBInputActionChangeType ChangeType);
    
    UFUNCTION(BlueprintNativeEvent)
    void ProcessBoatRightInputAction(UBInputAction* InputSource, UInputEventState* State, const EBInputActionChangeType ChangeType);
    
    UFUNCTION(BlueprintNativeEvent)
    void ProcessBoatLeftInputAction(UBInputAction* InputSource, UInputEventState* State, const EBInputActionChangeType ChangeType);
    
    UFUNCTION(BlueprintNativeEvent)
    void ProcessBoatForwardInputAction(UBInputAction* InputSource, UInputEventState* State, const EBInputActionChangeType ChangeType);
    
};

