#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SHVehicleInputReceiver.generated.h"

class USHVehicleSpotComponent;

UCLASS()
class SHPROTO_API USHVehicleInputReceiver : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, Transient)
    USHVehicleSpotComponent* OwnerSpot;
    
public:
    USHVehicleInputReceiver();

};

