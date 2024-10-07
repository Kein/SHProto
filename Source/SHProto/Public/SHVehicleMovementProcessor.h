#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SHVehicleMovementProcessor.generated.h"

class USHVehicleComponent;

UCLASS()
class SHPROTO_API USHVehicleMovementProcessor : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, Transient)
    USHVehicleComponent* VehicleComponent;
    
public:
    USHVehicleMovementProcessor();

};

