#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "SHDoorControlInterface.generated.h"

class USHDoorMovementComponent;

UINTERFACE(Blueprintable)
class USHDoorControlInterface : public UInterface {
    GENERATED_BODY()
};

class ISHDoorControlInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPushedByDoorEvent(USHDoorMovementComponent* DoorMovementComp, const FVector& pushNormal);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetPushingVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanPushDoor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBePushedByDoor() const;
    
};

